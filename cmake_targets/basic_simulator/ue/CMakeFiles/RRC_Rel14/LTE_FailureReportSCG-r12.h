/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_FailureReportSCG_r12_H_
#define	_LTE_FailureReportSCG_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_FailureReportSCG_r12__failureType_r12 {
	LTE_FailureReportSCG_r12__failureType_r12_t313_Expiry	= 0,
	LTE_FailureReportSCG_r12__failureType_r12_randomAccessProblem	= 1,
	LTE_FailureReportSCG_r12__failureType_r12_rlc_MaxNumRetx	= 2,
	LTE_FailureReportSCG_r12__failureType_r12_scg_ChangeFailure	= 3
} e_LTE_FailureReportSCG_r12__failureType_r12;
typedef enum LTE_FailureReportSCG_r12__ext1__failureType_v1290 {
	LTE_FailureReportSCG_r12__ext1__failureType_v1290_maxUL_TimingDiff_v1290	= 0
} e_LTE_FailureReportSCG_r12__ext1__failureType_v1290;

/* Forward declarations */
struct LTE_MeasResultServFreqList_r10;
struct LTE_MeasResultList2EUTRA_r9;
struct LTE_MeasResultServFreqListExt_r13;

/* LTE_FailureReportSCG-r12 */
typedef struct LTE_FailureReportSCG_r12 {
	long	 failureType_r12;
	struct LTE_MeasResultServFreqList_r10	*measResultServFreqList_r12;	/* OPTIONAL */
	struct LTE_MeasResultList2EUTRA_r9	*measResultNeighCells_r12;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_FailureReportSCG_r12__ext1 {
		long	*failureType_v1290;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_FailureReportSCG_r12__ext2 {
		struct LTE_MeasResultServFreqListExt_r13	*measResultServFreqListExt_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_FailureReportSCG_r12_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_failureType_r12_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_failureType_v1290_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_FailureReportSCG_r12;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_FailureReportSCG_r12_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_FailureReportSCG_r12_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MeasResultServFreqList-r10.h"
#include "LTE_MeasResultList2EUTRA-r9.h"
#include "LTE_MeasResultServFreqListExt-r13.h"

#endif	/* _LTE_FailureReportSCG_r12_H_ */
#include <asn_internal.h>
