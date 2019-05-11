/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/carlos/dualCon/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_E_RABs_Admitted_ToBeAdded_ModAckItem_H_
#define	_X2AP_E_RABs_Admitted_ToBeAdded_ModAckItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_E-RABs-Admitted-ToBeAdded-ModAckItem-SCG-Bearer.h"
#include "X2AP_E-RABs-Admitted-ToBeAdded-ModAckItem-Split-Bearer.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_E_RABs_Admitted_ToBeAdded_ModAckItem_PR {
	X2AP_E_RABs_Admitted_ToBeAdded_ModAckItem_PR_NOTHING,	/* No components present */
	X2AP_E_RABs_Admitted_ToBeAdded_ModAckItem_PR_sCG_Bearer,
	X2AP_E_RABs_Admitted_ToBeAdded_ModAckItem_PR_split_Bearer
	/* Extensions may appear below */
	
} X2AP_E_RABs_Admitted_ToBeAdded_ModAckItem_PR;

/* X2AP_E-RABs-Admitted-ToBeAdded-ModAckItem */
typedef struct X2AP_E_RABs_Admitted_ToBeAdded_ModAckItem {
	X2AP_E_RABs_Admitted_ToBeAdded_ModAckItem_PR present;
	union X2AP_E_RABs_Admitted_ToBeAdded_ModAckItem_u {
		X2AP_E_RABs_Admitted_ToBeAdded_ModAckItem_SCG_Bearer_t	 sCG_Bearer;
		X2AP_E_RABs_Admitted_ToBeAdded_ModAckItem_Split_Bearer_t	 split_Bearer;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_E_RABs_Admitted_ToBeAdded_ModAckItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_E_RABs_Admitted_ToBeAdded_ModAckItem;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_E_RABs_Admitted_ToBeAdded_ModAckItem_H_ */
#include <asn_internal.h>
