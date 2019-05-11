/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MobilityFromEUTRACommand_H_
#define	_LTE_MobilityFromEUTRACommand_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RRC-TransactionIdentifier.h"
#include "LTE_MobilityFromEUTRACommand-r8-IEs.h"
#include "LTE_MobilityFromEUTRACommand-r9-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MobilityFromEUTRACommand__criticalExtensions_PR {
	LTE_MobilityFromEUTRACommand__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_MobilityFromEUTRACommand__criticalExtensions_PR_c1,
	LTE_MobilityFromEUTRACommand__criticalExtensions_PR_criticalExtensionsFuture
} LTE_MobilityFromEUTRACommand__criticalExtensions_PR;
typedef enum LTE_MobilityFromEUTRACommand__criticalExtensions__c1_PR {
	LTE_MobilityFromEUTRACommand__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	LTE_MobilityFromEUTRACommand__criticalExtensions__c1_PR_mobilityFromEUTRACommand_r8,
	LTE_MobilityFromEUTRACommand__criticalExtensions__c1_PR_mobilityFromEUTRACommand_r9,
	LTE_MobilityFromEUTRACommand__criticalExtensions__c1_PR_spare2,
	LTE_MobilityFromEUTRACommand__criticalExtensions__c1_PR_spare1
} LTE_MobilityFromEUTRACommand__criticalExtensions__c1_PR;

/* LTE_MobilityFromEUTRACommand */
typedef struct LTE_MobilityFromEUTRACommand {
	LTE_RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct LTE_MobilityFromEUTRACommand__criticalExtensions {
		LTE_MobilityFromEUTRACommand__criticalExtensions_PR present;
		union LTE_MobilityFromEUTRACommand__LTE_criticalExtensions_u {
			struct LTE_MobilityFromEUTRACommand__criticalExtensions__c1 {
				LTE_MobilityFromEUTRACommand__criticalExtensions__c1_PR present;
				union LTE_MobilityFromEUTRACommand__LTE_criticalExtensions__LTE_c1_u {
					LTE_MobilityFromEUTRACommand_r8_IEs_t	 mobilityFromEUTRACommand_r8;
					LTE_MobilityFromEUTRACommand_r9_IEs_t	 mobilityFromEUTRACommand_r9;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct LTE_MobilityFromEUTRACommand__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MobilityFromEUTRACommand_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MobilityFromEUTRACommand;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MobilityFromEUTRACommand_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MobilityFromEUTRACommand_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MobilityFromEUTRACommand_H_ */
#include <asn_internal.h>
