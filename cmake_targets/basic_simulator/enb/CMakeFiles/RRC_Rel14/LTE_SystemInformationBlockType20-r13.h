/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SystemInformationBlockType20_r13_H_
#define	_LTE_SystemInformationBlockType20_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include "LTE_ARFCN-ValueEUTRA-r9.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SystemInformationBlockType20_r13__sc_mcch_RepetitionPeriod_r13 {
	LTE_SystemInformationBlockType20_r13__sc_mcch_RepetitionPeriod_r13_rf2	= 0,
	LTE_SystemInformationBlockType20_r13__sc_mcch_RepetitionPeriod_r13_rf4	= 1,
	LTE_SystemInformationBlockType20_r13__sc_mcch_RepetitionPeriod_r13_rf8	= 2,
	LTE_SystemInformationBlockType20_r13__sc_mcch_RepetitionPeriod_r13_rf16	= 3,
	LTE_SystemInformationBlockType20_r13__sc_mcch_RepetitionPeriod_r13_rf32	= 4,
	LTE_SystemInformationBlockType20_r13__sc_mcch_RepetitionPeriod_r13_rf64	= 5,
	LTE_SystemInformationBlockType20_r13__sc_mcch_RepetitionPeriod_r13_rf128	= 6,
	LTE_SystemInformationBlockType20_r13__sc_mcch_RepetitionPeriod_r13_rf256	= 7
} e_LTE_SystemInformationBlockType20_r13__sc_mcch_RepetitionPeriod_r13;
typedef enum LTE_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13 {
	LTE_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf2	= 0,
	LTE_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf4	= 1,
	LTE_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf8	= 2,
	LTE_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf16	= 3,
	LTE_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf32	= 4,
	LTE_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf64	= 5,
	LTE_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf128	= 6,
	LTE_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf256	= 7,
	LTE_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf512	= 8,
	LTE_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf1024	= 9,
	LTE_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_r2048	= 10,
	LTE_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf4096	= 11,
	LTE_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf8192	= 12,
	LTE_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf16384	= 13,
	LTE_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf32768	= 14,
	LTE_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13_rf65536	= 15
} e_LTE_SystemInformationBlockType20_r13__sc_mcch_ModificationPeriod_r13;
typedef enum LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__dummy {
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__dummy_rf1	= 0
} e_LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__dummy;
typedef enum LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__dummy2 {
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__dummy2_rf1	= 0
} e_LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__dummy2;
typedef enum LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14 {
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14_r1	= 0,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14_r2	= 1,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14_r4	= 2,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14_r8	= 3,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14_r16	= 4,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14_r32	= 5,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14_r64	= 6,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14_r128	= 7,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14_r256	= 8
} e_LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_NumRepetition_SC_MCCH_r14;
typedef enum LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14_PR {
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14_PR_NOTHING,	/* No components present */
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14_PR_fdd_r14,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14_PR_tdd_r14
} LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14_PR;
typedef enum LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14 {
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14_v1	= 0,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14_v1dot5	= 1,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14_v2	= 2,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14_v2dot5	= 3,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14_v4	= 4,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14_v5	= 5,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14_v8	= 6,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14_v10	= 7
} e_LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__fdd_r14;
typedef enum LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__tdd_r14 {
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__tdd_r14_v1	= 0,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__tdd_r14_v2	= 1,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__tdd_r14_v4	= 2,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__tdd_r14_v5	= 3,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__tdd_r14_v8	= 4,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__tdd_r14_v10	= 5,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__tdd_r14_v20	= 6
} e_LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14__tdd_r14;
typedef enum LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_PDSCH_HoppingConfig_SC_MCCH_r14 {
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_PDSCH_HoppingConfig_SC_MCCH_r14_off	= 0,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_PDSCH_HoppingConfig_SC_MCCH_r14_ce_ModeA	= 1,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_PDSCH_HoppingConfig_SC_MCCH_r14_ce_ModeB	= 2
} e_LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_PDSCH_HoppingConfig_SC_MCCH_r14;
typedef enum LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_RepetitionPeriod_BR_r14 {
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_RepetitionPeriod_BR_r14_rf32	= 0,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_RepetitionPeriod_BR_r14_rf128	= 1,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_RepetitionPeriod_BR_r14_rf512	= 2,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_RepetitionPeriod_BR_r14_rf1024	= 3,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_RepetitionPeriod_BR_r14_rf2048	= 4,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_RepetitionPeriod_BR_r14_rf4096	= 5,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_RepetitionPeriod_BR_r14_rf8192	= 6,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_RepetitionPeriod_BR_r14_rf16384	= 7
} e_LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_RepetitionPeriod_BR_r14;
typedef enum LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_ModificationPeriod_BR_r14 {
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_ModificationPeriod_BR_r14_rf32	= 0,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_ModificationPeriod_BR_r14_rf128	= 1,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_ModificationPeriod_BR_r14_rf256	= 2,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_ModificationPeriod_BR_r14_rf512	= 3,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_ModificationPeriod_BR_r14_rf1024	= 4,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_ModificationPeriod_BR_r14_rf2048	= 5,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_ModificationPeriod_BR_r14_rf4096	= 6,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_ModificationPeriod_BR_r14_rf8192	= 7,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_ModificationPeriod_BR_r14_rf16384	= 8,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_ModificationPeriod_BR_r14_rf32768	= 9,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_ModificationPeriod_BR_r14_rf65536	= 10,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_ModificationPeriod_BR_r14_rf131072	= 11,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_ModificationPeriod_BR_r14_rf262144	= 12,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_ModificationPeriod_BR_r14_rf524288	= 13,
	LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_ModificationPeriod_BR_r14_rf1048576	= 14
} e_LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__sc_mcch_ModificationPeriod_BR_r14;
typedef enum LTE_SystemInformationBlockType20_r13__ext1__pdsch_maxNumRepetitionCEmodeA_SC_MTCH_r14 {
	LTE_SystemInformationBlockType20_r13__ext1__pdsch_maxNumRepetitionCEmodeA_SC_MTCH_r14_r16	= 0,
	LTE_SystemInformationBlockType20_r13__ext1__pdsch_maxNumRepetitionCEmodeA_SC_MTCH_r14_r32	= 1
} e_LTE_SystemInformationBlockType20_r13__ext1__pdsch_maxNumRepetitionCEmodeA_SC_MTCH_r14;
typedef enum LTE_SystemInformationBlockType20_r13__ext1__pdsch_maxNumRepetitionCEmodeB_SC_MTCH_r14 {
	LTE_SystemInformationBlockType20_r13__ext1__pdsch_maxNumRepetitionCEmodeB_SC_MTCH_r14_r192	= 0,
	LTE_SystemInformationBlockType20_r13__ext1__pdsch_maxNumRepetitionCEmodeB_SC_MTCH_r14_r256	= 1,
	LTE_SystemInformationBlockType20_r13__ext1__pdsch_maxNumRepetitionCEmodeB_SC_MTCH_r14_r384	= 2,
	LTE_SystemInformationBlockType20_r13__ext1__pdsch_maxNumRepetitionCEmodeB_SC_MTCH_r14_r512	= 3,
	LTE_SystemInformationBlockType20_r13__ext1__pdsch_maxNumRepetitionCEmodeB_SC_MTCH_r14_r768	= 4,
	LTE_SystemInformationBlockType20_r13__ext1__pdsch_maxNumRepetitionCEmodeB_SC_MTCH_r14_r1024	= 5,
	LTE_SystemInformationBlockType20_r13__ext1__pdsch_maxNumRepetitionCEmodeB_SC_MTCH_r14_r1536	= 6,
	LTE_SystemInformationBlockType20_r13__ext1__pdsch_maxNumRepetitionCEmodeB_SC_MTCH_r14_r2048	= 7
} e_LTE_SystemInformationBlockType20_r13__ext1__pdsch_maxNumRepetitionCEmodeB_SC_MTCH_r14;
typedef enum LTE_SystemInformationBlockType20_r13__ext2__sc_mcch_RepetitionPeriod_v1470 {
	LTE_SystemInformationBlockType20_r13__ext2__sc_mcch_RepetitionPeriod_v1470_rf1	= 0
} e_LTE_SystemInformationBlockType20_r13__ext2__sc_mcch_RepetitionPeriod_v1470;
typedef enum LTE_SystemInformationBlockType20_r13__ext2__sc_mcch_ModificationPeriod_v1470 {
	LTE_SystemInformationBlockType20_r13__ext2__sc_mcch_ModificationPeriod_v1470_rf1	= 0
} e_LTE_SystemInformationBlockType20_r13__ext2__sc_mcch_ModificationPeriod_v1470;

/* Forward declarations */
struct LTE_SC_MCCH_SchedulingInfo_r14;

/* LTE_SystemInformationBlockType20-r13 */
typedef struct LTE_SystemInformationBlockType20_r13 {
	long	 sc_mcch_RepetitionPeriod_r13;
	long	 sc_mcch_Offset_r13;
	long	 sc_mcch_FirstSubframe_r13;
	long	*sc_mcch_duration_r13;	/* OPTIONAL */
	long	 sc_mcch_ModificationPeriod_r13;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_SystemInformationBlockType20_r13__ext1 {
		struct LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14 {
			long	 dummy;
			long	 dummy2;
			long	 mpdcch_Narrowband_SC_MCCH_r14;
			long	 mpdcch_NumRepetition_SC_MCCH_r14;
			struct LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14 {
				LTE_SystemInformationBlockType20_r13__ext1__br_BCCH_Config_r14__mpdcch_StartSF_SC_MCCH_r14_PR present;
				union LTE_SystemInformationBlockType20_r13__LTE_ext1__LTE_br_BCCH_Config_r14__LTE_mpdcch_StartSF_SC_MCCH_r14_u {
					long	 fdd_r14;
					long	 tdd_r14;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} mpdcch_StartSF_SC_MCCH_r14;
			long	 mpdcch_PDSCH_HoppingConfig_SC_MCCH_r14;
			LTE_ARFCN_ValueEUTRA_r9_t	 sc_mcch_CarrierFreq_r14;
			long	 sc_mcch_Offset_BR_r14;
			long	 sc_mcch_RepetitionPeriod_BR_r14;
			long	 sc_mcch_ModificationPeriod_BR_r14;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *br_BCCH_Config_r14;
		struct LTE_SC_MCCH_SchedulingInfo_r14	*sc_mcch_SchedulingInfo_r14;	/* OPTIONAL */
		long	*pdsch_maxNumRepetitionCEmodeA_SC_MTCH_r14;	/* OPTIONAL */
		long	*pdsch_maxNumRepetitionCEmodeB_SC_MTCH_r14;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_SystemInformationBlockType20_r13__ext2 {
		long	*sc_mcch_RepetitionPeriod_v1470;	/* OPTIONAL */
		long	*sc_mcch_ModificationPeriod_v1470;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SystemInformationBlockType20_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sc_mcch_RepetitionPeriod_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sc_mcch_ModificationPeriod_r13_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_dummy_35;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_dummy2_37;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mpdcch_NumRepetition_SC_MCCH_r14_40;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_fdd_r14_51;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_tdd_r14_60;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_mpdcch_PDSCH_HoppingConfig_SC_MCCH_r14_68;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sc_mcch_RepetitionPeriod_BR_r14_74;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sc_mcch_ModificationPeriod_BR_r14_83;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_pdsch_maxNumRepetitionCEmodeA_SC_MTCH_r14_100;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_pdsch_maxNumRepetitionCEmodeB_SC_MTCH_r14_103;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sc_mcch_RepetitionPeriod_v1470_113;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_sc_mcch_ModificationPeriod_v1470_115;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType20_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType20_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType20_r13_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SC-MCCH-SchedulingInfo-r14.h"

#endif	/* _LTE_SystemInformationBlockType20_r13_H_ */
#include <asn_internal.h>
