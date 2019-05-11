/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformationBlockType5_H_
#define	_LTE_SystemInformationBlockType5_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_InterFreqCarrierFreqList.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_InterFreqCarrierFreqList_v1250;
struct LTE_InterFreqCarrierFreqListExt_r12;
struct LTE_InterFreqCarrierFreqListExt_v1280;
struct LTE_InterFreqCarrierFreqList_v1310;
struct LTE_InterFreqCarrierFreqListExt_v1310;
struct LTE_InterFreqCarrierFreqList_v1350;
struct LTE_InterFreqCarrierFreqListExt_v1350;
struct LTE_InterFreqCarrierFreqListExt_v1360;

/* LTE_SystemInformationBlockType5 */
typedef struct LTE_SystemInformationBlockType5 {
	LTE_InterFreqCarrierFreqList_t	 interFreqCarrierFreqList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct LTE_SystemInformationBlockType5__ext1 {
		struct LTE_InterFreqCarrierFreqList_v1250	*interFreqCarrierFreqList_v1250;	/* OPTIONAL */
		struct LTE_InterFreqCarrierFreqListExt_r12	*interFreqCarrierFreqListExt_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_SystemInformationBlockType5__ext2 {
		struct LTE_InterFreqCarrierFreqListExt_v1280	*interFreqCarrierFreqListExt_v1280;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_SystemInformationBlockType5__ext3 {
		struct LTE_InterFreqCarrierFreqList_v1310	*interFreqCarrierFreqList_v1310;	/* OPTIONAL */
		struct LTE_InterFreqCarrierFreqListExt_v1310	*interFreqCarrierFreqListExt_v1310;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_SystemInformationBlockType5__ext4 {
		struct LTE_InterFreqCarrierFreqList_v1350	*interFreqCarrierFreqList_v1350;	/* OPTIONAL */
		struct LTE_InterFreqCarrierFreqListExt_v1350	*interFreqCarrierFreqListExt_v1350;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct LTE_SystemInformationBlockType5__ext5 {
		struct LTE_InterFreqCarrierFreqListExt_v1360	*interFreqCarrierFreqListExt_v1360;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	struct LTE_SystemInformationBlockType5__ext6 {
		long	*scptm_FreqOffset_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext6;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType5;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType5_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType5_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_InterFreqCarrierFreqList-v1250.h"
#include "LTE_InterFreqCarrierFreqListExt-r12.h"
#include "LTE_InterFreqCarrierFreqListExt-v1280.h"
#include "LTE_InterFreqCarrierFreqList-v1310.h"
#include "LTE_InterFreqCarrierFreqListExt-v1310.h"
#include "LTE_InterFreqCarrierFreqList-v1350.h"
#include "LTE_InterFreqCarrierFreqListExt-v1350.h"
#include "LTE_InterFreqCarrierFreqListExt-v1360.h"

#endif	/* _LTE_SystemInformationBlockType5_H_ */
#include <asn_internal.h>
