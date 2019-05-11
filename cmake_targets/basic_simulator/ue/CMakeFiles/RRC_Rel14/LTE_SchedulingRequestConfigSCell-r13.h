/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_SchedulingRequestConfigSCell_r13_H_
#define	_LTE_SchedulingRequestConfigSCell_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_SchedulingRequestConfigSCell_r13_PR {
	LTE_SchedulingRequestConfigSCell_r13_PR_NOTHING,	/* No components present */
	LTE_SchedulingRequestConfigSCell_r13_PR_release,
	LTE_SchedulingRequestConfigSCell_r13_PR_setup
} LTE_SchedulingRequestConfigSCell_r13_PR;
typedef enum LTE_SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13 {
	LTE_SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13_n4	= 0,
	LTE_SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13_n8	= 1,
	LTE_SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13_n16	= 2,
	LTE_SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13_n32	= 3,
	LTE_SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13_n64	= 4,
	LTE_SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13_spare3	= 5,
	LTE_SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13_spare2	= 6,
	LTE_SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13_spare1	= 7
} e_LTE_SchedulingRequestConfigSCell_r13__setup__dsr_TransMax_r13;

/* LTE_SchedulingRequestConfigSCell-r13 */
typedef struct LTE_SchedulingRequestConfigSCell_r13 {
	LTE_SchedulingRequestConfigSCell_r13_PR present;
	union LTE_SchedulingRequestConfigSCell_r13_u {
		NULL_t	 release;
		struct LTE_SchedulingRequestConfigSCell_r13__setup {
			long	 sr_PUCCH_ResourceIndex_r13;
			long	*sr_PUCCH_ResourceIndexP1_r13;	/* OPTIONAL */
			long	 sr_ConfigIndex_r13;
			long	 dsr_TransMax_r13;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_SchedulingRequestConfigSCell_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_dsr_TransMax_r13_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_SchedulingRequestConfigSCell_r13;
extern asn_CHOICE_specifics_t asn_SPC_LTE_SchedulingRequestConfigSCell_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_SchedulingRequestConfigSCell_r13_1[2];
extern asn_per_constraints_t asn_PER_type_LTE_SchedulingRequestConfigSCell_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_SchedulingRequestConfigSCell_r13_H_ */
#include <asn_internal.h>
