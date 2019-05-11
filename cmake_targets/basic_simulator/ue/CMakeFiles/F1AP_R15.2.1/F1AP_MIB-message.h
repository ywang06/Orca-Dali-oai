/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/F1AP_R15.2.1`
 */

#ifndef	_F1AP_MIB_message_H_
#define	_F1AP_MIB_message_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* F1AP_MIB-message */
typedef OCTET_STRING_t	 F1AP_MIB_message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_MIB_message;
asn_struct_free_f F1AP_MIB_message_free;
asn_struct_print_f F1AP_MIB_message_print;
asn_constr_check_f F1AP_MIB_message_constraint;
ber_type_decoder_f F1AP_MIB_message_decode_ber;
der_type_encoder_f F1AP_MIB_message_encode_der;
xer_type_decoder_f F1AP_MIB_message_decode_xer;
xer_type_encoder_f F1AP_MIB_message_encode_xer;
oer_type_decoder_f F1AP_MIB_message_decode_oer;
oer_type_encoder_f F1AP_MIB_message_encode_oer;
per_type_decoder_f F1AP_MIB_message_decode_uper;
per_type_encoder_f F1AP_MIB_message_encode_uper;
per_type_decoder_f F1AP_MIB_message_decode_aper;
per_type_encoder_f F1AP_MIB_message_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_MIB_message_H_ */
#include <asn_internal.h>
