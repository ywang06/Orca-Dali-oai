/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SoundingRS_UL_ConfigDedicated_v1310_H_
#define	_LTE_SoundingRS_UL_ConfigDedicated_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SoundingRS_UL_ConfigDedicated_v1310_PR {
	LTE_SoundingRS_UL_ConfigDedicated_v1310_PR_NOTHING,	/* No components present */
	LTE_SoundingRS_UL_ConfigDedicated_v1310_PR_release,
	LTE_SoundingRS_UL_ConfigDedicated_v1310_PR_setup
} LTE_SoundingRS_UL_ConfigDedicated_v1310_PR;
typedef enum LTE_SoundingRS_UL_ConfigDedicated_v1310__setup__cyclicShift_v1310 {
	LTE_SoundingRS_UL_ConfigDedicated_v1310__setup__cyclicShift_v1310_cs8	= 0,
	LTE_SoundingRS_UL_ConfigDedicated_v1310__setup__cyclicShift_v1310_cs9	= 1,
	LTE_SoundingRS_UL_ConfigDedicated_v1310__setup__cyclicShift_v1310_cs10	= 2,
	LTE_SoundingRS_UL_ConfigDedicated_v1310__setup__cyclicShift_v1310_cs11	= 3
} e_LTE_SoundingRS_UL_ConfigDedicated_v1310__setup__cyclicShift_v1310;
typedef enum LTE_SoundingRS_UL_ConfigDedicated_v1310__setup__transmissionCombNum_r13 {
	LTE_SoundingRS_UL_ConfigDedicated_v1310__setup__transmissionCombNum_r13_n2	= 0,
	LTE_SoundingRS_UL_ConfigDedicated_v1310__setup__transmissionCombNum_r13_n4	= 1
} e_LTE_SoundingRS_UL_ConfigDedicated_v1310__setup__transmissionCombNum_r13;

/* LTE_SoundingRS-UL-ConfigDedicated-v1310 */
typedef struct LTE_SoundingRS_UL_ConfigDedicated_v1310 {
	LTE_SoundingRS_UL_ConfigDedicated_v1310_PR present;
	union LTE_SoundingRS_UL_ConfigDedicated_v1310_u {
		NULL_t	 release;
		struct LTE_SoundingRS_UL_ConfigDedicated_v1310__setup {
			long	*transmissionComb_v1310;	/* OPTIONAL */
			long	*cyclicShift_v1310;	/* OPTIONAL */
			long	*transmissionCombNum_r13;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SoundingRS_UL_ConfigDedicated_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_cyclicShift_v1310_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_transmissionCombNum_r13_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SoundingRS_UL_ConfigDedicated_v1310;
extern asn_CHOICE_specifics_t asn_SPC_LTE_SoundingRS_UL_ConfigDedicated_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SoundingRS_UL_ConfigDedicated_v1310_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_SoundingRS_UL_ConfigDedicated_v1310_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SoundingRS_UL_ConfigDedicated_v1310_H_ */
#include <asn_internal.h>
