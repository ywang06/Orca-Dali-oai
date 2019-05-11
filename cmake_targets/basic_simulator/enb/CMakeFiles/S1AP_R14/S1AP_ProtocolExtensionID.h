/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-CommonDataTypes"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_ProtocolExtensionID_H_
#define	_S1AP_ProtocolExtensionID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_ProtocolExtensionID */
typedef long	 S1AP_ProtocolExtensionID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_ProtocolExtensionID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ProtocolExtensionID;
asn_struct_free_f S1AP_ProtocolExtensionID_free;
asn_struct_print_f S1AP_ProtocolExtensionID_print;
asn_constr_check_f S1AP_ProtocolExtensionID_constraint;
ber_type_decoder_f S1AP_ProtocolExtensionID_decode_ber;
der_type_encoder_f S1AP_ProtocolExtensionID_encode_der;
xer_type_decoder_f S1AP_ProtocolExtensionID_decode_xer;
xer_type_encoder_f S1AP_ProtocolExtensionID_encode_xer;
per_type_decoder_f S1AP_ProtocolExtensionID_decode_uper;
per_type_encoder_f S1AP_ProtocolExtensionID_encode_uper;
per_type_decoder_f S1AP_ProtocolExtensionID_decode_aper;
per_type_encoder_f S1AP_ProtocolExtensionID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_ProtocolExtensionID_H_ */
#include <asn_internal.h>
