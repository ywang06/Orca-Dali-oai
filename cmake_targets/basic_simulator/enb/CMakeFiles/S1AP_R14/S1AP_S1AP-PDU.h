/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Descriptions"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_S1AP_PDU_H_
#define	_S1AP_S1AP_PDU_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_InitiatingMessage.h"
#include "S1AP_SuccessfulOutcome.h"
#include "S1AP_UnsuccessfulOutcome.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_S1AP_PDU_PR {
	S1AP_S1AP_PDU_PR_NOTHING,	/* No components present */
	S1AP_S1AP_PDU_PR_initiatingMessage,
	S1AP_S1AP_PDU_PR_successfulOutcome,
	S1AP_S1AP_PDU_PR_unsuccessfulOutcome
	/* Extensions may appear below */
	
} S1AP_S1AP_PDU_PR;

/* S1AP_S1AP-PDU */
typedef struct S1AP_S1AP_PDU {
	S1AP_S1AP_PDU_PR present;
	union S1AP_S1AP_PDU_u {
		S1AP_InitiatingMessage_t	 initiatingMessage;
		S1AP_SuccessfulOutcome_t	 successfulOutcome;
		S1AP_UnsuccessfulOutcome_t	 unsuccessfulOutcome;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_S1AP_PDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_S1AP_PDU;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_S1AP_PDU_H_ */
#include <asn_internal.h>
