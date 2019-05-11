/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_AreaConfiguration_r10_H_
#define	_LTE_AreaConfiguration_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CellGlobalIdList-r10.h"
#include "LTE_TrackingAreaCodeList-r10.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_AreaConfiguration_r10_PR {
	LTE_AreaConfiguration_r10_PR_NOTHING,	/* No components present */
	LTE_AreaConfiguration_r10_PR_cellGlobalIdList_r10,
	LTE_AreaConfiguration_r10_PR_trackingAreaCodeList_r10
} LTE_AreaConfiguration_r10_PR;

/* LTE_AreaConfiguration-r10 */
typedef struct LTE_AreaConfiguration_r10 {
	LTE_AreaConfiguration_r10_PR present;
	union LTE_AreaConfiguration_r10_u {
		LTE_CellGlobalIdList_r10_t	 cellGlobalIdList_r10;
		LTE_TrackingAreaCodeList_r10_t	 trackingAreaCodeList_r10;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_AreaConfiguration_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_AreaConfiguration_r10;
extern asn_CHOICE_specifics_t asn_SPC_LTE_AreaConfiguration_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_AreaConfiguration_r10_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_AreaConfiguration_r10_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_AreaConfiguration_r10_H_ */
#include <asn_internal.h>
