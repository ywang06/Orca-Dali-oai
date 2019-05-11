/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_AllowedMeasBandwidth_H_
#define	_LTE_AllowedMeasBandwidth_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_AllowedMeasBandwidth {
	LTE_AllowedMeasBandwidth_mbw6	= 0,
	LTE_AllowedMeasBandwidth_mbw15	= 1,
	LTE_AllowedMeasBandwidth_mbw25	= 2,
	LTE_AllowedMeasBandwidth_mbw50	= 3,
	LTE_AllowedMeasBandwidth_mbw75	= 4,
	LTE_AllowedMeasBandwidth_mbw100	= 5
} e_LTE_AllowedMeasBandwidth;

/* LTE_AllowedMeasBandwidth */
typedef long	 LTE_AllowedMeasBandwidth_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_AllowedMeasBandwidth_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_AllowedMeasBandwidth;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_AllowedMeasBandwidth_specs_1;
asn_struct_free_f LTE_AllowedMeasBandwidth_free;
asn_struct_print_f LTE_AllowedMeasBandwidth_print;
asn_constr_check_f LTE_AllowedMeasBandwidth_constraint;
ber_type_decoder_f LTE_AllowedMeasBandwidth_decode_ber;
der_type_encoder_f LTE_AllowedMeasBandwidth_encode_der;
xer_type_decoder_f LTE_AllowedMeasBandwidth_decode_xer;
xer_type_encoder_f LTE_AllowedMeasBandwidth_encode_xer;
per_type_decoder_f LTE_AllowedMeasBandwidth_decode_uper;
per_type_encoder_f LTE_AllowedMeasBandwidth_encode_uper;
per_type_decoder_f LTE_AllowedMeasBandwidth_decode_aper;
per_type_encoder_f LTE_AllowedMeasBandwidth_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_AllowedMeasBandwidth_H_ */
#include <asn_internal.h>
