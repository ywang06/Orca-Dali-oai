/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_ThresholdUTRA_H_
#define	_LTE_ThresholdUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_ThresholdUTRA_PR {
	LTE_ThresholdUTRA_PR_NOTHING,	/* No components present */
	LTE_ThresholdUTRA_PR_utra_RSCP,
	LTE_ThresholdUTRA_PR_utra_EcN0
} LTE_ThresholdUTRA_PR;

/* LTE_ThresholdUTRA */
typedef struct LTE_ThresholdUTRA {
	LTE_ThresholdUTRA_PR present;
	union LTE_ThresholdUTRA_u {
		long	 utra_RSCP;
		long	 utra_EcN0;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_ThresholdUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_ThresholdUTRA;
extern asn_CHOICE_specifics_t asn_SPC_LTE_ThresholdUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_ThresholdUTRA_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_ThresholdUTRA_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_ThresholdUTRA_H_ */
#include <asn_internal.h>
