/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MobilityHistoryReport_r12_H_
#define	_LTE_MobilityHistoryReport_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_VisitedCellInfoList-r12.h"

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_MobilityHistoryReport-r12 */
typedef LTE_VisitedCellInfoList_r12_t	 LTE_MobilityHistoryReport_r12_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LTE_MobilityHistoryReport_r12_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LTE_MobilityHistoryReport_r12;
asn_struct_free_f LTE_MobilityHistoryReport_r12_free;
asn_struct_print_f LTE_MobilityHistoryReport_r12_print;
asn_constr_check_f LTE_MobilityHistoryReport_r12_constraint;
ber_type_decoder_f LTE_MobilityHistoryReport_r12_decode_ber;
der_type_encoder_f LTE_MobilityHistoryReport_r12_encode_der;
xer_type_decoder_f LTE_MobilityHistoryReport_r12_decode_xer;
xer_type_encoder_f LTE_MobilityHistoryReport_r12_encode_xer;
per_type_decoder_f LTE_MobilityHistoryReport_r12_decode_uper;
per_type_encoder_f LTE_MobilityHistoryReport_r12_encode_uper;
per_type_decoder_f LTE_MobilityHistoryReport_r12_decode_aper;
per_type_encoder_f LTE_MobilityHistoryReport_r12_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MobilityHistoryReport_r12_H_ */
#include <asn_internal.h>
