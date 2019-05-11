/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PUSCH_ConfigCommon_v1310_H_
#define	_LTE_PUSCH_ConfigCommon_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeA_r13 {
	LTE_PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeA_r13_r8	= 0,
	LTE_PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeA_r13_r16	= 1,
	LTE_PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeA_r13_r32	= 2
} e_LTE_PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeA_r13;
typedef enum LTE_PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13 {
	LTE_PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13_r192	= 0,
	LTE_PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13_r256	= 1,
	LTE_PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13_r384	= 2,
	LTE_PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13_r512	= 3,
	LTE_PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13_r768	= 4,
	LTE_PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13_r1024	= 5,
	LTE_PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13_r1536	= 6,
	LTE_PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13_r2048	= 7
} e_LTE_PUSCH_ConfigCommon_v1310__pusch_maxNumRepetitionCEmodeB_r13;

/* LTE_PUSCH-ConfigCommon-v1310 */
typedef struct LTE_PUSCH_ConfigCommon_v1310 {
	long	*pusch_maxNumRepetitionCEmodeA_r13;	/* OPTIONAL */
	long	*pusch_maxNumRepetitionCEmodeB_r13;	/* OPTIONAL */
	long	*pusch_HoppingOffset_v1310;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PUSCH_ConfigCommon_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_pusch_maxNumRepetitionCEmodeA_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_pusch_maxNumRepetitionCEmodeB_r13_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PUSCH_ConfigCommon_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PUSCH_ConfigCommon_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PUSCH_ConfigCommon_v1310_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PUSCH_ConfigCommon_v1310_H_ */
#include <asn_internal.h>
