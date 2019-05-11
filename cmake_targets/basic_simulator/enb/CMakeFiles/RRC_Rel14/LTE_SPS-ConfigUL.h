/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SPS_ConfigUL_H_
#define	_LTE_SPS_ConfigUL_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include "LTE_SPS-ConfigIndex-r14.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SPS_ConfigUL_PR {
	LTE_SPS_ConfigUL_PR_NOTHING,	/* No components present */
	LTE_SPS_ConfigUL_PR_release,
	LTE_SPS_ConfigUL_PR_setup
} LTE_SPS_ConfigUL_PR;
typedef enum LTE_SPS_ConfigUL__setup__semiPersistSchedIntervalUL {
	LTE_SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf10	= 0,
	LTE_SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf20	= 1,
	LTE_SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf32	= 2,
	LTE_SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf40	= 3,
	LTE_SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf64	= 4,
	LTE_SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf80	= 5,
	LTE_SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf128	= 6,
	LTE_SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf160	= 7,
	LTE_SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf320	= 8,
	LTE_SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf640	= 9,
	LTE_SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf1_v1430	= 10,
	LTE_SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf2_v1430	= 11,
	LTE_SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf3_v1430	= 12,
	LTE_SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf4_v1430	= 13,
	LTE_SPS_ConfigUL__setup__semiPersistSchedIntervalUL_sf5_v1430	= 14,
	LTE_SPS_ConfigUL__setup__semiPersistSchedIntervalUL_spare1	= 15
} e_LTE_SPS_ConfigUL__setup__semiPersistSchedIntervalUL;
typedef enum LTE_SPS_ConfigUL__setup__implicitReleaseAfter {
	LTE_SPS_ConfigUL__setup__implicitReleaseAfter_e2	= 0,
	LTE_SPS_ConfigUL__setup__implicitReleaseAfter_e3	= 1,
	LTE_SPS_ConfigUL__setup__implicitReleaseAfter_e4	= 2,
	LTE_SPS_ConfigUL__setup__implicitReleaseAfter_e8	= 3
} e_LTE_SPS_ConfigUL__setup__implicitReleaseAfter;
typedef enum LTE_SPS_ConfigUL__setup__twoIntervalsConfig {
	LTE_SPS_ConfigUL__setup__twoIntervalsConfig_true	= 0
} e_LTE_SPS_ConfigUL__setup__twoIntervalsConfig;
typedef enum LTE_SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12_PR {
	LTE_SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12_PR_NOTHING,	/* No components present */
	LTE_SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12_PR_release,
	LTE_SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12_PR_setup
} LTE_SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12_PR;
typedef enum LTE_SPS_ConfigUL__setup__ext3__fixedRV_NonAdaptive_r14 {
	LTE_SPS_ConfigUL__setup__ext3__fixedRV_NonAdaptive_r14_true	= 0
} e_LTE_SPS_ConfigUL__setup__ext3__fixedRV_NonAdaptive_r14;
typedef enum LTE_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430 {
	LTE_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf50	= 0,
	LTE_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf100	= 1,
	LTE_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf200	= 2,
	LTE_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf300	= 3,
	LTE_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf400	= 4,
	LTE_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf500	= 5,
	LTE_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf600	= 6,
	LTE_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf700	= 7,
	LTE_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf800	= 8,
	LTE_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf900	= 9,
	LTE_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_sf1000	= 10,
	LTE_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_spare5	= 11,
	LTE_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_spare4	= 12,
	LTE_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_spare3	= 13,
	LTE_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_spare2	= 14,
	LTE_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430_spare1	= 15
} e_LTE_SPS_ConfigUL__setup__ext3__semiPersistSchedIntervalUL_v1430;

/* LTE_SPS-ConfigUL */
typedef struct LTE_SPS_ConfigUL {
	LTE_SPS_ConfigUL_PR present;
	union LTE_SPS_ConfigUL_u {
		NULL_t	 release;
		struct LTE_SPS_ConfigUL__setup {
			long	 semiPersistSchedIntervalUL;
			long	 implicitReleaseAfter;
			struct LTE_SPS_ConfigUL__setup__p0_Persistent {
				long	 p0_NominalPUSCH_Persistent;
				long	 p0_UE_PUSCH_Persistent;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *p0_Persistent;
			long	*twoIntervalsConfig;	/* OPTIONAL */
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
			struct LTE_SPS_ConfigUL__setup__ext1 {
				struct LTE_SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12 {
					LTE_SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12_PR present;
					union LTE_SPS_ConfigUL__LTE_setup__LTE_ext1__LTE_p0_PersistentSubframeSet2_r12_u {
						NULL_t	 release;
						struct LTE_SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12__setup {
							long	 p0_NominalPUSCH_PersistentSubframeSet2_r12;
							long	 p0_UE_PUSCH_PersistentSubframeSet2_r12;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} setup;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *p0_PersistentSubframeSet2_r12;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *ext1;
			struct LTE_SPS_ConfigUL__setup__ext2 {
				long	*numberOfConfUlSPS_Processes_r13;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *ext2;
			struct LTE_SPS_ConfigUL__setup__ext3 {
				long	*fixedRV_NonAdaptive_r14;	/* OPTIONAL */
				LTE_SPS_ConfigIndex_r14_t	*sps_ConfigIndex_r14;	/* OPTIONAL */
				long	*semiPersistSchedIntervalUL_v1430;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *ext3;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SPS_ConfigUL_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_semiPersistSchedIntervalUL_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_implicitReleaseAfter_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_twoIntervalsConfig_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_fixedRV_NonAdaptive_r14_41;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_semiPersistSchedIntervalUL_v1430_44;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SPS_ConfigUL;
extern asn_CHOICE_specifics_t asn_SPC_LTE_SPS_ConfigUL_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SPS_ConfigUL_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_SPS_ConfigUL_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SPS_ConfigUL_H_ */
#include <asn_internal.h>
