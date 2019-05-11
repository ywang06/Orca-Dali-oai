/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PLMN_IdentityInfo_NB_r13_H_
#define	_LTE_PLMN_IdentityInfo_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PLMN-Identity.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PLMN_IdentityInfo_NB_r13__cellReservedForOperatorUse_r13 {
	LTE_PLMN_IdentityInfo_NB_r13__cellReservedForOperatorUse_r13_reserved	= 0,
	LTE_PLMN_IdentityInfo_NB_r13__cellReservedForOperatorUse_r13_notReserved	= 1
} e_LTE_PLMN_IdentityInfo_NB_r13__cellReservedForOperatorUse_r13;
typedef enum LTE_PLMN_IdentityInfo_NB_r13__attachWithoutPDN_Connectivity_r13 {
	LTE_PLMN_IdentityInfo_NB_r13__attachWithoutPDN_Connectivity_r13_true	= 0
} e_LTE_PLMN_IdentityInfo_NB_r13__attachWithoutPDN_Connectivity_r13;

/* LTE_PLMN-IdentityInfo-NB-r13 */
typedef struct LTE_PLMN_IdentityInfo_NB_r13 {
	LTE_PLMN_Identity_t	 plmn_Identity_r13;
	long	 cellReservedForOperatorUse_r13;
	long	*attachWithoutPDN_Connectivity_r13;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PLMN_IdentityInfo_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_cellReservedForOperatorUse_r13_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_attachWithoutPDN_Connectivity_r13_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PLMN_IdentityInfo_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PLMN_IdentityInfo_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PLMN_IdentityInfo_NB_r13_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PLMN_IdentityInfo_NB_r13_H_ */
#include <asn_internal.h>
