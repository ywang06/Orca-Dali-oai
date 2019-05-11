/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CellsTriggeredList_H_
#define	_LTE_CellsTriggeredList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "LTE_PhysCellId.h"
#include "LTE_PhysCellIdCDMA2000.h"
#include "LTE_WLAN-Identifiers-r12.h"
#include "LTE_PhysCellIdUTRA-FDD.h"
#include "LTE_PhysCellIdUTRA-TDD.h"
#include <constr_CHOICE.h>
#include "LTE_CarrierFreqGERAN.h"
#include "LTE_PhysCellIdGERAN.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_CellsTriggeredList__Member_PR {
	LTE_CellsTriggeredList__Member_PR_NOTHING,	/* No components present */
	LTE_CellsTriggeredList__Member_PR_physCellIdEUTRA,
	LTE_CellsTriggeredList__Member_PR_physCellIdUTRA,
	LTE_CellsTriggeredList__Member_PR_physCellIdGERAN,
	LTE_CellsTriggeredList__Member_PR_physCellIdCDMA2000,
	LTE_CellsTriggeredList__Member_PR_wlan_Identifiers_r13
} LTE_CellsTriggeredList__Member_PR;
typedef enum LTE_CellsTriggeredList__Member__physCellIdUTRA_PR {
	LTE_CellsTriggeredList__Member__physCellIdUTRA_PR_NOTHING,	/* No components present */
	LTE_CellsTriggeredList__Member__physCellIdUTRA_PR_fdd,
	LTE_CellsTriggeredList__Member__physCellIdUTRA_PR_tdd
} LTE_CellsTriggeredList__Member__physCellIdUTRA_PR;

/* Forward definitions */
typedef struct LTE_CellsTriggeredList__Member {
	LTE_CellsTriggeredList__Member_PR present;
	union LTE_CellsTriggeredList__LTE_Member_u {
		LTE_PhysCellId_t	 physCellIdEUTRA;
		struct LTE_CellsTriggeredList__Member__physCellIdUTRA {
			LTE_CellsTriggeredList__Member__physCellIdUTRA_PR present;
			union LTE_CellsTriggeredList__LTE_Member__LTE_physCellIdUTRA_u {
				LTE_PhysCellIdUTRA_FDD_t	 fdd;
				LTE_PhysCellIdUTRA_TDD_t	 tdd;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} physCellIdUTRA;
		struct LTE_CellsTriggeredList__Member__physCellIdGERAN {
			LTE_CarrierFreqGERAN_t	 carrierFreq;
			LTE_PhysCellIdGERAN_t	 physCellId;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} physCellIdGERAN;
		LTE_PhysCellIdCDMA2000_t	 physCellIdCDMA2000;
		LTE_WLAN_Identifiers_r12_t	 wlan_Identifiers_r13;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellsTriggeredList__Member;

/* LTE_CellsTriggeredList */
typedef struct LTE_CellsTriggeredList {
	A_SEQUENCE_OF(CellsTriggeredList__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CellsTriggeredList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CellsTriggeredList;
extern asn_SET_OF_specifics_t asn_SPC_LTE_CellsTriggeredList_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CellsTriggeredList_1[1];
extern asn_per_constraints_t asn_PER_type_LTE_CellsTriggeredList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CellsTriggeredList_H_ */
#include <asn_internal.h>
