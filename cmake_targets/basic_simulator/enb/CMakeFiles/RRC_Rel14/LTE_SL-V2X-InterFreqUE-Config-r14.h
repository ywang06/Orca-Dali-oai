/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SL_V2X_InterFreqUE_Config_r14_H_
#define	_LTE_SL_V2X_InterFreqUE_Config_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SL-TypeTxSync-r14.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_PhysCellIdList_r13;
struct LTE_SL_SyncConfigListNFreqV2X_r14;
struct LTE_SL_CommRxPoolListV2X_r14;
struct LTE_SL_CommTxPoolListV2X_r14;
struct LTE_SL_CommResourcePoolV2X_r14;
struct LTE_SL_CommTxPoolSensingConfig_r14;
struct LTE_SL_ZoneConfig_r14;

/* LTE_SL-V2X-InterFreqUE-Config-r14 */
typedef struct LTE_SL_V2X_InterFreqUE_Config_r14 {
	struct LTE_PhysCellIdList_r13	*physCellIdList_r14;	/* OPTIONAL */
	LTE_SL_TypeTxSync_r14_t	*typeTxSync_r14;	/* OPTIONAL */
	struct LTE_SL_SyncConfigListNFreqV2X_r14	*v2x_SyncConfig_r14;	/* OPTIONAL */
	struct LTE_SL_CommRxPoolListV2X_r14	*v2x_CommRxPool_r14;	/* OPTIONAL */
	struct LTE_SL_CommTxPoolListV2X_r14	*v2x_CommTxPoolNormal_r14;	/* OPTIONAL */
	struct LTE_SL_CommTxPoolListV2X_r14	*p2x_CommTxPoolNormal_r14;	/* OPTIONAL */
	struct LTE_SL_CommResourcePoolV2X_r14	*v2x_CommTxPoolExceptional_r14;	/* OPTIONAL */
	struct LTE_SL_CommTxPoolSensingConfig_r14	*v2x_ResourceSelectionConfig_r14;	/* OPTIONAL */
	struct LTE_SL_ZoneConfig_r14	*zoneConfig_r14;	/* OPTIONAL */
	long	*offsetDFN_r14;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SL_V2X_InterFreqUE_Config_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SL_V2X_InterFreqUE_Config_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SL_V2X_InterFreqUE_Config_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SL_V2X_InterFreqUE_Config_r14_1[10];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PhysCellIdList-r13.h"
#include "LTE_SL-SyncConfigListNFreqV2X-r14.h"
#include "LTE_SL-CommRxPoolListV2X-r14.h"
#include "LTE_SL-CommTxPoolListV2X-r14.h"
#include "LTE_SL-CommResourcePoolV2X-r14.h"
#include "LTE_SL-CommTxPoolSensingConfig-r14.h"
#include "LTE_SL-ZoneConfig-r14.h"

#endif	/* _LTE_SL_V2X_InterFreqUE_Config_r14_H_ */
#include <asn_internal.h>
