/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PDCP-Parameters-NB-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_maxNumberROHC_ContextSessions_r13_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_supportedROHC_Profiles_r13_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDCP_Parameters_NB_r13__supportedROHC_Profiles_r13, profile0x0002),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0002"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDCP_Parameters_NB_r13__supportedROHC_Profiles_r13, profile0x0003),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0003"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDCP_Parameters_NB_r13__supportedROHC_Profiles_r13, profile0x0004),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0004"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDCP_Parameters_NB_r13__supportedROHC_Profiles_r13, profile0x0006),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0006"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDCP_Parameters_NB_r13__supportedROHC_Profiles_r13, profile0x0102),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0102"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDCP_Parameters_NB_r13__supportedROHC_Profiles_r13, profile0x0103),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0103"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDCP_Parameters_NB_r13__supportedROHC_Profiles_r13, profile0x0104),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"profile0x0104"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_supportedROHC_Profiles_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_supportedROHC_Profiles_r13_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* profile0x0002 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* profile0x0003 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* profile0x0004 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* profile0x0006 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* profile0x0102 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* profile0x0103 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* profile0x0104 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_supportedROHC_Profiles_r13_specs_2 = {
	sizeof(struct LTE_PDCP_Parameters_NB_r13__supportedROHC_Profiles_r13),
	offsetof(struct LTE_PDCP_Parameters_NB_r13__supportedROHC_Profiles_r13, _asn_ctx),
	asn_MAP_LTE_supportedROHC_Profiles_r13_tag2el_2,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_supportedROHC_Profiles_r13_2 = {
	"supportedROHC-Profiles-r13",
	"supportedROHC-Profiles-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_supportedROHC_Profiles_r13_tags_2,
	sizeof(asn_DEF_LTE_supportedROHC_Profiles_r13_tags_2)
		/sizeof(asn_DEF_LTE_supportedROHC_Profiles_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_supportedROHC_Profiles_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_supportedROHC_Profiles_r13_tags_2)
		/sizeof(asn_DEF_LTE_supportedROHC_Profiles_r13_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_supportedROHC_Profiles_r13_2,
	7,	/* Elements count */
	&asn_SPC_LTE_supportedROHC_Profiles_r13_specs_2	/* Additional specs */
};

static int asn_DFL_10_cmp_0(const void *sptr) {
	const long *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_10_set_0(void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
static const asn_INTEGER_enum_map_t asn_MAP_LTE_maxNumberROHC_ContextSessions_r13_value2enum_10[] = {
	{ 0,	3,	"cs2" },
	{ 1,	3,	"cs4" },
	{ 2,	3,	"cs8" },
	{ 3,	4,	"cs12" }
};
static const unsigned int asn_MAP_LTE_maxNumberROHC_ContextSessions_r13_enum2value_10[] = {
	3,	/* cs12(3) */
	0,	/* cs2(0) */
	1,	/* cs4(1) */
	2	/* cs8(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_maxNumberROHC_ContextSessions_r13_specs_10 = {
	asn_MAP_LTE_maxNumberROHC_ContextSessions_r13_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_maxNumberROHC_ContextSessions_r13_enum2value_10,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_maxNumberROHC_ContextSessions_r13_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_maxNumberROHC_ContextSessions_r13_10 = {
	"maxNumberROHC-ContextSessions-r13",
	"maxNumberROHC-ContextSessions-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_maxNumberROHC_ContextSessions_r13_tags_10,
	sizeof(asn_DEF_LTE_maxNumberROHC_ContextSessions_r13_tags_10)
		/sizeof(asn_DEF_LTE_maxNumberROHC_ContextSessions_r13_tags_10[0]) - 1, /* 1 */
	asn_DEF_LTE_maxNumberROHC_ContextSessions_r13_tags_10,	/* Same as above */
	sizeof(asn_DEF_LTE_maxNumberROHC_ContextSessions_r13_tags_10)
		/sizeof(asn_DEF_LTE_maxNumberROHC_ContextSessions_r13_tags_10[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_maxNumberROHC_ContextSessions_r13_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_maxNumberROHC_ContextSessions_r13_specs_10	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PDCP_Parameters_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDCP_Parameters_NB_r13, supportedROHC_Profiles_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_supportedROHC_Profiles_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedROHC-Profiles-r13"
		},
	{ ATF_NOFLAGS, 1, offsetof(struct LTE_PDCP_Parameters_NB_r13, maxNumberROHC_ContextSessions_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_maxNumberROHC_ContextSessions_r13_10,
		0,
		{ 0, 0, 0 },
		&asn_DFL_10_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_10_set_0,	/* Set DEFAULT 0 */
		"maxNumberROHC-ContextSessions-r13"
		},
};
static const int asn_MAP_LTE_PDCP_Parameters_NB_r13_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LTE_PDCP_Parameters_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PDCP_Parameters_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* supportedROHC-Profiles-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* maxNumberROHC-ContextSessions-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PDCP_Parameters_NB_r13_specs_1 = {
	sizeof(struct LTE_PDCP_Parameters_NB_r13),
	offsetof(struct LTE_PDCP_Parameters_NB_r13, _asn_ctx),
	asn_MAP_LTE_PDCP_Parameters_NB_r13_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_PDCP_Parameters_NB_r13_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PDCP_Parameters_NB_r13 = {
	"PDCP-Parameters-NB-r13",
	"PDCP-Parameters-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PDCP_Parameters_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_PDCP_Parameters_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_PDCP_Parameters_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_PDCP_Parameters_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PDCP_Parameters_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_PDCP_Parameters_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_PDCP_Parameters_NB_r13_1,
	2,	/* Elements count */
	&asn_SPC_LTE_PDCP_Parameters_NB_r13_specs_1	/* Additional specs */
};

