/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-InterNodeDefinitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_HandoverPreparationInformation_NB_H_
#define	_LTE_HandoverPreparationInformation_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_HandoverPreparationInformation-NB-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_HandoverPreparationInformation_NB__criticalExtensions_PR {
	LTE_HandoverPreparationInformation_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_HandoverPreparationInformation_NB__criticalExtensions_PR_c1,
	LTE_HandoverPreparationInformation_NB__criticalExtensions_PR_criticalExtensionsFuture
} LTE_HandoverPreparationInformation_NB__criticalExtensions_PR;
typedef enum LTE_HandoverPreparationInformation_NB__criticalExtensions__c1_PR {
	LTE_HandoverPreparationInformation_NB__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	LTE_HandoverPreparationInformation_NB__criticalExtensions__c1_PR_handoverPreparationInformation_r13,
	LTE_HandoverPreparationInformation_NB__criticalExtensions__c1_PR_spare3,
	LTE_HandoverPreparationInformation_NB__criticalExtensions__c1_PR_spare2,
	LTE_HandoverPreparationInformation_NB__criticalExtensions__c1_PR_spare1
} LTE_HandoverPreparationInformation_NB__criticalExtensions__c1_PR;

/* LTE_HandoverPreparationInformation-NB */
typedef struct LTE_HandoverPreparationInformation_NB {
	struct LTE_HandoverPreparationInformation_NB__criticalExtensions {
		LTE_HandoverPreparationInformation_NB__criticalExtensions_PR present;
		union LTE_HandoverPreparationInformation_NB__LTE_criticalExtensions_u {
			struct LTE_HandoverPreparationInformation_NB__criticalExtensions__c1 {
				LTE_HandoverPreparationInformation_NB__criticalExtensions__c1_PR present;
				union LTE_HandoverPreparationInformation_NB__LTE_criticalExtensions__LTE_c1_u {
					LTE_HandoverPreparationInformation_NB_IEs_t	 handoverPreparationInformation_r13;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct LTE_HandoverPreparationInformation_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_HandoverPreparationInformation_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_HandoverPreparationInformation_NB;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_HandoverPreparationInformation_NB_H_ */
#include <asn_internal.h>
