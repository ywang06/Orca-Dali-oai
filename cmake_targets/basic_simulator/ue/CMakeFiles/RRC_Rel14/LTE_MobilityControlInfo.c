/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_MobilityControlInfo.h"

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
memb_LTE_schedulingInfoSIB1_BR_r14_constraint_34(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_t304_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_drb_ContinueROHC_r11_constr_22 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_handoverWithoutWT_Change_r14_constr_26 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_makeBeforeBreak_r14_constr_29 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_sameSFN_Indication_r14_constr_32 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_schedulingInfoSIB1_BR_r14_constr_36 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_t304_value2enum_6[] = {
	{ 0,	4,	"ms50" },
	{ 1,	5,	"ms100" },
	{ 2,	5,	"ms150" },
	{ 3,	5,	"ms200" },
	{ 4,	5,	"ms500" },
	{ 5,	6,	"ms1000" },
	{ 6,	6,	"ms2000" },
	{ 7,	13,	"ms10000-v1310" }
};
static const unsigned int asn_MAP_LTE_t304_enum2value_6[] = {
	1,	/* ms100(1) */
	5,	/* ms1000(5) */
	7,	/* ms10000-v1310(7) */
	2,	/* ms150(2) */
	3,	/* ms200(3) */
	6,	/* ms2000(6) */
	0,	/* ms50(0) */
	4	/* ms500(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_t304_specs_6 = {
	asn_MAP_LTE_t304_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_t304_enum2value_6,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_t304_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_t304_6 = {
	"t304",
	"t304",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_t304_tags_6,
	sizeof(asn_DEF_LTE_t304_tags_6)
		/sizeof(asn_DEF_LTE_t304_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_t304_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_t304_tags_6)
		/sizeof(asn_DEF_LTE_t304_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_t304_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_t304_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_19[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_MobilityControlInfo__ext1, carrierFreq_v9e0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CarrierFreqEUTRA_v9e0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-v9e0"
		},
};
static const int asn_MAP_LTE_ext1_oms_19[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* carrierFreq-v9e0 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_19 = {
	sizeof(struct LTE_MobilityControlInfo__ext1),
	offsetof(struct LTE_MobilityControlInfo__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_19,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_19,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_19 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_19,
	sizeof(asn_DEF_LTE_ext1_tags_19)
		/sizeof(asn_DEF_LTE_ext1_tags_19[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_19,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_19)
		/sizeof(asn_DEF_LTE_ext1_tags_19[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_19,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_19	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_drb_ContinueROHC_r11_value2enum_22[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_drb_ContinueROHC_r11_enum2value_22[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_drb_ContinueROHC_r11_specs_22 = {
	asn_MAP_LTE_drb_ContinueROHC_r11_value2enum_22,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_drb_ContinueROHC_r11_enum2value_22,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_drb_ContinueROHC_r11_tags_22[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_drb_ContinueROHC_r11_22 = {
	"drb-ContinueROHC-r11",
	"drb-ContinueROHC-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_drb_ContinueROHC_r11_tags_22,
	sizeof(asn_DEF_LTE_drb_ContinueROHC_r11_tags_22)
		/sizeof(asn_DEF_LTE_drb_ContinueROHC_r11_tags_22[0]) - 1, /* 1 */
	asn_DEF_LTE_drb_ContinueROHC_r11_tags_22,	/* Same as above */
	sizeof(asn_DEF_LTE_drb_ContinueROHC_r11_tags_22)
		/sizeof(asn_DEF_LTE_drb_ContinueROHC_r11_tags_22[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_drb_ContinueROHC_r11_constr_22, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_drb_ContinueROHC_r11_specs_22	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_21[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_MobilityControlInfo__ext2, drb_ContinueROHC_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_drb_ContinueROHC_r11_22,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-ContinueROHC-r11"
		},
};
static const int asn_MAP_LTE_ext2_oms_21[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_21[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* drb-ContinueROHC-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_21 = {
	sizeof(struct LTE_MobilityControlInfo__ext2),
	offsetof(struct LTE_MobilityControlInfo__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_21,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_21,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_21 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_21,
	sizeof(asn_DEF_LTE_ext2_tags_21)
		/sizeof(asn_DEF_LTE_ext2_tags_21[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_21,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_21)
		/sizeof(asn_DEF_LTE_ext2_tags_21[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext2_21,
	1,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_21	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_handoverWithoutWT_Change_r14_value2enum_26[] = {
	{ 0,	14,	"keepLWA-Config" },
	{ 1,	13,	"sendEndMarker" }
};
static const unsigned int asn_MAP_LTE_handoverWithoutWT_Change_r14_enum2value_26[] = {
	0,	/* keepLWA-Config(0) */
	1	/* sendEndMarker(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_handoverWithoutWT_Change_r14_specs_26 = {
	asn_MAP_LTE_handoverWithoutWT_Change_r14_value2enum_26,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_handoverWithoutWT_Change_r14_enum2value_26,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_handoverWithoutWT_Change_r14_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_handoverWithoutWT_Change_r14_26 = {
	"handoverWithoutWT-Change-r14",
	"handoverWithoutWT-Change-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_handoverWithoutWT_Change_r14_tags_26,
	sizeof(asn_DEF_LTE_handoverWithoutWT_Change_r14_tags_26)
		/sizeof(asn_DEF_LTE_handoverWithoutWT_Change_r14_tags_26[0]) - 1, /* 1 */
	asn_DEF_LTE_handoverWithoutWT_Change_r14_tags_26,	/* Same as above */
	sizeof(asn_DEF_LTE_handoverWithoutWT_Change_r14_tags_26)
		/sizeof(asn_DEF_LTE_handoverWithoutWT_Change_r14_tags_26[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_handoverWithoutWT_Change_r14_constr_26, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_handoverWithoutWT_Change_r14_specs_26	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_makeBeforeBreak_r14_value2enum_29[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_makeBeforeBreak_r14_enum2value_29[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_makeBeforeBreak_r14_specs_29 = {
	asn_MAP_LTE_makeBeforeBreak_r14_value2enum_29,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_makeBeforeBreak_r14_enum2value_29,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_makeBeforeBreak_r14_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_makeBeforeBreak_r14_29 = {
	"makeBeforeBreak-r14",
	"makeBeforeBreak-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_makeBeforeBreak_r14_tags_29,
	sizeof(asn_DEF_LTE_makeBeforeBreak_r14_tags_29)
		/sizeof(asn_DEF_LTE_makeBeforeBreak_r14_tags_29[0]) - 1, /* 1 */
	asn_DEF_LTE_makeBeforeBreak_r14_tags_29,	/* Same as above */
	sizeof(asn_DEF_LTE_makeBeforeBreak_r14_tags_29)
		/sizeof(asn_DEF_LTE_makeBeforeBreak_r14_tags_29[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_makeBeforeBreak_r14_constr_29, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_makeBeforeBreak_r14_specs_29	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_sameSFN_Indication_r14_value2enum_32[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_sameSFN_Indication_r14_enum2value_32[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_sameSFN_Indication_r14_specs_32 = {
	asn_MAP_LTE_sameSFN_Indication_r14_value2enum_32,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_sameSFN_Indication_r14_enum2value_32,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_sameSFN_Indication_r14_tags_32[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_sameSFN_Indication_r14_32 = {
	"sameSFN-Indication-r14",
	"sameSFN-Indication-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_sameSFN_Indication_r14_tags_32,
	sizeof(asn_DEF_LTE_sameSFN_Indication_r14_tags_32)
		/sizeof(asn_DEF_LTE_sameSFN_Indication_r14_tags_32[0]) - 1, /* 1 */
	asn_DEF_LTE_sameSFN_Indication_r14_tags_32,	/* Same as above */
	sizeof(asn_DEF_LTE_sameSFN_Indication_r14_tags_32)
		/sizeof(asn_DEF_LTE_sameSFN_Indication_r14_tags_32[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_sameSFN_Indication_r14_constr_32, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_sameSFN_Indication_r14_specs_32	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext3_24[] = {
	{ ATF_POINTER, 5, offsetof(struct LTE_MobilityControlInfo__ext3, mobilityControlInfoV2X_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MobilityControlInfoV2X_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityControlInfoV2X-r14"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_MobilityControlInfo__ext3, handoverWithoutWT_Change_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_handoverWithoutWT_Change_r14_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"handoverWithoutWT-Change-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_MobilityControlInfo__ext3, makeBeforeBreak_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_makeBeforeBreak_r14_29,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"makeBeforeBreak-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_MobilityControlInfo__ext3, rach_Skip_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RACH_Skip_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-Skip-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MobilityControlInfo__ext3, sameSFN_Indication_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_sameSFN_Indication_r14_32,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sameSFN-Indication-r14"
		},
};
static const int asn_MAP_LTE_ext3_oms_24[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_LTE_ext3_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext3_tag2el_24[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mobilityControlInfoV2X-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* handoverWithoutWT-Change-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* makeBeforeBreak-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rach-Skip-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* sameSFN-Indication-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext3_specs_24 = {
	sizeof(struct LTE_MobilityControlInfo__ext3),
	offsetof(struct LTE_MobilityControlInfo__ext3, _asn_ctx),
	asn_MAP_LTE_ext3_tag2el_24,
	5,	/* Count of tags in the map */
	asn_MAP_LTE_ext3_oms_24,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext3_24 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext3_tags_24,
	sizeof(asn_DEF_LTE_ext3_tags_24)
		/sizeof(asn_DEF_LTE_ext3_tags_24[0]) - 1, /* 1 */
	asn_DEF_LTE_ext3_tags_24,	/* Same as above */
	sizeof(asn_DEF_LTE_ext3_tags_24)
		/sizeof(asn_DEF_LTE_ext3_tags_24[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext3_24,
	5,	/* Elements count */
	&asn_SPC_LTE_ext3_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext4_34[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_MobilityControlInfo__ext4, mib_RepetitionStatus_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mib-RepetitionStatus-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MobilityControlInfo__ext4, schedulingInfoSIB1_BR_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_schedulingInfoSIB1_BR_r14_constr_36,  memb_LTE_schedulingInfoSIB1_BR_r14_constraint_34 },
		0, 0, /* No default value */
		"schedulingInfoSIB1-BR-r14"
		},
};
static const int asn_MAP_LTE_ext4_oms_34[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_ext4_tags_34[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext4_tag2el_34[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mib-RepetitionStatus-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* schedulingInfoSIB1-BR-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext4_specs_34 = {
	sizeof(struct LTE_MobilityControlInfo__ext4),
	offsetof(struct LTE_MobilityControlInfo__ext4, _asn_ctx),
	asn_MAP_LTE_ext4_tag2el_34,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_ext4_oms_34,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext4_34 = {
	"ext4",
	"ext4",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext4_tags_34,
	sizeof(asn_DEF_LTE_ext4_tags_34)
		/sizeof(asn_DEF_LTE_ext4_tags_34[0]) - 1, /* 1 */
	asn_DEF_LTE_ext4_tags_34,	/* Same as above */
	sizeof(asn_DEF_LTE_ext4_tags_34)
		/sizeof(asn_DEF_LTE_ext4_tags_34[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext4_34,
	2,	/* Elements count */
	&asn_SPC_LTE_ext4_specs_34	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_MobilityControlInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MobilityControlInfo, targetPhysCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetPhysCellId"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_MobilityControlInfo, carrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CarrierFreqEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_MobilityControlInfo, carrierBandwidth),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CarrierBandwidthEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierBandwidth"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MobilityControlInfo, additionalSpectrumEmission),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_AdditionalSpectrumEmission,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSpectrumEmission"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MobilityControlInfo, t304),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_t304_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t304"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MobilityControlInfo, newUE_Identity),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_C_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"newUE-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MobilityControlInfo, radioResourceConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RadioResourceConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigCommon"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_MobilityControlInfo, rach_ConfigDedicated),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RACH_ConfigDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rach-ConfigDedicated"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_MobilityControlInfo, ext1),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_LTE_ext1_19,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_MobilityControlInfo, ext2),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		0,
		&asn_DEF_LTE_ext2_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_MobilityControlInfo, ext3),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		0,
		&asn_DEF_LTE_ext3_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_MobilityControlInfo, ext4),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		0,
		&asn_DEF_LTE_ext4_34,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext4"
		},
};
static const int asn_MAP_LTE_MobilityControlInfo_oms_1[] = { 1, 2, 3, 7, 8, 9, 10, 11 };
static const ber_tlv_tag_t asn_DEF_LTE_MobilityControlInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MobilityControlInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* targetPhysCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* carrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* carrierBandwidth */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* additionalSpectrumEmission */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* t304 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* newUE-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* radioResourceConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* rach-ConfigDedicated */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ext3 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 } /* ext4 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_MobilityControlInfo_specs_1 = {
	sizeof(struct LTE_MobilityControlInfo),
	offsetof(struct LTE_MobilityControlInfo, _asn_ctx),
	asn_MAP_LTE_MobilityControlInfo_tag2el_1,
	12,	/* Count of tags in the map */
	asn_MAP_LTE_MobilityControlInfo_oms_1,	/* Optional members */
	4, 4,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MobilityControlInfo = {
	"MobilityControlInfo",
	"MobilityControlInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_MobilityControlInfo_tags_1,
	sizeof(asn_DEF_LTE_MobilityControlInfo_tags_1)
		/sizeof(asn_DEF_LTE_MobilityControlInfo_tags_1[0]), /* 1 */
	asn_DEF_LTE_MobilityControlInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MobilityControlInfo_tags_1)
		/sizeof(asn_DEF_LTE_MobilityControlInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_MobilityControlInfo_1,
	12,	/* Elements count */
	&asn_SPC_LTE_MobilityControlInfo_specs_1	/* Additional specs */
};

