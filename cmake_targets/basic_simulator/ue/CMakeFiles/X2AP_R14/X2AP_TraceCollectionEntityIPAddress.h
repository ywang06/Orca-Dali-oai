/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_TraceCollectionEntityIPAddress_H_
#define	_X2AP_TraceCollectionEntityIPAddress_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* X2AP_TraceCollectionEntityIPAddress */
typedef BIT_STRING_t	 X2AP_TraceCollectionEntityIPAddress_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_TraceCollectionEntityIPAddress_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_TraceCollectionEntityIPAddress;
asn_struct_free_f X2AP_TraceCollectionEntityIPAddress_free;
asn_struct_print_f X2AP_TraceCollectionEntityIPAddress_print;
asn_constr_check_f X2AP_TraceCollectionEntityIPAddress_constraint;
ber_type_decoder_f X2AP_TraceCollectionEntityIPAddress_decode_ber;
der_type_encoder_f X2AP_TraceCollectionEntityIPAddress_encode_der;
xer_type_decoder_f X2AP_TraceCollectionEntityIPAddress_decode_xer;
xer_type_encoder_f X2AP_TraceCollectionEntityIPAddress_encode_xer;
per_type_decoder_f X2AP_TraceCollectionEntityIPAddress_decode_uper;
per_type_encoder_f X2AP_TraceCollectionEntityIPAddress_encode_uper;
per_type_decoder_f X2AP_TraceCollectionEntityIPAddress_decode_aper;
per_type_encoder_f X2AP_TraceCollectionEntityIPAddress_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_TraceCollectionEntityIPAddress_H_ */
#include <asn_internal.h>
