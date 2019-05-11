/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_M6Configuration_H_
#define	_X2AP_M6Configuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_M6report-interval.h"
#include "X2AP_M6delay-threshold.h"
#include "X2AP_Links-to-log.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2AP_ProtocolExtensionContainer;

/* X2AP_M6Configuration */
typedef struct X2AP_M6Configuration {
	X2AP_M6report_interval_t	 m6report_interval;
	X2AP_M6delay_threshold_t	*m6delay_threshold;	/* OPTIONAL */
	X2AP_Links_to_log_t	 m6_links_to_log;
	struct X2AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_M6Configuration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_M6Configuration;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_M6Configuration_H_ */
#include <asn_internal.h>
