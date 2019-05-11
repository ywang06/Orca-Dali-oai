/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/carlos/dualCon/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_E_RABs_SubjectToCounterCheckItem_H_
#define	_X2AP_E_RABs_SubjectToCounterCheckItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_E-RAB-ID.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_ProtocolExtensionContainer;

/* X2AP_E-RABs-SubjectToCounterCheckItem */
typedef struct X2AP_E_RABs_SubjectToCounterCheckItem {
	X2AP_E_RAB_ID_t	 e_RAB_ID;
	unsigned long	 uL_Count;
	unsigned long	 dL_Count;
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_E_RABs_SubjectToCounterCheckItem_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_X2AP_uL_Count_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_X2AP_dL_Count_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_E_RABs_SubjectToCounterCheckItem;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_E_RABs_SubjectToCounterCheckItem_H_ */
#include <asn_internal.h>
