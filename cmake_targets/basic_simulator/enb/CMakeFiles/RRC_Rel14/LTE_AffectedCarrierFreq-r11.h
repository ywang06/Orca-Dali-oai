/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_AffectedCarrierFreq_r11_H_
#define	_LTE_AffectedCarrierFreq_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_MeasObjectId.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_AffectedCarrierFreq_r11__interferenceDirection_r11 {
	LTE_AffectedCarrierFreq_r11__interferenceDirection_r11_eutra	= 0,
	LTE_AffectedCarrierFreq_r11__interferenceDirection_r11_other	= 1,
	LTE_AffectedCarrierFreq_r11__interferenceDirection_r11_both	= 2,
	LTE_AffectedCarrierFreq_r11__interferenceDirection_r11_spare	= 3
} e_LTE_AffectedCarrierFreq_r11__interferenceDirection_r11;

/* LTE_AffectedCarrierFreq-r11 */
typedef struct LTE_AffectedCarrierFreq_r11 {
	LTE_MeasObjectId_t	 carrierFreq_r11;
	long	 interferenceDirection_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_AffectedCarrierFreq_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_interferenceDirection_r11_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_AffectedCarrierFreq_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_AffectedCarrierFreq_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_AffectedCarrierFreq_r11_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_AffectedCarrierFreq_r11_H_ */
#include <asn_internal.h>
