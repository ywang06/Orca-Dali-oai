/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PCCH-Config-NB-r13.h"

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
static asn_per_constraints_t asn_PER_type_LTE_defaultPagingCycle_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_nB_r13_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_npdcch_NumRepetitionPaging_r13_constr_24 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_defaultPagingCycle_r13_value2enum_2[] = {
	{ 0,	5,	"rf128" },
	{ 1,	5,	"rf256" },
	{ 2,	5,	"rf512" },
	{ 3,	6,	"rf1024" }
};
static const unsigned int asn_MAP_LTE_defaultPagingCycle_r13_enum2value_2[] = {
	3,	/* rf1024(3) */
	0,	/* rf128(0) */
	1,	/* rf256(1) */
	2	/* rf512(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_defaultPagingCycle_r13_specs_2 = {
	asn_MAP_LTE_defaultPagingCycle_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_defaultPagingCycle_r13_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_defaultPagingCycle_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_defaultPagingCycle_r13_2 = {
	"defaultPagingCycle-r13",
	"defaultPagingCycle-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_defaultPagingCycle_r13_tags_2,
	sizeof(asn_DEF_LTE_defaultPagingCycle_r13_tags_2)
		/sizeof(asn_DEF_LTE_defaultPagingCycle_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_defaultPagingCycle_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_defaultPagingCycle_r13_tags_2)
		/sizeof(asn_DEF_LTE_defaultPagingCycle_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_defaultPagingCycle_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_defaultPagingCycle_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_nB_r13_value2enum_7[] = {
	{ 0,	5,	"fourT" },
	{ 1,	4,	"twoT" },
	{ 2,	4,	"oneT" },
	{ 3,	5,	"halfT" },
	{ 4,	8,	"quarterT" },
	{ 5,	7,	"one8thT" },
	{ 6,	8,	"one16thT" },
	{ 7,	8,	"one32ndT" },
	{ 8,	8,	"one64thT" },
	{ 9,	9,	"one128thT" },
	{ 10,	9,	"one256thT" },
	{ 11,	9,	"one512thT" },
	{ 12,	10,	"one1024thT" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_nB_r13_enum2value_7[] = {
	0,	/* fourT(0) */
	3,	/* halfT(3) */
	12,	/* one1024thT(12) */
	9,	/* one128thT(9) */
	6,	/* one16thT(6) */
	10,	/* one256thT(10) */
	7,	/* one32ndT(7) */
	11,	/* one512thT(11) */
	8,	/* one64thT(8) */
	5,	/* one8thT(5) */
	2,	/* oneT(2) */
	4,	/* quarterT(4) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	1	/* twoT(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_nB_r13_specs_7 = {
	asn_MAP_LTE_nB_r13_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_nB_r13_enum2value_7,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_nB_r13_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nB_r13_7 = {
	"nB-r13",
	"nB-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_nB_r13_tags_7,
	sizeof(asn_DEF_LTE_nB_r13_tags_7)
		/sizeof(asn_DEF_LTE_nB_r13_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_nB_r13_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_nB_r13_tags_7)
		/sizeof(asn_DEF_LTE_nB_r13_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_nB_r13_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_nB_r13_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_npdcch_NumRepetitionPaging_r13_value2enum_24[] = {
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
	{ 11,	5,	"r2048" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_npdcch_NumRepetitionPaging_r13_enum2value_24[] = {
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
	3,	/* r8(3) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12	/* spare4(12) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_npdcch_NumRepetitionPaging_r13_specs_24 = {
	asn_MAP_LTE_npdcch_NumRepetitionPaging_r13_value2enum_24,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_npdcch_NumRepetitionPaging_r13_enum2value_24,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_npdcch_NumRepetitionPaging_r13_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_npdcch_NumRepetitionPaging_r13_24 = {
	"npdcch-NumRepetitionPaging-r13",
	"npdcch-NumRepetitionPaging-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_npdcch_NumRepetitionPaging_r13_tags_24,
	sizeof(asn_DEF_LTE_npdcch_NumRepetitionPaging_r13_tags_24)
		/sizeof(asn_DEF_LTE_npdcch_NumRepetitionPaging_r13_tags_24[0]) - 1, /* 1 */
	asn_DEF_LTE_npdcch_NumRepetitionPaging_r13_tags_24,	/* Same as above */
	sizeof(asn_DEF_LTE_npdcch_NumRepetitionPaging_r13_tags_24)
		/sizeof(asn_DEF_LTE_npdcch_NumRepetitionPaging_r13_tags_24[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_npdcch_NumRepetitionPaging_r13_constr_24, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_npdcch_NumRepetitionPaging_r13_specs_24	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PCCH_Config_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PCCH_Config_NB_r13, defaultPagingCycle_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_defaultPagingCycle_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"defaultPagingCycle-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PCCH_Config_NB_r13, nB_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_nB_r13_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nB-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PCCH_Config_NB_r13, npdcch_NumRepetitionPaging_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_npdcch_NumRepetitionPaging_r13_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"npdcch-NumRepetitionPaging-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_PCCH_Config_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PCCH_Config_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* defaultPagingCycle-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nB-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* npdcch-NumRepetitionPaging-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PCCH_Config_NB_r13_specs_1 = {
	sizeof(struct LTE_PCCH_Config_NB_r13),
	offsetof(struct LTE_PCCH_Config_NB_r13, _asn_ctx),
	asn_MAP_LTE_PCCH_Config_NB_r13_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PCCH_Config_NB_r13 = {
	"PCCH-Config-NB-r13",
	"PCCH-Config-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PCCH_Config_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_PCCH_Config_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_PCCH_Config_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_PCCH_Config_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PCCH_Config_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_PCCH_Config_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_PCCH_Config_NB_r13_1,
	3,	/* Elements count */
	&asn_SPC_LTE_PCCH_Config_NB_r13_specs_1	/* Additional specs */
};

