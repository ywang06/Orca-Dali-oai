/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_SynchronisationInformation_H_
#define	_S1AP_SynchronisationInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_StratumLevel.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1AP_ListeningSubframePattern;
struct S1AP_ECGI_List;
struct S1AP_ProtocolExtensionContainer;

/* S1AP_SynchronisationInformation */
typedef struct S1AP_SynchronisationInformation {
	S1AP_StratumLevel_t	*sourceStratumLevel;	/* OPTIONAL */
	struct S1AP_ListeningSubframePattern	*listeningSubframePattern;	/* OPTIONAL */
	struct S1AP_ECGI_List	*aggressoreCGI_List;	/* OPTIONAL */
	struct S1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_SynchronisationInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_SynchronisationInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_SynchronisationInformation_H_ */
#include <asn_internal.h>
