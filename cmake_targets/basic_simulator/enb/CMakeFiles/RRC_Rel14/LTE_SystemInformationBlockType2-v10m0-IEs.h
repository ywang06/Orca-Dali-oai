/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformationBlockType2_v10m0_IEs_H_
#define	_LTE_SystemInformationBlockType2_v10m0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_AdditionalSpectrumEmission-v10l0.h"
#include <constr_SEQUENCE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_SystemInformationBlockType2-v10m0-IEs */
typedef struct LTE_SystemInformationBlockType2_v10m0_IEs {
	struct LTE_SystemInformationBlockType2_v10m0_IEs__freqInfo_v10l0 {
		LTE_AdditionalSpectrumEmission_v10l0_t	 additionalSpectrumEmission_v10l0;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *freqInfo_v10l0;
	struct LTE_SystemInformationBlockType2_v10m0_IEs__multiBandInfoList_v10l0 {
		A_SEQUENCE_OF(LTE_AdditionalSpectrumEmission_v10l0_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *multiBandInfoList_v10l0;
	struct LTE_SystemInformationBlockType2_v10m0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType2_v10m0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType2_v10m0_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SystemInformationBlockType2_v10m0_IEs_H_ */
#include <asn_internal.h>
