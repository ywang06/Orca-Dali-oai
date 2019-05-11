/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PagingRecord_H_
#define	_LTE_PagingRecord_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PagingUE-Identity.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PagingRecord__cn_Domain {
	LTE_PagingRecord__cn_Domain_ps	= 0,
	LTE_PagingRecord__cn_Domain_cs	= 1
} e_LTE_PagingRecord__cn_Domain;

/* LTE_PagingRecord */
typedef struct LTE_PagingRecord {
	LTE_PagingUE_Identity_t	 ue_Identity;
	long	 cn_Domain;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PagingRecord_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_cn_Domain_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PagingRecord;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PagingRecord_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PagingRecord_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PagingRecord_H_ */
#include <asn_internal.h>
