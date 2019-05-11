/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_AC_BarringConfig_H_
#define	_LTE_AC_BarringConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_AC_BarringConfig__ac_BarringFactor {
	LTE_AC_BarringConfig__ac_BarringFactor_p00	= 0,
	LTE_AC_BarringConfig__ac_BarringFactor_p05	= 1,
	LTE_AC_BarringConfig__ac_BarringFactor_p10	= 2,
	LTE_AC_BarringConfig__ac_BarringFactor_p15	= 3,
	LTE_AC_BarringConfig__ac_BarringFactor_p20	= 4,
	LTE_AC_BarringConfig__ac_BarringFactor_p25	= 5,
	LTE_AC_BarringConfig__ac_BarringFactor_p30	= 6,
	LTE_AC_BarringConfig__ac_BarringFactor_p40	= 7,
	LTE_AC_BarringConfig__ac_BarringFactor_p50	= 8,
	LTE_AC_BarringConfig__ac_BarringFactor_p60	= 9,
	LTE_AC_BarringConfig__ac_BarringFactor_p70	= 10,
	LTE_AC_BarringConfig__ac_BarringFactor_p75	= 11,
	LTE_AC_BarringConfig__ac_BarringFactor_p80	= 12,
	LTE_AC_BarringConfig__ac_BarringFactor_p85	= 13,
	LTE_AC_BarringConfig__ac_BarringFactor_p90	= 14,
	LTE_AC_BarringConfig__ac_BarringFactor_p95	= 15
} e_LTE_AC_BarringConfig__ac_BarringFactor;
typedef enum LTE_AC_BarringConfig__ac_BarringTime {
	LTE_AC_BarringConfig__ac_BarringTime_s4	= 0,
	LTE_AC_BarringConfig__ac_BarringTime_s8	= 1,
	LTE_AC_BarringConfig__ac_BarringTime_s16	= 2,
	LTE_AC_BarringConfig__ac_BarringTime_s32	= 3,
	LTE_AC_BarringConfig__ac_BarringTime_s64	= 4,
	LTE_AC_BarringConfig__ac_BarringTime_s128	= 5,
	LTE_AC_BarringConfig__ac_BarringTime_s256	= 6,
	LTE_AC_BarringConfig__ac_BarringTime_s512	= 7
} e_LTE_AC_BarringConfig__ac_BarringTime;

/* LTE_AC-BarringConfig */
typedef struct LTE_AC_BarringConfig {
	long	 ac_BarringFactor;
	long	 ac_BarringTime;
	BIT_STRING_t	 ac_BarringForSpecialAC;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_AC_BarringConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ac_BarringFactor_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ac_BarringTime_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_AC_BarringConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_AC_BarringConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_AC_BarringConfig_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_AC_BarringConfig_H_ */
#include <asn_internal.h>
