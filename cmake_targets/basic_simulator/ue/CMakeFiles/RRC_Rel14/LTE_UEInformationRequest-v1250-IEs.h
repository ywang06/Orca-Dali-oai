/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_UEInformationRequest_v1250_IEs_H_
#define	_LTE_UEInformationRequest_v1250_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UEInformationRequest_v1250_IEs__mobilityHistoryReportReq_r12 {
	LTE_UEInformationRequest_v1250_IEs__mobilityHistoryReportReq_r12_true	= 0
} e_LTE_UEInformationRequest_v1250_IEs__mobilityHistoryReportReq_r12;

/* LTE_UEInformationRequest-v1250-IEs */
typedef struct LTE_UEInformationRequest_v1250_IEs {
	long	*mobilityHistoryReportReq_r12;	/* OPTIONAL */
	struct LTE_UEInformationRequest_v1250_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UEInformationRequest_v1250_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mobilityHistoryReportReq_r12_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UEInformationRequest_v1250_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UEInformationRequest_v1250_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UEInformationRequest_v1250_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_UEInformationRequest_v1250_IEs_H_ */
#include <asn_internal.h>
