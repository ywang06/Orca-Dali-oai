/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RNReconfigurationComplete_r10_H_
#define	_LTE_RNReconfigurationComplete_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RRC-TransactionIdentifier.h"
#include "LTE_RNReconfigurationComplete-r10-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RNReconfigurationComplete_r10__criticalExtensions_PR {
	LTE_RNReconfigurationComplete_r10__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_RNReconfigurationComplete_r10__criticalExtensions_PR_c1,
	LTE_RNReconfigurationComplete_r10__criticalExtensions_PR_criticalExtensionsFuture
} LTE_RNReconfigurationComplete_r10__criticalExtensions_PR;
typedef enum LTE_RNReconfigurationComplete_r10__criticalExtensions__c1_PR {
	LTE_RNReconfigurationComplete_r10__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	LTE_RNReconfigurationComplete_r10__criticalExtensions__c1_PR_rnReconfigurationComplete_r10,
	LTE_RNReconfigurationComplete_r10__criticalExtensions__c1_PR_spare3,
	LTE_RNReconfigurationComplete_r10__criticalExtensions__c1_PR_spare2,
	LTE_RNReconfigurationComplete_r10__criticalExtensions__c1_PR_spare1
} LTE_RNReconfigurationComplete_r10__criticalExtensions__c1_PR;

/* LTE_RNReconfigurationComplete-r10 */
typedef struct LTE_RNReconfigurationComplete_r10 {
	LTE_RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct LTE_RNReconfigurationComplete_r10__criticalExtensions {
		LTE_RNReconfigurationComplete_r10__criticalExtensions_PR present;
		union LTE_RNReconfigurationComplete_r10__LTE_criticalExtensions_u {
			struct LTE_RNReconfigurationComplete_r10__criticalExtensions__c1 {
				LTE_RNReconfigurationComplete_r10__criticalExtensions__c1_PR present;
				union LTE_RNReconfigurationComplete_r10__LTE_criticalExtensions__LTE_c1_u {
					LTE_RNReconfigurationComplete_r10_IEs_t	 rnReconfigurationComplete_r10;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct LTE_RNReconfigurationComplete_r10__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RNReconfigurationComplete_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RNReconfigurationComplete_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RNReconfigurationComplete_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RNReconfigurationComplete_r10_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RNReconfigurationComplete_r10_H_ */
#include <asn_internal.h>
