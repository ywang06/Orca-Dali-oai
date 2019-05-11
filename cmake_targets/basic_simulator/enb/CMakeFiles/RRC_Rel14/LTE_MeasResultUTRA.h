/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_MeasResultUTRA_H_
#define	_LTE_MeasResultUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_PhysCellIdUTRA-FDD.h"
#include "LTE_PhysCellIdUTRA-TDD.h"
#include <constr_CHOICE.h>
#include "LTE_CellGlobalIdUTRA.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_MeasResultUTRA__physCellId_PR {
	LTE_MeasResultUTRA__physCellId_PR_NOTHING,	/* No components present */
	LTE_MeasResultUTRA__physCellId_PR_fdd,
	LTE_MeasResultUTRA__physCellId_PR_tdd
} LTE_MeasResultUTRA__physCellId_PR;
typedef enum LTE_MeasResultUTRA__measResult__ext2__primaryPLMN_Suitable_r12 {
	LTE_MeasResultUTRA__measResult__ext2__primaryPLMN_Suitable_r12_true	= 0
} e_LTE_MeasResultUTRA__measResult__ext2__primaryPLMN_Suitable_r12;

/* Forward declarations */
struct LTE_PLMN_IdentityList2;
struct LTE_AdditionalSI_Info_r9;

/* LTE_MeasResultUTRA */
typedef struct LTE_MeasResultUTRA {
	struct LTE_MeasResultUTRA__physCellId {
		LTE_MeasResultUTRA__physCellId_PR present;
		union LTE_MeasResultUTRA__LTE_physCellId_u {
			LTE_PhysCellIdUTRA_FDD_t	 fdd;
			LTE_PhysCellIdUTRA_TDD_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} physCellId;
	struct LTE_MeasResultUTRA__cgi_Info {
		LTE_CellGlobalIdUTRA_t	 cellGlobalId;
		BIT_STRING_t	*locationAreaCode;	/* OPTIONAL */
		BIT_STRING_t	*routingAreaCode;	/* OPTIONAL */
		struct LTE_PLMN_IdentityList2	*plmn_IdentityList;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cgi_Info;
	struct LTE_MeasResultUTRA__measResult {
		long	*utra_RSCP;	/* OPTIONAL */
		long	*utra_EcN0;	/* OPTIONAL */
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		struct LTE_MeasResultUTRA__measResult__ext1 {
			struct LTE_AdditionalSI_Info_r9	*additionalSI_Info_r9;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ext1;
		struct LTE_MeasResultUTRA__measResult__ext2 {
			long	*primaryPLMN_Suitable_r12;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ext2;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResult;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_MeasResultUTRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_primaryPLMN_Suitable_r12_17;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_MeasResultUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasResultUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_MeasResultUTRA_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_PLMN-IdentityList2.h"
#include "LTE_AdditionalSI-Info-r9.h"

#endif	/* _LTE_MeasResultUTRA_H_ */
#include <asn_internal.h>
