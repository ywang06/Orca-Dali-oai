/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CSI_RS_ConfigNZP_EMIMO_v1430_H_
#define	_LTE_CSI_RS_ConfigNZP_EMIMO_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CSI_RS_ConfigNZP_EMIMO_v1430__cdmType_v1430 {
	LTE_CSI_RS_ConfigNZP_EMIMO_v1430__cdmType_v1430_cdm8	= 0
} e_LTE_CSI_RS_ConfigNZP_EMIMO_v1430__cdmType_v1430;

/* Forward declarations */
struct LTE_NZP_ResourceConfig_r13;

/* LTE_CSI-RS-ConfigNZP-EMIMO-v1430 */
typedef struct LTE_CSI_RS_ConfigNZP_EMIMO_v1430 {
	struct LTE_CSI_RS_ConfigNZP_EMIMO_v1430__nzp_resourceConfigListExt_r14 {
		A_SEQUENCE_OF(struct LTE_NZP_ResourceConfig_r13) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} nzp_resourceConfigListExt_r14;
	long	*cdmType_v1430;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CSI_RS_ConfigNZP_EMIMO_v1430_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_cdmType_v1430_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CSI_RS_ConfigNZP_EMIMO_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CSI_RS_ConfigNZP_EMIMO_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CSI_RS_ConfigNZP_EMIMO_v1430_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_NZP-ResourceConfig-r13.h"

#endif	/* _LTE_CSI_RS_ConfigNZP_EMIMO_v1430_H_ */
#include <asn_internal.h>
