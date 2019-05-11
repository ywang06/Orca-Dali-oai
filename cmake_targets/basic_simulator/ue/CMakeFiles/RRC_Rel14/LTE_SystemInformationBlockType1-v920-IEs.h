/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformationBlockType1_v920_IEs_H_
#define	_LTE_SystemInformationBlockType1_v920_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformationBlockType1_v920_IEs__ims_EmergencySupport_r9 {
	LTE_SystemInformationBlockType1_v920_IEs__ims_EmergencySupport_r9_true	= 0
} e_LTE_SystemInformationBlockType1_v920_IEs__ims_EmergencySupport_r9;

/* Forward declarations */
struct LTE_CellSelectionInfo_v920;
struct LTE_SystemInformationBlockType1_v1130_IEs;

/* LTE_SystemInformationBlockType1-v920-IEs */
typedef struct LTE_SystemInformationBlockType1_v920_IEs {
	long	*ims_EmergencySupport_r9;	/* OPTIONAL */
	struct LTE_CellSelectionInfo_v920	*cellSelectionInfo_v920;	/* OPTIONAL */
	struct LTE_SystemInformationBlockType1_v1130_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType1_v920_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ims_EmergencySupport_r9_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType1_v920_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType1_v920_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType1_v920_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CellSelectionInfo-v920.h"
#include "LTE_SystemInformationBlockType1-v1130-IEs.h"

#endif	/* _LTE_SystemInformationBlockType1_v920_IEs_H_ */
#include <asn_internal.h>
