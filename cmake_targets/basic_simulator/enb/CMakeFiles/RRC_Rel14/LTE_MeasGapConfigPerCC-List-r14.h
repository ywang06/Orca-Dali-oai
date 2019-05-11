/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MeasGapConfigPerCC_List_r14_H_
#define	_LTE_MeasGapConfigPerCC_List_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MeasGapConfigPerCC_List_r14_PR {
	LTE_MeasGapConfigPerCC_List_r14_PR_NOTHING,	/* No components present */
	LTE_MeasGapConfigPerCC_List_r14_PR_release,
	LTE_MeasGapConfigPerCC_List_r14_PR_setup
} LTE_MeasGapConfigPerCC_List_r14_PR;

/* Forward declarations */
struct LTE_MeasGapConfigToRemoveList_r14;
struct LTE_MeasGapConfigToAddModList_r14;

/* LTE_MeasGapConfigPerCC-List-r14 */
typedef struct LTE_MeasGapConfigPerCC_List_r14 {
	LTE_MeasGapConfigPerCC_List_r14_PR present;
	union LTE_MeasGapConfigPerCC_List_r14_u {
		NULL_t	 release;
		struct LTE_MeasGapConfigPerCC_List_r14__setup {
			struct LTE_MeasGapConfigToRemoveList_r14	*measGapConfigToRemoveList_r14;	/* OPTIONAL */
			struct LTE_MeasGapConfigToAddModList_r14	*measGapConfigToAddModList_r14;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasGapConfigPerCC_List_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasGapConfigPerCC_List_r14;
extern asn_CHOICE_specifics_t asn_SPC_LTE_MeasGapConfigPerCC_List_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasGapConfigPerCC_List_r14_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_MeasGapConfigPerCC_List_r14_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MeasGapConfigToRemoveList-r14.h"
#include "LTE_MeasGapConfigToAddModList-r14.h"

#endif	/* _LTE_MeasGapConfigPerCC_List_r14_H_ */
#include <asn_internal.h>
