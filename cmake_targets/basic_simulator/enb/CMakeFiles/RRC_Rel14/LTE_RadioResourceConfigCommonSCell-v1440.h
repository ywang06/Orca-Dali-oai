/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RadioResourceConfigCommonSCell_v1440_H_
#define	_LTE_RadioResourceConfigCommonSCell_v1440_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_AdditionalSpectrumEmission-v10l0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_RadioResourceConfigCommonSCell-v1440 */
typedef struct LTE_RadioResourceConfigCommonSCell_v1440 {
	struct LTE_RadioResourceConfigCommonSCell_v1440__ul_Configuration_v1440 {
		struct LTE_RadioResourceConfigCommonSCell_v1440__ul_Configuration_v1440__ul_FreqInfo_v1440 {
			LTE_AdditionalSpectrumEmission_v10l0_t	 additionalSpectrumEmissionSCell_v1440;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} ul_FreqInfo_v1440;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ul_Configuration_v1440;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RadioResourceConfigCommonSCell_v1440_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RadioResourceConfigCommonSCell_v1440;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RadioResourceConfigCommonSCell_v1440_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RadioResourceConfigCommonSCell_v1440_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RadioResourceConfigCommonSCell_v1440_H_ */
#include <asn_internal.h>
