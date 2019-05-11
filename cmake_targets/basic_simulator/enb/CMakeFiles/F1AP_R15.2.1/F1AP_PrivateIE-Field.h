/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-Containers"
 * 	found in "/home/carlos/dualCon/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-Containers.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/F1AP_R15.2.1`
 */

#ifndef	_F1AP_PrivateIE_Field_H_
#define	_F1AP_PrivateIE_Field_H_


#include <asn_application.h>

/* Including external dependencies */
#include "F1AP_PrivateIE-ID.h"
#include "F1AP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_PrivateMessage_IEs__value_PR {
	F1AP_PrivateMessage_IEs__value_PR_NOTHING	/* No components present */
	
} F1AP_PrivateMessage_IEs__value_PR;

/* F1AP_PrivateIE-Field */
typedef struct F1AP_PrivateMessage_IEs {
	F1AP_PrivateIE_ID_t	 id;
	F1AP_Criticality_t	 criticality;
	struct F1AP_PrivateMessage_IEs__value {
		F1AP_PrivateMessage_IEs__value_PR present;
		union F1AP_PrivateMessage_IEs__F1AP_value_u {
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_PrivateMessage_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_PrivateMessage_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_PrivateMessage_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_PrivateMessage_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_PrivateIE_Field_H_ */
#include <asn_internal.h>
