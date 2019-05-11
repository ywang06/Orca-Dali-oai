/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MobilityControlInfoV2X_r14_H_
#define	_LTE_MobilityControlInfoV2X_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_SL_CommResourcePoolV2X_r14;
struct LTE_SL_CommRxPoolListV2X_r14;
struct LTE_SL_SyncConfigListV2X_r14;
struct LTE_SL_CBR_CommonTxConfigList_r14;

/* LTE_MobilityControlInfoV2X-r14 */
typedef struct LTE_MobilityControlInfoV2X_r14 {
	struct LTE_SL_CommResourcePoolV2X_r14	*v2x_CommTxPoolExceptional_r14;	/* OPTIONAL */
	struct LTE_SL_CommRxPoolListV2X_r14	*v2x_CommRxPool_r14;	/* OPTIONAL */
	struct LTE_SL_SyncConfigListV2X_r14	*v2x_CommSyncConfig_r14;	/* OPTIONAL */
	struct LTE_SL_CBR_CommonTxConfigList_r14	*cbr_MobilityTxConfigList_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MobilityControlInfoV2X_r14_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MobilityControlInfoV2X_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MobilityControlInfoV2X_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MobilityControlInfoV2X_r14_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SL-CommResourcePoolV2X-r14.h"
#include "LTE_SL-CommRxPoolListV2X-r14.h"
#include "LTE_SL-SyncConfigListV2X-r14.h"
#include "LTE_SL-CBR-CommonTxConfigList-r14.h"

#endif	/* _LTE_MobilityControlInfoV2X_r14_H_ */
#include <asn_internal.h>
