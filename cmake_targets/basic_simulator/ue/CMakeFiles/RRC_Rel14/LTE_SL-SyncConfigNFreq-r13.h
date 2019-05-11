/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SL_SyncConfigNFreq_r13_H_
#define	_LTE_SL_SyncConfigNFreq_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SL-CP-Len-r12.h"
#include "LTE_SL-OffsetIndicatorSync-r12.h"
#include "LTE_SLSSID-r12.h"
#include <constr_SEQUENCE.h>
#include "LTE_SL-TxParameters-r12.h"
#include "LTE_RSRP-RangeSL-r12.h"
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include "LTE_SL-OffsetIndicatorSync-v1430.h"
#include "LTE_SL-OffsetIndicatorSync-r14.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SL_SyncConfigNFreq_r13__txParameters_r13__syncTxPeriodic_r13 {
	LTE_SL_SyncConfigNFreq_r13__txParameters_r13__syncTxPeriodic_r13_true	= 0
} e_LTE_SL_SyncConfigNFreq_r13__txParameters_r13__syncTxPeriodic_r13;
typedef enum LTE_SL_SyncConfigNFreq_r13__rxParameters_r13__discSyncWindow_r13 {
	LTE_SL_SyncConfigNFreq_r13__rxParameters_r13__discSyncWindow_r13_w1	= 0,
	LTE_SL_SyncConfigNFreq_r13__rxParameters_r13__discSyncWindow_r13_w2	= 1
} e_LTE_SL_SyncConfigNFreq_r13__rxParameters_r13__discSyncWindow_r13;
typedef enum LTE_SL_SyncConfigNFreq_r13__ext1__gnss_Sync_r14 {
	LTE_SL_SyncConfigNFreq_r13__ext1__gnss_Sync_r14_true	= 0
} e_LTE_SL_SyncConfigNFreq_r13__ext1__gnss_Sync_r14;

/* LTE_SL-SyncConfigNFreq-r13 */
typedef struct LTE_SL_SyncConfigNFreq_r13 {
	struct LTE_SL_SyncConfigNFreq_r13__asyncParameters_r13 {
		LTE_SL_CP_Len_r12_t	 syncCP_Len_r13;
		LTE_SL_OffsetIndicatorSync_r12_t	 syncOffsetIndicator_r13;
		LTE_SLSSID_r12_t	 slssid_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *asyncParameters_r13;
	struct LTE_SL_SyncConfigNFreq_r13__txParameters_r13 {
		LTE_SL_TxParameters_r12_t	 syncTxParameters_r13;
		LTE_RSRP_RangeSL_r12_t	 syncTxThreshIC_r13;
		BIT_STRING_t	*syncInfoReserved_r13;	/* OPTIONAL */
		long	*syncTxPeriodic_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *txParameters_r13;
	struct LTE_SL_SyncConfigNFreq_r13__rxParameters_r13 {
		long	 discSyncWindow_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rxParameters_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SL_SyncConfigNFreq_r13__ext1 {
		LTE_SL_OffsetIndicatorSync_v1430_t	*syncOffsetIndicator_v1430;	/* OPTIONAL */
		long	*gnss_Sync_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_SL_SyncConfigNFreq_r13__ext2 {
		LTE_SL_OffsetIndicatorSync_r14_t	*syncOffsetIndicator2_r14;	/* OPTIONAL */
		LTE_SL_OffsetIndicatorSync_r14_t	*syncOffsetIndicator3_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_SyncConfigNFreq_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_syncTxPeriodic_r13_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_discSyncWindow_r13_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_gnss_Sync_r14_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_SyncConfigNFreq_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_SyncConfigNFreq_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_SyncConfigNFreq_r13_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SL_SyncConfigNFreq_r13_H_ */
#include <asn_internal.h>
