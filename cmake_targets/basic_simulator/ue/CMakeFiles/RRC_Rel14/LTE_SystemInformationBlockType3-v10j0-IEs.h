/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformationBlockType3_v10j0_IEs_H_
#define	_LTE_SystemInformationBlockType3_v10j0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_NS_PmaxList_r10;
struct LTE_MultiBandInfoList_v10j0;
struct LTE_SystemInformationBlockType3_v10l0_IEs;

/* LTE_SystemInformationBlockType3-v10j0-IEs */
typedef struct LTE_SystemInformationBlockType3_v10j0_IEs {
	struct LTE_NS_PmaxList_r10	*freqBandInfo_r10;	/* OPTIONAL */
	struct LTE_MultiBandInfoList_v10j0	*multiBandInfoList_v10j0;	/* OPTIONAL */
	struct LTE_SystemInformationBlockType3_v10l0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType3_v10j0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType3_v10j0_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_NS-PmaxList-r10.h"
#include "LTE_MultiBandInfoList-v10j0.h"
#include "LTE_SystemInformationBlockType3-v10l0-IEs.h"

#endif	/* _LTE_SystemInformationBlockType3_v10j0_IEs_H_ */
#include <asn_internal.h>
