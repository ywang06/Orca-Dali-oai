/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_MBMS_Service_Area_Identity_List_H_
#define	_X2AP_MBMS_Service_Area_Identity_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2AP_MBMS-Service-Area-Identity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* X2AP_MBMS-Service-Area-Identity-List */
typedef struct X2AP_MBMS_Service_Area_Identity_List {
	A_SEQUENCE_OF(X2AP_MBMS_Service_Area_Identity_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2AP_MBMS_Service_Area_Identity_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2AP_MBMS_Service_Area_Identity_List;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_MBMS_Service_Area_Identity_List_H_ */
#include <asn_internal.h>
