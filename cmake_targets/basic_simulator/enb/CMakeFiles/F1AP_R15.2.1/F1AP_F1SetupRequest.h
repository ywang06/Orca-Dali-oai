/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Contents"
 * 	found in "/home/carlos/dualCon/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-PDU-Contents.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/F1AP_R15.2.1`
 */

#ifndef	_F1AP_F1SetupRequest_H_
#define	_F1AP_F1SetupRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "F1AP_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* F1AP_F1SetupRequest */
typedef struct F1AP_F1SetupRequest {
	F1AP_ProtocolIE_Container_123P3_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_F1SetupRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_F1SetupRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_F1SetupRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_F1SetupRequest_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_F1SetupRequest_H_ */
#include <asn_internal.h>
