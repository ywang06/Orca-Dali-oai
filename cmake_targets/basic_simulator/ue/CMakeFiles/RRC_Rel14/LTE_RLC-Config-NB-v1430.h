/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RLC_Config_NB_v1430_H_
#define	_LTE_RLC_Config_NB_v1430_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_T-Reordering.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_RLC-Config-NB-v1430 */
typedef struct LTE_RLC_Config_NB_v1430 {
	LTE_T_Reordering_t	*t_Reordering_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RLC_Config_NB_v1430_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RLC_Config_NB_v1430;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RLC_Config_NB_v1430_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RLC_Config_NB_v1430_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RLC_Config_NB_v1430_H_ */
#include <asn_internal.h>
