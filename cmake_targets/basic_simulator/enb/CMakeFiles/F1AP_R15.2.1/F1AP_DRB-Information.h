/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/F1AP_R15.2.1`
 */

#ifndef	_F1AP_DRB_Information_H_
#define	_F1AP_DRB_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include "F1AP_QoSFlowLevelQoSParameters.h"
#include "F1AP_SNSSAI.h"
#include "F1AP_NotificationControl.h"
#include "F1AP_Flows-Mapped-To-DRB-List.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct F1AP_ProtocolExtensionContainer;

/* F1AP_DRB-Information */
typedef struct F1AP_DRB_Information {
	F1AP_QoSFlowLevelQoSParameters_t	 dRB_QoS;
	F1AP_SNSSAI_t	 sNSSAI;
	F1AP_NotificationControl_t	*notificationControl;	/* OPTIONAL */
	F1AP_Flows_Mapped_To_DRB_List_t	 flows_Mapped_To_DRB_List;
	struct F1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_DRB_Information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_DRB_Information;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_DRB_Information_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_DRB_Information_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_DRB_Information_H_ */
#include <asn_internal.h>
