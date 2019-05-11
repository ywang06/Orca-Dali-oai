/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_IRAT_ParametersGERAN_v920_H_
#define	_LTE_IRAT_ParametersGERAN_v920_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_IRAT_ParametersGERAN_v920__dtm_r9 {
	LTE_IRAT_ParametersGERAN_v920__dtm_r9_supported	= 0
} e_LTE_IRAT_ParametersGERAN_v920__dtm_r9;
typedef enum LTE_IRAT_ParametersGERAN_v920__e_RedirectionGERAN_r9 {
	LTE_IRAT_ParametersGERAN_v920__e_RedirectionGERAN_r9_supported	= 0
} e_LTE_IRAT_ParametersGERAN_v920__e_RedirectionGERAN_r9;

/* LTE_IRAT-ParametersGERAN-v920 */
typedef struct LTE_IRAT_ParametersGERAN_v920 {
	long	*dtm_r9;	/* OPTIONAL */
	long	*e_RedirectionGERAN_r9;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_IRAT_ParametersGERAN_v920_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_dtm_r9_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_e_RedirectionGERAN_r9_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_IRAT_ParametersGERAN_v920;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_IRAT_ParametersGERAN_v920_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_IRAT_ParametersGERAN_v920_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_IRAT_ParametersGERAN_v920_H_ */
#include <asn_internal.h>
