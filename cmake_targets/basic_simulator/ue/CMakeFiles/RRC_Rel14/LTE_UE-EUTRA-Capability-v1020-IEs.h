/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_UE_EUTRA_Capability_v1020_IEs_H_
#define	_LTE_UE_EUTRA_Capability_v1020_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_PhyLayerParameters_v1020;
struct LTE_RF_Parameters_v1020;
struct LTE_MeasParameters_v1020;
struct LTE_IRAT_ParametersCDMA2000_1XRTT_v1020;
struct LTE_UE_BasedNetwPerfMeasParameters_r10;
struct LTE_IRAT_ParametersUTRA_TDD_v1020;
struct LTE_UE_EUTRA_Capability_v1060_IEs;

/* LTE_UE-EUTRA-Capability-v1020-IEs */
typedef struct LTE_UE_EUTRA_Capability_v1020_IEs {
	long	*ue_Category_v1020;	/* OPTIONAL */
	struct LTE_PhyLayerParameters_v1020	*phyLayerParameters_v1020;	/* OPTIONAL */
	struct LTE_RF_Parameters_v1020	*rf_Parameters_v1020;	/* OPTIONAL */
	struct LTE_MeasParameters_v1020	*measParameters_v1020;	/* OPTIONAL */
	BIT_STRING_t	*featureGroupIndRel10_r10;	/* OPTIONAL */
	struct LTE_IRAT_ParametersCDMA2000_1XRTT_v1020	*interRAT_ParametersCDMA2000_v1020;	/* OPTIONAL */
	struct LTE_UE_BasedNetwPerfMeasParameters_r10	*ue_BasedNetwPerfMeasParameters_r10;	/* OPTIONAL */
	struct LTE_IRAT_ParametersUTRA_TDD_v1020	*interRAT_ParametersUTRA_TDD_v1020;	/* OPTIONAL */
	struct LTE_UE_EUTRA_Capability_v1060_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_EUTRA_Capability_v1020_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_Capability_v1020_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_Capability_v1020_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_Capability_v1020_IEs_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PhyLayerParameters-v1020.h"
#include "LTE_RF-Parameters-v1020.h"
#include "LTE_MeasParameters-v1020.h"
#include "LTE_IRAT-ParametersCDMA2000-1XRTT-v1020.h"
#include "LTE_UE-BasedNetwPerfMeasParameters-r10.h"
#include "LTE_IRAT-ParametersUTRA-TDD-v1020.h"
#include "LTE_UE-EUTRA-Capability-v1060-IEs.h"

#endif	/* _LTE_UE_EUTRA_Capability_v1020_IEs_H_ */
#include <asn_internal.h>
