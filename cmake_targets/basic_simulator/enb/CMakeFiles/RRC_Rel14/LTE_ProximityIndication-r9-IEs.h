/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_ProximityIndication_r9_IEs_H_
#define	_LTE_ProximityIndication_r9_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_ARFCN-ValueEUTRA.h"
#include "LTE_ARFCN-ValueUTRA.h"
#include "LTE_ARFCN-ValueEUTRA-v9e0.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_ProximityIndication_r9_IEs__type_r9 {
	LTE_ProximityIndication_r9_IEs__type_r9_entering	= 0,
	LTE_ProximityIndication_r9_IEs__type_r9_leaving	= 1
} e_LTE_ProximityIndication_r9_IEs__type_r9;
typedef enum LTE_ProximityIndication_r9_IEs__carrierFreq_r9_PR {
	LTE_ProximityIndication_r9_IEs__carrierFreq_r9_PR_NOTHING,	/* No components present */
	LTE_ProximityIndication_r9_IEs__carrierFreq_r9_PR_eutra_r9,
	LTE_ProximityIndication_r9_IEs__carrierFreq_r9_PR_utra_r9,
	/* Extensions may appear below */
	LTE_ProximityIndication_r9_IEs__carrierFreq_r9_PR_eutra2_v9e0
} LTE_ProximityIndication_r9_IEs__carrierFreq_r9_PR;

/* Forward declarations */
struct LTE_ProximityIndication_v930_IEs;

/* LTE_ProximityIndication-r9-IEs */
typedef struct LTE_ProximityIndication_r9_IEs {
	long	 type_r9;
	struct LTE_ProximityIndication_r9_IEs__carrierFreq_r9 {
		LTE_ProximityIndication_r9_IEs__carrierFreq_r9_PR present;
		union LTE_ProximityIndication_r9_IEs__LTE_carrierFreq_r9_u {
			LTE_ARFCN_ValueEUTRA_t	 eutra_r9;
			LTE_ARFCN_ValueUTRA_t	 utra_r9;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			LTE_ARFCN_ValueEUTRA_v9e0_t	 eutra2_v9e0;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} carrierFreq_r9;
	struct LTE_ProximityIndication_v930_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_ProximityIndication_r9_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_type_r9_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_ProximityIndication_r9_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_ProximityIndication_r9_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_ProximityIndication_r9_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_ProximityIndication-v930-IEs.h"

#endif	/* _LTE_ProximityIndication_r9_IEs_H_ */
#include <asn_internal.h>
