/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_ENBConfigurationUpdateAcknowledge_H_
#define	_S1AP_ENBConfigurationUpdateAcknowledge_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1AP_ENBConfigurationUpdateAcknowledge */
typedef struct S1AP_ENBConfigurationUpdateAcknowledge {
	S1AP_ProtocolIE_Container_6577P44_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_ENBConfigurationUpdateAcknowledge_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_ENBConfigurationUpdateAcknowledge;
extern asn_SEQUENCE_specifics_t asn_SPC_S1AP_ENBConfigurationUpdateAcknowledge_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_ENBConfigurationUpdateAcknowledge_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_ENBConfigurationUpdateAcknowledge_H_ */
#include <asn_internal.h>
