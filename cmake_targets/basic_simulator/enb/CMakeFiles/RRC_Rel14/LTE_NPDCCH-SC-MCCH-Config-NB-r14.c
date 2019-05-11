/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_NPDCCH-SC-MCCH-Config-NB-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_npdcch_NumRepetitions_SC_MCCH_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  11 }	/* (0..11) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_npdcch_StartSF_SC_MCCH_r14_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_npdcch_Offset_SC_MCCH_r14_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_npdcch_NumRepetitions_SC_MCCH_r14_value2enum_2[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	4,	"r128" },
	{ 8,	4,	"r256" },
	{ 9,	4,	"r512" },
	{ 10,	5,	"r1024" },
	{ 11,	5,	"r2048" }
};
static const unsigned int asn_MAP_LTE_npdcch_NumRepetitions_SC_MCCH_r14_enum2value_2[] = {
	0,	/* r1(0) */
	10,	/* r1024(10) */
	7,	/* r128(7) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	11,	/* r2048(11) */
	8,	/* r256(8) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	9,	/* r512(9) */
	6,	/* r64(6) */
	3	/* r8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_npdcch_NumRepetitions_SC_MCCH_r14_specs_2 = {
	asn_MAP_LTE_npdcch_NumRepetitions_SC_MCCH_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_npdcch_NumRepetitions_SC_MCCH_r14_enum2value_2,	/* N => "tag"; sorted by N */
	12,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_npdcch_NumRepetitions_SC_MCCH_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_NumRepetitions_SC_MCCH_r14_2 = {
	"npdcch-NumRepetitions-SC-MCCH-r14",
	"npdcch-NumRepetitions-SC-MCCH-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_npdcch_NumRepetitions_SC_MCCH_r14_tags_2,
	sizeof(asn_DEF_LTE_npdcch_NumRepetitions_SC_MCCH_r14_tags_2)
		/sizeof(asn_DEF_LTE_npdcch_NumRepetitions_SC_MCCH_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_npdcch_NumRepetitions_SC_MCCH_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_npdcch_NumRepetitions_SC_MCCH_r14_tags_2)
		/sizeof(asn_DEF_LTE_npdcch_NumRepetitions_SC_MCCH_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_npdcch_NumRepetitions_SC_MCCH_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_npdcch_NumRepetitions_SC_MCCH_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_npdcch_StartSF_SC_MCCH_r14_value2enum_15[] = {
	{ 0,	6,	"v1dot5" },
	{ 1,	2,	"v2" },
	{ 2,	2,	"v4" },
	{ 3,	2,	"v8" },
	{ 4,	3,	"v16" },
	{ 5,	3,	"v32" },
	{ 6,	3,	"v48" },
	{ 7,	3,	"v64" }
};
static const unsigned int asn_MAP_LTE_npdcch_StartSF_SC_MCCH_r14_enum2value_15[] = {
	4,	/* v16(4) */
	0,	/* v1dot5(0) */
	1,	/* v2(1) */
	5,	/* v32(5) */
	2,	/* v4(2) */
	6,	/* v48(6) */
	7,	/* v64(7) */
	3	/* v8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_npdcch_StartSF_SC_MCCH_r14_specs_15 = {
	asn_MAP_LTE_npdcch_StartSF_SC_MCCH_r14_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_npdcch_StartSF_SC_MCCH_r14_enum2value_15,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_npdcch_StartSF_SC_MCCH_r14_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_StartSF_SC_MCCH_r14_15 = {
	"npdcch-StartSF-SC-MCCH-r14",
	"npdcch-StartSF-SC-MCCH-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_npdcch_StartSF_SC_MCCH_r14_tags_15,
	sizeof(asn_DEF_LTE_npdcch_StartSF_SC_MCCH_r14_tags_15)
		/sizeof(asn_DEF_LTE_npdcch_StartSF_SC_MCCH_r14_tags_15[0]) - 1, /* 1 */
	asn_DEF_LTE_npdcch_StartSF_SC_MCCH_r14_tags_15,	/* Same as above */
	sizeof(asn_DEF_LTE_npdcch_StartSF_SC_MCCH_r14_tags_15)
		/sizeof(asn_DEF_LTE_npdcch_StartSF_SC_MCCH_r14_tags_15[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_npdcch_StartSF_SC_MCCH_r14_constr_15, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_npdcch_StartSF_SC_MCCH_r14_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_npdcch_Offset_SC_MCCH_r14_value2enum_24[] = {
	{ 0,	4,	"zero" },
	{ 1,	9,	"oneEighth" },
	{ 2,	10,	"oneQuarter" },
	{ 3,	11,	"threeEighth" },
	{ 4,	7,	"oneHalf" },
	{ 5,	10,	"fiveEighth" },
	{ 6,	12,	"threeQuarter" },
	{ 7,	11,	"sevenEighth" }
};
static const unsigned int asn_MAP_LTE_npdcch_Offset_SC_MCCH_r14_enum2value_24[] = {
	5,	/* fiveEighth(5) */
	1,	/* oneEighth(1) */
	4,	/* oneHalf(4) */
	2,	/* oneQuarter(2) */
	7,	/* sevenEighth(7) */
	3,	/* threeEighth(3) */
	6,	/* threeQuarter(6) */
	0	/* zero(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_npdcch_Offset_SC_MCCH_r14_specs_24 = {
	asn_MAP_LTE_npdcch_Offset_SC_MCCH_r14_value2enum_24,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_npdcch_Offset_SC_MCCH_r14_enum2value_24,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_npdcch_Offset_SC_MCCH_r14_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_Offset_SC_MCCH_r14_24 = {
	"npdcch-Offset-SC-MCCH-r14",
	"npdcch-Offset-SC-MCCH-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_npdcch_Offset_SC_MCCH_r14_tags_24,
	sizeof(asn_DEF_LTE_npdcch_Offset_SC_MCCH_r14_tags_24)
		/sizeof(asn_DEF_LTE_npdcch_Offset_SC_MCCH_r14_tags_24[0]) - 1, /* 1 */
	asn_DEF_LTE_npdcch_Offset_SC_MCCH_r14_tags_24,	/* Same as above */
	sizeof(asn_DEF_LTE_npdcch_Offset_SC_MCCH_r14_tags_24)
		/sizeof(asn_DEF_LTE_npdcch_Offset_SC_MCCH_r14_tags_24[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_npdcch_Offset_SC_MCCH_r14_constr_24, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_npdcch_Offset_SC_MCCH_r14_specs_24	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_NPDCCH_SC_MCCH_Config_NB_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPDCCH_SC_MCCH_Config_NB_r14, npdcch_NumRepetitions_SC_MCCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_npdcch_NumRepetitions_SC_MCCH_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-NumRepetitions-SC-MCCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPDCCH_SC_MCCH_Config_NB_r14, npdcch_StartSF_SC_MCCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_npdcch_StartSF_SC_MCCH_r14_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-StartSF-SC-MCCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_NPDCCH_SC_MCCH_Config_NB_r14, npdcch_Offset_SC_MCCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_npdcch_Offset_SC_MCCH_r14_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-Offset-SC-MCCH-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_NPDCCH_SC_MCCH_Config_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_NPDCCH_SC_MCCH_Config_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* npdcch-NumRepetitions-SC-MCCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* npdcch-StartSF-SC-MCCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* npdcch-Offset-SC-MCCH-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_NPDCCH_SC_MCCH_Config_NB_r14_specs_1 = {
	sizeof(struct LTE_NPDCCH_SC_MCCH_Config_NB_r14),
	offsetof(struct LTE_NPDCCH_SC_MCCH_Config_NB_r14, _asn_ctx),
	asn_MAP_LTE_NPDCCH_SC_MCCH_Config_NB_r14_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_NPDCCH_SC_MCCH_Config_NB_r14 = {
	"NPDCCH-SC-MCCH-Config-NB-r14",
	"NPDCCH-SC-MCCH-Config-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_NPDCCH_SC_MCCH_Config_NB_r14_tags_1,
	sizeof(asn_DEF_LTE_NPDCCH_SC_MCCH_Config_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_NPDCCH_SC_MCCH_Config_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_NPDCCH_SC_MCCH_Config_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_NPDCCH_SC_MCCH_Config_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_NPDCCH_SC_MCCH_Config_NB_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_NPDCCH_SC_MCCH_Config_NB_r14_1,
	3,	/* Elements count */
	&asn_SPC_LTE_NPDCCH_SC_MCCH_Config_NB_r14_specs_1	/* Additional specs */
};

