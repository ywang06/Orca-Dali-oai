/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_T_Reselection_NB_r13_H_
#define	_LTE_T_Reselection_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_T_Reselection_NB_r13 {
	LTE_T_Reselection_NB_r13_s0	= 0,
	LTE_T_Reselection_NB_r13_s3	= 1,
	LTE_T_Reselection_NB_r13_s6	= 2,
	LTE_T_Reselection_NB_r13_s9	= 3,
	LTE_T_Reselection_NB_r13_s12	= 4,
	LTE_T_Reselection_NB_r13_s15	= 5,
	LTE_T_Reselection_NB_r13_s18	= 6,
	LTE_T_Reselection_NB_r13_s21	= 7
} e_LTE_T_Reselection_NB_r13;

/* LTE_T-Reselection-NB-r13 */
typedef long	 LTE_T_Reselection_NB_r13_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_T_Reselection_NB_r13_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_T_Reselection_NB_r13;
extern const asn_INTEGER_specifics_t asn_SPC_LTE_T_Reselection_NB_r13_specs_1;
asn_struct_free_f LTE_T_Reselection_NB_r13_free;
asn_struct_print_f LTE_T_Reselection_NB_r13_print;
asn_constr_check_f LTE_T_Reselection_NB_r13_constraint;
ber_type_decoder_f LTE_T_Reselection_NB_r13_decode_ber;
der_type_encoder_f LTE_T_Reselection_NB_r13_encode_der;
xer_type_decoder_f LTE_T_Reselection_NB_r13_decode_xer;
xer_type_encoder_f LTE_T_Reselection_NB_r13_encode_xer;
per_type_decoder_f LTE_T_Reselection_NB_r13_decode_uper;
per_type_encoder_f LTE_T_Reselection_NB_r13_encode_uper;
per_type_decoder_f LTE_T_Reselection_NB_r13_decode_aper;
per_type_encoder_f LTE_T_Reselection_NB_r13_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_T_Reselection_NB_r13_H_ */
#include <asn_internal.h>
