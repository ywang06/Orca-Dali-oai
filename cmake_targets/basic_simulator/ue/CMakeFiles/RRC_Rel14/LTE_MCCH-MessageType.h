/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MCCH_MessageType_H_
#define	_LTE_MCCH_MessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MBSFNAreaConfiguration-r9.h"
#include <constr_CHOICE.h>
#include "LTE_MBMSCountingRequest-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MCCH_MessageType_PR {
	LTE_MCCH_MessageType_PR_NOTHING,	/* No components present */
	LTE_MCCH_MessageType_PR_c1,
	LTE_MCCH_MessageType_PR_later
} LTE_MCCH_MessageType_PR;
typedef enum LTE_MCCH_MessageType__c1_PR {
	LTE_MCCH_MessageType__c1_PR_NOTHING,	/* No components present */
	LTE_MCCH_MessageType__c1_PR_mbsfnAreaConfiguration_r9
} LTE_MCCH_MessageType__c1_PR;
typedef enum LTE_MCCH_MessageType__later_PR {
	LTE_MCCH_MessageType__later_PR_NOTHING,	/* No components present */
	LTE_MCCH_MessageType__later_PR_c2,
	LTE_MCCH_MessageType__later_PR_messageClassExtension
} LTE_MCCH_MessageType__later_PR;
typedef enum LTE_MCCH_MessageType__later__c2_PR {
	LTE_MCCH_MessageType__later__c2_PR_NOTHING,	/* No components present */
	LTE_MCCH_MessageType__later__c2_PR_mbmsCountingRequest_r10
} LTE_MCCH_MessageType__later__c2_PR;

/* LTE_MCCH-MessageType */
typedef struct LTE_MCCH_MessageType {
	LTE_MCCH_MessageType_PR present;
	union LTE_MCCH_MessageType_u {
		struct LTE_MCCH_MessageType__c1 {
			LTE_MCCH_MessageType__c1_PR present;
			union LTE_MCCH_MessageType__LTE_c1_u {
				LTE_MBSFNAreaConfiguration_r9_t	 mbsfnAreaConfiguration_r9;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct LTE_MCCH_MessageType__later {
			LTE_MCCH_MessageType__later_PR present;
			union LTE_MCCH_MessageType__LTE_later_u {
				struct LTE_MCCH_MessageType__later__c2 {
					LTE_MCCH_MessageType__later__c2_PR present;
					union LTE_MCCH_MessageType__LTE_later__LTE_c2_u {
						LTE_MBMSCountingRequest_r10_t	 mbmsCountingRequest_r10;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} c2;
				struct LTE_MCCH_MessageType__later__messageClassExtension {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} messageClassExtension;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} later;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MCCH_MessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MCCH_MessageType;
extern asn_CHOICE_specifics_t asn_SPC_LTE_MCCH_MessageType_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MCCH_MessageType_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_MCCH_MessageType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MCCH_MessageType_H_ */
#include <asn_internal.h>
