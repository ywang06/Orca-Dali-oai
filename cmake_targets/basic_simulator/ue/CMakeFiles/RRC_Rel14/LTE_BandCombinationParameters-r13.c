/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_BandCombinationParameters-r13.h"

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
memb_LTE_threeEntries_r13_constraint_15(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 3)) {
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
memb_LTE_fourEntries_r13_constraint_15(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 7)) {
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
memb_LTE_fiveEntries_r13_constraint_15(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 15)) {
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
memb_LTE_bandParameterList_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 64)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_supportedNAICS_2CRS_AP_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
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
memb_LTE_commSupportedBandsPerBC_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 64)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_differentFallbackSupported_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_bandParameterList_r13_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_multipleTimingAdvance_r13_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_simultaneousRx_Tx_r13_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_asynchronous_r13_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_threeEntries_r13_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  3,  3 }	/* (SIZE(3..3)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_fourEntries_r13_constr_17 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  7,  7 }	/* (SIZE(7..7)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_fiveEntries_r13_constr_18 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  15,  15 }	/* (SIZE(15..15)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_supportedCellGrouping_r13_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_bandParameterList_r13_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_supportedNAICS_2CRS_AP_r13_constr_19 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_commSupportedBandsPerBC_r13_constr_20 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_differentFallbackSupported_r13_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_differentFallbackSupported_r13_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_differentFallbackSupported_r13_specs_2 = {
	asn_MAP_LTE_differentFallbackSupported_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_differentFallbackSupported_r13_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_differentFallbackSupported_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_differentFallbackSupported_r13_2 = {
	"differentFallbackSupported-r13",
	"differentFallbackSupported-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_differentFallbackSupported_r13_tags_2,
	sizeof(asn_DEF_LTE_differentFallbackSupported_r13_tags_2)
		/sizeof(asn_DEF_LTE_differentFallbackSupported_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_differentFallbackSupported_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_differentFallbackSupported_r13_tags_2)
		/sizeof(asn_DEF_LTE_differentFallbackSupported_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_differentFallbackSupported_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_differentFallbackSupported_r13_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_bandParameterList_r13_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LTE_BandParameters_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_bandParameterList_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_bandParameterList_r13_specs_4 = {
	sizeof(struct LTE_BandCombinationParameters_r13__bandParameterList_r13),
	offsetof(struct LTE_BandCombinationParameters_r13__bandParameterList_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_bandParameterList_r13_4 = {
	"bandParameterList-r13",
	"bandParameterList-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_bandParameterList_r13_tags_4,
	sizeof(asn_DEF_LTE_bandParameterList_r13_tags_4)
		/sizeof(asn_DEF_LTE_bandParameterList_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_bandParameterList_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_bandParameterList_r13_tags_4)
		/sizeof(asn_DEF_LTE_bandParameterList_r13_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_bandParameterList_r13_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_LTE_bandParameterList_r13_4,
	1,	/* Single element */
	&asn_SPC_LTE_bandParameterList_r13_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_multipleTimingAdvance_r13_value2enum_7[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_multipleTimingAdvance_r13_enum2value_7[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_multipleTimingAdvance_r13_specs_7 = {
	asn_MAP_LTE_multipleTimingAdvance_r13_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_multipleTimingAdvance_r13_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_multipleTimingAdvance_r13_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_multipleTimingAdvance_r13_7 = {
	"multipleTimingAdvance-r13",
	"multipleTimingAdvance-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_multipleTimingAdvance_r13_tags_7,
	sizeof(asn_DEF_LTE_multipleTimingAdvance_r13_tags_7)
		/sizeof(asn_DEF_LTE_multipleTimingAdvance_r13_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_multipleTimingAdvance_r13_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_multipleTimingAdvance_r13_tags_7)
		/sizeof(asn_DEF_LTE_multipleTimingAdvance_r13_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_multipleTimingAdvance_r13_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_multipleTimingAdvance_r13_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_simultaneousRx_Tx_r13_value2enum_9[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_simultaneousRx_Tx_r13_enum2value_9[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_simultaneousRx_Tx_r13_specs_9 = {
	asn_MAP_LTE_simultaneousRx_Tx_r13_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_simultaneousRx_Tx_r13_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_simultaneousRx_Tx_r13_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_simultaneousRx_Tx_r13_9 = {
	"simultaneousRx-Tx-r13",
	"simultaneousRx-Tx-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_simultaneousRx_Tx_r13_tags_9,
	sizeof(asn_DEF_LTE_simultaneousRx_Tx_r13_tags_9)
		/sizeof(asn_DEF_LTE_simultaneousRx_Tx_r13_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_simultaneousRx_Tx_r13_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_simultaneousRx_Tx_r13_tags_9)
		/sizeof(asn_DEF_LTE_simultaneousRx_Tx_r13_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_simultaneousRx_Tx_r13_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_simultaneousRx_Tx_r13_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_asynchronous_r13_value2enum_13[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_LTE_asynchronous_r13_enum2value_13[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_asynchronous_r13_specs_13 = {
	asn_MAP_LTE_asynchronous_r13_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_asynchronous_r13_enum2value_13,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_asynchronous_r13_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_asynchronous_r13_13 = {
	"asynchronous-r13",
	"asynchronous-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_asynchronous_r13_tags_13,
	sizeof(asn_DEF_LTE_asynchronous_r13_tags_13)
		/sizeof(asn_DEF_LTE_asynchronous_r13_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_asynchronous_r13_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_asynchronous_r13_tags_13)
		/sizeof(asn_DEF_LTE_asynchronous_r13_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_asynchronous_r13_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_asynchronous_r13_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_supportedCellGrouping_r13_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13, choice.threeEntries_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_threeEntries_r13_constr_16,  memb_LTE_threeEntries_r13_constraint_15 },
		0, 0, /* No default value */
		"threeEntries-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13, choice.fourEntries_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_fourEntries_r13_constr_17,  memb_LTE_fourEntries_r13_constraint_15 },
		0, 0, /* No default value */
		"fourEntries-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13, choice.fiveEntries_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_fiveEntries_r13_constr_18,  memb_LTE_fiveEntries_r13_constraint_15 },
		0, 0, /* No default value */
		"fiveEntries-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_supportedCellGrouping_r13_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* threeEntries-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* fourEntries-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* fiveEntries-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_supportedCellGrouping_r13_specs_15 = {
	sizeof(struct LTE_BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13),
	offsetof(struct LTE_BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13, _asn_ctx),
	offsetof(struct LTE_BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13, present),
	sizeof(((struct LTE_BandCombinationParameters_r13__dc_Support_r13__supportedCellGrouping_r13 *)0)->present),
	asn_MAP_LTE_supportedCellGrouping_r13_tag2el_15,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_supportedCellGrouping_r13_15 = {
	"supportedCellGrouping-r13",
	"supportedCellGrouping-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_supportedCellGrouping_r13_constr_15, CHOICE_constraint },
	asn_MBR_LTE_supportedCellGrouping_r13_15,
	3,	/* Elements count */
	&asn_SPC_LTE_supportedCellGrouping_r13_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_dc_Support_r13_12[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_BandCombinationParameters_r13__dc_Support_r13, asynchronous_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_asynchronous_r13_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"asynchronous-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_BandCombinationParameters_r13__dc_Support_r13, supportedCellGrouping_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_supportedCellGrouping_r13_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedCellGrouping-r13"
		},
};
static const int asn_MAP_LTE_dc_Support_r13_oms_12[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_dc_Support_r13_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_dc_Support_r13_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* asynchronous-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* supportedCellGrouping-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_dc_Support_r13_specs_12 = {
	sizeof(struct LTE_BandCombinationParameters_r13__dc_Support_r13),
	offsetof(struct LTE_BandCombinationParameters_r13__dc_Support_r13, _asn_ctx),
	asn_MAP_LTE_dc_Support_r13_tag2el_12,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_dc_Support_r13_oms_12,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_dc_Support_r13_12 = {
	"dc-Support-r13",
	"dc-Support-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_dc_Support_r13_tags_12,
	sizeof(asn_DEF_LTE_dc_Support_r13_tags_12)
		/sizeof(asn_DEF_LTE_dc_Support_r13_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_dc_Support_r13_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_dc_Support_r13_tags_12)
		/sizeof(asn_DEF_LTE_dc_Support_r13_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_dc_Support_r13_12,
	2,	/* Elements count */
	&asn_SPC_LTE_dc_Support_r13_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_BandCombinationParameters_r13_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_BandCombinationParameters_r13, differentFallbackSupported_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_differentFallbackSupported_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"differentFallbackSupported-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BandCombinationParameters_r13, bandParameterList_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_bandParameterList_r13_4,
		0,
		{ 0, &asn_PER_memb_LTE_bandParameterList_r13_constr_4,  memb_LTE_bandParameterList_r13_constraint_1 },
		0, 0, /* No default value */
		"bandParameterList-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_BandCombinationParameters_r13, supportedBandwidthCombinationSet_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SupportedBandwidthCombinationSet_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"supportedBandwidthCombinationSet-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_BandCombinationParameters_r13, multipleTimingAdvance_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_multipleTimingAdvance_r13_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multipleTimingAdvance-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_BandCombinationParameters_r13, simultaneousRx_Tx_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_simultaneousRx_Tx_r13_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"simultaneousRx-Tx-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_BandCombinationParameters_r13, bandInfoEUTRA_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_BandInfoEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandInfoEUTRA-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_BandCombinationParameters_r13, dc_Support_r13),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_LTE_dc_Support_r13_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dc-Support-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_BandCombinationParameters_r13, supportedNAICS_2CRS_AP_r13),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_supportedNAICS_2CRS_AP_r13_constr_19,  memb_LTE_supportedNAICS_2CRS_AP_r13_constraint_1 },
		0, 0, /* No default value */
		"supportedNAICS-2CRS-AP-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_BandCombinationParameters_r13, commSupportedBandsPerBC_r13),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_commSupportedBandsPerBC_r13_constr_20,  memb_LTE_commSupportedBandsPerBC_r13_constraint_1 },
		0, 0, /* No default value */
		"commSupportedBandsPerBC-r13"
		},
};
static const int asn_MAP_LTE_BandCombinationParameters_r13_oms_1[] = { 0, 2, 3, 4, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_LTE_BandCombinationParameters_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_BandCombinationParameters_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* differentFallbackSupported-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bandParameterList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* supportedBandwidthCombinationSet-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* multipleTimingAdvance-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* simultaneousRx-Tx-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* bandInfoEUTRA-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* dc-Support-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* supportedNAICS-2CRS-AP-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* commSupportedBandsPerBC-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_BandCombinationParameters_r13_specs_1 = {
	sizeof(struct LTE_BandCombinationParameters_r13),
	offsetof(struct LTE_BandCombinationParameters_r13, _asn_ctx),
	asn_MAP_LTE_BandCombinationParameters_r13_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_LTE_BandCombinationParameters_r13_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_BandCombinationParameters_r13 = {
	"BandCombinationParameters-r13",
	"BandCombinationParameters-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_BandCombinationParameters_r13_tags_1,
	sizeof(asn_DEF_LTE_BandCombinationParameters_r13_tags_1)
		/sizeof(asn_DEF_LTE_BandCombinationParameters_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_BandCombinationParameters_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_BandCombinationParameters_r13_tags_1)
		/sizeof(asn_DEF_LTE_BandCombinationParameters_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_BandCombinationParameters_r13_1,
	9,	/* Elements count */
	&asn_SPC_LTE_BandCombinationParameters_r13_specs_1	/* Additional specs */
};

