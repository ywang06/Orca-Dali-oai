/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#include "S1AP_TargetID.h"

static asn_per_constraints_t asn_PER_type_S1AP_TargetID_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_S1AP_TargetID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_TargetID, choice.targeteNB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_TargeteNB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targeteNB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_TargetID, choice.targetRNC_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_TargetRNC_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetRNC-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_TargetID, choice.cGI),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cGI"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_TargetID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* targeteNB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* targetRNC-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cGI */
};
static asn_CHOICE_specifics_t asn_SPC_S1AP_TargetID_specs_1 = {
	sizeof(struct S1AP_TargetID),
	offsetof(struct S1AP_TargetID, _asn_ctx),
	offsetof(struct S1AP_TargetID, present),
	sizeof(((struct S1AP_TargetID *)0)->present),
	asn_MAP_S1AP_TargetID_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_TargetID = {
	"TargetID",
	"TargetID",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_S1AP_TargetID_constr_1, CHOICE_constraint },
	asn_MBR_S1AP_TargetID_1,
	3,	/* Elements count */
	&asn_SPC_S1AP_TargetID_specs_1	/* Additional specs */
};

