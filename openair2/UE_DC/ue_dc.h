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

/*! \file ue_dc.c_
 * \\brief ue_dc task for UE in Dual Connectivity
 * \author Carlos Pupiales
 * \date 2019
 * \email carlos.pupiales@upc.edu
 * \version 1.0
 */
#include <pthread.h>

#ifndef UE_DC_H_
#define UE_DC_H_

void *ue_dc_task(void *arg);
void *udp_ue_dc_task(void *arg);

void udp_ue_recv_data(int sd);

#endif /* OPENAIR2_UE_DC_UE_DC_H_ */
