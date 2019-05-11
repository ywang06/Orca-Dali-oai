/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_InterFreqCarrierFreqInfo_v1310_H_
#define	_LTE_InterFreqCarrierFreqInfo_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CellReselectionSubPriority-r13.h"
#include "LTE_T-ReselectionEUTRA-CE-r13.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_RedistributionInterFreqInfo_r13;
struct LTE_CellSelectionInfoCE_r13;

/* LTE_InterFreqCarrierFreqInfo-v1310 */
typedef struct LTE_InterFreqCarrierFreqInfo_v1310 {
	LTE_CellReselectionSubPriority_r13_t	*cellReselectionSubPriority_r13;	/* OPTIONAL */
	struct LTE_RedistributionInterFreqInfo_r13	*redistributionInterFreqInfo_r13;	/* OPTIONAL */
	struct LTE_CellSelectionInfoCE_r13	*cellSelectionInfoCE_r13;	/* OPTIONAL */
	LTE_T_ReselectionEUTRA_CE_r13_t	*t_ReselectionEUTRA_CE_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_InterFreqCarrierFreqInfo_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_InterFreqCarrierFreqInfo_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_InterFreqCarrierFreqInfo_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_InterFreqCarrierFreqInfo_v1310_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_RedistributionInterFreqInfo-r13.h"
#include "LTE_CellSelectionInfoCE-r13.h"

#endif	/* _LTE_InterFreqCarrierFreqInfo_v1310_H_ */
#include <asn_internal.h>
