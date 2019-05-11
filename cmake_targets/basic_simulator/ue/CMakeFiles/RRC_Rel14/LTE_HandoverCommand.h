/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_HandoverCommand_H_
#define	_LTE_HandoverCommand_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_HandoverCommand-r8-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_HandoverCommand__criticalExtensions_PR {
	LTE_HandoverCommand__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_HandoverCommand__criticalExtensions_PR_c1,
	LTE_HandoverCommand__criticalExtensions_PR_criticalExtensionsFuture
} LTE_HandoverCommand__criticalExtensions_PR;
typedef enum LTE_HandoverCommand__criticalExtensions__c1_PR {
	LTE_HandoverCommand__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	LTE_HandoverCommand__criticalExtensions__c1_PR_handoverCommand_r8,
	LTE_HandoverCommand__criticalExtensions__c1_PR_spare7,
	LTE_HandoverCommand__criticalExtensions__c1_PR_spare6,
	LTE_HandoverCommand__criticalExtensions__c1_PR_spare5,
	LTE_HandoverCommand__criticalExtensions__c1_PR_spare4,
	LTE_HandoverCommand__criticalExtensions__c1_PR_spare3,
	LTE_HandoverCommand__criticalExtensions__c1_PR_spare2,
	LTE_HandoverCommand__criticalExtensions__c1_PR_spare1
} LTE_HandoverCommand__criticalExtensions__c1_PR;

/* LTE_HandoverCommand */
typedef struct LTE_HandoverCommand {
	struct LTE_HandoverCommand__criticalExtensions {
		LTE_HandoverCommand__criticalExtensions_PR present;
		union LTE_HandoverCommand__LTE_criticalExtensions_u {
			struct LTE_HandoverCommand__criticalExtensions__c1 {
				LTE_HandoverCommand__criticalExtensions__c1_PR present;
				union LTE_HandoverCommand__LTE_criticalExtensions__LTE_c1_u {
					LTE_HandoverCommand_r8_IEs_t	 handoverCommand_r8;
					NULL_t	 spare7;
					NULL_t	 spare6;
					NULL_t	 spare5;
					NULL_t	 spare4;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct LTE_HandoverCommand__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_HandoverCommand_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_HandoverCommand;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_HandoverCommand_H_ */
#include <asn_internal.h>
