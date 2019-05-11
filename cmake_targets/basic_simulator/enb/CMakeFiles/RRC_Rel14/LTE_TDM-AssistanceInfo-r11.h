/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_TDM_AssistanceInfo_r11_H_
#define	_LTE_TDM_AssistanceInfo_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_IDC-SubframePatternList-r11.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_TDM_AssistanceInfo_r11_PR {
	LTE_TDM_AssistanceInfo_r11_PR_NOTHING,	/* No components present */
	LTE_TDM_AssistanceInfo_r11_PR_drx_AssistanceInfo_r11,
	LTE_TDM_AssistanceInfo_r11_PR_idc_SubframePatternList_r11
	/* Extensions may appear below */
	
} LTE_TDM_AssistanceInfo_r11_PR;
typedef enum LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11 {
	LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11_sf40	= 0,
	LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11_sf64	= 1,
	LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11_sf80	= 2,
	LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11_sf128	= 3,
	LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11_sf160	= 4,
	LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11_sf256	= 5,
	LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11_spare2	= 6,
	LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11_spare1	= 7
} e_LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_CycleLength_r11;
typedef enum LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11 {
	LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11_sf20	= 0,
	LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11_sf30	= 1,
	LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11_sf40	= 2,
	LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11_sf60	= 3,
	LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11_sf80	= 4,
	LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11_sf100	= 5,
	LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11_spare2	= 6,
	LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11_spare1	= 7
} e_LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11__drx_ActiveTime_r11;

/* LTE_TDM-AssistanceInfo-r11 */
typedef struct LTE_TDM_AssistanceInfo_r11 {
	LTE_TDM_AssistanceInfo_r11_PR present;
	union LTE_TDM_AssistanceInfo_r11_u {
		struct LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11 {
			long	 drx_CycleLength_r11;
			long	*drx_Offset_r11;	/* OPTIONAL */
			long	 drx_ActiveTime_r11;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} drx_AssistanceInfo_r11;
		LTE_IDC_SubframePatternList_r11_t	 idc_SubframePatternList_r11;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_TDM_AssistanceInfo_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drx_CycleLength_r11_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_drx_ActiveTime_r11_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_TDM_AssistanceInfo_r11;
extern asn_CHOICE_specifics_t asn_SPC_LTE_TDM_AssistanceInfo_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_TDM_AssistanceInfo_r11_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_TDM_AssistanceInfo_r11_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_TDM_AssistanceInfo_r11_H_ */
#include <asn_internal.h>
