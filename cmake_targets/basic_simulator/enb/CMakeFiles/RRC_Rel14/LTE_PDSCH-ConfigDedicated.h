/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PDSCH_ConfigDedicated_H_
#define	_LTE_PDSCH_ConfigDedicated_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PDSCH_ConfigDedicated__p_a {
	LTE_PDSCH_ConfigDedicated__p_a_dB_6	= 0,
	LTE_PDSCH_ConfigDedicated__p_a_dB_4dot77	= 1,
	LTE_PDSCH_ConfigDedicated__p_a_dB_3	= 2,
	LTE_PDSCH_ConfigDedicated__p_a_dB_1dot77	= 3,
	LTE_PDSCH_ConfigDedicated__p_a_dB0	= 4,
	LTE_PDSCH_ConfigDedicated__p_a_dB1	= 5,
	LTE_PDSCH_ConfigDedicated__p_a_dB2	= 6,
	LTE_PDSCH_ConfigDedicated__p_a_dB3	= 7
} e_LTE_PDSCH_ConfigDedicated__p_a;

/* LTE_PDSCH-ConfigDedicated */
typedef struct LTE_PDSCH_ConfigDedicated {
	long	 p_a;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PDSCH_ConfigDedicated_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_p_a_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PDSCH_ConfigDedicated;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PDSCH_ConfigDedicated_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PDSCH_ConfigDedicated_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PDSCH_ConfigDedicated_H_ */
#include <asn_internal.h>
