/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_CRI-ReportConfig-r13.h"

asn_per_constraints_t asn_PER_type_LTE_CRI_ReportConfig_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CRI_ReportConfig_r13__setup, cri_ConfigIndex_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CRI_ConfigIndex_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cri-ConfigIndex-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_CRI_ReportConfig_r13__setup, cri_ConfigIndex2_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CRI_ConfigIndex_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cri-ConfigIndex2-r13"
		},
};
static const int asn_MAP_LTE_setup_oms_3[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cri-ConfigIndex-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cri-ConfigIndex2-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_3 = {
	sizeof(struct LTE_CRI_ReportConfig_r13__setup),
	offsetof(struct LTE_CRI_ReportConfig_r13__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_setup_oms_3,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_3,
	sizeof(asn_DEF_LTE_setup_tags_3)
		/sizeof(asn_DEF_LTE_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_3)
		/sizeof(asn_DEF_LTE_setup_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_setup_3,
	2,	/* Elements count */
	&asn_SPC_LTE_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_CRI_ReportConfig_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CRI_ReportConfig_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CRI_ReportConfig_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_CRI_ReportConfig_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_LTE_CRI_ReportConfig_r13_specs_1 = {
	sizeof(struct LTE_CRI_ReportConfig_r13),
	offsetof(struct LTE_CRI_ReportConfig_r13, _asn_ctx),
	offsetof(struct LTE_CRI_ReportConfig_r13, present),
	sizeof(((struct LTE_CRI_ReportConfig_r13 *)0)->present),
	asn_MAP_LTE_CRI_ReportConfig_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_CRI_ReportConfig_r13 = {
	"CRI-ReportConfig-r13",
	"CRI-ReportConfig-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_CRI_ReportConfig_r13_constr_1, CHOICE_constraint },
	asn_MBR_LTE_CRI_ReportConfig_r13_1,
	2,	/* Elements count */
	&asn_SPC_LTE_CRI_ReportConfig_r13_specs_1	/* Additional specs */
};

