/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_UL-AM-RLC.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_maxRetxThreshold_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_maxRetxThreshold_value2enum_5[] = {
	{ 0,	2,	"t1" },
	{ 1,	2,	"t2" },
	{ 2,	2,	"t3" },
	{ 3,	2,	"t4" },
	{ 4,	2,	"t6" },
	{ 5,	2,	"t8" },
	{ 6,	3,	"t16" },
	{ 7,	3,	"t32" }
};
static const unsigned int asn_MAP_LTE_maxRetxThreshold_enum2value_5[] = {
	0,	/* t1(0) */
	6,	/* t16(6) */
	1,	/* t2(1) */
	2,	/* t3(2) */
	7,	/* t32(7) */
	3,	/* t4(3) */
	4,	/* t6(4) */
	5	/* t8(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_maxRetxThreshold_specs_5 = {
	asn_MAP_LTE_maxRetxThreshold_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_maxRetxThreshold_enum2value_5,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_maxRetxThreshold_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_maxRetxThreshold_5 = {
	"maxRetxThreshold",
	"maxRetxThreshold",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_maxRetxThreshold_tags_5,
	sizeof(asn_DEF_LTE_maxRetxThreshold_tags_5)
		/sizeof(asn_DEF_LTE_maxRetxThreshold_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_maxRetxThreshold_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_maxRetxThreshold_tags_5)
		/sizeof(asn_DEF_LTE_maxRetxThreshold_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_maxRetxThreshold_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_maxRetxThreshold_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_UL_AM_RLC_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UL_AM_RLC, t_PollRetransmit),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_T_PollRetransmit,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-PollRetransmit"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UL_AM_RLC, pollPDU),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PollPDU,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pollPDU"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UL_AM_RLC, pollByte),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PollByte,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pollByte"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_UL_AM_RLC, maxRetxThreshold),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_maxRetxThreshold_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maxRetxThreshold"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_UL_AM_RLC_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UL_AM_RLC_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t-PollRetransmit */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pollPDU */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pollByte */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* maxRetxThreshold */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UL_AM_RLC_specs_1 = {
	sizeof(struct LTE_UL_AM_RLC),
	offsetof(struct LTE_UL_AM_RLC, _asn_ctx),
	asn_MAP_LTE_UL_AM_RLC_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UL_AM_RLC = {
	"UL-AM-RLC",
	"UL-AM-RLC",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UL_AM_RLC_tags_1,
	sizeof(asn_DEF_LTE_UL_AM_RLC_tags_1)
		/sizeof(asn_DEF_LTE_UL_AM_RLC_tags_1[0]), /* 1 */
	asn_DEF_LTE_UL_AM_RLC_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UL_AM_RLC_tags_1)
		/sizeof(asn_DEF_LTE_UL_AM_RLC_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_UL_AM_RLC_1,
	4,	/* Elements count */
	&asn_SPC_LTE_UL_AM_RLC_specs_1	/* Additional specs */
};

