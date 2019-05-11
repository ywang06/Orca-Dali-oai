/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/F1AP_R15.2.1`
 */

#ifndef	_F1AP_NRFreqInfo_H_
#define	_F1AP_NRFreqInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct F1AP_SUL_Information;
struct F1AP_ProtocolExtensionContainer;
struct F1AP_FreqBandNrItem;

/* F1AP_NRFreqInfo */
typedef struct F1AP_NRFreqInfo {
	long	 nRARFCN;
	struct F1AP_SUL_Information	*sul_Information;	/* OPTIONAL */
	struct F1AP_NRFreqInfo__freqBandListNr {
		A_SEQUENCE_OF(struct F1AP_FreqBandNrItem) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} freqBandListNr;
	struct F1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_NRFreqInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_NRFreqInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_NRFreqInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_NRFreqInfo_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_NRFreqInfo_H_ */
#include <asn_internal.h>
