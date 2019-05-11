/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SC-MTCH-Info-BR-r14.h"

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
static int
memb_LTE_g_RNTI_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
memb_LTE_sc_mtch_neighbourCell_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_LTE_mpdcch_Narrowband_SC_MTCH_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_mpdcch_NumRepetition_SC_MTCH_r14_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  8 }	/* (0..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_fdd_r14_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_tdd_r14_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_mpdcch_StartSF_SC_MTCH_r14_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_constr_36 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_constr_42 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_mpdcch_Offset_SC_MTCH_r14_constr_45 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_p_a_r14_constr_54 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_g_RNTI_r14_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sc_mtch_neighbourCell_r14_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_mpdcch_Narrowband_SC_MTCH_r14_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_mpdcch_NumRepetition_SC_MTCH_r14_value2enum_8[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	4,	"r128" },
	{ 8,	4,	"r256" }
};
static const unsigned int asn_MAP_LTE_mpdcch_NumRepetition_SC_MTCH_r14_enum2value_8[] = {
	0,	/* r1(0) */
	7,	/* r128(7) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	8,	/* r256(8) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	6,	/* r64(6) */
	3	/* r8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_mpdcch_NumRepetition_SC_MTCH_r14_specs_8 = {
	asn_MAP_LTE_mpdcch_NumRepetition_SC_MTCH_r14_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_mpdcch_NumRepetition_SC_MTCH_r14_enum2value_8,	/* N => "tag"; sorted by N */
	9,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_mpdcch_NumRepetition_SC_MTCH_r14_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mpdcch_NumRepetition_SC_MTCH_r14_8 = {
	"mpdcch-NumRepetition-SC-MTCH-r14",
	"mpdcch-NumRepetition-SC-MTCH-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_mpdcch_NumRepetition_SC_MTCH_r14_tags_8,
	sizeof(asn_DEF_LTE_mpdcch_NumRepetition_SC_MTCH_r14_tags_8)
		/sizeof(asn_DEF_LTE_mpdcch_NumRepetition_SC_MTCH_r14_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_mpdcch_NumRepetition_SC_MTCH_r14_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_mpdcch_NumRepetition_SC_MTCH_r14_tags_8)
		/sizeof(asn_DEF_LTE_mpdcch_NumRepetition_SC_MTCH_r14_tags_8[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_mpdcch_NumRepetition_SC_MTCH_r14_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_mpdcch_NumRepetition_SC_MTCH_r14_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_fdd_r14_value2enum_19[] = {
	{ 0,	2,	"v1" },
	{ 1,	6,	"v1dot5" },
	{ 2,	2,	"v2" },
	{ 3,	6,	"v2dot5" },
	{ 4,	2,	"v4" },
	{ 5,	2,	"v5" },
	{ 6,	2,	"v8" },
	{ 7,	3,	"v10" }
};
static const unsigned int asn_MAP_LTE_fdd_r14_enum2value_19[] = {
	0,	/* v1(0) */
	7,	/* v10(7) */
	1,	/* v1dot5(1) */
	2,	/* v2(2) */
	3,	/* v2dot5(3) */
	4,	/* v4(4) */
	5,	/* v5(5) */
	6	/* v8(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_fdd_r14_specs_19 = {
	asn_MAP_LTE_fdd_r14_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_fdd_r14_enum2value_19,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_fdd_r14_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_fdd_r14_19 = {
	"fdd-r14",
	"fdd-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_fdd_r14_tags_19,
	sizeof(asn_DEF_LTE_fdd_r14_tags_19)
		/sizeof(asn_DEF_LTE_fdd_r14_tags_19[0]) - 1, /* 1 */
	asn_DEF_LTE_fdd_r14_tags_19,	/* Same as above */
	sizeof(asn_DEF_LTE_fdd_r14_tags_19)
		/sizeof(asn_DEF_LTE_fdd_r14_tags_19[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_fdd_r14_constr_19, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_fdd_r14_specs_19	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_tdd_r14_value2enum_28[] = {
	{ 0,	2,	"v1" },
	{ 1,	2,	"v2" },
	{ 2,	2,	"v4" },
	{ 3,	2,	"v5" },
	{ 4,	2,	"v8" },
	{ 5,	3,	"v10" },
	{ 6,	3,	"v20" }
};
static const unsigned int asn_MAP_LTE_tdd_r14_enum2value_28[] = {
	0,	/* v1(0) */
	5,	/* v10(5) */
	1,	/* v2(1) */
	6,	/* v20(6) */
	2,	/* v4(2) */
	3,	/* v5(3) */
	4	/* v8(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_tdd_r14_specs_28 = {
	asn_MAP_LTE_tdd_r14_value2enum_28,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_tdd_r14_enum2value_28,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_tdd_r14_tags_28[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_tdd_r14_28 = {
	"tdd-r14",
	"tdd-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_tdd_r14_tags_28,
	sizeof(asn_DEF_LTE_tdd_r14_tags_28)
		/sizeof(asn_DEF_LTE_tdd_r14_tags_28[0]) - 1, /* 1 */
	asn_DEF_LTE_tdd_r14_tags_28,	/* Same as above */
	sizeof(asn_DEF_LTE_tdd_r14_tags_28)
		/sizeof(asn_DEF_LTE_tdd_r14_tags_28[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_tdd_r14_constr_28, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_tdd_r14_specs_28	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_mpdcch_StartSF_SC_MTCH_r14_18[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14, choice.fdd_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_fdd_r14_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14, choice.tdd_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_tdd_r14_28,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd-r14"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_mpdcch_StartSF_SC_MTCH_r14_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd-r14 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_mpdcch_StartSF_SC_MTCH_r14_specs_18 = {
	sizeof(struct LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14),
	offsetof(struct LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14, _asn_ctx),
	offsetof(struct LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14, present),
	sizeof(((struct LTE_SC_MTCH_Info_BR_r14__mpdcch_StartSF_SC_MTCH_r14 *)0)->present),
	asn_MAP_LTE_mpdcch_StartSF_SC_MTCH_r14_tag2el_18,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mpdcch_StartSF_SC_MTCH_r14_18 = {
	"mpdcch-StartSF-SC-MTCH-r14",
	"mpdcch-StartSF-SC-MTCH-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_mpdcch_StartSF_SC_MTCH_r14_constr_18, CHOICE_constraint },
	asn_MBR_LTE_mpdcch_StartSF_SC_MTCH_r14_18,
	2,	/* Elements count */
	&asn_SPC_LTE_mpdcch_StartSF_SC_MTCH_r14_specs_18	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_value2enum_36[] = {
	{ 0,	2,	"on" },
	{ 1,	3,	"off" }
};
static const unsigned int asn_MAP_LTE_mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_enum2value_36[] = {
	1,	/* off(1) */
	0	/* on(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_specs_36 = {
	asn_MAP_LTE_mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_value2enum_36,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_enum2value_36,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_tags_36[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_36 = {
	"mpdcch-PDSCH-HoppingConfig-SC-MTCH-r14",
	"mpdcch-PDSCH-HoppingConfig-SC-MTCH-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_tags_36,
	sizeof(asn_DEF_LTE_mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_tags_36)
		/sizeof(asn_DEF_LTE_mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_tags_36[0]) - 1, /* 1 */
	asn_DEF_LTE_mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_tags_36,	/* Same as above */
	sizeof(asn_DEF_LTE_mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_tags_36)
		/sizeof(asn_DEF_LTE_mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_tags_36[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_constr_36, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_specs_36	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_value2enum_39[] = {
	{ 0,	8,	"ce-ModeA" },
	{ 1,	8,	"ce-ModeB" }
};
static const unsigned int asn_MAP_LTE_mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_enum2value_39[] = {
	0,	/* ce-ModeA(0) */
	1	/* ce-ModeB(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_specs_39 = {
	asn_MAP_LTE_mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_value2enum_39,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_enum2value_39,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_tags_39[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_39 = {
	"mpdcch-PDSCH-CEmodeConfig-SC-MTCH-r14",
	"mpdcch-PDSCH-CEmodeConfig-SC-MTCH-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_tags_39,
	sizeof(asn_DEF_LTE_mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_tags_39)
		/sizeof(asn_DEF_LTE_mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_tags_39[0]) - 1, /* 1 */
	asn_DEF_LTE_mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_tags_39,	/* Same as above */
	sizeof(asn_DEF_LTE_mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_tags_39)
		/sizeof(asn_DEF_LTE_mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_tags_39[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_constr_39, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_specs_39	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_value2enum_42[] = {
	{ 0,	7,	"bw1dot4" },
	{ 1,	3,	"bw5" }
};
static const unsigned int asn_MAP_LTE_mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_enum2value_42[] = {
	0,	/* bw1dot4(0) */
	1	/* bw5(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_specs_42 = {
	asn_MAP_LTE_mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_value2enum_42,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_enum2value_42,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_tags_42[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_42 = {
	"mpdcch-PDSCH-MaxBandwidth-SC-MTCH-r14",
	"mpdcch-PDSCH-MaxBandwidth-SC-MTCH-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_tags_42,
	sizeof(asn_DEF_LTE_mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_tags_42)
		/sizeof(asn_DEF_LTE_mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_tags_42[0]) - 1, /* 1 */
	asn_DEF_LTE_mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_tags_42,	/* Same as above */
	sizeof(asn_DEF_LTE_mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_tags_42)
		/sizeof(asn_DEF_LTE_mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_tags_42[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_constr_42, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_specs_42	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_mpdcch_Offset_SC_MTCH_r14_value2enum_45[] = {
	{ 0,	4,	"zero" },
	{ 1,	9,	"oneEighth" },
	{ 2,	10,	"oneQuarter" },
	{ 3,	11,	"threeEighth" },
	{ 4,	7,	"oneHalf" },
	{ 5,	10,	"fiveEighth" },
	{ 6,	12,	"threeQuarter" },
	{ 7,	11,	"sevenEighth" }
};
static const unsigned int asn_MAP_LTE_mpdcch_Offset_SC_MTCH_r14_enum2value_45[] = {
	5,	/* fiveEighth(5) */
	1,	/* oneEighth(1) */
	4,	/* oneHalf(4) */
	2,	/* oneQuarter(2) */
	7,	/* sevenEighth(7) */
	3,	/* threeEighth(3) */
	6,	/* threeQuarter(6) */
	0	/* zero(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_mpdcch_Offset_SC_MTCH_r14_specs_45 = {
	asn_MAP_LTE_mpdcch_Offset_SC_MTCH_r14_value2enum_45,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_mpdcch_Offset_SC_MTCH_r14_enum2value_45,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_mpdcch_Offset_SC_MTCH_r14_tags_45[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mpdcch_Offset_SC_MTCH_r14_45 = {
	"mpdcch-Offset-SC-MTCH-r14",
	"mpdcch-Offset-SC-MTCH-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_mpdcch_Offset_SC_MTCH_r14_tags_45,
	sizeof(asn_DEF_LTE_mpdcch_Offset_SC_MTCH_r14_tags_45)
		/sizeof(asn_DEF_LTE_mpdcch_Offset_SC_MTCH_r14_tags_45[0]) - 1, /* 1 */
	asn_DEF_LTE_mpdcch_Offset_SC_MTCH_r14_tags_45,	/* Same as above */
	sizeof(asn_DEF_LTE_mpdcch_Offset_SC_MTCH_r14_tags_45)
		/sizeof(asn_DEF_LTE_mpdcch_Offset_SC_MTCH_r14_tags_45[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_mpdcch_Offset_SC_MTCH_r14_constr_45, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_mpdcch_Offset_SC_MTCH_r14_specs_45	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_p_a_r14_value2enum_54[] = {
	{ 0,	4,	"dB-6" },
	{ 1,	9,	"dB-4dot77" },
	{ 2,	4,	"dB-3" },
	{ 3,	9,	"dB-1dot77" },
	{ 4,	3,	"dB0" },
	{ 5,	3,	"dB1" },
	{ 6,	3,	"dB2" },
	{ 7,	3,	"dB3" }
};
static const unsigned int asn_MAP_LTE_p_a_r14_enum2value_54[] = {
	3,	/* dB-1dot77(3) */
	2,	/* dB-3(2) */
	1,	/* dB-4dot77(1) */
	0,	/* dB-6(0) */
	4,	/* dB0(4) */
	5,	/* dB1(5) */
	6,	/* dB2(6) */
	7	/* dB3(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_p_a_r14_specs_54 = {
	asn_MAP_LTE_p_a_r14_value2enum_54,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_p_a_r14_enum2value_54,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_p_a_r14_tags_54[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_p_a_r14_54 = {
	"p-a-r14",
	"p-a-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_p_a_r14_tags_54,
	sizeof(asn_DEF_LTE_p_a_r14_tags_54)
		/sizeof(asn_DEF_LTE_p_a_r14_tags_54[0]) - 1, /* 1 */
	asn_DEF_LTE_p_a_r14_tags_54,	/* Same as above */
	sizeof(asn_DEF_LTE_p_a_r14_tags_54)
		/sizeof(asn_DEF_LTE_p_a_r14_tags_54[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_p_a_r14_constr_54, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_p_a_r14_specs_54	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SC_MTCH_Info_BR_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_BR_r14, sc_mtch_CarrierFreq_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ARFCN_ValueEUTRA_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-mtch-CarrierFreq-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_BR_r14, mbmsSessionInfo_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MBMSSessionInfo_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbmsSessionInfo-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_BR_r14, g_RNTI_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_g_RNTI_r14_constr_4,  memb_LTE_g_RNTI_r14_constraint_1 },
		0, 0, /* No default value */
		"g-RNTI-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SC_MTCH_Info_BR_r14, sc_mtch_schedulingInfo_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SC_MTCH_SchedulingInfo_BR_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sc-mtch-schedulingInfo-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SC_MTCH_Info_BR_r14, sc_mtch_neighbourCell_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_sc_mtch_neighbourCell_r14_constr_6,  memb_LTE_sc_mtch_neighbourCell_r14_constraint_1 },
		0, 0, /* No default value */
		"sc-mtch-neighbourCell-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_BR_r14, mpdcch_Narrowband_SC_MTCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_mpdcch_Narrowband_SC_MTCH_r14_constr_7,  memb_LTE_mpdcch_Narrowband_SC_MTCH_r14_constraint_1 },
		0, 0, /* No default value */
		"mpdcch-Narrowband-SC-MTCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_BR_r14, mpdcch_NumRepetition_SC_MTCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_mpdcch_NumRepetition_SC_MTCH_r14_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mpdcch-NumRepetition-SC-MTCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_BR_r14, mpdcch_StartSF_SC_MTCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_mpdcch_StartSF_SC_MTCH_r14_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mpdcch-StartSF-SC-MTCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_BR_r14, mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_mpdcch_PDSCH_HoppingConfig_SC_MTCH_r14_36,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mpdcch-PDSCH-HoppingConfig-SC-MTCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_BR_r14, mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_mpdcch_PDSCH_CEmodeConfig_SC_MTCH_r14_39,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mpdcch-PDSCH-CEmodeConfig-SC-MTCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_BR_r14, mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_mpdcch_PDSCH_MaxBandwidth_SC_MTCH_r14_42,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mpdcch-PDSCH-MaxBandwidth-SC-MTCH-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MTCH_Info_BR_r14, mpdcch_Offset_SC_MTCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_mpdcch_Offset_SC_MTCH_r14_45,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mpdcch-Offset-SC-MTCH-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SC_MTCH_Info_BR_r14, p_a_r14),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_p_a_r14_54,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p-a-r14"
		},
};
static const int asn_MAP_LTE_SC_MTCH_Info_BR_r14_oms_1[] = { 3, 4, 12 };
static const ber_tlv_tag_t asn_DEF_LTE_SC_MTCH_Info_BR_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SC_MTCH_Info_BR_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sc-mtch-CarrierFreq-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mbmsSessionInfo-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* g-RNTI-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sc-mtch-schedulingInfo-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sc-mtch-neighbourCell-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* mpdcch-Narrowband-SC-MTCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* mpdcch-NumRepetition-SC-MTCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* mpdcch-StartSF-SC-MTCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* mpdcch-PDSCH-HoppingConfig-SC-MTCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* mpdcch-PDSCH-CEmodeConfig-SC-MTCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* mpdcch-PDSCH-MaxBandwidth-SC-MTCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* mpdcch-Offset-SC-MTCH-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* p-a-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SC_MTCH_Info_BR_r14_specs_1 = {
	sizeof(struct LTE_SC_MTCH_Info_BR_r14),
	offsetof(struct LTE_SC_MTCH_Info_BR_r14, _asn_ctx),
	asn_MAP_LTE_SC_MTCH_Info_BR_r14_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_LTE_SC_MTCH_Info_BR_r14_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	13,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SC_MTCH_Info_BR_r14 = {
	"SC-MTCH-Info-BR-r14",
	"SC-MTCH-Info-BR-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SC_MTCH_Info_BR_r14_tags_1,
	sizeof(asn_DEF_LTE_SC_MTCH_Info_BR_r14_tags_1)
		/sizeof(asn_DEF_LTE_SC_MTCH_Info_BR_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_SC_MTCH_Info_BR_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SC_MTCH_Info_BR_r14_tags_1)
		/sizeof(asn_DEF_LTE_SC_MTCH_Info_BR_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SC_MTCH_Info_BR_r14_1,
	13,	/* Elements count */
	&asn_SPC_LTE_SC_MTCH_Info_BR_r14_specs_1	/* Additional specs */
};

