/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SecurityAlgorithmConfig_H_
#define	_LTE_SecurityAlgorithmConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CipheringAlgorithm-r12.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SecurityAlgorithmConfig__integrityProtAlgorithm {
	LTE_SecurityAlgorithmConfig__integrityProtAlgorithm_eia0_v920	= 0,
	LTE_SecurityAlgorithmConfig__integrityProtAlgorithm_eia1	= 1,
	LTE_SecurityAlgorithmConfig__integrityProtAlgorithm_eia2	= 2,
	LTE_SecurityAlgorithmConfig__integrityProtAlgorithm_eia3_v1130	= 3,
	LTE_SecurityAlgorithmConfig__integrityProtAlgorithm_spare4	= 4,
	LTE_SecurityAlgorithmConfig__integrityProtAlgorithm_spare3	= 5,
	LTE_SecurityAlgorithmConfig__integrityProtAlgorithm_spare2	= 6,
	LTE_SecurityAlgorithmConfig__integrityProtAlgorithm_spare1	= 7
	/*
	 * Enumeration is extensible
	 */
} e_LTE_SecurityAlgorithmConfig__integrityProtAlgorithm;

/* LTE_SecurityAlgorithmConfig */
typedef struct LTE_SecurityAlgorithmConfig {
	LTE_CipheringAlgorithm_r12_t	 cipheringAlgorithm;
	long	 integrityProtAlgorithm;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SecurityAlgorithmConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_integrityProtAlgorithm_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SecurityAlgorithmConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SecurityAlgorithmConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SecurityAlgorithmConfig_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SecurityAlgorithmConfig_H_ */
#include <asn_internal.h>
