/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SL_DiscTxResourcesInterFreq_r13_H_
#define	_LTE_SL_DiscTxResourcesInterFreq_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "LTE_SL-DiscTxPoolList-r12.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_DiscTxResourcesInterFreq_r13_PR {
	LTE_SL_DiscTxResourcesInterFreq_r13_PR_NOTHING,	/* No components present */
	LTE_SL_DiscTxResourcesInterFreq_r13_PR_acquireSI_FromCarrier_r13,
	LTE_SL_DiscTxResourcesInterFreq_r13_PR_discTxPoolCommon_r13,
	LTE_SL_DiscTxResourcesInterFreq_r13_PR_requestDedicated_r13,
	LTE_SL_DiscTxResourcesInterFreq_r13_PR_noTxOnCarrier_r13
} LTE_SL_DiscTxResourcesInterFreq_r13_PR;

/* LTE_SL-DiscTxResourcesInterFreq-r13 */
typedef struct LTE_SL_DiscTxResourcesInterFreq_r13 {
	LTE_SL_DiscTxResourcesInterFreq_r13_PR present;
	union LTE_SL_DiscTxResourcesInterFreq_r13_u {
		NULL_t	 acquireSI_FromCarrier_r13;
		LTE_SL_DiscTxPoolList_r12_t	 discTxPoolCommon_r13;
		NULL_t	 requestDedicated_r13;
		NULL_t	 noTxOnCarrier_r13;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_DiscTxResourcesInterFreq_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_DiscTxResourcesInterFreq_r13;
extern asn_CHOICE_specifics_t asn_SPC_LTE_SL_DiscTxResourcesInterFreq_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_DiscTxResourcesInterFreq_r13_1[4];
extern asn_per_constraints_t asn_PER_type_LTE_SL_DiscTxResourcesInterFreq_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SL_DiscTxResourcesInterFreq_r13_H_ */
#include <asn_internal.h>
