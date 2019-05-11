/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RRCConnectionReestablishmentRequest_r8_IEs_H_
#define	_LTE_RRCConnectionReestablishmentRequest_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_ReestabUE-Identity.h"
#include "LTE_ReestablishmentCause.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_RRCConnectionReestablishmentRequest-r8-IEs */
typedef struct LTE_RRCConnectionReestablishmentRequest_r8_IEs {
	LTE_ReestabUE_Identity_t	 ue_Identity;
	LTE_ReestablishmentCause_t	 reestablishmentCause;
	BIT_STRING_t	 spare;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionReestablishmentRequest_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReestablishmentRequest_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionReestablishmentRequest_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionReestablishmentRequest_r8_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_RRCConnectionReestablishmentRequest_r8_IEs_H_ */
#include <asn_internal.h>
