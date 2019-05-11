/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-InterNodeDefinitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_AS_Context_NB_H_
#define	_LTE_AS_Context_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_ReestablishmentInfo_NB;

/* LTE_AS-Context-NB */
typedef struct LTE_AS_Context_NB {
	struct LTE_ReestablishmentInfo_NB	*reestablishmentInfo_r13;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_AS_Context_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_AS_Context_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_AS_Context_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_AS_Context_NB_1[1];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_ReestablishmentInfo-NB.h"

#endif	/* _LTE_AS_Context_NB_H_ */
#include <asn_internal.h>
