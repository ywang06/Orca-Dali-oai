/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CarrierFreqEUTRA_H_
#define	_LTE_CarrierFreqEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ARFCN-ValueEUTRA.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_CarrierFreqEUTRA */
typedef struct LTE_CarrierFreqEUTRA {
	LTE_ARFCN_ValueEUTRA_t	 dl_CarrierFreq;
	LTE_ARFCN_ValueEUTRA_t	*ul_CarrierFreq;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CarrierFreqEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CarrierFreqEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CarrierFreqEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CarrierFreqEUTRA_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CarrierFreqEUTRA_H_ */
#include <asn_internal.h>
