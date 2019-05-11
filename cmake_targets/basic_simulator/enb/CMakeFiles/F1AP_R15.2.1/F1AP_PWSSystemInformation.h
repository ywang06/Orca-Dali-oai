/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/F1AP_R15.2.1`
 */

#ifndef	_F1AP_PWSSystemInformation_H_
#define	_F1AP_PWSSystemInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* F1AP_PWSSystemInformation */
typedef OCTET_STRING_t	 F1AP_PWSSystemInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_PWSSystemInformation;
asn_struct_free_f F1AP_PWSSystemInformation_free;
asn_struct_print_f F1AP_PWSSystemInformation_print;
asn_constr_check_f F1AP_PWSSystemInformation_constraint;
ber_type_decoder_f F1AP_PWSSystemInformation_decode_ber;
der_type_encoder_f F1AP_PWSSystemInformation_encode_der;
xer_type_decoder_f F1AP_PWSSystemInformation_decode_xer;
xer_type_encoder_f F1AP_PWSSystemInformation_encode_xer;
oer_type_decoder_f F1AP_PWSSystemInformation_decode_oer;
oer_type_encoder_f F1AP_PWSSystemInformation_encode_oer;
per_type_decoder_f F1AP_PWSSystemInformation_decode_uper;
per_type_encoder_f F1AP_PWSSystemInformation_encode_uper;
per_type_decoder_f F1AP_PWSSystemInformation_decode_aper;
per_type_encoder_f F1AP_PWSSystemInformation_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_PWSSystemInformation_H_ */
#include <asn_internal.h>
