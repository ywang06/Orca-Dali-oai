/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformationBlockType1_NB_v1450_H_
#define	_LTE_SystemInformationBlockType1_NB_v1450_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450 {
	LTE_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB_6	= 0,
	LTE_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB_4dot77	= 1,
	LTE_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB_3	= 2,
	LTE_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB_1dot77	= 3,
	LTE_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB0	= 4,
	LTE_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB1	= 5,
	LTE_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB1dot23	= 6,
	LTE_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB2	= 7,
	LTE_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB3	= 8,
	LTE_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB4	= 9,
	LTE_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB4dot23	= 10,
	LTE_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB5	= 11,
	LTE_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB6	= 12,
	LTE_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB7	= 13,
	LTE_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB8	= 14,
	LTE_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450_dB9	= 15
} e_LTE_SystemInformationBlockType1_NB_v1450__nrs_CRS_PowerOffset_v1450;

/* LTE_SystemInformationBlockType1-NB-v1450 */
typedef struct LTE_SystemInformationBlockType1_NB_v1450 {
	long	*nrs_CRS_PowerOffset_v1450;	/* OPTIONAL */
	struct LTE_SystemInformationBlockType1_NB_v1450__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType1_NB_v1450_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_nrs_CRS_PowerOffset_v1450_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType1_NB_v1450;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType1_NB_v1450_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType1_NB_v1450_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SystemInformationBlockType1_NB_v1450_H_ */
#include <asn_internal.h>
