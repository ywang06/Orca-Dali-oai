/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_LoggedMeasurementConfiguration_r10_IEs_H_
#define	_LTE_LoggedMeasurementConfiguration_r10_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LTE_TraceReference-r10.h"
#include <OCTET_STRING.h>
#include "LTE_AbsoluteTimeInfo-r10.h"
#include "LTE_LoggingDuration-r10.h"
#include "LTE_LoggingInterval-r10.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct LTE_AreaConfiguration_r10;
struct LTE_LoggedMeasurementConfiguration_v1080_IEs;

/* LTE_LoggedMeasurementConfiguration-r10-IEs */
typedef struct LTE_LoggedMeasurementConfiguration_r10_IEs {
	LTE_TraceReference_r10_t	 traceReference_r10;
	OCTET_STRING_t	 traceRecordingSessionRef_r10;
	OCTET_STRING_t	 tce_Id_r10;
	LTE_AbsoluteTimeInfo_r10_t	 absoluteTimeInfo_r10;
	struct LTE_AreaConfiguration_r10	*areaConfiguration_r10;	/* OPTIONAL */
	LTE_LoggingDuration_r10_t	 loggingDuration_r10;
	LTE_LoggingInterval_r10_t	 loggingInterval_r10;
	struct LTE_LoggedMeasurementConfiguration_v1080_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_LoggedMeasurementConfiguration_r10_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LTE_LoggedMeasurementConfiguration_r10_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_LoggedMeasurementConfiguration_r10_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_LoggedMeasurementConfiguration_r10_IEs_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "LTE_AreaConfiguration-r10.h"
#include "LTE_LoggedMeasurementConfiguration-v1080-IEs.h"

#endif	/* _LTE_LoggedMeasurementConfiguration_r10_IEs_H_ */
#include <asn_internal.h>
