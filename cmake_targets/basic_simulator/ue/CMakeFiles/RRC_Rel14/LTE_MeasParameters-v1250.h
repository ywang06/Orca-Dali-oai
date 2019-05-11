/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MeasParameters_v1250_H_
#define	_LTE_MeasParameters_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MeasParameters_v1250__timerT312_r12 {
	LTE_MeasParameters_v1250__timerT312_r12_supported	= 0
} e_LTE_MeasParameters_v1250__timerT312_r12;
typedef enum LTE_MeasParameters_v1250__alternativeTimeToTrigger_r12 {
	LTE_MeasParameters_v1250__alternativeTimeToTrigger_r12_supported	= 0
} e_LTE_MeasParameters_v1250__alternativeTimeToTrigger_r12;
typedef enum LTE_MeasParameters_v1250__incMonEUTRA_r12 {
	LTE_MeasParameters_v1250__incMonEUTRA_r12_supported	= 0
} e_LTE_MeasParameters_v1250__incMonEUTRA_r12;
typedef enum LTE_MeasParameters_v1250__incMonUTRA_r12 {
	LTE_MeasParameters_v1250__incMonUTRA_r12_supported	= 0
} e_LTE_MeasParameters_v1250__incMonUTRA_r12;
typedef enum LTE_MeasParameters_v1250__extendedMaxMeasId_r12 {
	LTE_MeasParameters_v1250__extendedMaxMeasId_r12_supported	= 0
} e_LTE_MeasParameters_v1250__extendedMaxMeasId_r12;
typedef enum LTE_MeasParameters_v1250__extendedRSRQ_LowerRange_r12 {
	LTE_MeasParameters_v1250__extendedRSRQ_LowerRange_r12_supported	= 0
} e_LTE_MeasParameters_v1250__extendedRSRQ_LowerRange_r12;
typedef enum LTE_MeasParameters_v1250__rsrq_OnAllSymbols_r12 {
	LTE_MeasParameters_v1250__rsrq_OnAllSymbols_r12_supported	= 0
} e_LTE_MeasParameters_v1250__rsrq_OnAllSymbols_r12;
typedef enum LTE_MeasParameters_v1250__crs_DiscoverySignalsMeas_r12 {
	LTE_MeasParameters_v1250__crs_DiscoverySignalsMeas_r12_supported	= 0
} e_LTE_MeasParameters_v1250__crs_DiscoverySignalsMeas_r12;
typedef enum LTE_MeasParameters_v1250__csi_RS_DiscoverySignalsMeas_r12 {
	LTE_MeasParameters_v1250__csi_RS_DiscoverySignalsMeas_r12_supported	= 0
} e_LTE_MeasParameters_v1250__csi_RS_DiscoverySignalsMeas_r12;

/* LTE_MeasParameters-v1250 */
typedef struct LTE_MeasParameters_v1250 {
	long	*timerT312_r12;	/* OPTIONAL */
	long	*alternativeTimeToTrigger_r12;	/* OPTIONAL */
	long	*incMonEUTRA_r12;	/* OPTIONAL */
	long	*incMonUTRA_r12;	/* OPTIONAL */
	long	*extendedMaxMeasId_r12;	/* OPTIONAL */
	long	*extendedRSRQ_LowerRange_r12;	/* OPTIONAL */
	long	*rsrq_OnAllSymbols_r12;	/* OPTIONAL */
	long	*crs_DiscoverySignalsMeas_r12;	/* OPTIONAL */
	long	*csi_RS_DiscoverySignalsMeas_r12;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasParameters_v1250_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_timerT312_r12_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_alternativeTimeToTrigger_r12_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_incMonEUTRA_r12_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_incMonUTRA_r12_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_extendedMaxMeasId_r12_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_extendedRSRQ_LowerRange_r12_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_rsrq_OnAllSymbols_r12_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_crs_DiscoverySignalsMeas_r12_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_csi_RS_DiscoverySignalsMeas_r12_18;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasParameters_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasParameters_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasParameters_v1250_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MeasParameters_v1250_H_ */
#include <asn_internal.h>
