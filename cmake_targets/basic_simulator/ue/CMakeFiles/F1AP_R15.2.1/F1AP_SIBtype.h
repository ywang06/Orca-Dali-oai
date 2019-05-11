/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/F1AP_R15.2.1`
 */

#ifndef	_F1AP_SIBtype_H_
#define	_F1AP_SIBtype_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_SIBtype {
	F1AP_SIBtype_sibtype2	= 0,
	F1AP_SIBtype_sibtype3	= 1,
	F1AP_SIBtype_sibtype4	= 2,
	F1AP_SIBtype_sibtype5	= 3,
	F1AP_SIBtype_sibtype6	= 4,
	F1AP_SIBtype_sibtype7	= 5,
	F1AP_SIBtype_sibtype8	= 6,
	F1AP_SIBtype_sibtype9	= 7
	/*
	 * Enumeration is extensible
	 */
} e_F1AP_SIBtype;

/* F1AP_SIBtype */
typedef long	 F1AP_SIBtype_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_F1AP_SIBtype_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_F1AP_SIBtype;
extern const asn_INTEGER_specifics_t asn_SPC_F1AP_SIBtype_specs_1;
asn_struct_free_f F1AP_SIBtype_free;
asn_struct_print_f F1AP_SIBtype_print;
asn_constr_check_f F1AP_SIBtype_constraint;
ber_type_decoder_f F1AP_SIBtype_decode_ber;
der_type_encoder_f F1AP_SIBtype_encode_der;
xer_type_decoder_f F1AP_SIBtype_decode_xer;
xer_type_encoder_f F1AP_SIBtype_encode_xer;
oer_type_decoder_f F1AP_SIBtype_decode_oer;
oer_type_encoder_f F1AP_SIBtype_encode_oer;
per_type_decoder_f F1AP_SIBtype_decode_uper;
per_type_encoder_f F1AP_SIBtype_encode_uper;
per_type_decoder_f F1AP_SIBtype_decode_aper;
per_type_encoder_f F1AP_SIBtype_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_SIBtype_H_ */
#include <asn_internal.h>
