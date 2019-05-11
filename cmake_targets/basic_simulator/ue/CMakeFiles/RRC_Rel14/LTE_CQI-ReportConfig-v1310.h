/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CQI_ReportConfig_v1310_H_
#define	_LTE_CQI_ReportConfig_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_CQI_ReportBoth_v1310;
struct LTE_CQI_ReportAperiodic_v1310;
struct LTE_CQI_ReportPeriodic_v1310;

/* LTE_CQI-ReportConfig-v1310 */
typedef struct LTE_CQI_ReportConfig_v1310 {
	struct LTE_CQI_ReportBoth_v1310	*cqi_ReportBoth_v1310;	/* OPTIONAL */
	struct LTE_CQI_ReportAperiodic_v1310	*cqi_ReportAperiodic_v1310;	/* OPTIONAL */
	struct LTE_CQI_ReportPeriodic_v1310	*cqi_ReportPeriodic_v1310;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CQI_ReportConfig_v1310_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CQI_ReportConfig_v1310;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CQI_ReportConfig_v1310_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CQI_ReportConfig_v1310_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_CQI-ReportBoth-v1310.h"
#include "LTE_CQI-ReportAperiodic-v1310.h"
#include "LTE_CQI-ReportPeriodic-v1310.h"

#endif	/* _LTE_CQI_ReportConfig_v1310_H_ */
#include <asn_internal.h>
