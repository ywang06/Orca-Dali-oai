/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PUSCH-EnhancementsConfig-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_pusch_HoppingOffsetPUSCH_Enh_r14_constraint_3(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 100)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_interval_FDD_PUSCH_Enh_r14_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_interval_TDD_PUSCH_Enh_r14_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_interval_ULHoppingPUSCH_Enh_r14_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_pusch_HoppingOffsetPUSCH_Enh_r14_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  1,  100 }	/* (1..100) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_LTE_PUSCH_EnhancementsConfig_r14_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_interval_FDD_PUSCH_Enh_r14_value2enum_6[] = {
	{ 0,	4,	"int1" },
	{ 1,	4,	"int2" },
	{ 2,	4,	"int4" },
	{ 3,	4,	"int8" }
};
static const unsigned int asn_MAP_LTE_interval_FDD_PUSCH_Enh_r14_enum2value_6[] = {
	0,	/* int1(0) */
	1,	/* int2(1) */
	2,	/* int4(2) */
	3	/* int8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_interval_FDD_PUSCH_Enh_r14_specs_6 = {
	asn_MAP_LTE_interval_FDD_PUSCH_Enh_r14_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_interval_FDD_PUSCH_Enh_r14_enum2value_6,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_interval_FDD_PUSCH_Enh_r14_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_interval_FDD_PUSCH_Enh_r14_6 = {
	"interval-FDD-PUSCH-Enh-r14",
	"interval-FDD-PUSCH-Enh-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_interval_FDD_PUSCH_Enh_r14_tags_6,
	sizeof(asn_DEF_LTE_interval_FDD_PUSCH_Enh_r14_tags_6)
		/sizeof(asn_DEF_LTE_interval_FDD_PUSCH_Enh_r14_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_interval_FDD_PUSCH_Enh_r14_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_interval_FDD_PUSCH_Enh_r14_tags_6)
		/sizeof(asn_DEF_LTE_interval_FDD_PUSCH_Enh_r14_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_interval_FDD_PUSCH_Enh_r14_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_interval_FDD_PUSCH_Enh_r14_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_interval_TDD_PUSCH_Enh_r14_value2enum_11[] = {
	{ 0,	4,	"int1" },
	{ 1,	4,	"int5" },
	{ 2,	5,	"int10" },
	{ 3,	5,	"int20" }
};
static const unsigned int asn_MAP_LTE_interval_TDD_PUSCH_Enh_r14_enum2value_11[] = {
	0,	/* int1(0) */
	2,	/* int10(2) */
	3,	/* int20(3) */
	1	/* int5(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_interval_TDD_PUSCH_Enh_r14_specs_11 = {
	asn_MAP_LTE_interval_TDD_PUSCH_Enh_r14_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_interval_TDD_PUSCH_Enh_r14_enum2value_11,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_interval_TDD_PUSCH_Enh_r14_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_interval_TDD_PUSCH_Enh_r14_11 = {
	"interval-TDD-PUSCH-Enh-r14",
	"interval-TDD-PUSCH-Enh-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_interval_TDD_PUSCH_Enh_r14_tags_11,
	sizeof(asn_DEF_LTE_interval_TDD_PUSCH_Enh_r14_tags_11)
		/sizeof(asn_DEF_LTE_interval_TDD_PUSCH_Enh_r14_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_interval_TDD_PUSCH_Enh_r14_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_interval_TDD_PUSCH_Enh_r14_tags_11)
		/sizeof(asn_DEF_LTE_interval_TDD_PUSCH_Enh_r14_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_interval_TDD_PUSCH_Enh_r14_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_interval_TDD_PUSCH_Enh_r14_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_interval_ULHoppingPUSCH_Enh_r14_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14, choice.interval_FDD_PUSCH_Enh_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_interval_FDD_PUSCH_Enh_r14_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-FDD-PUSCH-Enh-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14, choice.interval_TDD_PUSCH_Enh_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_interval_TDD_PUSCH_Enh_r14_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-TDD-PUSCH-Enh-r14"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_interval_ULHoppingPUSCH_Enh_r14_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interval-FDD-PUSCH-Enh-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interval-TDD-PUSCH-Enh-r14 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_interval_ULHoppingPUSCH_Enh_r14_specs_5 = {
	sizeof(struct LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14),
	offsetof(struct LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14, _asn_ctx),
	offsetof(struct LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14, present),
	sizeof(((struct LTE_PUSCH_EnhancementsConfig_r14__setup__interval_ULHoppingPUSCH_Enh_r14 *)0)->present),
	asn_MAP_LTE_interval_ULHoppingPUSCH_Enh_r14_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_interval_ULHoppingPUSCH_Enh_r14_5 = {
	"interval-ULHoppingPUSCH-Enh-r14",
	"interval-ULHoppingPUSCH-Enh-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_interval_ULHoppingPUSCH_Enh_r14_constr_5, CHOICE_constraint },
	asn_MBR_LTE_interval_ULHoppingPUSCH_Enh_r14_5,
	2,	/* Elements count */
	&asn_SPC_LTE_interval_ULHoppingPUSCH_Enh_r14_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_3[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_PUSCH_EnhancementsConfig_r14__setup, pusch_HoppingOffsetPUSCH_Enh_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_pusch_HoppingOffsetPUSCH_Enh_r14_constr_4,  memb_LTE_pusch_HoppingOffsetPUSCH_Enh_r14_constraint_3 },
		0, 0, /* No default value */
		"pusch-HoppingOffsetPUSCH-Enh-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_PUSCH_EnhancementsConfig_r14__setup, interval_ULHoppingPUSCH_Enh_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_interval_ULHoppingPUSCH_Enh_r14_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interval-ULHoppingPUSCH-Enh-r14"
		},
};
static const int asn_MAP_LTE_setup_oms_3[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pusch-HoppingOffsetPUSCH-Enh-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* interval-ULHoppingPUSCH-Enh-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_3 = {
	sizeof(struct LTE_PUSCH_EnhancementsConfig_r14__setup),
	offsetof(struct LTE_PUSCH_EnhancementsConfig_r14__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_3,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_setup_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
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
	2,	/* Elements count */
	&asn_SPC_LTE_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PUSCH_EnhancementsConfig_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_EnhancementsConfig_r14, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PUSCH_EnhancementsConfig_r14, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PUSCH_EnhancementsConfig_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_LTE_PUSCH_EnhancementsConfig_r14_specs_1 = {
	sizeof(struct LTE_PUSCH_EnhancementsConfig_r14),
	offsetof(struct LTE_PUSCH_EnhancementsConfig_r14, _asn_ctx),
	offsetof(struct LTE_PUSCH_EnhancementsConfig_r14, present),
	sizeof(((struct LTE_PUSCH_EnhancementsConfig_r14 *)0)->present),
	asn_MAP_LTE_PUSCH_EnhancementsConfig_r14_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PUSCH_EnhancementsConfig_r14 = {
	"PUSCH-EnhancementsConfig-r14",
	"PUSCH-EnhancementsConfig-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_PUSCH_EnhancementsConfig_r14_constr_1, CHOICE_constraint },
	asn_MBR_LTE_PUSCH_EnhancementsConfig_r14_1,
	2,	/* Elements count */
	&asn_SPC_LTE_PUSCH_EnhancementsConfig_r14_specs_1	/* Additional specs */
};

