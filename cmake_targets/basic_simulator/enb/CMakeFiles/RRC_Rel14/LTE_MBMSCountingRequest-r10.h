/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MBMSCountingRequest_r10_H_
#define	_LTE_MBMSCountingRequest_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CountingRequestList-r10.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_MBMSCountingRequest-r10 */
typedef struct LTE_MBMSCountingRequest_r10 {
	LTE_CountingRequestList_r10_t	 countingRequestList_r10;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct LTE_MBMSCountingRequest_r10__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MBMSCountingRequest_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MBMSCountingRequest_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MBMSCountingRequest_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MBMSCountingRequest_r10_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_MBMSCountingRequest_r10_H_ */
#include <asn_internal.h>
