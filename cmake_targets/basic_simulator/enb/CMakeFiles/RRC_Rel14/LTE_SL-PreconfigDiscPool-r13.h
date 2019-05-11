/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-Sidelink-Preconf"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SL_PreconfigDiscPool_r13_H_
#define	_LTE_SL_PreconfigDiscPool_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SL-CP-Len-r12.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "LTE_SL-TF-ResourceConfig-r12.h"
#include "LTE_P0-SL-r12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_PreconfigDiscPool_r13__discPeriod_r13 {
	LTE_SL_PreconfigDiscPool_r13__discPeriod_r13_rf4	= 0,
	LTE_SL_PreconfigDiscPool_r13__discPeriod_r13_rf6	= 1,
	LTE_SL_PreconfigDiscPool_r13__discPeriod_r13_rf7	= 2,
	LTE_SL_PreconfigDiscPool_r13__discPeriod_r13_rf8	= 3,
	LTE_SL_PreconfigDiscPool_r13__discPeriod_r13_rf12	= 4,
	LTE_SL_PreconfigDiscPool_r13__discPeriod_r13_rf14	= 5,
	LTE_SL_PreconfigDiscPool_r13__discPeriod_r13_rf16	= 6,
	LTE_SL_PreconfigDiscPool_r13__discPeriod_r13_rf24	= 7,
	LTE_SL_PreconfigDiscPool_r13__discPeriod_r13_rf28	= 8,
	LTE_SL_PreconfigDiscPool_r13__discPeriod_r13_rf32	= 9,
	LTE_SL_PreconfigDiscPool_r13__discPeriod_r13_rf64	= 10,
	LTE_SL_PreconfigDiscPool_r13__discPeriod_r13_rf128	= 11,
	LTE_SL_PreconfigDiscPool_r13__discPeriod_r13_rf256	= 12,
	LTE_SL_PreconfigDiscPool_r13__discPeriod_r13_rf512	= 13,
	LTE_SL_PreconfigDiscPool_r13__discPeriod_r13_rf1024	= 14,
	LTE_SL_PreconfigDiscPool_r13__discPeriod_r13_spare	= 15
} e_LTE_SL_PreconfigDiscPool_r13__discPeriod_r13;
typedef enum LTE_SL_PreconfigDiscPool_r13__txParameters_r13__txProbability_r13 {
	LTE_SL_PreconfigDiscPool_r13__txParameters_r13__txProbability_r13_p25	= 0,
	LTE_SL_PreconfigDiscPool_r13__txParameters_r13__txProbability_r13_p50	= 1,
	LTE_SL_PreconfigDiscPool_r13__txParameters_r13__txProbability_r13_p75	= 2,
	LTE_SL_PreconfigDiscPool_r13__txParameters_r13__txProbability_r13_p100	= 3
} e_LTE_SL_PreconfigDiscPool_r13__txParameters_r13__txProbability_r13;

/* LTE_SL-PreconfigDiscPool-r13 */
typedef struct LTE_SL_PreconfigDiscPool_r13 {
	LTE_SL_CP_Len_r12_t	 cp_Len_r13;
	long	 discPeriod_r13;
	long	 numRetx_r13;
	long	 numRepetition_r13;
	LTE_SL_TF_ResourceConfig_r12_t	 tf_ResourceConfig_r13;
	struct LTE_SL_PreconfigDiscPool_r13__txParameters_r13 {
		LTE_P0_SL_r12_t	 txParametersGeneral_r13;
		long	 txProbability_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *txParameters_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_PreconfigDiscPool_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_discPeriod_r13_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_txProbability_r13_25;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_PreconfigDiscPool_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_PreconfigDiscPool_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_PreconfigDiscPool_r13_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SL_PreconfigDiscPool_r13_H_ */
#include <asn_internal.h>
