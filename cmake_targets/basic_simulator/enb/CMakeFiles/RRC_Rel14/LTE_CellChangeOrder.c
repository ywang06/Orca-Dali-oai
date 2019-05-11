/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_CellChangeOrder.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_networkControlOrder_constraint_12(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 2)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_t304_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_networkControlOrder_constr_15 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_targetRAT_Type_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_t304_value2enum_2[] = {
	{ 0,	5,	"ms100" },
	{ 1,	5,	"ms200" },
	{ 2,	5,	"ms500" },
	{ 3,	6,	"ms1000" },
	{ 4,	6,	"ms2000" },
	{ 5,	6,	"ms4000" },
	{ 6,	6,	"ms8000" },
	{ 7,	13,	"ms10000-v1310" }
};
static const unsigned int asn_MAP_LTE_t304_enum2value_2[] = {
	0,	/* ms100(0) */
	3,	/* ms1000(3) */
	7,	/* ms10000-v1310(7) */
	1,	/* ms200(1) */
	4,	/* ms2000(4) */
	5,	/* ms4000(5) */
	2,	/* ms500(2) */
	6	/* ms8000(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t304_specs_2 = {
	asn_MAP_LTE_t304_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t304_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t304_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t304_2 = {
	"t304",
	"t304",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t304_tags_2,
	sizeof(asn_DEF_LTE_t304_tags_2)
		/sizeof(asn_DEF_LTE_t304_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_t304_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_t304_tags_2)
		/sizeof(asn_DEF_LTE_t304_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t304_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t304_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_geran_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CellChangeOrder__targetRAT_Type__geran, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhysCellIdGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CellChangeOrder__targetRAT_Type__geran, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CarrierFreqGERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_CellChangeOrder__targetRAT_Type__geran, networkControlOrder),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_networkControlOrder_constr_15,  memb_LTE_networkControlOrder_constraint_12 },
		0, 0, /* No default value */
		"networkControlOrder"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_CellChangeOrder__targetRAT_Type__geran, systemInformation),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_SI_OrPSI_GERAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"systemInformation"
		},
};
static const int asn_MAP_LTE_geran_oms_12[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_geran_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_geran_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* carrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* networkControlOrder */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* systemInformation */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_geran_specs_12 = {
	sizeof(struct LTE_CellChangeOrder__targetRAT_Type__geran),
	offsetof(struct LTE_CellChangeOrder__targetRAT_Type__geran, _asn_ctx),
	asn_MAP_LTE_geran_tag2el_12,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_geran_oms_12,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_geran_12 = {
	"geran",
	"geran",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_geran_tags_12,
	sizeof(asn_DEF_LTE_geran_tags_12)
		/sizeof(asn_DEF_LTE_geran_tags_12[0]) - 1, /* 1 */
	asn_DEF_LTE_geran_tags_12,	/* Same as above */
	sizeof(asn_DEF_LTE_geran_tags_12)
		/sizeof(asn_DEF_LTE_geran_tags_12[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_geran_12,
	4,	/* Elements count */
	&asn_SPC_LTE_geran_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_targetRAT_Type_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CellChangeOrder__targetRAT_Type, choice.geran),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_geran_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"geran"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_targetRAT_Type_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* geran */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_targetRAT_Type_specs_11 = {
	sizeof(struct LTE_CellChangeOrder__targetRAT_Type),
	offsetof(struct LTE_CellChangeOrder__targetRAT_Type, _asn_ctx),
	offsetof(struct LTE_CellChangeOrder__targetRAT_Type, present),
	sizeof(((struct LTE_CellChangeOrder__targetRAT_Type *)0)->present),
	asn_MAP_LTE_targetRAT_Type_tag2el_11,
	1,	/* Count of tags in the map */
	0, 0,
	1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_targetRAT_Type_11 = {
	"targetRAT-Type",
	"targetRAT-Type",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_targetRAT_Type_constr_11, CHOICE_constraint },
	asn_MBR_LTE_targetRAT_Type_11,
	1,	/* Elements count */
	&asn_SPC_LTE_targetRAT_Type_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_CellChangeOrder_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CellChangeOrder, t304),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t304_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t304"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CellChangeOrder, targetRAT_Type),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_targetRAT_Type_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetRAT-Type"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_CellChangeOrder_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_CellChangeOrder_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* t304 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* targetRAT-Type */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_CellChangeOrder_specs_1 = {
	sizeof(struct LTE_CellChangeOrder),
	offsetof(struct LTE_CellChangeOrder, _asn_ctx),
	asn_MAP_LTE_CellChangeOrder_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_CellChangeOrder = {
	"CellChangeOrder",
	"CellChangeOrder",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_CellChangeOrder_tags_1,
	sizeof(asn_DEF_LTE_CellChangeOrder_tags_1)
		/sizeof(asn_DEF_LTE_CellChangeOrder_tags_1[0]), /* 1 */
	asn_DEF_LTE_CellChangeOrder_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_CellChangeOrder_tags_1)
		/sizeof(asn_DEF_LTE_CellChangeOrder_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_CellChangeOrder_1,
	2,	/* Elements count */
	&asn_SPC_LTE_CellChangeOrder_specs_1	/* Additional specs */
};

