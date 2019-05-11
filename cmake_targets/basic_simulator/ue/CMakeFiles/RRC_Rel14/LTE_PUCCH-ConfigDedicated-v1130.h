/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PUCCH_ConfigDedicated_v1130_H_
#define	_LTE_PUCCH_ConfigDedicated_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130_PR {
	LTE_PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130_PR_NOTHING,	/* No components present */
	LTE_PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130_PR_release,
	LTE_PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130_PR_setup
} LTE_PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130_PR;
typedef enum LTE_PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11_PR {
	LTE_PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11_PR_NOTHING,	/* No components present */
	LTE_PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11_PR_release,
	LTE_PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11_PR_setup
} LTE_PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11_PR;

/* LTE_PUCCH-ConfigDedicated-v1130 */
typedef struct LTE_PUCCH_ConfigDedicated_v1130 {
	struct LTE_PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130 {
		LTE_PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130_PR present;
		union LTE_PUCCH_ConfigDedicated_v1130__LTE_n1PUCCH_AN_CS_v1130_u {
			NULL_t	 release;
			struct LTE_PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130__setup {
				struct LTE_PUCCH_ConfigDedicated_v1130__n1PUCCH_AN_CS_v1130__setup__n1PUCCH_AN_CS_ListP1_r11 {
					A_SEQUENCE_OF(long) list;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} n1PUCCH_AN_CS_ListP1_r11;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *n1PUCCH_AN_CS_v1130;
	struct LTE_PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11 {
		LTE_PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11_PR present;
		union LTE_PUCCH_ConfigDedicated_v1130__LTE_nPUCCH_Param_r11_u {
			NULL_t	 release;
			struct LTE_PUCCH_ConfigDedicated_v1130__nPUCCH_Param_r11__setup {
				long	 nPUCCH_Identity_r11;
				long	 n1PUCCH_AN_r11;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nPUCCH_Param_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PUCCH_ConfigDedicated_v1130_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PUCCH_ConfigDedicated_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PUCCH_ConfigDedicated_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PUCCH_ConfigDedicated_v1130_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PUCCH_ConfigDedicated_v1130_H_ */
#include <asn_internal.h>
