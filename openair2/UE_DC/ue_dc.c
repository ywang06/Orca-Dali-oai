/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

/*! \file dc_ue.c
 * \brief manage the transfer traffic from sUE to mUE in Dual Connectivity
 * \author Carlos Pupiales
 * \date 2019
 * \email carlos.pupiales@upc.edu
 * \version 1.0
 */

#include "ue_dc.h"
#include "pdcp.h"
#include "LAYER2/RLC/rlc.h"
#include "common/utils/LOG/log.h"
#include <inttypes.h>
#include "platform_types.h"
#include "intertask_interface.h"
#include "assertions.h"
#include <sys/socket.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/types.h>
//#include "ue_dc_messages_def.h"
#include "ue_dc_messages_types.h"

//Function prototyping

void *ue_dc_task(void *arg);

static
void create_sock_ue_dc(void);

static
void send_rlc_sdu(ue_dc_data_req_t	*ue_dc_data_req);

static
void recv_rlc_sdu(protocol_ctxt_t *ctxt_ue_dc_p, udp_data_ind_t	*ue_dc_data_ind);

//Function details

void *ue_dc_task(void *arg) {
	MessageDef *received_msg = NULL;
	protocol_ctxt_t	ctxt;
	int result;

	LOG_D(UE_DC,"Starting UE_DC task\n");
	itti_mark_task_ready(TASK_UE_DC);


	while (1) {
		LOG_D(UE_DC,"estoy en el bucle\n");
		itti_receive_msg(TASK_UE_DC, &received_msg);

		switch (ITTI_MSG_ID(received_msg)) {
		case TERMINATE_MESSAGE:
			LOG_W(UE_DC," *** Exiting UE_DC thread\n");
			itti_exit_task();
			break;

		case CTXT_UE_DC:
			create_sock_ue_dc();
			ctxt.module_id 	= CTXT_UE_DC(received_msg).module_id;
			ctxt.enb_flag 	= ENB_FLAG_NO;
			ctxt.instance 	= CTXT_UE_DC(received_msg).instance;
			ctxt.rnti 		= CTXT_UE_DC(received_msg).rnti;
			ctxt.frame 		= CTXT_UE_DC(received_msg).frame;
			ctxt.subframe 	= CTXT_UE_DC(received_msg).subframe;
			ctxt.eNB_index 	= CTXT_UE_DC(received_msg).eNB_index;
			ctxt.configured = CTXT_UE_DC(received_msg).configured;
			ctxt.brOption 	= CTXT_UE_DC(received_msg).brOption;

			break;

		case UDP_DATA_IND:
			LOG_I(UE_DC,"Message from UE has arrived to UE_DC\n");
			recv_rlc_sdu(&ctxt, &received_msg->ittiMsg.udp_data_ind);

			break;

		case UE_DC_DATA_REQ:
			send_rlc_sdu(&received_msg->ittiMsg.ue_dc_data_req);

			break;

		default:
			LOG_E(UE_DC, "Received unhandled message: %d:%s\n", ITTI_MSG_ID(received_msg), ITTI_MSG_NAME(received_msg));
			break;
		}

		result = itti_free(ITTI_MSG_ORIGIN_ID(received_msg), received_msg);
		AssertFatal(result == EXIT_SUCCESS, "Failed to free memory (%d)!\n",
				result);
		received_msg = NULL;
	}
	return NULL;
}

static
void create_sock_ue_dc(void) {
	/*This function handle the creation of udp sockets for Dual Connectivity in UEs*/

	MessageDef *message_p;
	uint16_t port = 2154;
	char *ue_dc_ip = "192.168.11.150"; //local address for UE_DC

	message_p = itti_alloc_new_message(TASK_UE_DC, UDP_INIT);
	if (message_p == NULL) {
		LOG_E(UE_DC,"Error allocating the message udp init\n");
	}
	UDP_INIT(message_p).port = port;
	UDP_INIT(message_p).address = ue_dc_ip;
	if (itti_send_msg_to_task(TASK_UDP, INSTANCE_DEFAULT, message_p) == 0) {
		LOG_D(UE_DC,"The socket for UE_DC has been created successfully\n");
	}
		LOG_E(UE_DC,"The socket for UE_DC has not been created\n");

}

static
void send_rlc_sdu(ue_dc_data_req_t	*ue_dc_data_req){
	/*This function sends the rlc_sdu from mUE or sUE through udp sockets*/

	MessageDef     *message_p       = NULL;
	udp_data_req_t	*udp_data_req_p = NULL;
	char ue_ip[20] = "192.168.11.150"; //IP address for mUE
	char *ue_ip_p = NULL;
	unsigned char *buffer;

	LOG_I(UE_DC,"The delivery of rlc_sdu has been requested\n");
	ue_ip_p = ue_ip;
	buffer = (unsigned char *)malloc(ue_dc_data_req->sdu_size_dc);
	memcpy(buffer, ue_dc_data_req->sdu_buffer_dc_p, ue_dc_data_req->sdu_size_dc);
	message_p = itti_alloc_new_message(TASK_UE_DC, UDP_DATA_REQ);
	udp_data_req_p = &message_p->ittiMsg.udp_data_req;
	udp_data_req_p->peer_address = inet_addr(ue_ip_p);
	udp_data_req_p->peer_port = 2154;
	udp_data_req_p->buffer = buffer;
	udp_data_req_p->buffer_length = (uint32_t)ue_dc_data_req->sdu_size_dc;
	udp_data_req_p->buffer_offset = 0;
	if(itti_send_msg_to_task(TASK_UDP, INSTANCE_DEFAULT, message_p) == 0){
		LOG_I(UE_DC, "rlc_sdu has been forwarded to pdcp layer in sUE\n");
	}else {
		LOG_E(UE_DC, "Message didn't send to UE\n");
	}
}

static
void recv_rlc_sdu(protocol_ctxt_t *ctxt_ue_dc_p, udp_data_ind_t	*udp_data_ind){
	/*This function receives the rlc_sdu coming from mUE or sUE
	 * and forward to pdcp_data_ind()
	 * */

	mem_block_t	*rlc_sdu_p = NULL;
	uint16_t	rlc_sdu_size = 0;

	LOG_D(UE_DC,"rlc_sdu is gonna be forwarded to pdpc_data_ind\n");
	rlc_sdu_size = (unsigned short)udp_data_ind->buffer_length;
	rlc_sdu_p = (mem_block_t *)malloc(rlc_sdu_size + sizeof(mem_block_t));
	rlc_sdu_p->next = NULL;
	rlc_sdu_p->previous = NULL;
	rlc_sdu_p->size = rlc_sdu_size;
	memcpy(rlc_sdu_p->data, udp_data_ind->buffer, rlc_sdu_size);

	if (pdcp_data_ind(ctxt_ue_dc_p, SRB_FLAG_NO, MBMS_FLAG_NO, 1, rlc_sdu_size, rlc_sdu_p )){
		LOG_D(UE_DC, "rlc_sdu has been forwarded to pdcp_data_ind successfully\n");
	}else{
		LOG_E(UE_DC, "Error forwarding rlc_sdu has to pdcp_data_ind\n");
	}

}

