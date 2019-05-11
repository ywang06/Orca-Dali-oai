/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MeasResultServFreq_r13_H_
#define	_LTE_MeasResultServFreq_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ServCellIndex-r13.h"
#include "LTE_RSRP-Range.h"
#include "LTE_RSRQ-Range-r13.h"
#include "LTE_RS-SINR-Range-r13.h"
#include <constr_SEQUENCE.h>
#include "LTE_PhysCellId.h"
#include "LTE_RSRP-Range-v1360.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_MeasResultServFreq-r13 */
typedef struct LTE_MeasResultServFreq_r13 {
	LTE_ServCellIndex_r13_t	 servFreqId_r13;
	struct LTE_MeasResultServFreq_r13__measResultSCell_r13 {
		LTE_RSRP_Range_t	 rsrpResultSCell_r13;
		LTE_RSRQ_Range_r13_t	 rsrqResultSCell_r13;
		LTE_RS_SINR_Range_r13_t	*rs_sinr_Result_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultSCell_r13;
	struct LTE_MeasResultServFreq_r13__measResultBestNeighCell_r13 {
		LTE_PhysCellId_t	 physCellId_r13;
		LTE_RSRP_Range_t	 rsrpResultNCell_r13;
		LTE_RSRQ_Range_r13_t	 rsrqResultNCell_r13;
		LTE_RS_SINR_Range_r13_t	*rs_sinr_Result_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultBestNeighCell_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_MeasResultServFreq_r13__ext1 {
		struct LTE_MeasResultServFreq_r13__ext1__measResultBestNeighCell_v1360 {
			LTE_RSRP_Range_v1360_t	 rsrpResultNCell_v1360;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *measResultBestNeighCell_v1360;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasResultServFreq_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasResultServFreq_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasResultServFreq_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasResultServFreq_r13_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MeasResultServFreq_r13_H_ */
#include <asn_internal.h>
