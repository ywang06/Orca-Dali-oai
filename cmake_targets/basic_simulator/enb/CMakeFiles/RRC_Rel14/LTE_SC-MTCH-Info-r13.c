/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SC-MTCH-Info-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_g_RNTI_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_sc_mtch_neighbourCell_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_p_a_r13_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_g_RNTI_r13_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sc_mtch_neighbourCell_r13_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_p_a_r13_value2enum_8[] = {
	{ 0,	4,	"dB-6" },
	{ 1,	9,	"dB-4dot77" },
	{ 2,	4,	"dB-3" },
	{ 3,	9,	"dB-1dot77" },
	{ 4,	3,	"dB0" },
	{ 5,	3,	"dB1" },
	{ 6,	3,	"dB2" },
	{ 7,	3,	"dB3" }
};
static const unsigned int asn_MAP_LTE_p_a_r13_enum2value_8[] = {
	3,	/* dB-1dot77(3) */
	2,	/* dB-3(2) */
	1,	/* dB-4dot77(1) */
	0,	/* dB-6(0) */
	4,	/* dB0(4) */
	5,	/* dB1(5) */
	6,	/* dB2(6) */
	7	/* dB3(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_p_a_r13_specs_8 = {
	asn_MAP_LTE_p_a_r13_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_p_a_r13_enum2value_8,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_p_a_r13_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_p_a_r13_8 = {
	"p-a-r13",
	"p-a-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_p_a_r13_tags_8,
	sizeof(asn_DEF_LTE_p_a_r13_tags_8)
		/sizeof(asn_DEF_LTE_p_a_r13_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_p_a_r13_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_p_a_r13_tags_8)
		/sizeof(asn_DEF_LTE_p_a_r13_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_p_a_r13_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_p_a_r13_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_7[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SC_MTCH_Info_r13__ext1, p_a_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_p_a_r13_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p-a-r13"
		},
};
static const int asn_MAP_LTE_ext1_oms_7[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* p-a-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_7 = {
	sizeof(struct LTE_SC_MTCH_Info_r13__ext1),
	offsetof(struct LTE_SC_MTCH_Info_r13__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_7,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_7 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_7,
	sizeof(asn_DEF_LTE_ext1_tags_7)
		/sizeof(asn_DEF_LTE_ext1_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_7)
		/sizeof(asn_DEF_LTE_ext1_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_7,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SC_MTCH_Info_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_r13, mbmsSessionInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MBMSSessionInfo_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbmsSessionInfo-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_r13, g_RNTI_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_g_RNTI_r13_constr_3,  memb_LTE_g_RNTI_r13_constraint_1 },
		0, 0, /* No default value */
		"g-RNTI-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SC_MTCH_Info_r13, sc_mtch_schedulingInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SC_MTCH_SchedulingInfo_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-mtch-schedulingInfo-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SC_MTCH_Info_r13, sc_mtch_neighbourCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_sc_mtch_neighbourCell_r13_constr_5,  memb_LTE_sc_mtch_neighbourCell_r13_constraint_1 },
		0, 0, /* No default value */
		"sc-mtch-neighbourCell-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SC_MTCH_Info_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LTE_ext1_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_LTE_SC_MTCH_Info_r13_oms_1[] = { 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_LTE_SC_MTCH_Info_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SC_MTCH_Info_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbmsSessionInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* g-RNTI-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sc-mtch-schedulingInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sc-mtch-neighbourCell-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SC_MTCH_Info_r13_specs_1 = {
	sizeof(struct LTE_SC_MTCH_Info_r13),
	offsetof(struct LTE_SC_MTCH_Info_r13, _asn_ctx),
	asn_MAP_LTE_SC_MTCH_Info_r13_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LTE_SC_MTCH_Info_r13_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SC_MTCH_Info_r13 = {
	"SC-MTCH-Info-r13",
	"SC-MTCH-Info-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SC_MTCH_Info_r13_tags_1,
	sizeof(asn_DEF_LTE_SC_MTCH_Info_r13_tags_1)
		/sizeof(asn_DEF_LTE_SC_MTCH_Info_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_SC_MTCH_Info_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SC_MTCH_Info_r13_tags_1)
		/sizeof(asn_DEF_LTE_SC_MTCH_Info_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SC_MTCH_Info_r13_1,
	5,	/* Elements count */
	&asn_SPC_LTE_SC_MTCH_Info_r13_specs_1	/* Additional specs */
};

