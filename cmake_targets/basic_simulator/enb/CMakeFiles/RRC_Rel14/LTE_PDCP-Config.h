/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PDCP_Config_H_
#define	_LTE_PDCP_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include <NULL.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PDCP_Config__discardTimer {
	LTE_PDCP_Config__discardTimer_ms50	= 0,
	LTE_PDCP_Config__discardTimer_ms100	= 1,
	LTE_PDCP_Config__discardTimer_ms150	= 2,
	LTE_PDCP_Config__discardTimer_ms300	= 3,
	LTE_PDCP_Config__discardTimer_ms500	= 4,
	LTE_PDCP_Config__discardTimer_ms750	= 5,
	LTE_PDCP_Config__discardTimer_ms1500	= 6,
	LTE_PDCP_Config__discardTimer_infinity	= 7
} e_LTE_PDCP_Config__discardTimer;
typedef enum LTE_PDCP_Config__rlc_UM__pdcp_SN_Size {
	LTE_PDCP_Config__rlc_UM__pdcp_SN_Size_len7bits	= 0,
	LTE_PDCP_Config__rlc_UM__pdcp_SN_Size_len12bits	= 1
} e_LTE_PDCP_Config__rlc_UM__pdcp_SN_Size;
typedef enum LTE_PDCP_Config__headerCompression_PR {
	LTE_PDCP_Config__headerCompression_PR_NOTHING,	/* No components present */
	LTE_PDCP_Config__headerCompression_PR_notUsed,
	LTE_PDCP_Config__headerCompression_PR_rohc
} LTE_PDCP_Config__headerCompression_PR;
typedef enum LTE_PDCP_Config__ext1__rn_IntegrityProtection_r10 {
	LTE_PDCP_Config__ext1__rn_IntegrityProtection_r10_enabled	= 0
} e_LTE_PDCP_Config__ext1__rn_IntegrityProtection_r10;
typedef enum LTE_PDCP_Config__ext2__pdcp_SN_Size_v1130 {
	LTE_PDCP_Config__ext2__pdcp_SN_Size_v1130_len15bits	= 0
} e_LTE_PDCP_Config__ext2__pdcp_SN_Size_v1130;
typedef enum LTE_PDCP_Config__ext3__t_Reordering_r12 {
	LTE_PDCP_Config__ext3__t_Reordering_r12_ms0	= 0,
	LTE_PDCP_Config__ext3__t_Reordering_r12_ms20	= 1,
	LTE_PDCP_Config__ext3__t_Reordering_r12_ms40	= 2,
	LTE_PDCP_Config__ext3__t_Reordering_r12_ms60	= 3,
	LTE_PDCP_Config__ext3__t_Reordering_r12_ms80	= 4,
	LTE_PDCP_Config__ext3__t_Reordering_r12_ms100	= 5,
	LTE_PDCP_Config__ext3__t_Reordering_r12_ms120	= 6,
	LTE_PDCP_Config__ext3__t_Reordering_r12_ms140	= 7,
	LTE_PDCP_Config__ext3__t_Reordering_r12_ms160	= 8,
	LTE_PDCP_Config__ext3__t_Reordering_r12_ms180	= 9,
	LTE_PDCP_Config__ext3__t_Reordering_r12_ms200	= 10,
	LTE_PDCP_Config__ext3__t_Reordering_r12_ms220	= 11,
	LTE_PDCP_Config__ext3__t_Reordering_r12_ms240	= 12,
	LTE_PDCP_Config__ext3__t_Reordering_r12_ms260	= 13,
	LTE_PDCP_Config__ext3__t_Reordering_r12_ms280	= 14,
	LTE_PDCP_Config__ext3__t_Reordering_r12_ms300	= 15,
	LTE_PDCP_Config__ext3__t_Reordering_r12_ms500	= 16,
	LTE_PDCP_Config__ext3__t_Reordering_r12_ms750	= 17,
	LTE_PDCP_Config__ext3__t_Reordering_r12_spare14	= 18,
	LTE_PDCP_Config__ext3__t_Reordering_r12_spare13	= 19,
	LTE_PDCP_Config__ext3__t_Reordering_r12_spare12	= 20,
	LTE_PDCP_Config__ext3__t_Reordering_r12_spare11	= 21,
	LTE_PDCP_Config__ext3__t_Reordering_r12_spare10	= 22,
	LTE_PDCP_Config__ext3__t_Reordering_r12_spare9	= 23,
	LTE_PDCP_Config__ext3__t_Reordering_r12_spare8	= 24,
	LTE_PDCP_Config__ext3__t_Reordering_r12_spare7	= 25,
	LTE_PDCP_Config__ext3__t_Reordering_r12_spare6	= 26,
	LTE_PDCP_Config__ext3__t_Reordering_r12_spare5	= 27,
	LTE_PDCP_Config__ext3__t_Reordering_r12_spare4	= 28,
	LTE_PDCP_Config__ext3__t_Reordering_r12_spare3	= 29,
	LTE_PDCP_Config__ext3__t_Reordering_r12_spare2	= 30,
	LTE_PDCP_Config__ext3__t_Reordering_r12_spare1	= 31
} e_LTE_PDCP_Config__ext3__t_Reordering_r12;
typedef enum LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13_PR {
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13_PR_NOTHING,	/* No components present */
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13_PR_release,
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13_PR_setup
} LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13_PR;
typedef enum LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13__setup {
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13__setup_b0	= 0,
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13__setup_b100	= 1,
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13__setup_b200	= 2,
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13__setup_b400	= 3,
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13__setup_b800	= 4,
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13__setup_b1600	= 5,
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13__setup_b3200	= 6,
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13__setup_b6400	= 7,
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13__setup_b12800	= 8,
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13__setup_b25600	= 9,
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13__setup_b51200	= 10,
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13__setup_b102400	= 11,
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13__setup_b204800	= 12,
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13__setup_b409600	= 13,
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13__setup_b819200	= 14,
	LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13__setup_spare1	= 15
} e_LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13__setup;
typedef enum LTE_PDCP_Config__ext4__pdcp_SN_Size_v1310 {
	LTE_PDCP_Config__ext4__pdcp_SN_Size_v1310_len18bits	= 0
} e_LTE_PDCP_Config__ext4__pdcp_SN_Size_v1310;
typedef enum LTE_PDCP_Config__ext4__statusFeedback_r13_PR {
	LTE_PDCP_Config__ext4__statusFeedback_r13_PR_NOTHING,	/* No components present */
	LTE_PDCP_Config__ext4__statusFeedback_r13_PR_release,
	LTE_PDCP_Config__ext4__statusFeedback_r13_PR_setup
} LTE_PDCP_Config__ext4__statusFeedback_r13_PR;
typedef enum LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_TypeForPolling_r13 {
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_TypeForPolling_r13_type1	= 0,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_TypeForPolling_r13_type2	= 1
} e_LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_TypeForPolling_r13;
typedef enum LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13 {
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms5	= 0,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms10	= 1,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms20	= 2,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms30	= 3,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms40	= 4,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms50	= 5,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms60	= 6,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms70	= 7,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms80	= 8,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms90	= 9,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms100	= 10,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms150	= 11,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms200	= 12,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms300	= 13,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms500	= 14,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms1000	= 15,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms2000	= 16,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms5000	= 17,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms10000	= 18,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms20000	= 19,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13_ms50000	= 20
} e_LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type1_r13;
typedef enum LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13 {
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms5	= 0,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms10	= 1,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms20	= 2,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms30	= 3,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms40	= 4,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms50	= 5,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms60	= 6,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms70	= 7,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms80	= 8,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms90	= 9,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms100	= 10,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms150	= 11,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms200	= 12,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms300	= 13,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms500	= 14,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms1000	= 15,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms2000	= 16,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms5000	= 17,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms10000	= 18,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms20000	= 19,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13_ms50000	= 20
} e_LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Type2_r13;
typedef enum LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13 {
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms1	= 0,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms2	= 1,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms5	= 2,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms10	= 3,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms25	= 4,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms50	= 5,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms100	= 6,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms250	= 7,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms500	= 8,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms2500	= 9,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms5000	= 10,
	LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13_ms25000	= 11
} e_LTE_PDCP_Config__ext4__statusFeedback_r13__setup__statusPDU_Periodicity_Offset_r13;
typedef enum LTE_PDCP_Config__ext5__ul_LWA_Config_r14_PR {
	LTE_PDCP_Config__ext5__ul_LWA_Config_r14_PR_NOTHING,	/* No components present */
	LTE_PDCP_Config__ext5__ul_LWA_Config_r14_PR_release,
	LTE_PDCP_Config__ext5__ul_LWA_Config_r14_PR_setup
} LTE_PDCP_Config__ext5__ul_LWA_Config_r14_PR;
typedef enum LTE_PDCP_Config__ext5__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14 {
	LTE_PDCP_Config__ext5__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b0	= 0,
	LTE_PDCP_Config__ext5__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b100	= 1,
	LTE_PDCP_Config__ext5__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b200	= 2,
	LTE_PDCP_Config__ext5__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b400	= 3,
	LTE_PDCP_Config__ext5__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b800	= 4,
	LTE_PDCP_Config__ext5__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b1600	= 5,
	LTE_PDCP_Config__ext5__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b3200	= 6,
	LTE_PDCP_Config__ext5__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b6400	= 7,
	LTE_PDCP_Config__ext5__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b12800	= 8,
	LTE_PDCP_Config__ext5__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b25600	= 9,
	LTE_PDCP_Config__ext5__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b51200	= 10,
	LTE_PDCP_Config__ext5__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b102400	= 11,
	LTE_PDCP_Config__ext5__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b204800	= 12,
	LTE_PDCP_Config__ext5__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b409600	= 13,
	LTE_PDCP_Config__ext5__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14_b819200	= 14
} e_LTE_PDCP_Config__ext5__ul_LWA_Config_r14__setup__ul_LWA_DataSplitThreshold_r14;
typedef enum LTE_PDCP_Config__ext5__uplinkOnlyHeaderCompression_r14_PR {
	LTE_PDCP_Config__ext5__uplinkOnlyHeaderCompression_r14_PR_NOTHING,	/* No components present */
	LTE_PDCP_Config__ext5__uplinkOnlyHeaderCompression_r14_PR_notUsed_r14,
	LTE_PDCP_Config__ext5__uplinkOnlyHeaderCompression_r14_PR_rohc_r14
} LTE_PDCP_Config__ext5__uplinkOnlyHeaderCompression_r14_PR;

/* LTE_PDCP-Config */
typedef struct LTE_PDCP_Config {
	long	*discardTimer;	/* OPTIONAL */
	struct LTE_PDCP_Config__rlc_AM {
		BOOLEAN_t	 statusReportRequired;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rlc_AM;
	struct LTE_PDCP_Config__rlc_UM {
		long	 pdcp_SN_Size;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rlc_UM;
	struct LTE_PDCP_Config__headerCompression {
		LTE_PDCP_Config__headerCompression_PR present;
		union LTE_PDCP_Config__LTE_headerCompression_u {
			NULL_t	 notUsed;
			struct LTE_PDCP_Config__headerCompression__rohc {
				long	*maxCID;	/* DEFAULT 15 */
				struct LTE_PDCP_Config__headerCompression__rohc__profiles {
					BOOLEAN_t	 profile0x0001;
					BOOLEAN_t	 profile0x0002;
					BOOLEAN_t	 profile0x0003;
					BOOLEAN_t	 profile0x0004;
					BOOLEAN_t	 profile0x0006;
					BOOLEAN_t	 profile0x0101;
					BOOLEAN_t	 profile0x0102;
					BOOLEAN_t	 profile0x0103;
					BOOLEAN_t	 profile0x0104;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} profiles;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} rohc;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} headerCompression;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_PDCP_Config__ext1 {
		long	*rn_IntegrityProtection_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_PDCP_Config__ext2 {
		long	*pdcp_SN_Size_v1130;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct LTE_PDCP_Config__ext3 {
		BOOLEAN_t	*ul_DataSplitDRB_ViaSCG_r12;	/* OPTIONAL */
		long	*t_Reordering_r12;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	struct LTE_PDCP_Config__ext4 {
		struct LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13 {
			LTE_PDCP_Config__ext4__ul_DataSplitThreshold_r13_PR present;
			union LTE_PDCP_Config__LTE_ext4__LTE_ul_DataSplitThreshold_r13_u {
				NULL_t	 release;
				long	 setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ul_DataSplitThreshold_r13;
		long	*pdcp_SN_Size_v1310;	/* OPTIONAL */
		struct LTE_PDCP_Config__ext4__statusFeedback_r13 {
			LTE_PDCP_Config__ext4__statusFeedback_r13_PR present;
			union LTE_PDCP_Config__LTE_ext4__LTE_statusFeedback_r13_u {
				NULL_t	 release;
				struct LTE_PDCP_Config__ext4__statusFeedback_r13__setup {
					long	*statusPDU_TypeForPolling_r13;	/* OPTIONAL */
					long	*statusPDU_Periodicity_Type1_r13;	/* OPTIONAL */
					long	*statusPDU_Periodicity_Type2_r13;	/* OPTIONAL */
					long	*statusPDU_Periodicity_Offset_r13;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *statusFeedback_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext4;
	struct LTE_PDCP_Config__ext5 {
		struct LTE_PDCP_Config__ext5__ul_LWA_Config_r14 {
			LTE_PDCP_Config__ext5__ul_LWA_Config_r14_PR present;
			union LTE_PDCP_Config__LTE_ext5__LTE_ul_LWA_Config_r14_u {
				NULL_t	 release;
				struct LTE_PDCP_Config__ext5__ul_LWA_Config_r14__setup {
					BOOLEAN_t	 ul_LWA_DRB_ViaWLAN_r14;
					long	*ul_LWA_DataSplitThreshold_r14;	/* OPTIONAL */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} setup;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ul_LWA_Config_r14;
		struct LTE_PDCP_Config__ext5__uplinkOnlyHeaderCompression_r14 {
			LTE_PDCP_Config__ext5__uplinkOnlyHeaderCompression_r14_PR present;
			union LTE_PDCP_Config__LTE_ext5__LTE_uplinkOnlyHeaderCompression_r14_u {
				NULL_t	 notUsed_r14;
				struct LTE_PDCP_Config__ext5__uplinkOnlyHeaderCompression_r14__rohc_r14 {
					long	*maxCID_r14;	/* DEFAULT 15 */
					struct LTE_PDCP_Config__ext5__uplinkOnlyHeaderCompression_r14__rohc_r14__profiles_r14 {
						BOOLEAN_t	 profile0x0006_r14;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} profiles_r14;
					/*
					 * This type is extensible,
					 * possible extensions are below.
					 */
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} rohc_r14;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *uplinkOnlyHeaderCompression_r14;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext5;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PDCP_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_discardTimer_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_pdcp_SN_Size_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_rn_IntegrityProtection_r10_34;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_pdcp_SN_Size_v1130_37;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_t_Reordering_r12_41;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_setup_77;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_pdcp_SN_Size_v1310_94;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_statusPDU_TypeForPolling_r13_99;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_statusPDU_Periodicity_Type1_r13_102;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_statusPDU_Periodicity_Type2_r13_124;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_statusPDU_Periodicity_Offset_r13_146;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_ul_LWA_DataSplitThreshold_r14_164;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PDCP_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PDCP_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PDCP_Config_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PDCP_Config_H_ */
#include <asn_internal.h>
