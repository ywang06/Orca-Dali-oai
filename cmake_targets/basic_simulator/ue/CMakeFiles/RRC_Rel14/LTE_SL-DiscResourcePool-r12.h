/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SL_DiscResourcePool_r12_H_
#define	_LTE_SL_DiscResourcePool_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SL-CP-Len-r12.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "LTE_SL-TF-ResourceConfig-r12.h"
#include "LTE_SL-TxParameters-r12.h"
#include "LTE_SL-PoolSelectionConfig-r12.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>
#include "LTE_PhysCellIdList-r13.h"
#include "LTE_P-Max.h"
#include "LTE_ARFCN-ValueEUTRA.h"
#include "LTE_AdditionalSpectrumEmission.h"
#include "LTE_AdditionalSpectrumEmission-v10l0.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_DiscResourcePool_r12__discPeriod_r12 {
	LTE_SL_DiscResourcePool_r12__discPeriod_r12_rf32	= 0,
	LTE_SL_DiscResourcePool_r12__discPeriod_r12_rf64	= 1,
	LTE_SL_DiscResourcePool_r12__discPeriod_r12_rf128	= 2,
	LTE_SL_DiscResourcePool_r12__discPeriod_r12_rf256	= 3,
	LTE_SL_DiscResourcePool_r12__discPeriod_r12_rf512	= 4,
	LTE_SL_DiscResourcePool_r12__discPeriod_r12_rf1024	= 5,
	LTE_SL_DiscResourcePool_r12__discPeriod_r12_rf16_v1310	= 6,
	LTE_SL_DiscResourcePool_r12__discPeriod_r12_spare	= 7
} e_LTE_SL_DiscResourcePool_r12__discPeriod_r12;
typedef enum LTE_SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_PR {
	LTE_SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_PR_NOTHING,	/* No components present */
	LTE_SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_PR_rsrpBased_r12,
	LTE_SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_PR_random_r12
} LTE_SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_PR;
typedef enum LTE_SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__txProbability_r12 {
	LTE_SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__txProbability_r12_p25	= 0,
	LTE_SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__txProbability_r12_p50	= 1,
	LTE_SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__txProbability_r12_p75	= 2,
	LTE_SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__txProbability_r12_p100	= 3
} e_LTE_SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__txProbability_r12;
typedef enum LTE_SL_DiscResourcePool_r12__ext1__discPeriod_v1310_PR {
	LTE_SL_DiscResourcePool_r12__ext1__discPeriod_v1310_PR_NOTHING,	/* No components present */
	LTE_SL_DiscResourcePool_r12__ext1__discPeriod_v1310_PR_release,
	LTE_SL_DiscResourcePool_r12__ext1__discPeriod_v1310_PR_setup
} LTE_SL_DiscResourcePool_r12__ext1__discPeriod_v1310_PR;
typedef enum LTE_SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup {
	LTE_SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup_rf4	= 0,
	LTE_SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup_rf6	= 1,
	LTE_SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup_rf7	= 2,
	LTE_SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup_rf8	= 3,
	LTE_SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup_rf12	= 4,
	LTE_SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup_rf14	= 5,
	LTE_SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup_rf24	= 6,
	LTE_SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup_rf28	= 7
} e_LTE_SL_DiscResourcePool_r12__ext1__discPeriod_v1310__setup;
typedef enum LTE_SL_DiscResourcePool_r12__ext1__rxParamsAddNeighFreq_r13_PR {
	LTE_SL_DiscResourcePool_r12__ext1__rxParamsAddNeighFreq_r13_PR_NOTHING,	/* No components present */
	LTE_SL_DiscResourcePool_r12__ext1__rxParamsAddNeighFreq_r13_PR_release,
	LTE_SL_DiscResourcePool_r12__ext1__rxParamsAddNeighFreq_r13_PR_setup
} LTE_SL_DiscResourcePool_r12__ext1__rxParamsAddNeighFreq_r13_PR;
typedef enum LTE_SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13_PR {
	LTE_SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13_PR_NOTHING,	/* No components present */
	LTE_SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13_PR_release,
	LTE_SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13_PR_setup
} LTE_SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13_PR;
typedef enum LTE_SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup__freqInfo__ul_Bandwidth {
	LTE_SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup__freqInfo__ul_Bandwidth_n6	= 0,
	LTE_SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup__freqInfo__ul_Bandwidth_n15	= 1,
	LTE_SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup__freqInfo__ul_Bandwidth_n25	= 2,
	LTE_SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup__freqInfo__ul_Bandwidth_n50	= 3,
	LTE_SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup__freqInfo__ul_Bandwidth_n75	= 4,
	LTE_SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup__freqInfo__ul_Bandwidth_n100	= 5
} e_LTE_SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup__freqInfo__ul_Bandwidth;
typedef enum LTE_SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370_PR {
	LTE_SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370_PR_NOTHING,	/* No components present */
	LTE_SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370_PR_release,
	LTE_SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370_PR_setup
} LTE_SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370_PR;

/* Forward declarations */
struct LTE_TDD_Config;
struct LTE_TDD_Config_v1130;

/* LTE_SL-DiscResourcePool-r12 */
typedef struct LTE_SL_DiscResourcePool_r12 {
	LTE_SL_CP_Len_r12_t	 cp_Len_r12;
	long	 discPeriod_r12;
	long	 numRetx_r12;
	long	 numRepetition_r12;
	LTE_SL_TF_ResourceConfig_r12_t	 tf_ResourceConfig_r12;
	struct LTE_SL_DiscResourcePool_r12__txParameters_r12 {
		LTE_SL_TxParameters_r12_t	 txParametersGeneral_r12;
		struct LTE_SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12 {
			struct LTE_SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12 {
				LTE_SL_DiscResourcePool_r12__txParameters_r12__ue_SelectedResourceConfig_r12__poolSelection_r12_PR present;
				union LTE_SL_DiscResourcePool_r12__LTE_txParameters_r12__LTE_ue_SelectedResourceConfig_r12__LTE_poolSelection_r12_u {
					LTE_SL_PoolSelectionConfig_r12_t	 rsrpBased_r12;
					NULL_t	 random_r12;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} poolSelection_r12;
			long	 txProbability_r12;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ue_SelectedResourceConfig_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *txParameters_r12;
	struct LTE_SL_DiscResourcePool_r12__rxParameters_r12 {
		struct LTE_TDD_Config	*tdd_Config_r12;	/* OPTIONAL */
		long	 syncConfigIndex_r12;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rxParameters_r12;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SL_DiscResourcePool_r12__ext1 {
		struct LTE_SL_DiscResourcePool_r12__ext1__discPeriod_v1310 {
			LTE_SL_DiscResourcePool_r12__ext1__discPeriod_v1310_PR present;
			union LTE_SL_DiscResourcePool_r12__LTE_ext1__LTE_discPeriod_v1310_u {
				NULL_t	 release;
				long	 setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *discPeriod_v1310;
		struct LTE_SL_DiscResourcePool_r12__ext1__rxParamsAddNeighFreq_r13 {
			LTE_SL_DiscResourcePool_r12__ext1__rxParamsAddNeighFreq_r13_PR present;
			union LTE_SL_DiscResourcePool_r12__LTE_ext1__LTE_rxParamsAddNeighFreq_r13_u {
				NULL_t	 release;
				struct LTE_SL_DiscResourcePool_r12__ext1__rxParamsAddNeighFreq_r13__setup {
					LTE_PhysCellIdList_r13_t	 physCellId_r13;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *rxParamsAddNeighFreq_r13;
		struct LTE_SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13 {
			LTE_SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13_PR present;
			union LTE_SL_DiscResourcePool_r12__LTE_ext1__LTE_txParamsAddNeighFreq_r13_u {
				NULL_t	 release;
				struct LTE_SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup {
					LTE_PhysCellIdList_r13_t	 physCellId_r13;
					LTE_P_Max_t	*p_Max;	/* OPTIONAL */
					struct LTE_TDD_Config	*tdd_Config_r13;	/* OPTIONAL */
					struct LTE_TDD_Config_v1130	*tdd_Config_v1130;	/* OPTIONAL */
					struct LTE_SL_DiscResourcePool_r12__ext1__txParamsAddNeighFreq_r13__setup__freqInfo {
						LTE_ARFCN_ValueEUTRA_t	*ul_CarrierFreq;	/* OPTIONAL */
						long	*ul_Bandwidth;	/* OPTIONAL */
						LTE_AdditionalSpectrumEmission_t	 additionalSpectrumEmission;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} freqInfo;
					long	 referenceSignalPower;
					long	*syncConfigIndex_r13;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *txParamsAddNeighFreq_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_SL_DiscResourcePool_r12__ext2 {
		struct LTE_SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370 {
			LTE_SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370_PR present;
			union LTE_SL_DiscResourcePool_r12__LTE_ext2__LTE_txParamsAddNeighFreq_v1370_u {
				NULL_t	 release;
				struct LTE_SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370__setup {
					struct LTE_SL_DiscResourcePool_r12__ext2__txParamsAddNeighFreq_v1370__setup__freqInfo_v1370 {
						LTE_AdditionalSpectrumEmission_v10l0_t	 additionalSpectrumEmission_v1370;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} freqInfo_v1370;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *txParamsAddNeighFreq_v1370;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_DiscResourcePool_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_discPeriod_r12_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_txProbability_r12_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_setup_33;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ul_Bandwidth_55;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_DiscResourcePool_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_DiscResourcePool_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_DiscResourcePool_r12_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_TDD-Config.h"
#include "LTE_TDD-Config-v1130.h"

#endif	/* _LTE_SL_DiscResourcePool_r12_H_ */
#include <asn_internal.h>
