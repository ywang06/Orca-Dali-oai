/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_CQI_ReportConfig_v1130_H_
#define	_LTE_CQI_ReportConfig_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_CQI-ReportPeriodic-v1130.h"
#include "LTE_CQI-ReportBoth-r11.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_CQI-ReportConfig-v1130 */
typedef struct LTE_CQI_ReportConfig_v1130 {
	LTE_CQI_ReportPeriodic_v1130_t	 cqi_ReportPeriodic_v1130;
	LTE_CQI_ReportBoth_r11_t	 cqi_ReportBoth_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_CQI_ReportConfig_v1130_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_CQI_ReportConfig_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_CQI_ReportConfig_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_CQI_ReportConfig_v1130_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_CQI_ReportConfig_v1130_H_ */
#include <asn_internal.h>
