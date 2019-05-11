/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_ENB_ID_H_
#define	_X2AP_ENB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_ENB_ID_PR {
	X2AP_ENB_ID_PR_NOTHING,	/* No components present */
	X2AP_ENB_ID_PR_macro_eNB_ID,
	X2AP_ENB_ID_PR_home_eNB_ID,
	/* Extensions may appear below */
	X2AP_ENB_ID_PR_short_Macro_eNB_ID,
	X2AP_ENB_ID_PR_long_Macro_eNB_ID
} X2AP_ENB_ID_PR;

/* X2AP_ENB-ID */
typedef struct X2AP_ENB_ID {
	X2AP_ENB_ID_PR present;
	union X2AP_ENB_ID_u {
		BIT_STRING_t	 macro_eNB_ID;
		BIT_STRING_t	 home_eNB_ID;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		BIT_STRING_t	 short_Macro_eNB_ID;
		BIT_STRING_t	 long_Macro_eNB_ID;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_ENB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ENB_ID;
extern asn_CHOICE_specifics_t asn_SPC_X2AP_ENB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_ENB_ID_1[4];
extern asn_per_constraints_t asn_PER_type_X2AP_ENB_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_ENB_ID_H_ */
#include <asn_internal.h>
