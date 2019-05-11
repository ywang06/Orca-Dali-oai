/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_InterFreqCarrierFreqInfo_H_
#define	_LTE_InterFreqCarrierFreqInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ARFCN-ValueEUTRA.h"
#include "LTE_Q-RxLevMin.h"
#include "LTE_P-Max.h"
#include "LTE_T-Reselection.h"
#include "LTE_ReselectionThreshold.h"
#include "LTE_AllowedMeasBandwidth.h"
#include "LTE_PresenceAntennaPort1.h"
#include "LTE_CellReselectionPriority.h"
#include "LTE_NeighCellConfig.h"
#include "LTE_Q-OffsetRange.h"
#include "LTE_Q-QualMin-r9.h"
#include "LTE_ReselectionThresholdQ-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_SpeedStateScaleFactors;
struct LTE_InterFreqNeighCellList;
struct LTE_InterFreqBlackCellList;

/* LTE_InterFreqCarrierFreqInfo */
typedef struct LTE_InterFreqCarrierFreqInfo {
	LTE_ARFCN_ValueEUTRA_t	 dl_CarrierFreq;
	LTE_Q_RxLevMin_t	 q_RxLevMin;
	LTE_P_Max_t	*p_Max;	/* OPTIONAL */
	LTE_T_Reselection_t	 t_ReselectionEUTRA;
	struct LTE_SpeedStateScaleFactors	*t_ReselectionEUTRA_SF;	/* OPTIONAL */
	LTE_ReselectionThreshold_t	 threshX_High;
	LTE_ReselectionThreshold_t	 threshX_Low;
	LTE_AllowedMeasBandwidth_t	 allowedMeasBandwidth;
	LTE_PresenceAntennaPort1_t	 presenceAntennaPort1;
	LTE_CellReselectionPriority_t	*cellReselectionPriority;	/* OPTIONAL */
	LTE_NeighCellConfig_t	 neighCellConfig;
	LTE_Q_OffsetRange_t	*q_OffsetFreq;	/* DEFAULT 15 */
	struct LTE_InterFreqNeighCellList	*interFreqNeighCellList;	/* OPTIONAL */
	struct LTE_InterFreqBlackCellList	*interFreqBlackCellList;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_InterFreqCarrierFreqInfo__ext1 {
		LTE_Q_QualMin_r9_t	*q_QualMin_r9;	/* OPTIONAL */
		struct LTE_InterFreqCarrierFreqInfo__ext1__threshX_Q_r9 {
			LTE_ReselectionThresholdQ_r9_t	 threshX_HighQ_r9;
			LTE_ReselectionThresholdQ_r9_t	 threshX_LowQ_r9;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *threshX_Q_r9;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_InterFreqCarrierFreqInfo__ext2 {
		LTE_Q_QualMin_r9_t	*q_QualMinWB_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_InterFreqCarrierFreqInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_InterFreqCarrierFreqInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_InterFreqCarrierFreqInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_InterFreqCarrierFreqInfo_1[16];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SpeedStateScaleFactors.h"
#include "LTE_InterFreqNeighCellList.h"
#include "LTE_InterFreqBlackCellList.h"

#endif	/* _LTE_InterFreqCarrierFreqInfo_H_ */
#include <asn_internal.h>
