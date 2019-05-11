/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Descriptions"
 * 	found in "/home/carlos/dualCon/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#include "X2AP_UnsuccessfulOutcome.h"

static const long asn_VAL_1_X2AP_id_handoverPreparation = 0;
static const long asn_VAL_1_X2AP_reject = 0;
static const long asn_VAL_2_X2AP_id_reset = 7;
static const long asn_VAL_2_X2AP_reject = 0;
static const long asn_VAL_3_X2AP_id_x2Setup = 6;
static const long asn_VAL_3_X2AP_reject = 0;
static const long asn_VAL_4_X2AP_id_resourceStatusReportingInitiation = 9;
static const long asn_VAL_4_X2AP_reject = 0;
static const long asn_VAL_5_X2AP_id_eNBConfigurationUpdate = 8;
static const long asn_VAL_5_X2AP_reject = 0;
static const long asn_VAL_6_X2AP_id_mobilitySettingsChange = 12;
static const long asn_VAL_6_X2AP_reject = 0;
static const long asn_VAL_7_X2AP_id_cellActivation = 15;
static const long asn_VAL_7_X2AP_reject = 0;
static const long asn_VAL_8_X2AP_id_seNBAdditionPreparation = 19;
static const long asn_VAL_8_X2AP_reject = 0;
static const long asn_VAL_9_X2AP_id_meNBinitiatedSeNBModificationPreparation = 21;
static const long asn_VAL_9_X2AP_reject = 0;
static const long asn_VAL_10_X2AP_id_seNBinitiatedSeNBModification = 22;
static const long asn_VAL_10_X2AP_reject = 0;
static const long asn_VAL_11_X2AP_id_seNBinitiatedSeNBRelease = 24;
static const long asn_VAL_11_X2AP_reject = 0;
static const long asn_VAL_12_X2AP_id_x2Removal = 18;
static const long asn_VAL_12_X2AP_reject = 0;
static const long asn_VAL_13_X2AP_id_retrieveUEContext = 26;
static const long asn_VAL_13_X2AP_reject = 0;
static const long asn_VAL_14_X2AP_id_snStatusTransfer = 4;
static const long asn_VAL_14_X2AP_ignore = 1;
static const long asn_VAL_15_X2AP_id_uEContextRelease = 5;
static const long asn_VAL_15_X2AP_ignore = 1;
static const long asn_VAL_16_X2AP_id_handoverCancel = 1;
static const long asn_VAL_16_X2AP_ignore = 1;
static const long asn_VAL_17_X2AP_id_errorIndication = 3;
static const long asn_VAL_17_X2AP_ignore = 1;
static const long asn_VAL_18_X2AP_id_resourceStatusReporting = 10;
static const long asn_VAL_18_X2AP_ignore = 1;
static const long asn_VAL_19_X2AP_id_loadIndication = 2;
static const long asn_VAL_19_X2AP_ignore = 1;
static const long asn_VAL_20_X2AP_id_privateMessage = 11;
static const long asn_VAL_20_X2AP_ignore = 1;
static const long asn_VAL_21_X2AP_id_rLFIndication = 13;
static const long asn_VAL_21_X2AP_ignore = 1;
static const long asn_VAL_22_X2AP_id_handoverReport = 14;
static const long asn_VAL_22_X2AP_ignore = 1;
static const long asn_VAL_23_X2AP_id_x2Release = 16;
static const long asn_VAL_23_X2AP_reject = 0;
static const long asn_VAL_24_X2AP_id_x2APMessageTransfer = 17;
static const long asn_VAL_24_X2AP_reject = 0;
static const long asn_VAL_25_X2AP_id_seNBReconfigurationCompletion = 20;
static const long asn_VAL_25_X2AP_ignore = 1;
static const long asn_VAL_26_X2AP_id_meNBinitiatedSeNBRelease = 23;
static const long asn_VAL_26_X2AP_ignore = 1;
static const long asn_VAL_27_X2AP_id_seNBCounterCheck = 25;
static const long asn_VAL_27_X2AP_reject = 0;
static const asn_ioc_cell_t asn_IOS_X2AP_X2AP_ELEMENTARY_PROCEDURES_1_rows[] = {
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_HandoverRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_X2AP_HandoverRequestAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_X2AP_HandoverPreparationFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_1_X2AP_id_handoverPreparation },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_1_X2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_ResetRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_X2AP_ResetResponse },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_2_X2AP_id_reset },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_2_X2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_X2SetupRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_X2AP_X2SetupResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_X2AP_X2SetupFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_3_X2AP_id_x2Setup },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_3_X2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_ResourceStatusRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_X2AP_ResourceStatusResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_X2AP_ResourceStatusFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_4_X2AP_id_resourceStatusReportingInitiation },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_4_X2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_ENBConfigurationUpdate },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_X2AP_ENBConfigurationUpdateAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_X2AP_ENBConfigurationUpdateFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_5_X2AP_id_eNBConfigurationUpdate },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_5_X2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_MobilityChangeRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_X2AP_MobilityChangeAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_X2AP_MobilityChangeFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_6_X2AP_id_mobilitySettingsChange },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_6_X2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_CellActivationRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_X2AP_CellActivationResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_X2AP_CellActivationFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_7_X2AP_id_cellActivation },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_7_X2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_SeNBAdditionRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_X2AP_SeNBAdditionRequestAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_X2AP_SeNBAdditionRequestReject },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_8_X2AP_id_seNBAdditionPreparation },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_8_X2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_SeNBModificationRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_X2AP_SeNBModificationRequestAcknowledge },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_X2AP_SeNBModificationRequestReject },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_9_X2AP_id_meNBinitiatedSeNBModificationPreparation },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_9_X2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_SeNBModificationRequired },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_X2AP_SeNBModificationConfirm },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_X2AP_SeNBModificationRefuse },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_10_X2AP_id_seNBinitiatedSeNBModification },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_10_X2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_SeNBReleaseRequired },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_X2AP_SeNBReleaseConfirm },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_11_X2AP_id_seNBinitiatedSeNBRelease },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_11_X2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_X2RemovalRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_X2AP_X2RemovalResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_X2AP_X2RemovalFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_12_X2AP_id_x2Removal },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_12_X2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_RetrieveUEContextRequest },
	{ "&SuccessfulOutcome", aioc__type, &asn_DEF_X2AP_RetrieveUEContextResponse },
	{ "&UnsuccessfulOutcome", aioc__type, &asn_DEF_X2AP_RetrieveUEContextFailure },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_13_X2AP_id_retrieveUEContext },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_13_X2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_SNStatusTransfer },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_14_X2AP_id_snStatusTransfer },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_14_X2AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_UEContextRelease },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_15_X2AP_id_uEContextRelease },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_15_X2AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_HandoverCancel },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_16_X2AP_id_handoverCancel },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_16_X2AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_ErrorIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_17_X2AP_id_errorIndication },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_17_X2AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_ResourceStatusUpdate },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_18_X2AP_id_resourceStatusReporting },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_18_X2AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_LoadInformation },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_19_X2AP_id_loadIndication },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_19_X2AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_PrivateMessage },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_20_X2AP_id_privateMessage },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_20_X2AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_RLFIndication },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_21_X2AP_id_rLFIndication },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_21_X2AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_HandoverReport },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_22_X2AP_id_handoverReport },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_22_X2AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_X2Release },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_23_X2AP_id_x2Release },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_23_X2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_X2APMessageTransfer },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_24_X2AP_id_x2APMessageTransfer },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_24_X2AP_reject },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_SeNBReconfigurationComplete },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_25_X2AP_id_seNBReconfigurationCompletion },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_25_X2AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_SeNBReleaseRequest },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_26_X2AP_id_meNBinitiatedSeNBRelease },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_26_X2AP_ignore },
	{ "&InitiatingMessage", aioc__type, &asn_DEF_X2AP_SeNBCounterCheckRequest },
	{ "&SuccessfulOutcome",  },
	{ "&UnsuccessfulOutcome",  },
	{ "&procedureCode", aioc__value, &asn_DEF_X2AP_ProcedureCode, &asn_VAL_27_X2AP_id_seNBCounterCheck },
	{ "&criticality", aioc__value, &asn_DEF_X2AP_Criticality, &asn_VAL_27_X2AP_reject }
};
static const asn_ioc_set_t asn_IOS_X2AP_X2AP_ELEMENTARY_PROCEDURES_1[] = {
	{ 27, 5, asn_IOS_X2AP_X2AP_ELEMENTARY_PROCEDURES_1_rows }
};
static int
memb_X2AP_procedureCode_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_type_selector_result_t
select_UnsuccessfulOutcome_X2AP_criticality_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_X2AP_X2AP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 4; /* &criticality */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct X2AP_UnsuccessfulOutcome, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_X2AP_criticality_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_type_selector_result_t
select_UnsuccessfulOutcome_X2AP_value_type(const asn_TYPE_descriptor_t *parent_type, const void *parent_sptr) {
	asn_type_selector_result_t result = {0, 0};
	const asn_ioc_set_t *itable = asn_IOS_X2AP_X2AP_ELEMENTARY_PROCEDURES_1;
	size_t constraining_column = 3; /* &procedureCode */
	size_t for_column = 2; /* &UnsuccessfulOutcome */
	size_t row, presence_index = 0;
	const long *constraining_value = (const long *)((const char *)parent_sptr + offsetof(struct X2AP_UnsuccessfulOutcome, procedureCode));
	
	for(row=0; row < itable->rows_count; row++) {
	    const asn_ioc_cell_t *constraining_cell = &itable->rows[row * itable->columns_count + constraining_column];
	    const asn_ioc_cell_t *type_cell = &itable->rows[row * itable->columns_count + for_column];
	
	    if(type_cell->cell_kind == aioc__undefined)
	        continue;
	
	    presence_index++;
	    if(constraining_cell->type_descriptor->op->compare_struct(constraining_cell->type_descriptor, constraining_value, constraining_cell->value_sptr) == 0) {
	        result.type_descriptor = type_cell->type_descriptor;
	        result.presence_index = presence_index;
	        break;
	    }
	}
	
	return result;
}

static int
memb_X2AP_value_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_memb_X2AP_procedureCode_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_X2AP_criticality_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_X2AP_value_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_X2AP_value_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UnsuccessfulOutcome__value, choice.HandoverPreparationFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_X2AP_HandoverPreparationFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"HandoverPreparationFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UnsuccessfulOutcome__value, choice.X2SetupFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_X2AP_X2SetupFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"X2SetupFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UnsuccessfulOutcome__value, choice.ResourceStatusFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_X2AP_ResourceStatusFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ResourceStatusFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UnsuccessfulOutcome__value, choice.ENBConfigurationUpdateFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_X2AP_ENBConfigurationUpdateFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ENBConfigurationUpdateFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UnsuccessfulOutcome__value, choice.MobilityChangeFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_X2AP_MobilityChangeFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"MobilityChangeFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UnsuccessfulOutcome__value, choice.CellActivationFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_X2AP_CellActivationFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"CellActivationFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UnsuccessfulOutcome__value, choice.SeNBAdditionRequestReject),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_X2AP_SeNBAdditionRequestReject,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"SeNBAdditionRequestReject"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UnsuccessfulOutcome__value, choice.SeNBModificationRequestReject),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_X2AP_SeNBModificationRequestReject,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"SeNBModificationRequestReject"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UnsuccessfulOutcome__value, choice.SeNBModificationRefuse),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_X2AP_SeNBModificationRefuse,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"SeNBModificationRefuse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UnsuccessfulOutcome__value, choice.X2RemovalFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_X2AP_X2RemovalFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"X2RemovalFailure"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UnsuccessfulOutcome__value, choice.RetrieveUEContextFailure),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_X2AP_RetrieveUEContextFailure,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"RetrieveUEContextFailure"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_value_tag2el_4[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 10 }, /* HandoverPreparationFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, -1, 9 }, /* X2SetupFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 2, -2, 8 }, /* ResourceStatusFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 3, -3, 7 }, /* ENBConfigurationUpdateFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, -4, 6 }, /* MobilityChangeFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 5, -5, 5 }, /* CellActivationFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 6, -6, 4 }, /* SeNBAdditionRequestReject */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 7, -7, 3 }, /* SeNBModificationRequestReject */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 8, -8, 2 }, /* SeNBModificationRefuse */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 9, -9, 1 }, /* X2RemovalFailure */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 10, -10, 0 } /* RetrieveUEContextFailure */
};
static asn_CHOICE_specifics_t asn_SPC_X2AP_value_specs_4 = {
	sizeof(struct X2AP_UnsuccessfulOutcome__value),
	offsetof(struct X2AP_UnsuccessfulOutcome__value, _asn_ctx),
	offsetof(struct X2AP_UnsuccessfulOutcome__value, present),
	sizeof(((struct X2AP_UnsuccessfulOutcome__value *)0)->present),
	asn_MAP_X2AP_value_tag2el_4,
	11,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_X2AP_value_4 = {
	"value",
	"value",
	&asn_OP_OPEN_TYPE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, 0, OPEN_TYPE_constraint },
	asn_MBR_X2AP_value_4,
	11,	/* Elements count */
	&asn_SPC_X2AP_value_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_X2AP_UnsuccessfulOutcome_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UnsuccessfulOutcome, procedureCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProcedureCode,
		0,
		{ 0, &asn_PER_memb_X2AP_procedureCode_constr_2,  memb_X2AP_procedureCode_constraint_1 },
		0, 0, /* No default value */
		"procedureCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_UnsuccessfulOutcome, criticality),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_Criticality,
		select_UnsuccessfulOutcome_X2AP_criticality_type,
		{ 0, &asn_PER_memb_X2AP_criticality_constr_3,  memb_X2AP_criticality_constraint_1 },
		0, 0, /* No default value */
		"criticality"
		},
	{ ATF_OPEN_TYPE | ATF_NOFLAGS, 0, offsetof(struct X2AP_UnsuccessfulOutcome, value),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_X2AP_value_4,
		select_UnsuccessfulOutcome_X2AP_value_type,
		{ 0, &asn_PER_memb_X2AP_value_constr_4,  memb_X2AP_value_constraint_1 },
		0, 0, /* No default value */
		"value"
		},
};
static const ber_tlv_tag_t asn_DEF_X2AP_UnsuccessfulOutcome_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_UnsuccessfulOutcome_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* procedureCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* criticality */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* value */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_UnsuccessfulOutcome_specs_1 = {
	sizeof(struct X2AP_UnsuccessfulOutcome),
	offsetof(struct X2AP_UnsuccessfulOutcome, _asn_ctx),
	asn_MAP_X2AP_UnsuccessfulOutcome_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_UnsuccessfulOutcome = {
	"UnsuccessfulOutcome",
	"UnsuccessfulOutcome",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_UnsuccessfulOutcome_tags_1,
	sizeof(asn_DEF_X2AP_UnsuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_X2AP_UnsuccessfulOutcome_tags_1[0]), /* 1 */
	asn_DEF_X2AP_UnsuccessfulOutcome_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_UnsuccessfulOutcome_tags_1)
		/sizeof(asn_DEF_X2AP_UnsuccessfulOutcome_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_UnsuccessfulOutcome_1,
	3,	/* Elements count */
	&asn_SPC_X2AP_UnsuccessfulOutcome_specs_1	/* Additional specs */
};

