/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_RLF-TimersAndConstants-r9.h"

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
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_t301_r9_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_t310_r9_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_n310_r9_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_t311_r9_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_n311_r9_constr_38 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_LTE_RLF_TimersAndConstants_r9_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_t301_r9_value2enum_4[] = {
	{ 0,	5,	"ms100" },
	{ 1,	5,	"ms200" },
	{ 2,	5,	"ms300" },
	{ 3,	5,	"ms400" },
	{ 4,	5,	"ms600" },
	{ 5,	6,	"ms1000" },
	{ 6,	6,	"ms1500" },
	{ 7,	6,	"ms2000" }
};
static const unsigned int asn_MAP_LTE_t301_r9_enum2value_4[] = {
	0,	/* ms100(0) */
	5,	/* ms1000(5) */
	6,	/* ms1500(6) */
	1,	/* ms200(1) */
	7,	/* ms2000(7) */
	2,	/* ms300(2) */
	3,	/* ms400(3) */
	4	/* ms600(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t301_r9_specs_4 = {
	asn_MAP_LTE_t301_r9_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t301_r9_enum2value_4,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t301_r9_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t301_r9_4 = {
	"t301-r9",
	"t301-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t301_r9_tags_4,
	sizeof(asn_DEF_LTE_t301_r9_tags_4)
		/sizeof(asn_DEF_LTE_t301_r9_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_t301_r9_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_t301_r9_tags_4)
		/sizeof(asn_DEF_LTE_t301_r9_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t301_r9_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t301_r9_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_t310_r9_value2enum_13[] = {
	{ 0,	3,	"ms0" },
	{ 1,	4,	"ms50" },
	{ 2,	5,	"ms100" },
	{ 3,	5,	"ms200" },
	{ 4,	5,	"ms500" },
	{ 5,	6,	"ms1000" },
	{ 6,	6,	"ms2000" }
};
static const unsigned int asn_MAP_LTE_t310_r9_enum2value_13[] = {
	0,	/* ms0(0) */
	2,	/* ms100(2) */
	5,	/* ms1000(5) */
	3,	/* ms200(3) */
	6,	/* ms2000(6) */
	1,	/* ms50(1) */
	4	/* ms500(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t310_r9_specs_13 = {
	asn_MAP_LTE_t310_r9_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t310_r9_enum2value_13,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t310_r9_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t310_r9_13 = {
	"t310-r9",
	"t310-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t310_r9_tags_13,
	sizeof(asn_DEF_LTE_t310_r9_tags_13)
		/sizeof(asn_DEF_LTE_t310_r9_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_t310_r9_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_t310_r9_tags_13)
		/sizeof(asn_DEF_LTE_t310_r9_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t310_r9_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t310_r9_specs_13	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_n310_r9_value2enum_21[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n6" },
	{ 5,	2,	"n8" },
	{ 6,	3,	"n10" },
	{ 7,	3,	"n20" }
};
static const unsigned int asn_MAP_LTE_n310_r9_enum2value_21[] = {
	0,	/* n1(0) */
	6,	/* n10(6) */
	1,	/* n2(1) */
	7,	/* n20(7) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n6(4) */
	5	/* n8(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_n310_r9_specs_21 = {
	asn_MAP_LTE_n310_r9_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_n310_r9_enum2value_21,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_n310_r9_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_n310_r9_21 = {
	"n310-r9",
	"n310-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_n310_r9_tags_21,
	sizeof(asn_DEF_LTE_n310_r9_tags_21)
		/sizeof(asn_DEF_LTE_n310_r9_tags_21[0]) - 1, /* 1 */
	asn_DEF_LTE_n310_r9_tags_21,	/* Same as above */
	sizeof(asn_DEF_LTE_n310_r9_tags_21)
		/sizeof(asn_DEF_LTE_n310_r9_tags_21[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_n310_r9_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_n310_r9_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_t311_r9_value2enum_30[] = {
	{ 0,	6,	"ms1000" },
	{ 1,	6,	"ms3000" },
	{ 2,	6,	"ms5000" },
	{ 3,	7,	"ms10000" },
	{ 4,	7,	"ms15000" },
	{ 5,	7,	"ms20000" },
	{ 6,	7,	"ms30000" }
};
static const unsigned int asn_MAP_LTE_t311_r9_enum2value_30[] = {
	0,	/* ms1000(0) */
	3,	/* ms10000(3) */
	4,	/* ms15000(4) */
	5,	/* ms20000(5) */
	1,	/* ms3000(1) */
	6,	/* ms30000(6) */
	2	/* ms5000(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t311_r9_specs_30 = {
	asn_MAP_LTE_t311_r9_value2enum_30,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t311_r9_enum2value_30,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t311_r9_tags_30[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t311_r9_30 = {
	"t311-r9",
	"t311-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t311_r9_tags_30,
	sizeof(asn_DEF_LTE_t311_r9_tags_30)
		/sizeof(asn_DEF_LTE_t311_r9_tags_30[0]) - 1, /* 1 */
	asn_DEF_LTE_t311_r9_tags_30,	/* Same as above */
	sizeof(asn_DEF_LTE_t311_r9_tags_30)
		/sizeof(asn_DEF_LTE_t311_r9_tags_30[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t311_r9_constr_30, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t311_r9_specs_30	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_n311_r9_value2enum_38[] = {
	{ 0,	2,	"n1" },
	{ 1,	2,	"n2" },
	{ 2,	2,	"n3" },
	{ 3,	2,	"n4" },
	{ 4,	2,	"n5" },
	{ 5,	2,	"n6" },
	{ 6,	2,	"n8" },
	{ 7,	3,	"n10" }
};
static const unsigned int asn_MAP_LTE_n311_r9_enum2value_38[] = {
	0,	/* n1(0) */
	7,	/* n10(7) */
	1,	/* n2(1) */
	2,	/* n3(2) */
	3,	/* n4(3) */
	4,	/* n5(4) */
	5,	/* n6(5) */
	6	/* n8(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_n311_r9_specs_38 = {
	asn_MAP_LTE_n311_r9_value2enum_38,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_n311_r9_enum2value_38,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_n311_r9_tags_38[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_n311_r9_38 = {
	"n311-r9",
	"n311-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_n311_r9_tags_38,
	sizeof(asn_DEF_LTE_n311_r9_tags_38)
		/sizeof(asn_DEF_LTE_n311_r9_tags_38[0]) - 1, /* 1 */
	asn_DEF_LTE_n311_r9_tags_38,	/* Same as above */
	sizeof(asn_DEF_LTE_n311_r9_tags_38)
		/sizeof(asn_DEF_LTE_n311_r9_tags_38[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_n311_r9_constr_38, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_n311_r9_specs_38	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RLF_TimersAndConstants_r9__setup, t301_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t301_r9_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t301-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RLF_TimersAndConstants_r9__setup, t310_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t310_r9_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t310-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RLF_TimersAndConstants_r9__setup, n310_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_n310_r9_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n310-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RLF_TimersAndConstants_r9__setup, t311_r9),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t311_r9_30,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t311-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RLF_TimersAndConstants_r9__setup, n311_r9),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_n311_r9_38,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"n311-r9"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t301-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* t310-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* n310-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* t311-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* n311-r9 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_3 = {
	sizeof(struct LTE_RLF_TimersAndConstants_r9__setup),
	offsetof(struct LTE_RLF_TimersAndConstants_r9__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_3,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	5,	/* First extension addition */
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
	5,	/* Elements count */
	&asn_SPC_LTE_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RLF_TimersAndConstants_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RLF_TimersAndConstants_r9, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RLF_TimersAndConstants_r9, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RLF_TimersAndConstants_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_LTE_RLF_TimersAndConstants_r9_specs_1 = {
	sizeof(struct LTE_RLF_TimersAndConstants_r9),
	offsetof(struct LTE_RLF_TimersAndConstants_r9, _asn_ctx),
	offsetof(struct LTE_RLF_TimersAndConstants_r9, present),
	sizeof(((struct LTE_RLF_TimersAndConstants_r9 *)0)->present),
	asn_MAP_LTE_RLF_TimersAndConstants_r9_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RLF_TimersAndConstants_r9 = {
	"RLF-TimersAndConstants-r9",
	"RLF-TimersAndConstants-r9",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_RLF_TimersAndConstants_r9_constr_1, CHOICE_constraint },
	asn_MBR_LTE_RLF_TimersAndConstants_r9_1,
	2,	/* Elements count */
	&asn_SPC_LTE_RLF_TimersAndConstants_r9_specs_1	/* Additional specs */
};

