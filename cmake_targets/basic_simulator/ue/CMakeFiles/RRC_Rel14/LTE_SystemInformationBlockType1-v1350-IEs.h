/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformationBlockType1_v1350_IEs_H_
#define	_LTE_SystemInformationBlockType1_v1350_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_CellSelectionInfoCE1_r13;
struct LTE_SystemInformationBlockType1_v1360_IEs;

/* LTE_SystemInformationBlockType1-v1350-IEs */
typedef struct LTE_SystemInformationBlockType1_v1350_IEs {
	struct LTE_CellSelectionInfoCE1_r13	*cellSelectionInfoCE1_r13;	/* OPTIONAL */
	struct LTE_SystemInformationBlockType1_v1360_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType1_v1350_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType1_v1350_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType1_v1350_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType1_v1350_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CellSelectionInfoCE1-r13.h"
#include "LTE_SystemInformationBlockType1-v1360-IEs.h"

#endif	/* _LTE_SystemInformationBlockType1_v1350_IEs_H_ */
#include <asn_internal.h>
