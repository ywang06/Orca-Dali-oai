/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_TDM-AssistanceInfo-r11.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_drx_Offset_r11_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_drx_CycleLength_r11_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_drx_ActiveTime_r11_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_drx_Offset_r11_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_LTE_TDM_AssistanceInfo_r11_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_drx_CycleLength_r11_value2enum_3[] = {
	{ 0,	4,	"sf40" },
	{ 1,	4,	"sf64" },
	{ 2,	4,	"sf80" },
	{ 3,	5,	"sf128" },
	{ 4,	5,	"sf160" },
	{ 5,	5,	"sf256" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_drx_CycleLength_r11_enum2value_3[] = {
	3,	/* sf128(3) */
	4,	/* sf160(4) */
	5,	/* sf256(5) */
	0,	/* sf40(0) */
	1,	/* sf64(1) */
	2,	/* sf80(2) */
	7,	/* spare1(7) */
	6	/* spare2(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_drx_CycleLength_r11_specs_3 = {
	asn_MAP_LTE_drx_CycleLength_r11_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_drx_CycleLength_r11_enum2value_3,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_drx_CycleLength_r11_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_drx_CycleLength_r11_3 = {
	"drx-CycleLength-r11",
	"drx-CycleLength-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_drx_CycleLength_r11_tags_3,
	sizeof(asn_DEF_LTE_drx_CycleLength_r11_tags_3)
		/sizeof(asn_DEF_LTE_drx_CycleLength_r11_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_drx_CycleLength_r11_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_drx_CycleLength_r11_tags_3)
		/sizeof(asn_DEF_LTE_drx_CycleLength_r11_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_drx_CycleLength_r11_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_drx_CycleLength_r11_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_drx_ActiveTime_r11_value2enum_13[] = {
	{ 0,	4,	"sf20" },
	{ 1,	4,	"sf30" },
	{ 2,	4,	"sf40" },
	{ 3,	4,	"sf60" },
	{ 4,	4,	"sf80" },
	{ 5,	5,	"sf100" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_drx_ActiveTime_r11_enum2value_13[] = {
	5,	/* sf100(5) */
	0,	/* sf20(0) */
	1,	/* sf30(1) */
	2,	/* sf40(2) */
	3,	/* sf60(3) */
	4,	/* sf80(4) */
	7,	/* spare1(7) */
	6	/* spare2(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_drx_ActiveTime_r11_specs_13 = {
	asn_MAP_LTE_drx_ActiveTime_r11_value2enum_13,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_drx_ActiveTime_r11_enum2value_13,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_drx_ActiveTime_r11_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_drx_ActiveTime_r11_13 = {
	"drx-ActiveTime-r11",
	"drx-ActiveTime-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_drx_ActiveTime_r11_tags_13,
	sizeof(asn_DEF_LTE_drx_ActiveTime_r11_tags_13)
		/sizeof(asn_DEF_LTE_drx_ActiveTime_r11_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_drx_ActiveTime_r11_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_drx_ActiveTime_r11_tags_13)
		/sizeof(asn_DEF_LTE_drx_ActiveTime_r11_tags_13[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_drx_ActiveTime_r11_constr_13, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_drx_ActiveTime_r11_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_drx_AssistanceInfo_r11_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11, drx_CycleLength_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_drx_CycleLength_r11_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-CycleLength-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11, drx_Offset_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_drx_Offset_r11_constr_12,  memb_LTE_drx_Offset_r11_constraint_2 },
		0, 0, /* No default value */
		"drx-Offset-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11, drx_ActiveTime_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_drx_ActiveTime_r11_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-ActiveTime-r11"
		},
};
static const int asn_MAP_LTE_drx_AssistanceInfo_r11_oms_2[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LTE_drx_AssistanceInfo_r11_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_drx_AssistanceInfo_r11_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drx-CycleLength-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drx-Offset-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* drx-ActiveTime-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_drx_AssistanceInfo_r11_specs_2 = {
	sizeof(struct LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11),
	offsetof(struct LTE_TDM_AssistanceInfo_r11__drx_AssistanceInfo_r11, _asn_ctx),
	asn_MAP_LTE_drx_AssistanceInfo_r11_tag2el_2,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_drx_AssistanceInfo_r11_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_drx_AssistanceInfo_r11_2 = {
	"drx-AssistanceInfo-r11",
	"drx-AssistanceInfo-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_drx_AssistanceInfo_r11_tags_2,
	sizeof(asn_DEF_LTE_drx_AssistanceInfo_r11_tags_2)
		/sizeof(asn_DEF_LTE_drx_AssistanceInfo_r11_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_drx_AssistanceInfo_r11_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_drx_AssistanceInfo_r11_tags_2)
		/sizeof(asn_DEF_LTE_drx_AssistanceInfo_r11_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_drx_AssistanceInfo_r11_2,
	3,	/* Elements count */
	&asn_SPC_LTE_drx_AssistanceInfo_r11_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_TDM_AssistanceInfo_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_TDM_AssistanceInfo_r11, choice.drx_AssistanceInfo_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_drx_AssistanceInfo_r11_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-AssistanceInfo-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_TDM_AssistanceInfo_r11, choice.idc_SubframePatternList_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_IDC_SubframePatternList_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"idc-SubframePatternList-r11"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_TDM_AssistanceInfo_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drx-AssistanceInfo-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* idc-SubframePatternList-r11 */
};
asn_CHOICE_specifics_t asn_SPC_LTE_TDM_AssistanceInfo_r11_specs_1 = {
	sizeof(struct LTE_TDM_AssistanceInfo_r11),
	offsetof(struct LTE_TDM_AssistanceInfo_r11, _asn_ctx),
	offsetof(struct LTE_TDM_AssistanceInfo_r11, present),
	sizeof(((struct LTE_TDM_AssistanceInfo_r11 *)0)->present),
	asn_MAP_LTE_TDM_AssistanceInfo_r11_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_TDM_AssistanceInfo_r11 = {
	"TDM-AssistanceInfo-r11",
	"TDM-AssistanceInfo-r11",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_TDM_AssistanceInfo_r11_constr_1, CHOICE_constraint },
	asn_MBR_LTE_TDM_AssistanceInfo_r11_1,
	2,	/* Elements count */
	&asn_SPC_LTE_TDM_AssistanceInfo_r11_specs_1	/* Additional specs */
};

