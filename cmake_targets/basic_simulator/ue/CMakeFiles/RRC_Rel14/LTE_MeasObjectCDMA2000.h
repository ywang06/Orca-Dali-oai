/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MeasObjectCDMA2000_H_
#define	_LTE_MeasObjectCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CDMA2000-Type.h"
#include "LTE_CarrierFreqCDMA2000.h"
#include <NativeInteger.h>
#include "LTE_Q-OffsetRangeInterRAT.h"
#include "LTE_PhysCellIdCDMA2000.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_CellIndexList;
struct LTE_CellsToAddModListCDMA2000;

/* LTE_MeasObjectCDMA2000 */
typedef struct LTE_MeasObjectCDMA2000 {
	LTE_CDMA2000_Type_t	 cdma2000_Type;
	LTE_CarrierFreqCDMA2000_t	 carrierFreq;
	long	*searchWindowSize;	/* OPTIONAL */
	LTE_Q_OffsetRangeInterRAT_t	 offsetFreq;	/* DEFAULT 0 */
	struct LTE_CellIndexList	*cellsToRemoveList;	/* OPTIONAL */
	struct LTE_CellsToAddModListCDMA2000	*cellsToAddModList;	/* OPTIONAL */
	LTE_PhysCellIdCDMA2000_t	*cellForWhichToReportCGI;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasObjectCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasObjectCDMA2000;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasObjectCDMA2000_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasObjectCDMA2000_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CellIndexList.h"
#include "LTE_CellsToAddModListCDMA2000.h"

#endif	/* _LTE_MeasObjectCDMA2000_H_ */
#include <asn_internal.h>
