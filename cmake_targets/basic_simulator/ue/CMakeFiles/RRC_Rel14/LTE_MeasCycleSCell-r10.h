/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MeasCycleSCell_r10_H_
#define	_LTE_MeasCycleSCell_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MeasCycleSCell_r10 {
	LTE_MeasCycleSCell_r10_sf160	= 0,
	LTE_MeasCycleSCell_r10_sf256	= 1,
	LTE_MeasCycleSCell_r10_sf320	= 2,
	LTE_MeasCycleSCell_r10_sf512	= 3,
	LTE_MeasCycleSCell_r10_sf640	= 4,
	LTE_MeasCycleSCell_r10_sf1024	= 5,
	LTE_MeasCycleSCell_r10_sf1280	= 6,
	LTE_MeasCycleSCell_r10_spare1	= 7
} e_LTE_MeasCycleSCell_r10;

/* LTE_MeasCycleSCell-r10 */
typedef long	 LTE_MeasCycleSCell_r10_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_MeasCycleSCell_r10_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasCycleSCell_r10;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_MeasCycleSCell_r10_specs_1;
asn_struct_free_f LTE_MeasCycleSCell_r10_free;
asn_struct_print_f LTE_MeasCycleSCell_r10_print;
asn_constr_check_f LTE_MeasCycleSCell_r10_constraint;
ber_type_decoder_f LTE_MeasCycleSCell_r10_decode_ber;
der_type_encoder_f LTE_MeasCycleSCell_r10_encode_der;
xer_type_decoder_f LTE_MeasCycleSCell_r10_decode_xer;
xer_type_encoder_f LTE_MeasCycleSCell_r10_encode_xer;
per_type_decoder_f LTE_MeasCycleSCell_r10_decode_uper;
per_type_encoder_f LTE_MeasCycleSCell_r10_encode_uper;
per_type_decoder_f LTE_MeasCycleSCell_r10_decode_aper;
per_type_encoder_f LTE_MeasCycleSCell_r10_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MeasCycleSCell_r10_H_ */
#include <asn_internal.h>
