/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/S1AP_R14`
 */

#include "S1AP_SONInformationReport.h"

static asn_per_constraints_t asn_PER_type_S1AP_SONInformationReport_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_S1AP_SONInformationReport_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_SONInformationReport, choice.rLFReportInformation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_RLFReportInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rLFReportInformation"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_SONInformationReport_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* rLFReportInformation */
};
static asn_CHOICE_specifics_t asn_SPC_S1AP_SONInformationReport_specs_1 = {
	sizeof(struct S1AP_SONInformationReport),
	offsetof(struct S1AP_SONInformationReport, _asn_ctx),
	offsetof(struct S1AP_SONInformationReport, present),
	sizeof(((struct S1AP_SONInformationReport *)0)->present),
	asn_MAP_S1AP_SONInformationReport_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0,
	1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_SONInformationReport = {
	"SONInformationReport",
	"SONInformationReport",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_S1AP_SONInformationReport_constr_1, CHOICE_constraint },
	asn_MBR_S1AP_SONInformationReport_1,
	1,	/* Elements count */
	&asn_SPC_S1AP_SONInformationReport_specs_1	/* Additional specs */
};

