/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_EPLMNs_H_
#define	_S1AP_EPLMNs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_PLMNidentity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_EPLMNs */
typedef struct S1AP_EPLMNs {
	A_SEQUENCE_OF(S1AP_PLMNidentity_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_EPLMNs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_EPLMNs;
extern asn_SET_OF_specifics_t asn_SPC_S1AP_EPLMNs_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_EPLMNs_1[1];
extern asn_per_constraints_t asn_PER_type_S1AP_EPLMNs_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_EPLMNs_H_ */
#include <asn_internal.h>
