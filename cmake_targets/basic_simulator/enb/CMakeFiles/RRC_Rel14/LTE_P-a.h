/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_P_a_H_
#define	_LTE_P_a_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_P_a {
	LTE_P_a_dB_6	= 0,
	LTE_P_a_dB_4dot77	= 1,
	LTE_P_a_dB_3	= 2,
	LTE_P_a_dB_1dot77	= 3,
	LTE_P_a_dB0	= 4,
	LTE_P_a_dB1	= 5,
	LTE_P_a_dB2	= 6,
	LTE_P_a_dB3	= 7
} e_LTE_P_a;

/* LTE_P-a */
typedef long	 LTE_P_a_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_P_a_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_P_a;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_P_a_specs_1;
asn_struct_free_f LTE_P_a_free;
asn_struct_print_f LTE_P_a_print;
asn_constr_check_f LTE_P_a_constraint;
ber_type_decoder_f LTE_P_a_decode_ber;
der_type_encoder_f LTE_P_a_encode_der;
xer_type_decoder_f LTE_P_a_decode_xer;
xer_type_encoder_f LTE_P_a_encode_xer;
per_type_decoder_f LTE_P_a_decode_uper;
per_type_encoder_f LTE_P_a_encode_uper;
per_type_decoder_f LTE_P_a_decode_aper;
per_type_encoder_f LTE_P_a_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_P_a_H_ */
#include <asn_internal.h>
