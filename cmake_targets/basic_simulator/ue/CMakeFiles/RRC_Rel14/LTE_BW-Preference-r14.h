/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_BW_Preference_r14_H_
#define	_LTE_BW_Preference_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_BW_Preference_r14__dl_Preference_r14 {
	LTE_BW_Preference_r14__dl_Preference_r14_mhz1dot4	= 0,
	LTE_BW_Preference_r14__dl_Preference_r14_mhz5	= 1,
	LTE_BW_Preference_r14__dl_Preference_r14_mhz20	= 2
} e_LTE_BW_Preference_r14__dl_Preference_r14;
typedef enum LTE_BW_Preference_r14__ul_Preference_r14 {
	LTE_BW_Preference_r14__ul_Preference_r14_mhz1dot4	= 0,
	LTE_BW_Preference_r14__ul_Preference_r14_mhz5	= 1
} e_LTE_BW_Preference_r14__ul_Preference_r14;

/* LTE_BW-Preference-r14 */
typedef struct LTE_BW_Preference_r14 {
	long	*dl_Preference_r14;	/* OPTIONAL */
	long	*ul_Preference_r14;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_BW_Preference_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_dl_Preference_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ul_Preference_r14_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_BW_Preference_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_BW_Preference_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_BW_Preference_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_BW_Preference_r14_H_ */
#include <asn_internal.h>
