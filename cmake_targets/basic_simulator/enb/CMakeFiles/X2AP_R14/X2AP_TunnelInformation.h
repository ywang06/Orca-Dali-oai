/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_TunnelInformation_H_
#define	_X2AP_TunnelInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_TransportLayerAddress.h"
#include "X2AP_Port-Number.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_ProtocolExtensionContainer;

/* X2AP_TunnelInformation */
typedef struct X2AP_TunnelInformation {
	X2AP_TransportLayerAddress_t	 transportLayerAddress;
	X2AP_Port_Number_t	*uDP_Port_Number;	/* OPTIONAL */
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_TunnelInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_TunnelInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_TunnelInformation_H_ */
#include <asn_internal.h>
