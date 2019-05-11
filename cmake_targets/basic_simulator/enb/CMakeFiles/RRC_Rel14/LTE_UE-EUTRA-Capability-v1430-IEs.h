/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_UE_EUTRA_Capability_v1430_IEs_H_
#define	_LTE_UE_EUTRA_Capability_v1430_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PhyLayerParameters-v1430.h"
#include <NativeEnumerated.h>
#include "LTE_RLC-Parameters-v1430.h"
#include "LTE_Other-Parameters-v1430.h"
#include "LTE_CE-Parameters-v1430.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_UE_EUTRA_Capability_v1430_IEs__ue_CategoryDL_v1430 {
	LTE_UE_EUTRA_Capability_v1430_IEs__ue_CategoryDL_v1430_m2	= 0
} e_LTE_UE_EUTRA_Capability_v1430_IEs__ue_CategoryDL_v1430;
typedef enum LTE_UE_EUTRA_Capability_v1430_IEs__ue_CategoryUL_v1430 {
	LTE_UE_EUTRA_Capability_v1430_IEs__ue_CategoryUL_v1430_n16	= 0,
	LTE_UE_EUTRA_Capability_v1430_IEs__ue_CategoryUL_v1430_n17	= 1,
	LTE_UE_EUTRA_Capability_v1430_IEs__ue_CategoryUL_v1430_n18	= 2,
	LTE_UE_EUTRA_Capability_v1430_IEs__ue_CategoryUL_v1430_n19	= 3,
	LTE_UE_EUTRA_Capability_v1430_IEs__ue_CategoryUL_v1430_n20	= 4,
	LTE_UE_EUTRA_Capability_v1430_IEs__ue_CategoryUL_v1430_m2	= 5
} e_LTE_UE_EUTRA_Capability_v1430_IEs__ue_CategoryUL_v1430;
typedef enum LTE_UE_EUTRA_Capability_v1430_IEs__ue_CategoryUL_v1430b {
	LTE_UE_EUTRA_Capability_v1430_IEs__ue_CategoryUL_v1430b_n21	= 0
} e_LTE_UE_EUTRA_Capability_v1430_IEs__ue_CategoryUL_v1430b;

/* Forward declarations */
struct LTE_MAC_Parameters_v1430;
struct LTE_MeasParameters_v1430;
struct LTE_PDCP_Parameters_v1430;
struct LTE_RF_Parameters_v1430;
struct LTE_LAA_Parameters_v1430;
struct LTE_LWA_Parameters_v1430;
struct LTE_LWIP_Parameters_v1430;
struct LTE_MMTEL_Parameters_r14;
struct LTE_MobilityParameters_r14;
struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1430;
struct LTE_MBMS_Parameters_v1430;
struct LTE_SL_Parameters_v1430;
struct LTE_UE_BasedNetwPerfMeasParameters_v1430;
struct LTE_HighSpeedEnhParameters_r14;
struct LTE_UE_EUTRA_Capability_v1440_IEs;

/* LTE_UE-EUTRA-Capability-v1430-IEs */
typedef struct LTE_UE_EUTRA_Capability_v1430_IEs {
	LTE_PhyLayerParameters_v1430_t	 phyLayerParameters_v1430;
	long	*ue_CategoryDL_v1430;	/* OPTIONAL */
	long	*ue_CategoryUL_v1430;	/* OPTIONAL */
	long	*ue_CategoryUL_v1430b;	/* OPTIONAL */
	struct LTE_MAC_Parameters_v1430	*mac_Parameters_v1430;	/* OPTIONAL */
	struct LTE_MeasParameters_v1430	*measParameters_v1430;	/* OPTIONAL */
	struct LTE_PDCP_Parameters_v1430	*pdcp_Parameters_v1430;	/* OPTIONAL */
	LTE_RLC_Parameters_v1430_t	 rlc_Parameters_v1430;
	struct LTE_RF_Parameters_v1430	*rf_Parameters_v1430;	/* OPTIONAL */
	struct LTE_LAA_Parameters_v1430	*laa_Parameters_v1430;	/* OPTIONAL */
	struct LTE_LWA_Parameters_v1430	*lwa_Parameters_v1430;	/* OPTIONAL */
	struct LTE_LWIP_Parameters_v1430	*lwip_Parameters_v1430;	/* OPTIONAL */
	LTE_Other_Parameters_v1430_t	 otherParameters_v1430;
	struct LTE_MMTEL_Parameters_r14	*mmtel_Parameters_r14;	/* OPTIONAL */
	struct LTE_MobilityParameters_r14	*mobilityParameters_r14;	/* OPTIONAL */
	LTE_CE_Parameters_v1430_t	 ce_Parameters_v1430;
	struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1430	*fdd_Add_UE_EUTRA_Capabilities_v1430;	/* OPTIONAL */
	struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1430	*tdd_Add_UE_EUTRA_Capabilities_v1430;	/* OPTIONAL */
	struct LTE_MBMS_Parameters_v1430	*mbms_Parameters_v1430;	/* OPTIONAL */
	struct LTE_SL_Parameters_v1430	*sl_Parameters_v1430;	/* OPTIONAL */
	struct LTE_UE_BasedNetwPerfMeasParameters_v1430	*ue_BasedNetwPerfMeasParameters_v1430;	/* OPTIONAL */
	struct LTE_HighSpeedEnhParameters_r14	*highSpeedEnhParameters_r14;	/* OPTIONAL */
	struct LTE_UE_EUTRA_Capability_v1440_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_UE_EUTRA_Capability_v1430_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ue_CategoryDL_v1430_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ue_CategoryUL_v1430_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ue_CategoryUL_v1430b_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_Capability_v1430_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_Capability_v1430_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_Capability_v1430_IEs_1[23];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_MAC-Parameters-v1430.h"
#include "LTE_MeasParameters-v1430.h"
#include "LTE_PDCP-Parameters-v1430.h"
#include "LTE_RF-Parameters-v1430.h"
#include "LTE_LAA-Parameters-v1430.h"
#include "LTE_LWA-Parameters-v1430.h"
#include "LTE_LWIP-Parameters-v1430.h"
#include "LTE_MMTEL-Parameters-r14.h"
#include "LTE_MobilityParameters-r14.h"
#include "LTE_UE-EUTRA-CapabilityAddXDD-Mode-v1430.h"
#include "LTE_MBMS-Parameters-v1430.h"
#include "LTE_SL-Parameters-v1430.h"
#include "LTE_UE-BasedNetwPerfMeasParameters-v1430.h"
#include "LTE_HighSpeedEnhParameters-r14.h"
#include "LTE_UE-EUTRA-Capability-v1440-IEs.h"

#endif	/* _LTE_UE_EUTRA_Capability_v1430_IEs_H_ */
#include <asn_internal.h>
