/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Contents"
 * 	found in "/home/carlos/dualCon/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-PDU-Contents.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/F1AP_R15.2.1`
 */

#ifndef	_F1AP_PrivateMessage_H_
#define	_F1AP_PrivateMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "F1AP_PrivateIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* F1AP_PrivateMessage */
typedef struct F1AP_PrivateMessage {
	F1AP_PrivateIE_Container_176P0_t	 privateIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_PrivateMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_PrivateMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_PrivateMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_PrivateMessage_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_PrivateMessage_H_ */
#include <asn_internal.h>
