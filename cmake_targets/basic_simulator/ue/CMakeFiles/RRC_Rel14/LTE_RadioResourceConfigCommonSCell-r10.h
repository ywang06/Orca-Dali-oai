/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RadioResourceConfigCommonSCell_r10_H_
#define	_LTE_RadioResourceConfigCommonSCell_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_AntennaInfoCommon.h"
#include "LTE_PHICH-Config.h"
#include "LTE_PDSCH-ConfigCommon.h"
#include <constr_SEQUENCE.h>
#include "LTE_P-Max.h"
#include "LTE_UplinkPowerControlCommonSCell-r10.h"
#include "LTE_SoundingRS-UL-ConfigCommon.h"
#include "LTE_UL-CyclicPrefixLength.h"
#include "LTE_PUSCH-ConfigCommon.h"
#include "LTE_ARFCN-ValueEUTRA.h"
#include "LTE_AdditionalSpectrumEmission.h"
#include "LTE_ARFCN-ValueEUTRA-v9e0.h"
#include "LTE_ARFCN-ValueEUTRA-r9.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10__dl_Bandwidth_r10 {
	LTE_RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10__dl_Bandwidth_r10_n6	= 0,
	LTE_RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10__dl_Bandwidth_r10_n15	= 1,
	LTE_RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10__dl_Bandwidth_r10_n25	= 2,
	LTE_RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10__dl_Bandwidth_r10_n50	= 3,
	LTE_RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10__dl_Bandwidth_r10_n75	= 4,
	LTE_RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10__dl_Bandwidth_r10_n100	= 5
} e_LTE_RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10__dl_Bandwidth_r10;
typedef enum LTE_RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10__ul_Bandwidth_r10 {
	LTE_RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10__ul_Bandwidth_r10_n6	= 0,
	LTE_RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10__ul_Bandwidth_r10_n15	= 1,
	LTE_RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10__ul_Bandwidth_r10_n25	= 2,
	LTE_RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10__ul_Bandwidth_r10_n50	= 3,
	LTE_RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10__ul_Bandwidth_r10_n75	= 4,
	LTE_RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10__ul_Bandwidth_r10_n100	= 5
} e_LTE_RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10__ul_Bandwidth_r10;
typedef enum LTE_RadioResourceConfigCommonSCell_r10__ext5__ul_Configuration_r14__ul_FreqInfo_r14__ul_Bandwidth_r14 {
	LTE_RadioResourceConfigCommonSCell_r10__ext5__ul_Configuration_r14__ul_FreqInfo_r14__ul_Bandwidth_r14_n6	= 0,
	LTE_RadioResourceConfigCommonSCell_r10__ext5__ul_Configuration_r14__ul_FreqInfo_r14__ul_Bandwidth_r14_n15	= 1,
	LTE_RadioResourceConfigCommonSCell_r10__ext5__ul_Configuration_r14__ul_FreqInfo_r14__ul_Bandwidth_r14_n25	= 2,
	LTE_RadioResourceConfigCommonSCell_r10__ext5__ul_Configuration_r14__ul_FreqInfo_r14__ul_Bandwidth_r14_n50	= 3,
	LTE_RadioResourceConfigCommonSCell_r10__ext5__ul_Configuration_r14__ul_FreqInfo_r14__ul_Bandwidth_r14_n75	= 4,
	LTE_RadioResourceConfigCommonSCell_r10__ext5__ul_Configuration_r14__ul_FreqInfo_r14__ul_Bandwidth_r14_n100	= 5
} e_LTE_RadioResourceConfigCommonSCell_r10__ext5__ul_Configuration_r14__ul_FreqInfo_r14__ul_Bandwidth_r14;
typedef enum LTE_RadioResourceConfigCommonSCell_r10__ext5__harq_ReferenceConfig_r14 {
	LTE_RadioResourceConfigCommonSCell_r10__ext5__harq_ReferenceConfig_r14_sa2	= 0,
	LTE_RadioResourceConfigCommonSCell_r10__ext5__harq_ReferenceConfig_r14_sa4	= 1,
	LTE_RadioResourceConfigCommonSCell_r10__ext5__harq_ReferenceConfig_r14_sa5	= 2
} e_LTE_RadioResourceConfigCommonSCell_r10__ext5__harq_ReferenceConfig_r14;
typedef enum LTE_RadioResourceConfigCommonSCell_r10__ext5__soundingRS_FlexibleTiming_r14 {
	LTE_RadioResourceConfigCommonSCell_r10__ext5__soundingRS_FlexibleTiming_r14_true	= 0
} e_LTE_RadioResourceConfigCommonSCell_r10__ext5__soundingRS_FlexibleTiming_r14;

/* Forward declarations */
struct LTE_MBSFN_SubframeConfigList;
struct LTE_TDD_Config;
struct LTE_PRACH_ConfigSCell_r10;
struct LTE_RACH_ConfigCommonSCell_r11;
struct LTE_PRACH_Config;
struct LTE_TDD_Config_v1130;
struct LTE_UplinkPowerControlCommonSCell_v1130;
struct LTE_PUSCH_ConfigCommon_v1270;
struct LTE_PUCCH_ConfigCommon;
struct LTE_UplinkPowerControlCommonSCell_v1310;
struct LTE_HighSpeedConfigSCell_r14;
struct LTE_PRACH_Config_v1430;
struct LTE_UplinkPowerControlCommonPUSCH_LessCell_v1430;
struct LTE_MBSFN_SubframeConfigList_v1430;

/* LTE_RadioResourceConfigCommonSCell-r10 */
typedef struct LTE_RadioResourceConfigCommonSCell_r10 {
	struct LTE_RadioResourceConfigCommonSCell_r10__nonUL_Configuration_r10 {
		long	 dl_Bandwidth_r10;
		LTE_AntennaInfoCommon_t	 antennaInfoCommon_r10;
		struct LTE_MBSFN_SubframeConfigList	*mbsfn_SubframeConfigList_r10;	/* OPTIONAL */
		LTE_PHICH_Config_t	 phich_Config_r10;
		LTE_PDSCH_ConfigCommon_t	 pdsch_ConfigCommon_r10;
		struct LTE_TDD_Config	*tdd_Config_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} nonUL_Configuration_r10;
	struct LTE_RadioResourceConfigCommonSCell_r10__ul_Configuration_r10 {
		struct LTE_RadioResourceConfigCommonSCell_r10__ul_Configuration_r10__ul_FreqInfo_r10 {
			LTE_ARFCN_ValueEUTRA_t	*ul_CarrierFreq_r10;	/* OPTIONAL */
			long	*ul_Bandwidth_r10;	/* OPTIONAL */
			LTE_AdditionalSpectrumEmission_t	 additionalSpectrumEmissionSCell_r10;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} ul_FreqInfo_r10;
		LTE_P_Max_t	*p_Max_r10;	/* OPTIONAL */
		LTE_UplinkPowerControlCommonSCell_r10_t	 uplinkPowerControlCommonSCell_r10;
		LTE_SoundingRS_UL_ConfigCommon_t	 soundingRS_UL_ConfigCommon_r10;
		LTE_UL_CyclicPrefixLength_t	 ul_CyclicPrefixLength_r10;
		struct LTE_PRACH_ConfigSCell_r10	*prach_ConfigSCell_r10;	/* OPTIONAL */
		LTE_PUSCH_ConfigCommon_t	 pusch_ConfigCommon_r10;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ul_Configuration_r10;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_RadioResourceConfigCommonSCell_r10__ext1 {
		LTE_ARFCN_ValueEUTRA_v9e0_t	*ul_CarrierFreq_v1090;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_RadioResourceConfigCommonSCell_r10__ext2 {
		struct LTE_RACH_ConfigCommonSCell_r11	*rach_ConfigCommonSCell_r11;	/* OPTIONAL */
		struct LTE_PRACH_Config	*prach_ConfigSCell_r11;	/* OPTIONAL */
		struct LTE_TDD_Config_v1130	*tdd_Config_v1130;	/* OPTIONAL */
		struct LTE_UplinkPowerControlCommonSCell_v1130	*uplinkPowerControlCommonSCell_v1130;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_RadioResourceConfigCommonSCell_r10__ext3 {
		struct LTE_PUSCH_ConfigCommon_v1270	*pusch_ConfigCommon_v1270;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_RadioResourceConfigCommonSCell_r10__ext4 {
		struct LTE_PUCCH_ConfigCommon	*pucch_ConfigCommon_r13;	/* OPTIONAL */
		struct LTE_UplinkPowerControlCommonSCell_v1310	*uplinkPowerControlCommonSCell_v1310;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct LTE_RadioResourceConfigCommonSCell_r10__ext5 {
		struct LTE_HighSpeedConfigSCell_r14	*highSpeedConfigSCell_r14;	/* OPTIONAL */
		struct LTE_PRACH_Config_v1430	*prach_Config_v1430;	/* OPTIONAL */
		struct LTE_RadioResourceConfigCommonSCell_r10__ext5__ul_Configuration_r14 {
			struct LTE_RadioResourceConfigCommonSCell_r10__ext5__ul_Configuration_r14__ul_FreqInfo_r14 {
				LTE_ARFCN_ValueEUTRA_r9_t	*ul_CarrierFreq_r14;	/* OPTIONAL */
				long	*ul_Bandwidth_r14;	/* OPTIONAL */
				LTE_AdditionalSpectrumEmission_t	 additionalSpectrumEmissionSCell_r14;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} ul_FreqInfo_r14;
			LTE_P_Max_t	*p_Max_r14;	/* OPTIONAL */
			LTE_SoundingRS_UL_ConfigCommon_t	 soundingRS_UL_ConfigCommon_r14;
			LTE_UL_CyclicPrefixLength_t	 ul_CyclicPrefixLength_r14;
			struct LTE_PRACH_ConfigSCell_r10	*prach_ConfigSCell_r14;	/* OPTIONAL */
			struct LTE_UplinkPowerControlCommonPUSCH_LessCell_v1430	*uplinkPowerControlCommonPUSCH_LessCell_v1430;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ul_Configuration_r14;
		long	*harq_ReferenceConfig_r14;	/* OPTIONAL */
		long	*soundingRS_FlexibleTiming_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct LTE_RadioResourceConfigCommonSCell_r10__ext6 {
		struct LTE_MBSFN_SubframeConfigList_v1430	*mbsfn_SubframeConfigList_v1430;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RadioResourceConfigCommonSCell_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_dl_Bandwidth_r10_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ul_Bandwidth_r10_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ul_Bandwidth_r14_51;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_harq_ReferenceConfig_r14_64;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_soundingRS_FlexibleTiming_r14_68;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RadioResourceConfigCommonSCell_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RadioResourceConfigCommonSCell_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RadioResourceConfigCommonSCell_r10_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MBSFN-SubframeConfigList.h"
#include "LTE_TDD-Config.h"
#include "LTE_PRACH-ConfigSCell-r10.h"
#include "LTE_RACH-ConfigCommonSCell-r11.h"
#include "LTE_PRACH-Config.h"
#include "LTE_TDD-Config-v1130.h"
#include "LTE_UplinkPowerControlCommonSCell-v1130.h"
#include "LTE_PUSCH-ConfigCommon-v1270.h"
#include "LTE_PUCCH-ConfigCommon.h"
#include "LTE_UplinkPowerControlCommonSCell-v1310.h"
#include "LTE_HighSpeedConfigSCell-r14.h"
#include "LTE_PRACH-Config-v1430.h"
#include "LTE_UplinkPowerControlCommonPUSCH-LessCell-v1430.h"
#include "LTE_MBSFN-SubframeConfigList-v1430.h"

#endif	/* _LTE_RadioResourceConfigCommonSCell_r10_H_ */
#include <asn_internal.h>
