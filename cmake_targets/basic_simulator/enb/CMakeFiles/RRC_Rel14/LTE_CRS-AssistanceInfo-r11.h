/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CRS_AssistanceInfo_r11_H_
#define	_LTE_CRS_AssistanceInfo_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PhysCellId.h"
#include <NativeEnumerated.h>
#include "LTE_MBSFN-SubframeConfigList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CRS_AssistanceInfo_r11__antennaPortsCount_r11 {
	LTE_CRS_AssistanceInfo_r11__antennaPortsCount_r11_an1	= 0,
	LTE_CRS_AssistanceInfo_r11__antennaPortsCount_r11_an2	= 1,
	LTE_CRS_AssistanceInfo_r11__antennaPortsCount_r11_an4	= 2,
	LTE_CRS_AssistanceInfo_r11__antennaPortsCount_r11_spare1	= 3
} e_LTE_CRS_AssistanceInfo_r11__antennaPortsCount_r11;

/* Forward declarations */
struct LTE_MBSFN_SubframeConfigList_v1430;

/* LTE_CRS-AssistanceInfo-r11 */
typedef struct LTE_CRS_AssistanceInfo_r11 {
	LTE_PhysCellId_t	 physCellId_r11;
	long	 antennaPortsCount_r11;
	LTE_MBSFN_SubframeConfigList_t	 mbsfn_SubframeConfigList_r11;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_CRS_AssistanceInfo_r11__ext1 {
		struct LTE_MBSFN_SubframeConfigList_v1430	*mbsfn_SubframeConfigList_v1430;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CRS_AssistanceInfo_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_antennaPortsCount_r11_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CRS_AssistanceInfo_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CRS_AssistanceInfo_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CRS_AssistanceInfo_r11_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MBSFN-SubframeConfigList-v1430.h"

#endif	/* _LTE_CRS_AssistanceInfo_r11_H_ */
#include <asn_internal.h>
