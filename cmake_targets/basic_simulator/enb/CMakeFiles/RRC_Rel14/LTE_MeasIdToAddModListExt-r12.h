/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MeasIdToAddModListExt_r12_H_
#define	_LTE_MeasIdToAddModListExt_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_MeasIdToAddModExt_r12;

/* LTE_MeasIdToAddModListExt-r12 */
typedef struct LTE_MeasIdToAddModListExt_r12 {
	A_SEQUENCE_OF(struct LTE_MeasIdToAddModExt_r12) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasIdToAddModListExt_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasIdToAddModListExt_r12;
extern asn_SET_OF_specifics_t asn_SPC_LTE_MeasIdToAddModListExt_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasIdToAddModListExt_r12_1[1];
extern asn_per_constraints_t asn_PER_type_LTE_MeasIdToAddModListExt_r12_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MeasIdToAddModExt-r12.h"

#endif	/* _LTE_MeasIdToAddModListExt_r12_H_ */
#include <asn_internal.h>
