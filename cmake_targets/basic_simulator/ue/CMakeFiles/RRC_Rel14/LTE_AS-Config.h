/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_AS_Config_H_
#define	_LTE_AS_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MeasConfig.h"
#include "LTE_RadioResourceConfigDedicated.h"
#include "LTE_SecurityAlgorithmConfig.h"
#include "LTE_C-RNTI.h"
#include "LTE_MasterInformationBlock.h"
#include "LTE_SystemInformationBlockType1.h"
#include "LTE_SystemInformationBlockType2.h"
#include "LTE_AntennaInfoCommon.h"
#include "LTE_ARFCN-ValueEUTRA.h"
#include <OCTET_STRING.h>
#include "LTE_OtherConfig-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_SCellToAddModList_r10;
struct LTE_SCG_Config_r12;

/* LTE_AS-Config */
typedef struct LTE_AS_Config {
	LTE_MeasConfig_t	 sourceMeasConfig;
	LTE_RadioResourceConfigDedicated_t	 sourceRadioResourceConfig;
	LTE_SecurityAlgorithmConfig_t	 sourceSecurityAlgorithmConfig;
	LTE_C_RNTI_t	 sourceUE_Identity;
	LTE_MasterInformationBlock_t	 sourceMasterInformationBlock;
	LTE_SystemInformationBlockType1_t	 sourceSystemInformationBlockType1;
	LTE_SystemInformationBlockType2_t	 sourceSystemInformationBlockType2;
	LTE_AntennaInfoCommon_t	 antennaInfoCommon;
	LTE_ARFCN_ValueEUTRA_t	 sourceDl_CarrierFreq;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_AS_Config__ext1 {
		OCTET_STRING_t	*sourceSystemInformationBlockType1Ext;	/* OPTIONAL */
		LTE_OtherConfig_r9_t	 sourceOtherConfig_r9;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_AS_Config__ext2 {
		struct LTE_SCellToAddModList_r10	*sourceSCellConfigList_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_AS_Config__ext3 {
		struct LTE_SCG_Config_r12	*sourceConfigSCG_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_AS_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_AS_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_AS_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_AS_Config_1[12];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SCellToAddModList-r10.h"
#include "LTE_SCG-Config-r12.h"

#endif	/* _LTE_AS_Config_H_ */
#include <asn_internal.h>
