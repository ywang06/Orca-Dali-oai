/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SPS-ConfigUL.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_p0_NominalPUSCH_Persistent_constraint_26(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -126 && value <= 24)) {
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
memb_LTE_p0_UE_PUSCH_Persistent_constraint_26(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_p0_NominalPUSCH_PersistentSubframeSet2_r12_constraint_35(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -126 && value <= 24)) {
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
memb_LTE_p0_UE_PUSCH_PersistentSubframeSet2_r12_constraint_35(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8 && value <= 7)) {
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
memb_LTE_numberOfConfUlSPS_Processes_r13_constraint_38(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_semiPersistSchedIntervalUL_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_implicitReleaseAfter_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_p0_NominalPUSCH_Persistent_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -126,  24 }	/* (-126..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_p0_UE_PUSCH_Persistent_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4, -8,  7 }	/* (-8..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_twoIntervalsConfig_constr_29 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_p0_NominalPUSCH_PersistentSubframeSet2_r12_constr_36 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -126,  24 }	/* (-126..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_p0_UE_PUSCH_PersistentSubframeSet2_r12_constr_37 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4, -8,  7 }	/* (-8..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_p0_PersistentSubframeSet2_r12_constr_33 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_numberOfConfUlSPS_Processes_r13_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_fixedRV_NonAdaptive_r14_constr_41 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_semiPersistSchedIntervalUL_v1430_constr_44 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_LTE_SPS_ConfigUL_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_semiPersistSchedIntervalUL_value2enum_4[] = {
	{ 0,	4,	"sf10" },
	{ 1,	4,	"sf20" },
	{ 2,	4,	"sf32" },
	{ 3,	4,	"sf40" },
	{ 4,	4,	"sf64" },
	{ 5,	4,	"sf80" },
	{ 6,	5,	"sf128" },
	{ 7,	5,	"sf160" },
	{ 8,	5,	"sf320" },
	{ 9,	5,	"sf640" },
	{ 10,	9,	"sf1-v1430" },
	{ 11,	9,	"sf2-v1430" },
	{ 12,	9,	"sf3-v1430" },
	{ 13,	9,	"sf4-v1430" },
	{ 14,	9,	"sf5-v1430" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_semiPersistSchedIntervalUL_enum2value_4[] = {
	10,	/* sf1-v1430(10) */
	0,	/* sf10(0) */
	6,	/* sf128(6) */
	7,	/* sf160(7) */
	11,	/* sf2-v1430(11) */
	1,	/* sf20(1) */
	12,	/* sf3-v1430(12) */
	2,	/* sf32(2) */
	8,	/* sf320(8) */
	13,	/* sf4-v1430(13) */
	3,	/* sf40(3) */
	14,	/* sf5-v1430(14) */
	4,	/* sf64(4) */
	9,	/* sf640(9) */
	5,	/* sf80(5) */
	15	/* spare1(15) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_semiPersistSchedIntervalUL_specs_4 = {
	asn_MAP_LTE_semiPersistSchedIntervalUL_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_semiPersistSchedIntervalUL_enum2value_4,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_semiPersistSchedIntervalUL_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_semiPersistSchedIntervalUL_4 = {
	"semiPersistSchedIntervalUL",
	"semiPersistSchedIntervalUL",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_semiPersistSchedIntervalUL_tags_4,
	sizeof(asn_DEF_LTE_semiPersistSchedIntervalUL_tags_4)
		/sizeof(asn_DEF_LTE_semiPersistSchedIntervalUL_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_semiPersistSchedIntervalUL_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_semiPersistSchedIntervalUL_tags_4)
		/sizeof(asn_DEF_LTE_semiPersistSchedIntervalUL_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_semiPersistSchedIntervalUL_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_semiPersistSchedIntervalUL_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_implicitReleaseAfter_value2enum_21[] = {
	{ 0,	2,	"e2" },
	{ 1,	2,	"e3" },
	{ 2,	2,	"e4" },
	{ 3,	2,	"e8" }
};
static const unsigned int asn_MAP_LTE_implicitReleaseAfter_enum2value_21[] = {
	0,	/* e2(0) */
	1,	/* e3(1) */
	2,	/* e4(2) */
	3	/* e8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_implicitReleaseAfter_specs_21 = {
	asn_MAP_LTE_implicitReleaseAfter_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_implicitReleaseAfter_enum2value_21,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_implicitReleaseAfter_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_implicitReleaseAfter_21 = {
	"implicitReleaseAfter",
	"implicitReleaseAfter",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_implicitReleaseAfter_tags_21,
	sizeof(asn_DEF_LTE_implicitReleaseAfter_tags_21)
		/sizeof(asn_DEF_LTE_implicitReleaseAfter_tags_21[0]) - 1, /* 1 */
	asn_DEF_LTE_implicitReleaseAfter_tags_21,	/* Same as above */
	sizeof(asn_DEF_LTE_implicitReleaseAfter_tags_21)
		/sizeof(asn_DEF_LTE_implicitReleaseAfter_tags_21[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_implicitReleaseAfter_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_implicitReleaseAfter_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_p0_Persistent_26[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL__setup__p0_Persistent, p0_NominalPUSCH_Persistent),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_p0_NominalPUSCH_Persistent_constr_27,  memb_LTE_p0_NominalPUSCH_Persistent_constraint_26 },
		0, 0, /* No default value */
		"p0-NominalPUSCH-Persistent"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL__setup__p0_Persistent, p0_UE_PUSCH_Persistent),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_p0_UE_PUSCH_Persistent_constr_28,  memb_LTE_p0_UE_PUSCH_Persistent_constraint_26 },
		0, 0, /* No default value */
		"p0-UE-PUSCH-Persistent"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_p0_Persistent_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_p0_Persistent_tag2el_26[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* p0-NominalPUSCH-Persistent */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* p0-UE-PUSCH-Persistent */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_p0_Persistent_specs_26 = {
	sizeof(struct LTE_SPS_ConfigUL__setup__p0_Persistent),
	offsetof(struct LTE_SPS_ConfigUL__setup__p0_Persistent, _asn_ctx),
	asn_MAP_LTE_p0_Persistent_tag2el_26,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_p0_Persistent_26 = {
	"p0-Persistent",
	"p0-Persistent",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_p0_Persistent_tags_26,
	sizeof(asn_DEF_LTE_p0_Persistent_tags_26)
		/sizeof(asn_DEF_LTE_p0_Persistent_tags_26[0]) - 1, /* 1 */
	asn_DEF_LTE_p0_Persistent_tags_26,	/* Same as above */
	sizeof(asn_DEF_LTE_p0_Persistent_tags_26)
		/sizeof(asn_DEF_LTE_p0_Persistent_tags_26[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_p0_Persistent_26,
	2,	/* Elements count */
	&asn_SPC_LTE_p0_Persistent_specs_26	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_twoIntervalsConfig_value2enum_29[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_twoIntervalsConfig_enum2value_29[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_twoIntervalsConfig_specs_29 = {
	asn_MAP_LTE_twoIntervalsConfig_value2enum_29,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_twoIntervalsConfig_enum2value_29,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_twoIntervalsConfig_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_twoIntervalsConfig_29 = {
	"twoIntervalsConfig",
	"twoIntervalsConfig",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_twoIntervalsConfig_tags_29,
	sizeof(asn_DEF_LTE_twoIntervalsConfig_tags_29)
		/sizeof(asn_DEF_LTE_twoIntervalsConfig_tags_29[0]) - 1, /* 1 */
	asn_DEF_LTE_twoIntervalsConfig_tags_29,	/* Same as above */
	sizeof(asn_DEF_LTE_twoIntervalsConfig_tags_29)
		/sizeof(asn_DEF_LTE_twoIntervalsConfig_tags_29[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_twoIntervalsConfig_constr_29, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_twoIntervalsConfig_specs_29	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_35[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12__setup, p0_NominalPUSCH_PersistentSubframeSet2_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_p0_NominalPUSCH_PersistentSubframeSet2_r12_constr_36,  memb_LTE_p0_NominalPUSCH_PersistentSubframeSet2_r12_constraint_35 },
		0, 0, /* No default value */
		"p0-NominalPUSCH-PersistentSubframeSet2-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12__setup, p0_UE_PUSCH_PersistentSubframeSet2_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_p0_UE_PUSCH_PersistentSubframeSet2_r12_constr_37,  memb_LTE_p0_UE_PUSCH_PersistentSubframeSet2_r12_constraint_35 },
		0, 0, /* No default value */
		"p0-UE-PUSCH-PersistentSubframeSet2-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_35[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_35[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* p0-NominalPUSCH-PersistentSubframeSet2-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* p0-UE-PUSCH-PersistentSubframeSet2-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_35 = {
	sizeof(struct LTE_SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12__setup),
	offsetof(struct LTE_SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_35,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_35 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_35,
	sizeof(asn_DEF_LTE_setup_tags_35)
		/sizeof(asn_DEF_LTE_setup_tags_35[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_35,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_35)
		/sizeof(asn_DEF_LTE_setup_tags_35[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_setup_35,
	2,	/* Elements count */
	&asn_SPC_LTE_setup_specs_35	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_p0_PersistentSubframeSet2_r12_33[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_35,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_p0_PersistentSubframeSet2_r12_tag2el_33[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_p0_PersistentSubframeSet2_r12_specs_33 = {
	sizeof(struct LTE_SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12),
	offsetof(struct LTE_SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12, _asn_ctx),
	offsetof(struct LTE_SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12, present),
	sizeof(((struct LTE_SPS_ConfigUL__setup__ext1__p0_PersistentSubframeSet2_r12 *)0)->present),
	asn_MAP_LTE_p0_PersistentSubframeSet2_r12_tag2el_33,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_p0_PersistentSubframeSet2_r12_33 = {
	"p0-PersistentSubframeSet2-r12",
	"p0-PersistentSubframeSet2-r12",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_p0_PersistentSubframeSet2_r12_constr_33, CHOICE_constraint },
	asn_MBR_LTE_p0_PersistentSubframeSet2_r12_33,
	2,	/* Elements count */
	&asn_SPC_LTE_p0_PersistentSubframeSet2_r12_specs_33	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext1_32[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SPS_ConfigUL__setup__ext1, p0_PersistentSubframeSet2_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_p0_PersistentSubframeSet2_r12_33,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p0-PersistentSubframeSet2-r12"
		},
};
static const int asn_MAP_LTE_ext1_oms_32[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_32[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_32[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* p0-PersistentSubframeSet2-r12 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_32 = {
	sizeof(struct LTE_SPS_ConfigUL__setup__ext1),
	offsetof(struct LTE_SPS_ConfigUL__setup__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_32,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_32,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_32 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_32,
	sizeof(asn_DEF_LTE_ext1_tags_32)
		/sizeof(asn_DEF_LTE_ext1_tags_32[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_32,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_32)
		/sizeof(asn_DEF_LTE_ext1_tags_32[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_32,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_32	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext2_38[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SPS_ConfigUL__setup__ext2, numberOfConfUlSPS_Processes_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_numberOfConfUlSPS_Processes_r13_constr_39,  memb_LTE_numberOfConfUlSPS_Processes_r13_constraint_38 },
		0, 0, /* No default value */
		"numberOfConfUlSPS-Processes-r13"
		},
};
static const int asn_MAP_LTE_ext2_oms_38[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext2_tags_38[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext2_tag2el_38[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* numberOfConfUlSPS-Processes-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext2_specs_38 = {
	sizeof(struct LTE_SPS_ConfigUL__setup__ext2),
	offsetof(struct LTE_SPS_ConfigUL__setup__ext2, _asn_ctx),
	asn_MAP_LTE_ext2_tag2el_38,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext2_oms_38,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext2_38 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext2_tags_38,
	sizeof(asn_DEF_LTE_ext2_tags_38)
		/sizeof(asn_DEF_LTE_ext2_tags_38[0]) - 1, /* 1 */
	asn_DEF_LTE_ext2_tags_38,	/* Same as above */
	sizeof(asn_DEF_LTE_ext2_tags_38)
		/sizeof(asn_DEF_LTE_ext2_tags_38[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext2_38,
	1,	/* Elements count */
	&asn_SPC_LTE_ext2_specs_38	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_fixedRV_NonAdaptive_r14_value2enum_41[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_fixedRV_NonAdaptive_r14_enum2value_41[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_fixedRV_NonAdaptive_r14_specs_41 = {
	asn_MAP_LTE_fixedRV_NonAdaptive_r14_value2enum_41,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_fixedRV_NonAdaptive_r14_enum2value_41,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_fixedRV_NonAdaptive_r14_tags_41[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_fixedRV_NonAdaptive_r14_41 = {
	"fixedRV-NonAdaptive-r14",
	"fixedRV-NonAdaptive-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_fixedRV_NonAdaptive_r14_tags_41,
	sizeof(asn_DEF_LTE_fixedRV_NonAdaptive_r14_tags_41)
		/sizeof(asn_DEF_LTE_fixedRV_NonAdaptive_r14_tags_41[0]) - 1, /* 1 */
	asn_DEF_LTE_fixedRV_NonAdaptive_r14_tags_41,	/* Same as above */
	sizeof(asn_DEF_LTE_fixedRV_NonAdaptive_r14_tags_41)
		/sizeof(asn_DEF_LTE_fixedRV_NonAdaptive_r14_tags_41[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_fixedRV_NonAdaptive_r14_constr_41, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_fixedRV_NonAdaptive_r14_specs_41	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_semiPersistSchedIntervalUL_v1430_value2enum_44[] = {
	{ 0,	4,	"sf50" },
	{ 1,	5,	"sf100" },
	{ 2,	5,	"sf200" },
	{ 3,	5,	"sf300" },
	{ 4,	5,	"sf400" },
	{ 5,	5,	"sf500" },
	{ 6,	5,	"sf600" },
	{ 7,	5,	"sf700" },
	{ 8,	5,	"sf800" },
	{ 9,	5,	"sf900" },
	{ 10,	6,	"sf1000" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_semiPersistSchedIntervalUL_v1430_enum2value_44[] = {
	1,	/* sf100(1) */
	10,	/* sf1000(10) */
	2,	/* sf200(2) */
	3,	/* sf300(3) */
	4,	/* sf400(4) */
	0,	/* sf50(0) */
	5,	/* sf500(5) */
	6,	/* sf600(6) */
	7,	/* sf700(7) */
	8,	/* sf800(8) */
	9,	/* sf900(9) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11	/* spare5(11) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_semiPersistSchedIntervalUL_v1430_specs_44 = {
	asn_MAP_LTE_semiPersistSchedIntervalUL_v1430_value2enum_44,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_semiPersistSchedIntervalUL_v1430_enum2value_44,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_semiPersistSchedIntervalUL_v1430_tags_44[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_semiPersistSchedIntervalUL_v1430_44 = {
	"semiPersistSchedIntervalUL-v1430",
	"semiPersistSchedIntervalUL-v1430",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_semiPersistSchedIntervalUL_v1430_tags_44,
	sizeof(asn_DEF_LTE_semiPersistSchedIntervalUL_v1430_tags_44)
		/sizeof(asn_DEF_LTE_semiPersistSchedIntervalUL_v1430_tags_44[0]) - 1, /* 1 */
	asn_DEF_LTE_semiPersistSchedIntervalUL_v1430_tags_44,	/* Same as above */
	sizeof(asn_DEF_LTE_semiPersistSchedIntervalUL_v1430_tags_44)
		/sizeof(asn_DEF_LTE_semiPersistSchedIntervalUL_v1430_tags_44[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_semiPersistSchedIntervalUL_v1430_constr_44, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_semiPersistSchedIntervalUL_v1430_specs_44	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_ext3_40[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_SPS_ConfigUL__setup__ext3, fixedRV_NonAdaptive_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_fixedRV_NonAdaptive_r14_41,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fixedRV-NonAdaptive-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SPS_ConfigUL__setup__ext3, sps_ConfigIndex_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SPS_ConfigIndex_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-ConfigIndex-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SPS_ConfigUL__setup__ext3, semiPersistSchedIntervalUL_v1430),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_semiPersistSchedIntervalUL_v1430_44,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"semiPersistSchedIntervalUL-v1430"
		},
};
static const int asn_MAP_LTE_ext3_oms_40[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_ext3_tags_40[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext3_tag2el_40[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fixedRV-NonAdaptive-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sps-ConfigIndex-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* semiPersistSchedIntervalUL-v1430 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext3_specs_40 = {
	sizeof(struct LTE_SPS_ConfigUL__setup__ext3),
	offsetof(struct LTE_SPS_ConfigUL__setup__ext3, _asn_ctx),
	asn_MAP_LTE_ext3_tag2el_40,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_ext3_oms_40,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext3_40 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext3_tags_40,
	sizeof(asn_DEF_LTE_ext3_tags_40)
		/sizeof(asn_DEF_LTE_ext3_tags_40[0]) - 1, /* 1 */
	asn_DEF_LTE_ext3_tags_40,	/* Same as above */
	sizeof(asn_DEF_LTE_ext3_tags_40)
		/sizeof(asn_DEF_LTE_ext3_tags_40[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext3_40,
	3,	/* Elements count */
	&asn_SPC_LTE_ext3_specs_40	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL__setup, semiPersistSchedIntervalUL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_semiPersistSchedIntervalUL_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"semiPersistSchedIntervalUL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL__setup, implicitReleaseAfter),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_implicitReleaseAfter_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"implicitReleaseAfter"
		},
	{ ATF_POINTER, 5, offsetof(struct LTE_SPS_ConfigUL__setup, p0_Persistent),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_p0_Persistent_26,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"p0-Persistent"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_SPS_ConfigUL__setup, twoIntervalsConfig),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_twoIntervalsConfig_29,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"twoIntervalsConfig"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_SPS_ConfigUL__setup, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LTE_ext1_32,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SPS_ConfigUL__setup, ext2),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		0,
		&asn_DEF_LTE_ext2_38,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SPS_ConfigUL__setup, ext3),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_LTE_ext3_40,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
};
static const int asn_MAP_LTE_setup_oms_3[] = { 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* semiPersistSchedIntervalUL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* implicitReleaseAfter */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* p0-Persistent */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* twoIntervalsConfig */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ext3 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_3 = {
	sizeof(struct LTE_SPS_ConfigUL__setup),
	offsetof(struct LTE_SPS_ConfigUL__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_3,
	7,	/* Count of tags in the map */
	asn_MAP_LTE_setup_oms_3,	/* Optional members */
	2, 3,	/* Root/Additions */
	4,	/* First extension addition */
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
	7,	/* Elements count */
	&asn_SPC_LTE_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SPS_ConfigUL_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SPS_ConfigUL, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SPS_ConfigUL_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_LTE_SPS_ConfigUL_specs_1 = {
	sizeof(struct LTE_SPS_ConfigUL),
	offsetof(struct LTE_SPS_ConfigUL, _asn_ctx),
	offsetof(struct LTE_SPS_ConfigUL, present),
	sizeof(((struct LTE_SPS_ConfigUL *)0)->present),
	asn_MAP_LTE_SPS_ConfigUL_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SPS_ConfigUL = {
	"SPS-ConfigUL",
	"SPS-ConfigUL",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_SPS_ConfigUL_constr_1, CHOICE_constraint },
	asn_MBR_LTE_SPS_ConfigUL_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SPS_ConfigUL_specs_1	/* Additional specs */
};

