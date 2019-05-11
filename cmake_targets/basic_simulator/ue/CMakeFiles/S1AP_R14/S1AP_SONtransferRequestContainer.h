/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/S1AP_R14`
 */

#ifndef	_S1AP_SONtransferRequestContainer_H_
#define	_S1AP_SONtransferRequestContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "S1AP_MultiCellLoadReportingRequest.h"
#include "S1AP_EventTriggeredCellLoadReportingRequest.h"
#include "S1AP_HOReport.h"
#include "S1AP_CellActivationRequest.h"
#include "S1AP_CellStateIndication.h"
#include "S1AP_FailureEventReport.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_SONtransferRequestContainer_PR {
	S1AP_SONtransferRequestContainer_PR_NOTHING,	/* No components present */
	S1AP_SONtransferRequestContainer_PR_cellLoadReporting,
	/* Extensions may appear below */
	S1AP_SONtransferRequestContainer_PR_multiCellLoadReporting,
	S1AP_SONtransferRequestContainer_PR_eventTriggeredCellLoadReporting,
	S1AP_SONtransferRequestContainer_PR_hOReporting,
	S1AP_SONtransferRequestContainer_PR_eutranCellActivation,
	S1AP_SONtransferRequestContainer_PR_energySavingsIndication,
	S1AP_SONtransferRequestContainer_PR_failureEventReporting
} S1AP_SONtransferRequestContainer_PR;

/* S1AP_SONtransferRequestContainer */
typedef struct S1AP_SONtransferRequestContainer {
	S1AP_SONtransferRequestContainer_PR present;
	union S1AP_SONtransferRequestContainer_u {
		NULL_t	 cellLoadReporting;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		S1AP_MultiCellLoadReportingRequest_t	 multiCellLoadReporting;
		S1AP_EventTriggeredCellLoadReportingRequest_t	 eventTriggeredCellLoadReporting;
		S1AP_HOReport_t	 hOReporting;
		S1AP_CellActivationRequest_t	 eutranCellActivation;
		S1AP_CellStateIndication_t	 energySavingsIndication;
		S1AP_FailureEventReport_t	 failureEventReporting;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_SONtransferRequestContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_SONtransferRequestContainer;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_SONtransferRequestContainer_H_ */
#include <asn_internal.h>
