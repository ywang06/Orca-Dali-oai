/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RadioResourceConfigDedicated_H_
#define	_LTE_RadioResourceConfigDedicated_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MAC-MainConfig.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RadioResourceConfigDedicated__mac_MainConfig_PR {
	LTE_RadioResourceConfigDedicated__mac_MainConfig_PR_NOTHING,	/* No components present */
	LTE_RadioResourceConfigDedicated__mac_MainConfig_PR_explicitValue,
	LTE_RadioResourceConfigDedicated__mac_MainConfig_PR_defaultValue
} LTE_RadioResourceConfigDedicated__mac_MainConfig_PR;

/* Forward declarations */
struct LTE_SRB_ToAddModList;
struct LTE_DRB_ToAddModList;
struct LTE_DRB_ToReleaseList;
struct LTE_SPS_Config;
struct LTE_PhysicalConfigDedicated;
struct LTE_RLF_TimersAndConstants_r9;
struct LTE_MeasSubframePatternPCell_r10;
struct LTE_NeighCellsCRS_Info_r11;
struct LTE_NAICS_AssistanceInfo_r12;
struct LTE_NeighCellsCRS_Info_r13;
struct LTE_RLF_TimersAndConstants_r13;
struct LTE_SPS_Config_v1430;

/* LTE_RadioResourceConfigDedicated */
typedef struct LTE_RadioResourceConfigDedicated {
	struct LTE_SRB_ToAddModList	*srb_ToAddModList;	/* OPTIONAL */
	struct LTE_DRB_ToAddModList	*drb_ToAddModList;	/* OPTIONAL */
	struct LTE_DRB_ToReleaseList	*drb_ToReleaseList;	/* OPTIONAL */
	struct LTE_RadioResourceConfigDedicated__mac_MainConfig {
		LTE_RadioResourceConfigDedicated__mac_MainConfig_PR present;
		union LTE_RadioResourceConfigDedicated__LTE_mac_MainConfig_u {
			LTE_MAC_MainConfig_t	 explicitValue;
			NULL_t	 defaultValue;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mac_MainConfig;
	struct LTE_SPS_Config	*sps_Config;	/* OPTIONAL */
	struct LTE_PhysicalConfigDedicated	*physicalConfigDedicated;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_RadioResourceConfigDedicated__ext1 {
		struct LTE_RLF_TimersAndConstants_r9	*rlf_TimersAndConstants_r9;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_RadioResourceConfigDedicated__ext2 {
		struct LTE_MeasSubframePatternPCell_r10	*measSubframePatternPCell_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_RadioResourceConfigDedicated__ext3 {
		struct LTE_NeighCellsCRS_Info_r11	*neighCellsCRS_Info_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_RadioResourceConfigDedicated__ext4 {
		struct LTE_NAICS_AssistanceInfo_r12	*naics_Info_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct LTE_RadioResourceConfigDedicated__ext5 {
		struct LTE_NeighCellsCRS_Info_r13	*neighCellsCRS_Info_r13;	/* OPTIONAL */
		struct LTE_RLF_TimersAndConstants_r13	*rlf_TimersAndConstants_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct LTE_RadioResourceConfigDedicated__ext6 {
		struct LTE_SPS_Config_v1430	*sps_Config_v1430;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RadioResourceConfigDedicated_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RadioResourceConfigDedicated;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RadioResourceConfigDedicated_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RadioResourceConfigDedicated_1[12];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SRB-ToAddModList.h"
#include "LTE_DRB-ToAddModList.h"
#include "LTE_DRB-ToReleaseList.h"
#include "LTE_SPS-Config.h"
#include "LTE_PhysicalConfigDedicated.h"
#include "LTE_RLF-TimersAndConstants-r9.h"
#include "LTE_MeasSubframePatternPCell-r10.h"
#include "LTE_NeighCellsCRS-Info-r11.h"
#include "LTE_NAICS-AssistanceInfo-r12.h"
#include "LTE_NeighCellsCRS-Info-r13.h"
#include "LTE_RLF-TimersAndConstants-r13.h"
#include "LTE_SPS-Config-v1430.h"

#endif	/* _LTE_RadioResourceConfigDedicated_H_ */
#include <asn_internal.h>
