/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_LogicalChannelConfig_H_
#define	_LTE_LogicalChannelConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <BOOLEAN.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate {
	LTE_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps0	= 0,
	LTE_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps8	= 1,
	LTE_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps16	= 2,
	LTE_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps32	= 3,
	LTE_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps64	= 4,
	LTE_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps128	= 5,
	LTE_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps256	= 6,
	LTE_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_infinity	= 7,
	LTE_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps512_v1020	= 8,
	LTE_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps1024_v1020	= 9,
	LTE_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps2048_v1020	= 10,
	LTE_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_spare5	= 11,
	LTE_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_spare4	= 12,
	LTE_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_spare3	= 13,
	LTE_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_spare2	= 14,
	LTE_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_spare1	= 15
} e_LTE_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate;
typedef enum LTE_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration {
	LTE_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms50	= 0,
	LTE_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms100	= 1,
	LTE_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms150	= 2,
	LTE_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms300	= 3,
	LTE_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms500	= 4,
	LTE_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms1000	= 5,
	LTE_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_spare2	= 6,
	LTE_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_spare1	= 7
} e_LTE_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration;
typedef enum LTE_LogicalChannelConfig__ext1__logicalChannelSR_Mask_r9 {
	LTE_LogicalChannelConfig__ext1__logicalChannelSR_Mask_r9_setup	= 0
} e_LTE_LogicalChannelConfig__ext1__logicalChannelSR_Mask_r9;
typedef enum LTE_LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14 {
	LTE_LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14_s0	= 0,
	LTE_LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14_s0dot4	= 1,
	LTE_LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14_s0dot8	= 2,
	LTE_LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14_s1dot6	= 3,
	LTE_LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14_s3	= 4,
	LTE_LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14_s6	= 5,
	LTE_LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14_s12	= 6,
	LTE_LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14_s30	= 7
} e_LTE_LogicalChannelConfig__ext3__bitRateQueryProhibitTimer_r14;

/* LTE_LogicalChannelConfig */
typedef struct LTE_LogicalChannelConfig {
	struct LTE_LogicalChannelConfig__ul_SpecificParameters {
		long	 priority;
		long	 prioritisedBitRate;
		long	 bucketSizeDuration;
		long	*logicalChannelGroup;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ul_SpecificParameters;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_LogicalChannelConfig__ext1 {
		long	*logicalChannelSR_Mask_r9;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_LogicalChannelConfig__ext2 {
		BOOLEAN_t	*logicalChannelSR_Prohibit_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_LogicalChannelConfig__ext3 {
		BOOLEAN_t	*laa_UL_Allowed_r14;	/* OPTIONAL */
		long	*bitRateQueryProhibitTimer_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_LogicalChannelConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_prioritisedBitRate_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_bucketSizeDuration_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_logicalChannelSR_Mask_r9_33;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_bitRateQueryProhibitTimer_r14_39;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_LogicalChannelConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_LogicalChannelConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_LogicalChannelConfig_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_LogicalChannelConfig_H_ */
#include <asn_internal.h>
