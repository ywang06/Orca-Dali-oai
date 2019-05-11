/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SupportedBandListUTRA_FDD_H_
#define	_LTE_SupportedBandListUTRA_FDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_SupportedBandUTRA-FDD.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_SupportedBandListUTRA-FDD */
typedef struct LTE_SupportedBandListUTRA_FDD {
	A_SEQUENCE_OF(LTE_SupportedBandUTRA_FDD_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SupportedBandListUTRA_FDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SupportedBandListUTRA_FDD;
extern asn_SET_OF_specifics_t asn_SPC_LTE_SupportedBandListUTRA_FDD_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SupportedBandListUTRA_FDD_1[1];
extern asn_per_constraints_t asn_PER_type_LTE_SupportedBandListUTRA_FDD_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SupportedBandListUTRA_FDD_H_ */
#include <asn_internal.h>
