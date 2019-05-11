/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_CriticalityDiagnostics_IE_List_H_
#define	_X2AP_CriticalityDiagnostics_IE_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "X2AP_Criticality.h"
#include "X2AP_ProtocolIE-ID.h"
#include "X2AP_TypeOfError.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_ProtocolExtensionContainer;

/* Forward definitions */
typedef struct X2AP_CriticalityDiagnostics_IE_List__Member {
	X2AP_Criticality_t	 iECriticality;
	X2AP_ProtocolIE_ID_t	 iE_ID;
	X2AP_TypeOfError_t	 typeOfError;
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CriticalityDiagnostics_IE_List__Member;

/* X2AP_CriticalityDiagnostics-IE-List */
typedef struct X2AP_CriticalityDiagnostics_IE_List {
	A_SEQUENCE_OF(CriticalityDiagnostics_IE_List__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_CriticalityDiagnostics_IE_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_CriticalityDiagnostics_IE_List;
extern asn_SET_OF_specifics_t asn_SPC_X2AP_CriticalityDiagnostics_IE_List_specs_1;
extern asn_TYPE_member_t asn_MBR_X2AP_CriticalityDiagnostics_IE_List_1[1];
extern asn_per_constraints_t asn_PER_type_X2AP_CriticalityDiagnostics_IE_List_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_CriticalityDiagnostics_IE_List_H_ */
#include <asn_internal.h>
