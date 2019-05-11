/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_ReportIntervalMDT_H_
#define	_S1AP_ReportIntervalMDT_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_ReportIntervalMDT {
	S1AP_ReportIntervalMDT_ms120	= 0,
	S1AP_ReportIntervalMDT_ms240	= 1,
	S1AP_ReportIntervalMDT_ms480	= 2,
	S1AP_ReportIntervalMDT_ms640	= 3,
	S1AP_ReportIntervalMDT_ms1024	= 4,
	S1AP_ReportIntervalMDT_ms2048	= 5,
	S1AP_ReportIntervalMDT_ms5120	= 6,
	S1AP_ReportIntervalMDT_ms10240	= 7,
	S1AP_ReportIntervalMDT_min1	= 8,
	S1AP_ReportIntervalMDT_min6	= 9,
	S1AP_ReportIntervalMDT_min12	= 10,
	S1AP_ReportIntervalMDT_min30	= 11,
	S1AP_ReportIntervalMDT_min60	= 12
} e_S1AP_ReportIntervalMDT;

/* S1AP_ReportIntervalMDT */
typedef long	 S1AP_ReportIntervalMDT_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1AP_ReportIntervalMDT_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ReportIntervalMDT;
extern const asn_INTEGER_specifics_t asn_SPC_S1AP_ReportIntervalMDT_specs_1;
asn_struct_free_f S1AP_ReportIntervalMDT_free;
asn_struct_print_f S1AP_ReportIntervalMDT_print;
asn_constr_check_f S1AP_ReportIntervalMDT_constraint;
ber_type_decoder_f S1AP_ReportIntervalMDT_decode_ber;
der_type_encoder_f S1AP_ReportIntervalMDT_encode_der;
xer_type_decoder_f S1AP_ReportIntervalMDT_decode_xer;
xer_type_encoder_f S1AP_ReportIntervalMDT_encode_xer;
per_type_decoder_f S1AP_ReportIntervalMDT_decode_uper;
per_type_encoder_f S1AP_ReportIntervalMDT_encode_uper;
per_type_decoder_f S1AP_ReportIntervalMDT_decode_aper;
per_type_encoder_f S1AP_ReportIntervalMDT_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_ReportIntervalMDT_H_ */
#include <asn_internal.h>
