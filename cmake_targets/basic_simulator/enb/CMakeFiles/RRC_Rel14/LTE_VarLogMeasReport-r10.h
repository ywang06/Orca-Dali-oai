/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_VarLogMeasReport_r10_H_
#define	_LTE_VarLogMeasReport_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_TraceReference-r10.h"
#include <OCTET_STRING.h>
#include "LTE_PLMN-Identity.h"
#include "LTE_AbsoluteTimeInfo-r10.h"
#include "LTE_LogMeasInfoList2-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LTE_VarLogMeasReport-r10 */
typedef struct LTE_VarLogMeasReport_r10 {
	LTE_TraceReference_r10_t	 traceReference_r10;
	OCTET_STRING_t	 traceRecordingSessionRef_r10;
	OCTET_STRING_t	 tce_Id_r10;
	LTE_PLMN_Identity_t	 plmn_Identity_r10;
	LTE_AbsoluteTimeInfo_r10_t	 absoluteTimeInfo_r10;
	LTE_LogMeasInfoList2_r10_t	 logMeasInfoList_r10;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_VarLogMeasReport_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_VarLogMeasReport_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_VarLogMeasReport_r10_H_ */
#include <asn_internal.h>
