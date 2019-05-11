/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_Direct_Forwarding_Path_Availability_H_
#define	_S1AP_Direct_Forwarding_Path_Availability_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_Direct_Forwarding_Path_Availability {
	S1AP_Direct_Forwarding_Path_Availability_directPathAvailable	= 0
	/*
	 * Enumeration is extensible
	 */
} e_S1AP_Direct_Forwarding_Path_Availability;

/* S1AP_Direct-Forwarding-Path-Availability */
typedef long	 S1AP_Direct_Forwarding_Path_Availability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_Direct_Forwarding_Path_Availability;
asn_struct_free_f S1AP_Direct_Forwarding_Path_Availability_free;
asn_struct_print_f S1AP_Direct_Forwarding_Path_Availability_print;
asn_constr_check_f S1AP_Direct_Forwarding_Path_Availability_constraint;
ber_type_decoder_f S1AP_Direct_Forwarding_Path_Availability_decode_ber;
der_type_encoder_f S1AP_Direct_Forwarding_Path_Availability_encode_der;
xer_type_decoder_f S1AP_Direct_Forwarding_Path_Availability_decode_xer;
xer_type_encoder_f S1AP_Direct_Forwarding_Path_Availability_encode_xer;
per_type_decoder_f S1AP_Direct_Forwarding_Path_Availability_decode_uper;
per_type_encoder_f S1AP_Direct_Forwarding_Path_Availability_encode_uper;
per_type_decoder_f S1AP_Direct_Forwarding_Path_Availability_decode_aper;
per_type_encoder_f S1AP_Direct_Forwarding_Path_Availability_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_Direct_Forwarding_Path_Availability_H_ */
#include <asn_internal.h>
