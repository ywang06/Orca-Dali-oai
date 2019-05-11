/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MIMO_UE_ParametersPerTM_r13_H_
#define	_LTE_MIMO_UE_ParametersPerTM_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MIMO_UE_ParametersPerTM_r13__channelMeasRestriction_r13 {
	LTE_MIMO_UE_ParametersPerTM_r13__channelMeasRestriction_r13_supported	= 0
} e_LTE_MIMO_UE_ParametersPerTM_r13__channelMeasRestriction_r13;
typedef enum LTE_MIMO_UE_ParametersPerTM_r13__dmrs_Enhancements_r13 {
	LTE_MIMO_UE_ParametersPerTM_r13__dmrs_Enhancements_r13_supported	= 0
} e_LTE_MIMO_UE_ParametersPerTM_r13__dmrs_Enhancements_r13;
typedef enum LTE_MIMO_UE_ParametersPerTM_r13__csi_RS_EnhancementsTDD_r13 {
	LTE_MIMO_UE_ParametersPerTM_r13__csi_RS_EnhancementsTDD_r13_supported	= 0
} e_LTE_MIMO_UE_ParametersPerTM_r13__csi_RS_EnhancementsTDD_r13;

/* Forward declarations */
struct LTE_MIMO_NonPrecodedCapabilities_r13;
struct LTE_MIMO_UE_BeamformedCapabilities_r13;

/* LTE_MIMO-UE-ParametersPerTM-r13 */
typedef struct LTE_MIMO_UE_ParametersPerTM_r13 {
	struct LTE_MIMO_NonPrecodedCapabilities_r13	*nonPrecoded_r13;	/* OPTIONAL */
	struct LTE_MIMO_UE_BeamformedCapabilities_r13	*beamformed_r13;	/* OPTIONAL */
	long	*channelMeasRestriction_r13;	/* OPTIONAL */
	long	*dmrs_Enhancements_r13;	/* OPTIONAL */
	long	*csi_RS_EnhancementsTDD_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MIMO_UE_ParametersPerTM_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_channelMeasRestriction_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_dmrs_Enhancements_r13_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_csi_RS_EnhancementsTDD_r13_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MIMO_UE_ParametersPerTM_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MIMO_UE_ParametersPerTM_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MIMO_UE_ParametersPerTM_r13_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MIMO-NonPrecodedCapabilities-r13.h"
#include "LTE_MIMO-UE-BeamformedCapabilities-r13.h"

#endif	/* _LTE_MIMO_UE_ParametersPerTM_r13_H_ */
#include <asn_internal.h>
