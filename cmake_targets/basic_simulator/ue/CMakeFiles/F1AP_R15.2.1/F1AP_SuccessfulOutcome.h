/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Descriptions"
 * 	found in "/home/carlos/dualCon/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-PDU-Descriptions.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/F1AP_R15.2.1`
 */

#ifndef	_F1AP_SuccessfulOutcome_H_
#define	_F1AP_SuccessfulOutcome_H_


#include <asn_application.h>

/* Including external dependencies */
#include "F1AP_ProcedureCode.h"
#include "F1AP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "F1AP_Reset.h"
#include "F1AP_ResetAcknowledge.h"
#include "F1AP_F1SetupRequest.h"
#include "F1AP_F1SetupResponse.h"
#include "F1AP_F1SetupFailure.h"
#include "F1AP_GNBDUConfigurationUpdate.h"
#include "F1AP_GNBDUConfigurationUpdateAcknowledge.h"
#include "F1AP_GNBDUConfigurationUpdateFailure.h"
#include "F1AP_GNBCUConfigurationUpdate.h"
#include "F1AP_GNBCUConfigurationUpdateAcknowledge.h"
#include "F1AP_GNBCUConfigurationUpdateFailure.h"
#include "F1AP_UEContextSetupRequest.h"
#include "F1AP_UEContextSetupResponse.h"
#include "F1AP_UEContextSetupFailure.h"
#include "F1AP_UEContextReleaseCommand.h"
#include "F1AP_UEContextReleaseComplete.h"
#include "F1AP_UEContextModificationRequest.h"
#include "F1AP_UEContextModificationResponse.h"
#include "F1AP_UEContextModificationFailure.h"
#include "F1AP_UEContextModificationRequired.h"
#include "F1AP_UEContextModificationConfirm.h"
#include "F1AP_WriteReplaceWarningRequest.h"
#include "F1AP_WriteReplaceWarningResponse.h"
#include "F1AP_PWSCancelRequest.h"
#include "F1AP_PWSCancelResponse.h"
#include "F1AP_GNBDUResourceCoordinationRequest.h"
#include "F1AP_GNBDUResourceCoordinationResponse.h"
#include "F1AP_ErrorIndication.h"
#include "F1AP_UEContextReleaseRequest.h"
#include "F1AP_DLRRCMessageTransfer.h"
#include "F1AP_ULRRCMessageTransfer.h"
#include "F1AP_UEInactivityNotification.h"
#include "F1AP_PrivateMessage.h"
#include "F1AP_InitialULRRCMessageTransfer.h"
#include "F1AP_SystemInformationDeliveryCommand.h"
#include "F1AP_Paging.h"
#include "F1AP_Notify.h"
#include "F1AP_PWSRestartIndication.h"
#include "F1AP_PWSFailureIndication.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum F1AP_SuccessfulOutcome__value_PR {
	F1AP_SuccessfulOutcome__value_PR_NOTHING,	/* No components present */
	F1AP_SuccessfulOutcome__value_PR_ResetAcknowledge,
	F1AP_SuccessfulOutcome__value_PR_F1SetupResponse,
	F1AP_SuccessfulOutcome__value_PR_GNBDUConfigurationUpdateAcknowledge,
	F1AP_SuccessfulOutcome__value_PR_GNBCUConfigurationUpdateAcknowledge,
	F1AP_SuccessfulOutcome__value_PR_UEContextSetupResponse,
	F1AP_SuccessfulOutcome__value_PR_UEContextReleaseComplete,
	F1AP_SuccessfulOutcome__value_PR_UEContextModificationResponse,
	F1AP_SuccessfulOutcome__value_PR_UEContextModificationConfirm,
	F1AP_SuccessfulOutcome__value_PR_WriteReplaceWarningResponse,
	F1AP_SuccessfulOutcome__value_PR_PWSCancelResponse,
	F1AP_SuccessfulOutcome__value_PR_GNBDUResourceCoordinationResponse
} F1AP_SuccessfulOutcome__value_PR;

/* F1AP_SuccessfulOutcome */
typedef struct F1AP_SuccessfulOutcome {
	F1AP_ProcedureCode_t	 procedureCode;
	F1AP_Criticality_t	 criticality;
	struct F1AP_SuccessfulOutcome__value {
		F1AP_SuccessfulOutcome__value_PR present;
		union F1AP_SuccessfulOutcome__F1AP_value_u {
			F1AP_ResetAcknowledge_t	 ResetAcknowledge;
			F1AP_F1SetupResponse_t	 F1SetupResponse;
			F1AP_GNBDUConfigurationUpdateAcknowledge_t	 GNBDUConfigurationUpdateAcknowledge;
			F1AP_GNBCUConfigurationUpdateAcknowledge_t	 GNBCUConfigurationUpdateAcknowledge;
			F1AP_UEContextSetupResponse_t	 UEContextSetupResponse;
			F1AP_UEContextReleaseComplete_t	 UEContextReleaseComplete;
			F1AP_UEContextModificationResponse_t	 UEContextModificationResponse;
			F1AP_UEContextModificationConfirm_t	 UEContextModificationConfirm;
			F1AP_WriteReplaceWarningResponse_t	 WriteReplaceWarningResponse;
			F1AP_PWSCancelResponse_t	 PWSCancelResponse;
			F1AP_GNBDUResourceCoordinationResponse_t	 GNBDUResourceCoordinationResponse;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_SuccessfulOutcome_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_SuccessfulOutcome;
extern asn_SEQUENCE_specifics_t asn_SPC_F1AP_SuccessfulOutcome_specs_1;
extern asn_TYPE_member_t asn_MBR_F1AP_SuccessfulOutcome_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_SuccessfulOutcome_H_ */
#include <asn_internal.h>
