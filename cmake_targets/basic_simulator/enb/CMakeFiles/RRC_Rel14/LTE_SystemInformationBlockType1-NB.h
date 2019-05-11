/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformationBlockType1_NB_H_
#define	_LTE_SystemInformationBlockType1_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "LTE_P-Max.h"
#include "LTE_FreqBandIndicator-NB-r13.h"
#include <NativeEnumerated.h>
#include "LTE_SchedulingInfoList-NB-r13.h"
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include "LTE_PLMN-IdentityList-NB-r13.h"
#include "LTE_TrackingAreaCode.h"
#include "LTE_CellIdentity.h"
#include <constr_SEQUENCE.h>
#include "LTE_Q-RxLevMin.h"
#include "LTE_Q-QualMin-r9.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13__cellBarred_r13 {
	LTE_SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13__cellBarred_r13_barred	= 0,
	LTE_SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13__cellBarred_r13_notBarred	= 1
} e_LTE_SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13__cellBarred_r13;
typedef enum LTE_SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13__intraFreqReselection_r13 {
	LTE_SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13__intraFreqReselection_r13_allowed	= 0,
	LTE_SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13__intraFreqReselection_r13_notAllowed	= 1
} e_LTE_SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13__intraFreqReselection_r13;
typedef enum LTE_SystemInformationBlockType1_NB__eutraControlRegionSize_r13 {
	LTE_SystemInformationBlockType1_NB__eutraControlRegionSize_r13_n1	= 0,
	LTE_SystemInformationBlockType1_NB__eutraControlRegionSize_r13_n2	= 1,
	LTE_SystemInformationBlockType1_NB__eutraControlRegionSize_r13_n3	= 2
} e_LTE_SystemInformationBlockType1_NB__eutraControlRegionSize_r13;
typedef enum LTE_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13 {
	LTE_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB_6	= 0,
	LTE_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB_4dot77	= 1,
	LTE_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB_3	= 2,
	LTE_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB_1dot77	= 3,
	LTE_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB0	= 4,
	LTE_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB1	= 5,
	LTE_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB1dot23	= 6,
	LTE_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB2	= 7,
	LTE_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB3	= 8,
	LTE_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB4	= 9,
	LTE_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB4dot23	= 10,
	LTE_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB5	= 11,
	LTE_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB6	= 12,
	LTE_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB7	= 13,
	LTE_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB8	= 14,
	LTE_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13_dB9	= 15
} e_LTE_SystemInformationBlockType1_NB__nrs_CRS_PowerOffset_r13;
typedef enum LTE_SystemInformationBlockType1_NB__si_WindowLength_r13 {
	LTE_SystemInformationBlockType1_NB__si_WindowLength_r13_ms160	= 0,
	LTE_SystemInformationBlockType1_NB__si_WindowLength_r13_ms320	= 1,
	LTE_SystemInformationBlockType1_NB__si_WindowLength_r13_ms480	= 2,
	LTE_SystemInformationBlockType1_NB__si_WindowLength_r13_ms640	= 3,
	LTE_SystemInformationBlockType1_NB__si_WindowLength_r13_ms960	= 4,
	LTE_SystemInformationBlockType1_NB__si_WindowLength_r13_ms1280	= 5,
	LTE_SystemInformationBlockType1_NB__si_WindowLength_r13_ms1600	= 6,
	LTE_SystemInformationBlockType1_NB__si_WindowLength_r13_spare1	= 7
} e_LTE_SystemInformationBlockType1_NB__si_WindowLength_r13;

/* Forward declarations */
struct LTE_NS_PmaxList_NB_r13;
struct LTE_MultiBandInfoList_NB_r13;
struct LTE_DL_Bitmap_NB_r13;
struct LTE_SystemInfoValueTagList_NB_r13;
struct LTE_SystemInformationBlockType1_NB_v1350;

/* LTE_SystemInformationBlockType1-NB */
typedef struct LTE_SystemInformationBlockType1_NB {
	BIT_STRING_t	 hyperSFN_MSB_r13;
	struct LTE_SystemInformationBlockType1_NB__cellAccessRelatedInfo_r13 {
		LTE_PLMN_IdentityList_NB_r13_t	 plmn_IdentityList_r13;
		LTE_TrackingAreaCode_t	 trackingAreaCode_r13;
		LTE_CellIdentity_t	 cellIdentity_r13;
		long	 cellBarred_r13;
		long	 intraFreqReselection_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cellAccessRelatedInfo_r13;
	struct LTE_SystemInformationBlockType1_NB__cellSelectionInfo_r13 {
		LTE_Q_RxLevMin_t	 q_RxLevMin_r13;
		LTE_Q_QualMin_r9_t	 q_QualMin_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cellSelectionInfo_r13;
	LTE_P_Max_t	*p_Max_r13;	/* OPTIONAL */
	LTE_FreqBandIndicator_NB_r13_t	 freqBandIndicator_r13;
	struct LTE_NS_PmaxList_NB_r13	*freqBandInfo_r13;	/* OPTIONAL */
	struct LTE_MultiBandInfoList_NB_r13	*multiBandInfoList_r13;	/* OPTIONAL */
	struct LTE_DL_Bitmap_NB_r13	*downlinkBitmap_r13;	/* OPTIONAL */
	long	*eutraControlRegionSize_r13;	/* OPTIONAL */
	long	*nrs_CRS_PowerOffset_r13;	/* OPTIONAL */
	LTE_SchedulingInfoList_NB_r13_t	 schedulingInfoList_r13;
	long	 si_WindowLength_r13;
	long	*si_RadioFrameOffset_r13;	/* OPTIONAL */
	struct LTE_SystemInfoValueTagList_NB_r13	*systemInfoValueTagList_r13;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct LTE_SystemInformationBlockType1_NB_v1350	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType1_NB_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_cellBarred_r13_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_intraFreqReselection_r13_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_eutraControlRegionSize_r13_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_nrs_CRS_PowerOffset_r13_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_si_WindowLength_r13_43;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType1_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType1_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType1_NB_1[16];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_NS-PmaxList-NB-r13.h"
#include "LTE_MultiBandInfoList-NB-r13.h"
#include "LTE_DL-Bitmap-NB-r13.h"
#include "LTE_SystemInfoValueTagList-NB-r13.h"
#include "LTE_SystemInformationBlockType1-NB-v1350.h"

#endif	/* _LTE_SystemInformationBlockType1_NB_H_ */
#include <asn_internal.h>
