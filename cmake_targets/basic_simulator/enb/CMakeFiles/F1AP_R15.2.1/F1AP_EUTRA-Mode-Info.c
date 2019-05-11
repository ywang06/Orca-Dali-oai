/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/F1AP_R15.2.1`
 */

#include "F1AP_EUTRA-Mode-Info.h"

#include "F1AP_EUTRA-FDD-Info.h"
#include "F1AP_EUTRA-TDD-Info.h"
static asn_oer_constraints_t asn_OER_type_F1AP_EUTRA_Mode_Info_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_F1AP_EUTRA_Mode_Info_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_F1AP_EUTRA_Mode_Info_1[] = {
	{ ATF_POINTER, 0, offsetof(struct F1AP_EUTRA_Mode_Info, choice.eUTRAFDD),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_EUTRA_FDD_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRAFDD"
		},
	{ ATF_POINTER, 0, offsetof(struct F1AP_EUTRA_Mode_Info, choice.eUTRATDD),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_EUTRA_TDD_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRATDD"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_EUTRA_Mode_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eUTRAFDD */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eUTRATDD */
};
asn_CHOICE_specifics_t asn_SPC_F1AP_EUTRA_Mode_Info_specs_1 = {
	sizeof(struct F1AP_EUTRA_Mode_Info),
	offsetof(struct F1AP_EUTRA_Mode_Info, _asn_ctx),
	offsetof(struct F1AP_EUTRA_Mode_Info, present),
	sizeof(((struct F1AP_EUTRA_Mode_Info *)0)->present),
	asn_MAP_F1AP_EUTRA_Mode_Info_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_EUTRA_Mode_Info = {
	"EUTRA-Mode-Info",
	"EUTRA-Mode-Info",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_F1AP_EUTRA_Mode_Info_constr_1, &asn_PER_type_F1AP_EUTRA_Mode_Info_constr_1, CHOICE_constraint },
	asn_MBR_F1AP_EUTRA_Mode_Info_1,
	2,	/* Elements count */
	&asn_SPC_F1AP_EUTRA_Mode_Info_specs_1	/* Additional specs */
};

