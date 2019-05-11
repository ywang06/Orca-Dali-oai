/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_EAB-Config-r11.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_eab_BarringBitmap_r11_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 10)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_eab_Category_r11_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_eab_BarringBitmap_r11_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_eab_Category_r11_value2enum_2[] = {
	{ 0,	1,	"a" },
	{ 1,	1,	"b" },
	{ 2,	1,	"c" }
};
static const unsigned int asn_MAP_LTE_eab_Category_r11_enum2value_2[] = {
	0,	/* a(0) */
	1,	/* b(1) */
	2	/* c(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_eab_Category_r11_specs_2 = {
	asn_MAP_LTE_eab_Category_r11_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_eab_Category_r11_enum2value_2,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_eab_Category_r11_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_eab_Category_r11_2 = {
	"eab-Category-r11",
	"eab-Category-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_eab_Category_r11_tags_2,
	sizeof(asn_DEF_LTE_eab_Category_r11_tags_2)
		/sizeof(asn_DEF_LTE_eab_Category_r11_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_eab_Category_r11_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_eab_Category_r11_tags_2)
		/sizeof(asn_DEF_LTE_eab_Category_r11_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_eab_Category_r11_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_eab_Category_r11_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_EAB_Config_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_EAB_Config_r11, eab_Category_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_eab_Category_r11_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eab-Category-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_EAB_Config_r11, eab_BarringBitmap_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_eab_BarringBitmap_r11_constr_6,  memb_LTE_eab_BarringBitmap_r11_constraint_1 },
		0, 0, /* No default value */
		"eab-BarringBitmap-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_EAB_Config_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_EAB_Config_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eab-Category-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eab-BarringBitmap-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_EAB_Config_r11_specs_1 = {
	sizeof(struct LTE_EAB_Config_r11),
	offsetof(struct LTE_EAB_Config_r11, _asn_ctx),
	asn_MAP_LTE_EAB_Config_r11_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_EAB_Config_r11 = {
	"EAB-Config-r11",
	"EAB-Config-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_EAB_Config_r11_tags_1,
	sizeof(asn_DEF_LTE_EAB_Config_r11_tags_1)
		/sizeof(asn_DEF_LTE_EAB_Config_r11_tags_1[0]), /* 1 */
	asn_DEF_LTE_EAB_Config_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_EAB_Config_r11_tags_1)
		/sizeof(asn_DEF_LTE_EAB_Config_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_EAB_Config_r11_1,
	2,	/* Elements count */
	&asn_SPC_LTE_EAB_Config_r11_specs_1	/* Additional specs */
};

