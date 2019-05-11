/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RRCConnectionSetupComplete_NB_H_
#define	_LTE_RRCConnectionSetupComplete_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RRC-TransactionIdentifier.h"
#include "LTE_RRCConnectionSetupComplete-NB-r13-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RRCConnectionSetupComplete_NB__criticalExtensions_PR {
	LTE_RRCConnectionSetupComplete_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	LTE_RRCConnectionSetupComplete_NB__criticalExtensions_PR_rrcConnectionSetupComplete_r13,
	LTE_RRCConnectionSetupComplete_NB__criticalExtensions_PR_criticalExtensionsFuture
} LTE_RRCConnectionSetupComplete_NB__criticalExtensions_PR;

/* LTE_RRCConnectionSetupComplete-NB */
typedef struct LTE_RRCConnectionSetupComplete_NB {
	LTE_RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct LTE_RRCConnectionSetupComplete_NB__criticalExtensions {
		LTE_RRCConnectionSetupComplete_NB__criticalExtensions_PR present;
		union LTE_RRCConnectionSetupComplete_NB__LTE_criticalExtensions_u {
			LTE_RRCConnectionSetupComplete_NB_r13_IEs_t	 rrcConnectionSetupComplete_r13;
			struct LTE_RRCConnectionSetupComplete_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionSetupComplete_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionSetupComplete_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionSetupComplete_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionSetupComplete_NB_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RRCConnectionSetupComplete_NB_H_ */
#include <asn_internal.h>
