/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_NPRACH_ConfigSIB_NB_v1450_H_
#define	_LTE_NPRACH_ConfigSIB_NB_v1450_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14 {
	LTE_NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14_n3	= 0,
	LTE_NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14_n4	= 1,
	LTE_NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14_n5	= 2,
	LTE_NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14_n6	= 3,
	LTE_NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14_n7	= 4,
	LTE_NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14_n8	= 5,
	LTE_NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14_n10	= 6,
	LTE_NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14_spare1	= 7
} e_LTE_NPRACH_ConfigSIB_NB_v1450__maxNumPreambleAttemptCE_r14;

/* LTE_NPRACH-ConfigSIB-NB-v1450 */
typedef struct LTE_NPRACH_ConfigSIB_NB_v1450 {
	long	 maxNumPreambleAttemptCE_r14;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_NPRACH_ConfigSIB_NB_v1450_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_maxNumPreambleAttemptCE_r14_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_NPRACH_ConfigSIB_NB_v1450;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_NPRACH_ConfigSIB_NB_v1450_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_NPRACH_ConfigSIB_NB_v1450_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_NPRACH_ConfigSIB_NB_v1450_H_ */
#include <asn_internal.h>
