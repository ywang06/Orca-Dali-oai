/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_E_RABReleaseListBearerRelComp_H_
#define	_S1AP_E_RABReleaseListBearerRelComp_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_ProtocolIE_SingleContainer;

/* S1AP_E-RABReleaseListBearerRelComp */
typedef struct S1AP_E_RABReleaseListBearerRelComp {
	A_SEQUENCE_OF(struct S1AP_ProtocolIE_SingleContainer) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_E_RABReleaseListBearerRelComp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_E_RABReleaseListBearerRelComp;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_E_RABReleaseListBearerRelComp_H_ */
#include <asn_internal.h>
