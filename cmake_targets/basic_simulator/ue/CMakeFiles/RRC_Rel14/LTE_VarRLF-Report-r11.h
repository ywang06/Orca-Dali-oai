/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_VarRLF_Report_r11_H_
#define	_LTE_VarRLF_Report_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_RLF-Report-r9.h"
#include "LTE_PLMN-IdentityList3-r11.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_VarRLF-Report-r11 */
typedef struct LTE_VarRLF_Report_r11 {
	LTE_RLF_Report_r9_t	 rlf_Report_r10;
	LTE_PLMN_IdentityList3_r11_t	 plmn_IdentityList_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_VarRLF_Report_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_VarRLF_Report_r11;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_VarRLF_Report_r11_H_ */
#include <asn_internal.h>
