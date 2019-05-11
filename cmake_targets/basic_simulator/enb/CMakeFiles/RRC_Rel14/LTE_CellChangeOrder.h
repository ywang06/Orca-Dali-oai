/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CellChangeOrder_H_
#define	_LTE_CellChangeOrder_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "LTE_PhysCellIdGERAN.h"
#include "LTE_CarrierFreqGERAN.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CellChangeOrder__t304 {
	LTE_CellChangeOrder__t304_ms100	= 0,
	LTE_CellChangeOrder__t304_ms200	= 1,
	LTE_CellChangeOrder__t304_ms500	= 2,
	LTE_CellChangeOrder__t304_ms1000	= 3,
	LTE_CellChangeOrder__t304_ms2000	= 4,
	LTE_CellChangeOrder__t304_ms4000	= 5,
	LTE_CellChangeOrder__t304_ms8000	= 6,
	LTE_CellChangeOrder__t304_ms10000_v1310	= 7
} e_LTE_CellChangeOrder__t304;
typedef enum LTE_CellChangeOrder__targetRAT_Type_PR {
	LTE_CellChangeOrder__targetRAT_Type_PR_NOTHING,	/* No components present */
	LTE_CellChangeOrder__targetRAT_Type_PR_geran
	/* Extensions may appear below */
	
} LTE_CellChangeOrder__targetRAT_Type_PR;

/* Forward declarations */
struct LTE_SI_OrPSI_GERAN;

/* LTE_CellChangeOrder */
typedef struct LTE_CellChangeOrder {
	long	 t304;
	struct LTE_CellChangeOrder__targetRAT_Type {
		LTE_CellChangeOrder__targetRAT_Type_PR present;
		union LTE_CellChangeOrder__LTE_targetRAT_Type_u {
			struct LTE_CellChangeOrder__targetRAT_Type__geran {
				LTE_PhysCellIdGERAN_t	 physCellId;
				LTE_CarrierFreqGERAN_t	 carrierFreq;
				BIT_STRING_t	*networkControlOrder;	/* OPTIONAL */
				struct LTE_SI_OrPSI_GERAN	*systemInformation;	/* OPTIONAL */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} geran;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} targetRAT_Type;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CellChangeOrder_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_t304_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CellChangeOrder;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CellChangeOrder_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CellChangeOrder_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_SI-OrPSI-GERAN.h"

#endif	/* _LTE_CellChangeOrder_H_ */
#include <asn_internal.h>
