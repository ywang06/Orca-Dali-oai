/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformationBlockType1_v1430_IEs_H_
#define	_LTE_SystemInformationBlockType1_v1430_IEs_H_


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
typedef enum LTE_SystemInformationBlockType1_v1430_IEs__eCallOverIMS_Support_r14 {
	LTE_SystemInformationBlockType1_v1430_IEs__eCallOverIMS_Support_r14_true	= 0
} e_LTE_SystemInformationBlockType1_v1430_IEs__eCallOverIMS_Support_r14;

/* Forward declarations */
struct LTE_TDD_Config_v1430;
struct LTE_SystemInformationBlockType1_v1450_IEs;
struct LTE_CellAccessRelatedInfo_r14;

/* LTE_SystemInformationBlockType1-v1430-IEs */
typedef struct LTE_SystemInformationBlockType1_v1430_IEs {
	long	*eCallOverIMS_Support_r14;	/* OPTIONAL */
	struct LTE_TDD_Config_v1430	*tdd_Config_v1430;	/* OPTIONAL */
	struct LTE_SystemInformationBlockType1_v1430_IEs__cellAccessRelatedInfoList_r14 {
		A_SEQUENCE_OF(struct LTE_CellAccessRelatedInfo_r14) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cellAccessRelatedInfoList_r14;
	struct LTE_SystemInformationBlockType1_v1450_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType1_v1430_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_eCallOverIMS_Support_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType1_v1430_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType1_v1430_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType1_v1430_IEs_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_TDD-Config-v1430.h"
#include "LTE_SystemInformationBlockType1-v1450-IEs.h"
#include "LTE_CellAccessRelatedInfo-r14.h"

#endif	/* _LTE_SystemInformationBlockType1_v1430_IEs_H_ */
#include <asn_internal.h>
