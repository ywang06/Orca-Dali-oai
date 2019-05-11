/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SC_MCCH_MessageType_r13_H_
#define	_LTE_SC_MCCH_MessageType_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SCPTMConfiguration-r13.h"
#include <constr_CHOICE.h>
#include "LTE_SCPTMConfiguration-BR-r14.h"
#include <NULL.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SC_MCCH_MessageType_r13_PR {
	LTE_SC_MCCH_MessageType_r13_PR_NOTHING,	/* No components present */
	LTE_SC_MCCH_MessageType_r13_PR_c1,
	LTE_SC_MCCH_MessageType_r13_PR_messageClassExtension
} LTE_SC_MCCH_MessageType_r13_PR;
typedef enum LTE_SC_MCCH_MessageType_r13__c1_PR {
	LTE_SC_MCCH_MessageType_r13__c1_PR_NOTHING,	/* No components present */
	LTE_SC_MCCH_MessageType_r13__c1_PR_scptmConfiguration_r13
} LTE_SC_MCCH_MessageType_r13__c1_PR;
typedef enum LTE_SC_MCCH_MessageType_r13__messageClassExtension_PR {
	LTE_SC_MCCH_MessageType_r13__messageClassExtension_PR_NOTHING,	/* No components present */
	LTE_SC_MCCH_MessageType_r13__messageClassExtension_PR_c2,
	LTE_SC_MCCH_MessageType_r13__messageClassExtension_PR_messageClassExtensionFuture_r14
} LTE_SC_MCCH_MessageType_r13__messageClassExtension_PR;
typedef enum LTE_SC_MCCH_MessageType_r13__messageClassExtension__c2_PR {
	LTE_SC_MCCH_MessageType_r13__messageClassExtension__c2_PR_NOTHING,	/* No components present */
	LTE_SC_MCCH_MessageType_r13__messageClassExtension__c2_PR_scptmConfiguration_BR_r14,
	LTE_SC_MCCH_MessageType_r13__messageClassExtension__c2_PR_spare
} LTE_SC_MCCH_MessageType_r13__messageClassExtension__c2_PR;

/* LTE_SC-MCCH-MessageType-r13 */
typedef struct LTE_SC_MCCH_MessageType_r13 {
	LTE_SC_MCCH_MessageType_r13_PR present;
	union LTE_SC_MCCH_MessageType_r13_u {
		struct LTE_SC_MCCH_MessageType_r13__c1 {
			LTE_SC_MCCH_MessageType_r13__c1_PR present;
			union LTE_SC_MCCH_MessageType_r13__LTE_c1_u {
				LTE_SCPTMConfiguration_r13_t	 scptmConfiguration_r13;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} c1;
		struct LTE_SC_MCCH_MessageType_r13__messageClassExtension {
			LTE_SC_MCCH_MessageType_r13__messageClassExtension_PR present;
			union LTE_SC_MCCH_MessageType_r13__LTE_messageClassExtension_u {
				struct LTE_SC_MCCH_MessageType_r13__messageClassExtension__c2 {
					LTE_SC_MCCH_MessageType_r13__messageClassExtension__c2_PR present;
					union LTE_SC_MCCH_MessageType_r13__LTE_messageClassExtension__LTE_c2_u {
						LTE_SCPTMConfiguration_BR_r14_t	 scptmConfiguration_BR_r14;
						NULL_t	 spare;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} c2;
				struct LTE_SC_MCCH_MessageType_r13__messageClassExtension__messageClassExtensionFuture_r14 {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} messageClassExtensionFuture_r14;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} messageClassExtension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SC_MCCH_MessageType_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SC_MCCH_MessageType_r13;
extern asn_CHOICE_specifics_t asn_SPC_LTE_SC_MCCH_MessageType_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SC_MCCH_MessageType_r13_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_SC_MCCH_MessageType_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SC_MCCH_MessageType_r13_H_ */
#include <asn_internal.h>
