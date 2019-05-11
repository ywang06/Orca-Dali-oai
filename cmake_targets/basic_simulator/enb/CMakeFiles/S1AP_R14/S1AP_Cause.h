/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_Cause_H_
#define	_S1AP_Cause_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_CauseRadioNetwork.h"
#include "S1AP_CauseTransport.h"
#include "S1AP_CauseNas.h"
#include "S1AP_CauseProtocol.h"
#include "S1AP_CauseMisc.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_Cause_PR {
	S1AP_Cause_PR_NOTHING,	/* No components present */
	S1AP_Cause_PR_radioNetwork,
	S1AP_Cause_PR_transport,
	S1AP_Cause_PR_nas,
	S1AP_Cause_PR_protocol,
	S1AP_Cause_PR_misc
	/* Extensions may appear below */
	
} S1AP_Cause_PR;

/* S1AP_Cause */
typedef struct S1AP_Cause {
	S1AP_Cause_PR present;
	union S1AP_Cause_u {
		S1AP_CauseRadioNetwork_t	 radioNetwork;
		S1AP_CauseTransport_t	 transport;
		S1AP_CauseNas_t	 nas;
		S1AP_CauseProtocol_t	 protocol;
		S1AP_CauseMisc_t	 misc;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_Cause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_Cause;
extern asn_CHOICE_specifics_t asn_SPC_S1AP_Cause_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_Cause_1[5];
extern asn_per_constraints_t asn_PER_type_S1AP_Cause_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_Cause_H_ */
#include <asn_internal.h>
