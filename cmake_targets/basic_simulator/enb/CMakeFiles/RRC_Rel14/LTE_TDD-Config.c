/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_TDD-Config.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_subframeAssignment_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_specialSubframePatterns_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  8 }	/* (0..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_subframeAssignment_value2enum_2[] = {
	{ 0,	3,	"sa0" },
	{ 1,	3,	"sa1" },
	{ 2,	3,	"sa2" },
	{ 3,	3,	"sa3" },
	{ 4,	3,	"sa4" },
	{ 5,	3,	"sa5" },
	{ 6,	3,	"sa6" }
};
static const unsigned int asn_MAP_LTE_subframeAssignment_enum2value_2[] = {
	0,	/* sa0(0) */
	1,	/* sa1(1) */
	2,	/* sa2(2) */
	3,	/* sa3(3) */
	4,	/* sa4(4) */
	5,	/* sa5(5) */
	6	/* sa6(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_subframeAssignment_specs_2 = {
	asn_MAP_LTE_subframeAssignment_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_subframeAssignment_enum2value_2,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_subframeAssignment_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_subframeAssignment_2 = {
	"subframeAssignment",
	"subframeAssignment",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_subframeAssignment_tags_2,
	sizeof(asn_DEF_LTE_subframeAssignment_tags_2)
		/sizeof(asn_DEF_LTE_subframeAssignment_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_subframeAssignment_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_subframeAssignment_tags_2)
		/sizeof(asn_DEF_LTE_subframeAssignment_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_subframeAssignment_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_subframeAssignment_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_specialSubframePatterns_value2enum_10[] = {
	{ 0,	4,	"ssp0" },
	{ 1,	4,	"ssp1" },
	{ 2,	4,	"ssp2" },
	{ 3,	4,	"ssp3" },
	{ 4,	4,	"ssp4" },
	{ 5,	4,	"ssp5" },
	{ 6,	4,	"ssp6" },
	{ 7,	4,	"ssp7" },
	{ 8,	4,	"ssp8" }
};
static const unsigned int asn_MAP_LTE_specialSubframePatterns_enum2value_10[] = {
	0,	/* ssp0(0) */
	1,	/* ssp1(1) */
	2,	/* ssp2(2) */
	3,	/* ssp3(3) */
	4,	/* ssp4(4) */
	5,	/* ssp5(5) */
	6,	/* ssp6(6) */
	7,	/* ssp7(7) */
	8	/* ssp8(8) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_specialSubframePatterns_specs_10 = {
	asn_MAP_LTE_specialSubframePatterns_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_specialSubframePatterns_enum2value_10,	/* N => "tag"; sorted by N */
	9,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_specialSubframePatterns_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_specialSubframePatterns_10 = {
	"specialSubframePatterns",
	"specialSubframePatterns",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_specialSubframePatterns_tags_10,
	sizeof(asn_DEF_LTE_specialSubframePatterns_tags_10)
		/sizeof(asn_DEF_LTE_specialSubframePatterns_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_specialSubframePatterns_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_specialSubframePatterns_tags_10)
		/sizeof(asn_DEF_LTE_specialSubframePatterns_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_specialSubframePatterns_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_specialSubframePatterns_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_TDD_Config_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_TDD_Config, subframeAssignment),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_subframeAssignment_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframeAssignment"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_TDD_Config, specialSubframePatterns),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_specialSubframePatterns_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"specialSubframePatterns"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_TDD_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_TDD_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* subframeAssignment */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* specialSubframePatterns */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_TDD_Config_specs_1 = {
	sizeof(struct LTE_TDD_Config),
	offsetof(struct LTE_TDD_Config, _asn_ctx),
	asn_MAP_LTE_TDD_Config_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_TDD_Config = {
	"TDD-Config",
	"TDD-Config",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_TDD_Config_tags_1,
	sizeof(asn_DEF_LTE_TDD_Config_tags_1)
		/sizeof(asn_DEF_LTE_TDD_Config_tags_1[0]), /* 1 */
	asn_DEF_LTE_TDD_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_TDD_Config_tags_1)
		/sizeof(asn_DEF_LTE_TDD_Config_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_TDD_Config_1,
	2,	/* Elements count */
	&asn_SPC_LTE_TDD_Config_specs_1	/* Additional specs */
};

