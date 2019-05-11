/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_PhysCellIdRange_H_
#define	_LTE_PhysCellIdRange_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PhysCellId.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_PhysCellIdRange__range {
	LTE_PhysCellIdRange__range_n4	= 0,
	LTE_PhysCellIdRange__range_n8	= 1,
	LTE_PhysCellIdRange__range_n12	= 2,
	LTE_PhysCellIdRange__range_n16	= 3,
	LTE_PhysCellIdRange__range_n24	= 4,
	LTE_PhysCellIdRange__range_n32	= 5,
	LTE_PhysCellIdRange__range_n48	= 6,
	LTE_PhysCellIdRange__range_n64	= 7,
	LTE_PhysCellIdRange__range_n84	= 8,
	LTE_PhysCellIdRange__range_n96	= 9,
	LTE_PhysCellIdRange__range_n128	= 10,
	LTE_PhysCellIdRange__range_n168	= 11,
	LTE_PhysCellIdRange__range_n252	= 12,
	LTE_PhysCellIdRange__range_n504	= 13,
	LTE_PhysCellIdRange__range_spare2	= 14,
	LTE_PhysCellIdRange__range_spare1	= 15
} e_LTE_PhysCellIdRange__range;

/* LTE_PhysCellIdRange */
typedef struct LTE_PhysCellIdRange {
	LTE_PhysCellId_t	 start;
	long	*range;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_PhysCellIdRange_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_range_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_PhysCellIdRange;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_PhysCellIdRange_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_PhysCellIdRange_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_PhysCellIdRange_H_ */
#include <asn_internal.h>
