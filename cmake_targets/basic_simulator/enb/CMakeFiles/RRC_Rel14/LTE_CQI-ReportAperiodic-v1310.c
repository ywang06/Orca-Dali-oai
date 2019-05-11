/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_CQI-ReportAperiodic-v1310.h"

static int
memb_LTE_trigger1_r13_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
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
memb_LTE_trigger2_r13_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
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
memb_LTE_trigger3_r13_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
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
memb_LTE_trigger4_r13_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
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
memb_LTE_trigger5_r13_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
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
memb_LTE_trigger6_r13_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
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
memb_LTE_trigger1_SubframeSetIndicator_r13_constraint_13(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
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
memb_LTE_trigger2_SubframeSetIndicator_r13_constraint_13(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
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
memb_LTE_trigger3_SubframeSetIndicator_r13_constraint_13(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
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
memb_LTE_trigger4_SubframeSetIndicator_r13_constraint_13(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
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
memb_LTE_trigger5_SubframeSetIndicator_r13_constraint_13(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
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
memb_LTE_trigger6_SubframeSetIndicator_r13_constraint_13(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_trigger1_r13_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_trigger2_r13_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_trigger3_r13_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_trigger4_r13_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_trigger5_r13_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_trigger6_r13_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_trigger1_SubframeSetIndicator_r13_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_trigger2_SubframeSetIndicator_r13_constr_15 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_trigger3_SubframeSetIndicator_r13_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_trigger4_SubframeSetIndicator_r13_constr_17 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_trigger5_SubframeSetIndicator_r13_constr_18 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_trigger6_SubframeSetIndicator_r13_constr_19 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_aperiodicCSI_Trigger2_r13_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_LTE_CQI_ReportAperiodic_v1310_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_aperiodicCSI_Trigger_v1310_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger_v1310, trigger1_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_trigger1_r13_constr_5,  memb_LTE_trigger1_r13_constraint_4 },
		0, 0, /* No default value */
		"trigger1-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger_v1310, trigger2_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_trigger2_r13_constr_6,  memb_LTE_trigger2_r13_constraint_4 },
		0, 0, /* No default value */
		"trigger2-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger_v1310, trigger3_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_trigger3_r13_constr_7,  memb_LTE_trigger3_r13_constraint_4 },
		0, 0, /* No default value */
		"trigger3-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger_v1310, trigger4_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_trigger4_r13_constr_8,  memb_LTE_trigger4_r13_constraint_4 },
		0, 0, /* No default value */
		"trigger4-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger_v1310, trigger5_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_trigger5_r13_constr_9,  memb_LTE_trigger5_r13_constraint_4 },
		0, 0, /* No default value */
		"trigger5-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger_v1310, trigger6_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_trigger6_r13_constr_10,  memb_LTE_trigger6_r13_constraint_4 },
		0, 0, /* No default value */
		"trigger6-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_aperiodicCSI_Trigger_v1310_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_aperiodicCSI_Trigger_v1310_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* trigger1-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trigger2-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* trigger3-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* trigger4-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* trigger5-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* trigger6-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_aperiodicCSI_Trigger_v1310_specs_4 = {
	sizeof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger_v1310),
	offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger_v1310, _asn_ctx),
	asn_MAP_LTE_aperiodicCSI_Trigger_v1310_tag2el_4,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_aperiodicCSI_Trigger_v1310_4 = {
	"aperiodicCSI-Trigger-v1310",
	"aperiodicCSI-Trigger-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_aperiodicCSI_Trigger_v1310_tags_4,
	sizeof(asn_DEF_LTE_aperiodicCSI_Trigger_v1310_tags_4)
		/sizeof(asn_DEF_LTE_aperiodicCSI_Trigger_v1310_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_aperiodicCSI_Trigger_v1310_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_aperiodicCSI_Trigger_v1310_tags_4)
		/sizeof(asn_DEF_LTE_aperiodicCSI_Trigger_v1310_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_aperiodicCSI_Trigger_v1310_4,
	6,	/* Elements count */
	&asn_SPC_LTE_aperiodicCSI_Trigger_v1310_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_13[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13__setup, trigger1_SubframeSetIndicator_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_trigger1_SubframeSetIndicator_r13_constr_14,  memb_LTE_trigger1_SubframeSetIndicator_r13_constraint_13 },
		0, 0, /* No default value */
		"trigger1-SubframeSetIndicator-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13__setup, trigger2_SubframeSetIndicator_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_trigger2_SubframeSetIndicator_r13_constr_15,  memb_LTE_trigger2_SubframeSetIndicator_r13_constraint_13 },
		0, 0, /* No default value */
		"trigger2-SubframeSetIndicator-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13__setup, trigger3_SubframeSetIndicator_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_trigger3_SubframeSetIndicator_r13_constr_16,  memb_LTE_trigger3_SubframeSetIndicator_r13_constraint_13 },
		0, 0, /* No default value */
		"trigger3-SubframeSetIndicator-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13__setup, trigger4_SubframeSetIndicator_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_trigger4_SubframeSetIndicator_r13_constr_17,  memb_LTE_trigger4_SubframeSetIndicator_r13_constraint_13 },
		0, 0, /* No default value */
		"trigger4-SubframeSetIndicator-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13__setup, trigger5_SubframeSetIndicator_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_trigger5_SubframeSetIndicator_r13_constr_18,  memb_LTE_trigger5_SubframeSetIndicator_r13_constraint_13 },
		0, 0, /* No default value */
		"trigger5-SubframeSetIndicator-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13__setup, trigger6_SubframeSetIndicator_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_trigger6_SubframeSetIndicator_r13_constr_19,  memb_LTE_trigger6_SubframeSetIndicator_r13_constraint_13 },
		0, 0, /* No default value */
		"trigger6-SubframeSetIndicator-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_13[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_13[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* trigger1-SubframeSetIndicator-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trigger2-SubframeSetIndicator-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* trigger3-SubframeSetIndicator-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* trigger4-SubframeSetIndicator-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* trigger5-SubframeSetIndicator-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* trigger6-SubframeSetIndicator-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_13 = {
	sizeof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13__setup),
	offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_13,
	6,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_setup_13 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_setup_tags_13,
	sizeof(asn_DEF_LTE_setup_tags_13)
		/sizeof(asn_DEF_LTE_setup_tags_13[0]) - 1, /* 1 */
	asn_DEF_LTE_setup_tags_13,	/* Same as above */
	sizeof(asn_DEF_LTE_setup_tags_13)
		/sizeof(asn_DEF_LTE_setup_tags_13[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_setup_13,
	6,	/* Elements count */
	&asn_SPC_LTE_setup_specs_13	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_aperiodicCSI_Trigger2_r13_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_aperiodicCSI_Trigger2_r13_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_aperiodicCSI_Trigger2_r13_specs_11 = {
	sizeof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13),
	offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13, _asn_ctx),
	offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13, present),
	sizeof(((struct LTE_CQI_ReportAperiodic_v1310__setup__aperiodicCSI_Trigger2_r13 *)0)->present),
	asn_MAP_LTE_aperiodicCSI_Trigger2_r13_tag2el_11,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_aperiodicCSI_Trigger2_r13_11 = {
	"aperiodicCSI-Trigger2-r13",
	"aperiodicCSI-Trigger2-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_aperiodicCSI_Trigger2_r13_constr_11, CHOICE_constraint },
	asn_MBR_LTE_aperiodicCSI_Trigger2_r13_11,
	2,	/* Elements count */
	&asn_SPC_LTE_aperiodicCSI_Trigger2_r13_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_setup_3[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup, aperiodicCSI_Trigger_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_aperiodicCSI_Trigger_v1310_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aperiodicCSI-Trigger-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup, aperiodicCSI_Trigger2_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_aperiodicCSI_Trigger2_r13_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aperiodicCSI-Trigger2-r13"
		},
};
static const int asn_MAP_LTE_setup_oms_3[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* aperiodicCSI-Trigger-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* aperiodicCSI-Trigger2-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_3 = {
	sizeof(struct LTE_CQI_ReportAperiodic_v1310__setup),
	offsetof(struct LTE_CQI_ReportAperiodic_v1310__setup, _asn_ctx),
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

asn_TYPE_member_t asn_MBR_LTE_CQI_ReportAperiodic_v1310_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_v1310, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CQI_ReportAperiodic_v1310, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_CQI_ReportAperiodic_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_LTE_CQI_ReportAperiodic_v1310_specs_1 = {
	sizeof(struct LTE_CQI_ReportAperiodic_v1310),
	offsetof(struct LTE_CQI_ReportAperiodic_v1310, _asn_ctx),
	offsetof(struct LTE_CQI_ReportAperiodic_v1310, present),
	sizeof(((struct LTE_CQI_ReportAperiodic_v1310 *)0)->present),
	asn_MAP_LTE_CQI_ReportAperiodic_v1310_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_CQI_ReportAperiodic_v1310 = {
	"CQI-ReportAperiodic-v1310",
	"CQI-ReportAperiodic-v1310",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_CQI_ReportAperiodic_v1310_constr_1, CHOICE_constraint },
	asn_MBR_LTE_CQI_ReportAperiodic_v1310_1,
	2,	/* Elements count */
	&asn_SPC_LTE_CQI_ReportAperiodic_v1310_specs_1	/* Additional specs */
};

