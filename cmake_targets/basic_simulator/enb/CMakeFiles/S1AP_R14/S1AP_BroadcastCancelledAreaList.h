/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_BroadcastCancelledAreaList_H_
#define	_S1AP_BroadcastCancelledAreaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_CellID-Cancelled.h"
#include "S1AP_TAI-Cancelled.h"
#include "S1AP_EmergencyAreaID-Cancelled.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_BroadcastCancelledAreaList_PR {
	S1AP_BroadcastCancelledAreaList_PR_NOTHING,	/* No components present */
	S1AP_BroadcastCancelledAreaList_PR_cellID_Cancelled,
	S1AP_BroadcastCancelledAreaList_PR_tAI_Cancelled,
	S1AP_BroadcastCancelledAreaList_PR_emergencyAreaID_Cancelled
	/* Extensions may appear below */
	
} S1AP_BroadcastCancelledAreaList_PR;

/* S1AP_BroadcastCancelledAreaList */
typedef struct S1AP_BroadcastCancelledAreaList {
	S1AP_BroadcastCancelledAreaList_PR present;
	union S1AP_BroadcastCancelledAreaList_u {
		S1AP_CellID_Cancelled_t	 cellID_Cancelled;
		S1AP_TAI_Cancelled_t	 tAI_Cancelled;
		S1AP_EmergencyAreaID_Cancelled_t	 emergencyAreaID_Cancelled;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_BroadcastCancelledAreaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_BroadcastCancelledAreaList;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_BroadcastCancelledAreaList_H_ */
#include <asn_internal.h>
