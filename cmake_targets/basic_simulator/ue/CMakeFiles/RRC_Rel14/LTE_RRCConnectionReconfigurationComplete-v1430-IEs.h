/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_RRCConnectionReconfigurationComplete_v1430_IEs_H_
#define	_LTE_RRCConnectionReconfigurationComplete_v1430_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_PerCC_GapIndicationList_r14;

/* LTE_RRCConnectionReconfigurationComplete-v1430-IEs */
typedef struct LTE_RRCConnectionReconfigurationComplete_v1430_IEs {
	struct LTE_PerCC_GapIndicationList_r14	*perCC_GapIndicationList_r14;	/* OPTIONAL */
	long	*numFreqEffective_r14;	/* OPTIONAL */
	long	*numFreqEffectiveReduced_r14;	/* OPTIONAL */
	struct LTE_RRCConnectionReconfigurationComplete_v1430_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_RRCConnectionReconfigurationComplete_v1430_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReconfigurationComplete_v1430_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionReconfigurationComplete_v1430_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_RRCConnectionReconfigurationComplete_v1430_IEs_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PerCC-GapIndicationList-r14.h"

#endif	/* _LTE_RRCConnectionReconfigurationComplete_v1430_IEs_H_ */
#include <asn_internal.h>
