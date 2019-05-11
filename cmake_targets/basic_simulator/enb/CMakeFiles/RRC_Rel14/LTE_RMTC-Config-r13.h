/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RMTC_Config_r13_H_
#define	_LTE_RMTC_Config_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_RMTC_Config_r13_PR {
	LTE_RMTC_Config_r13_PR_NOTHING,	/* No components present */
	LTE_RMTC_Config_r13_PR_release,
	LTE_RMTC_Config_r13_PR_setup
} LTE_RMTC_Config_r13_PR;
typedef enum LTE_RMTC_Config_r13__setup__rmtc_Period_r13 {
	LTE_RMTC_Config_r13__setup__rmtc_Period_r13_ms40	= 0,
	LTE_RMTC_Config_r13__setup__rmtc_Period_r13_ms80	= 1,
	LTE_RMTC_Config_r13__setup__rmtc_Period_r13_ms160	= 2,
	LTE_RMTC_Config_r13__setup__rmtc_Period_r13_ms320	= 3,
	LTE_RMTC_Config_r13__setup__rmtc_Period_r13_ms640	= 4
} e_LTE_RMTC_Config_r13__setup__rmtc_Period_r13;
typedef enum LTE_RMTC_Config_r13__setup__measDuration_r13 {
	LTE_RMTC_Config_r13__setup__measDuration_r13_sym1	= 0,
	LTE_RMTC_Config_r13__setup__measDuration_r13_sym14	= 1,
	LTE_RMTC_Config_r13__setup__measDuration_r13_sym28	= 2,
	LTE_RMTC_Config_r13__setup__measDuration_r13_sym42	= 3,
	LTE_RMTC_Config_r13__setup__measDuration_r13_sym70	= 4
} e_LTE_RMTC_Config_r13__setup__measDuration_r13;

/* LTE_RMTC-Config-r13 */
typedef struct LTE_RMTC_Config_r13 {
	LTE_RMTC_Config_r13_PR present;
	union LTE_RMTC_Config_r13_u {
		NULL_t	 release;
		struct LTE_RMTC_Config_r13__setup {
			long	 rmtc_Period_r13;
			long	*rmtc_SubframeOffset_r13;	/* OPTIONAL */
			long	 measDuration_r13;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RMTC_Config_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_rmtc_Period_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_measDuration_r13_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RMTC_Config_r13;
extern asn_CHOICE_specifics_t asn_SPC_LTE_RMTC_Config_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RMTC_Config_r13_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_RMTC_Config_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RMTC_Config_r13_H_ */
#include <asn_internal.h>
