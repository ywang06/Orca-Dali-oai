/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RadioResourceConfigCommon_H_
#define	_LTE_RadioResourceConfigCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PRACH-Config.h"
#include "LTE_PUSCH-ConfigCommon.h"
#include "LTE_P-Max.h"
#include "LTE_UL-CyclicPrefixLength.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_RACH_ConfigCommon;
struct LTE_PDSCH_ConfigCommon;
struct LTE_PHICH_Config;
struct LTE_PUCCH_ConfigCommon;
struct LTE_SoundingRS_UL_ConfigCommon;
struct LTE_UplinkPowerControlCommon;
struct LTE_AntennaInfoCommon;
struct LTE_TDD_Config;
struct LTE_UplinkPowerControlCommon_v1020;
struct LTE_TDD_Config_v1130;
struct LTE_PUSCH_ConfigCommon_v1270;
struct LTE_PRACH_Config_v1310;
struct LTE_FreqHoppingParameters_r13;
struct LTE_PDSCH_ConfigCommon_v1310;
struct LTE_PUCCH_ConfigCommon_v1310;
struct LTE_PUSCH_ConfigCommon_v1310;
struct LTE_UplinkPowerControlCommon_v1310;
struct LTE_HighSpeedConfig_r14;
struct LTE_PRACH_Config_v1430;
struct LTE_PUCCH_ConfigCommon_v1430;
struct LTE_TDD_Config_v1430;
struct LTE_TDD_Config_v1450;

/* LTE_RadioResourceConfigCommon */
typedef struct LTE_RadioResourceConfigCommon {
	struct LTE_RACH_ConfigCommon	*rach_ConfigCommon;	/* OPTIONAL */
	LTE_PRACH_Config_t	 prach_Config;
	struct LTE_PDSCH_ConfigCommon	*pdsch_ConfigCommon;	/* OPTIONAL */
	LTE_PUSCH_ConfigCommon_t	 pusch_ConfigCommon;
	struct LTE_PHICH_Config	*phich_Config;	/* OPTIONAL */
	struct LTE_PUCCH_ConfigCommon	*pucch_ConfigCommon;	/* OPTIONAL */
	struct LTE_SoundingRS_UL_ConfigCommon	*soundingRS_UL_ConfigCommon;	/* OPTIONAL */
	struct LTE_UplinkPowerControlCommon	*uplinkPowerControlCommon;	/* OPTIONAL */
	struct LTE_AntennaInfoCommon	*antennaInfoCommon;	/* OPTIONAL */
	LTE_P_Max_t	*p_Max;	/* OPTIONAL */
	struct LTE_TDD_Config	*tdd_Config;	/* OPTIONAL */
	LTE_UL_CyclicPrefixLength_t	 ul_CyclicPrefixLength;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_RadioResourceConfigCommon__ext1 {
		struct LTE_UplinkPowerControlCommon_v1020	*uplinkPowerControlCommon_v1020;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_RadioResourceConfigCommon__ext2 {
		struct LTE_TDD_Config_v1130	*tdd_Config_v1130;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_RadioResourceConfigCommon__ext3 {
		struct LTE_PUSCH_ConfigCommon_v1270	*pusch_ConfigCommon_v1270;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_RadioResourceConfigCommon__ext4 {
		struct LTE_PRACH_Config_v1310	*prach_Config_v1310;	/* OPTIONAL */
		struct LTE_FreqHoppingParameters_r13	*freqHoppingParameters_r13;	/* OPTIONAL */
		struct LTE_PDSCH_ConfigCommon_v1310	*pdsch_ConfigCommon_v1310;	/* OPTIONAL */
		struct LTE_PUCCH_ConfigCommon_v1310	*pucch_ConfigCommon_v1310;	/* OPTIONAL */
		struct LTE_PUSCH_ConfigCommon_v1310	*pusch_ConfigCommon_v1310;	/* OPTIONAL */
		struct LTE_UplinkPowerControlCommon_v1310	*uplinkPowerControlCommon_v1310;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct LTE_RadioResourceConfigCommon__ext5 {
		struct LTE_HighSpeedConfig_r14	*highSpeedConfig_r14;	/* OPTIONAL */
		struct LTE_PRACH_Config_v1430	*prach_Config_v1430;	/* OPTIONAL */
		struct LTE_PUCCH_ConfigCommon_v1430	*pucch_ConfigCommon_v1430;	/* OPTIONAL */
		struct LTE_TDD_Config_v1430	*tdd_Config_v1430;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct LTE_RadioResourceConfigCommon__ext6 {
		struct LTE_TDD_Config_v1450	*tdd_Config_v1450;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RadioResourceConfigCommon_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RadioResourceConfigCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RadioResourceConfigCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RadioResourceConfigCommon_1[18];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RACH-ConfigCommon.h"
#include "LTE_PDSCH-ConfigCommon.h"
#include "LTE_PHICH-Config.h"
#include "LTE_PUCCH-ConfigCommon.h"
#include "LTE_SoundingRS-UL-ConfigCommon.h"
#include "LTE_UplinkPowerControlCommon.h"
#include "LTE_AntennaInfoCommon.h"
#include "LTE_TDD-Config.h"
#include "LTE_UplinkPowerControlCommon-v1020.h"
#include "LTE_TDD-Config-v1130.h"
#include "LTE_PUSCH-ConfigCommon-v1270.h"
#include "LTE_PRACH-Config-v1310.h"
#include "LTE_FreqHoppingParameters-r13.h"
#include "LTE_PDSCH-ConfigCommon-v1310.h"
#include "LTE_PUCCH-ConfigCommon-v1310.h"
#include "LTE_PUSCH-ConfigCommon-v1310.h"
#include "LTE_UplinkPowerControlCommon-v1310.h"
#include "LTE_HighSpeedConfig-r14.h"
#include "LTE_PRACH-Config-v1430.h"
#include "LTE_PUCCH-ConfigCommon-v1430.h"
#include "LTE_TDD-Config-v1430.h"
#include "LTE_TDD-Config-v1450.h"

#endif	/* _LTE_RadioResourceConfigCommon_H_ */
#include <asn_internal.h>
