/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_DL_CCCH_MessageType_NB_H_
#define	_LTE_DL_CCCH_MessageType_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RRCConnectionReestablishment-NB.h"
#include "LTE_RRCConnectionReestablishmentReject.h"
#include "LTE_RRCConnectionReject-NB.h"
#include "LTE_RRCConnectionSetup-NB.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_DL_CCCH_MessageType_NB_PR {
	LTE_DL_CCCH_MessageType_NB_PR_NOTHING,	/* No components present */
	LTE_DL_CCCH_MessageType_NB_PR_c1,
	LTE_DL_CCCH_MessageType_NB_PR_messageClassExtension
} LTE_DL_CCCH_MessageType_NB_PR;
typedef enum LTE_DL_CCCH_MessageType_NB__c1_PR {
	LTE_DL_CCCH_MessageType_NB__c1_PR_NOTHING,	/* No components present */
	LTE_DL_CCCH_MessageType_NB__c1_PR_rrcConnectionReestablishment_r13,
	LTE_DL_CCCH_MessageType_NB__c1_PR_rrcConnectionReestablishmentReject_r13,
	LTE_DL_CCCH_MessageType_NB__c1_PR_rrcConnectionReject_r13,
	LTE_DL_CCCH_MessageType_NB__c1_PR_rrcConnectionSetup_r13,
	LTE_DL_CCCH_MessageType_NB__c1_PR_spare4,
	LTE_DL_CCCH_MessageType_NB__c1_PR_spare3,
	LTE_DL_CCCH_MessageType_NB__c1_PR_spare2,
	LTE_DL_CCCH_MessageType_NB__c1_PR_spare1
} LTE_DL_CCCH_MessageType_NB__c1_PR;

/* LTE_DL-CCCH-MessageType-NB */
typedef struct LTE_DL_CCCH_MessageType_NB {
	LTE_DL_CCCH_MessageType_NB_PR present;
	union LTE_DL_CCCH_MessageType_NB_u {
		struct LTE_DL_CCCH_MessageType_NB__c1 {
			LTE_DL_CCCH_MessageType_NB__c1_PR present;
			union LTE_DL_CCCH_MessageType_NB__LTE_c1_u {
				LTE_RRCConnectionReestablishment_NB_t	 rrcConnectionReestablishment_r13;
				LTE_RRCConnectionReestablishmentReject_t	 rrcConnectionReestablishmentReject_r13;
				LTE_RRCConnectionReject_NB_t	 rrcConnectionReject_r13;
				LTE_RRCConnectionSetup_NB_t	 rrcConnectionSetup_r13;
				NULL_t	 spare4;
				NULL_t	 spare3;
				NULL_t	 spare2;
				NULL_t	 spare1;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct LTE_DL_CCCH_MessageType_NB__messageClassExtension {
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_DL_CCCH_MessageType_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_DL_CCCH_MessageType_NB;
extern asn_CHOICE_specifics_t asn_SPC_LTE_DL_CCCH_MessageType_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_DL_CCCH_MessageType_NB_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_DL_CCCH_MessageType_NB_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_DL_CCCH_MessageType_NB_H_ */
#include <asn_internal.h>
