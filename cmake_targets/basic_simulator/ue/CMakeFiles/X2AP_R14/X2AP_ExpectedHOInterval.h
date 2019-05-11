/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_ExpectedHOInterval_H_
#define	_X2AP_ExpectedHOInterval_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_ExpectedHOInterval {
	X2AP_ExpectedHOInterval_sec15	= 0,
	X2AP_ExpectedHOInterval_sec30	= 1,
	X2AP_ExpectedHOInterval_sec60	= 2,
	X2AP_ExpectedHOInterval_sec90	= 3,
	X2AP_ExpectedHOInterval_sec120	= 4,
	X2AP_ExpectedHOInterval_sec180	= 5,
	X2AP_ExpectedHOInterval_long_time	= 6
	/*
	 * Enumeration is extensible
	 */
} e_X2AP_ExpectedHOInterval;

/* X2AP_ExpectedHOInterval */
typedef long	 X2AP_ExpectedHOInterval_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_ExpectedHOInterval_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_ExpectedHOInterval;
extern const asn_INTEGER_specifics_t asn_SPC_X2AP_ExpectedHOInterval_specs_1;
asn_struct_free_f X2AP_ExpectedHOInterval_free;
asn_struct_print_f X2AP_ExpectedHOInterval_print;
asn_constr_check_f X2AP_ExpectedHOInterval_constraint;
ber_type_decoder_f X2AP_ExpectedHOInterval_decode_ber;
der_type_encoder_f X2AP_ExpectedHOInterval_encode_der;
xer_type_decoder_f X2AP_ExpectedHOInterval_decode_xer;
xer_type_encoder_f X2AP_ExpectedHOInterval_encode_xer;
per_type_decoder_f X2AP_ExpectedHOInterval_decode_uper;
per_type_encoder_f X2AP_ExpectedHOInterval_encode_uper;
per_type_decoder_f X2AP_ExpectedHOInterval_decode_aper;
per_type_encoder_f X2AP_ExpectedHOInterval_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_ExpectedHOInterval_H_ */
#include <asn_internal.h>
