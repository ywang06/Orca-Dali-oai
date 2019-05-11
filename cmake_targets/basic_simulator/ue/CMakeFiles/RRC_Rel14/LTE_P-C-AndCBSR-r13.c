/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_P-C-AndCBSR-r13.h"

static int
memb_LTE_p_C_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_cbsr_Selection_r13_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_p_C_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5, -8,  15 }	/* (-8..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_nonPrecoded_r13_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_P_C_AndCBSR_r13__cbsr_Selection_r13__nonPrecoded_r13, codebookSubsetRestriction1_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"codebookSubsetRestriction1-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_P_C_AndCBSR_r13__cbsr_Selection_r13__nonPrecoded_r13, codebookSubsetRestriction2_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"codebookSubsetRestriction2-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_nonPrecoded_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_nonPrecoded_r13_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* codebookSubsetRestriction1-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* codebookSubsetRestriction2-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_nonPrecoded_r13_specs_4 = {
	sizeof(struct LTE_P_C_AndCBSR_r13__cbsr_Selection_r13__nonPrecoded_r13),
	offsetof(struct LTE_P_C_AndCBSR_r13__cbsr_Selection_r13__nonPrecoded_r13, _asn_ctx),
	asn_MAP_LTE_nonPrecoded_r13_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nonPrecoded_r13_4 = {
	"nonPrecoded-r13",
	"nonPrecoded-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_nonPrecoded_r13_tags_4,
	sizeof(asn_DEF_LTE_nonPrecoded_r13_tags_4)
		/sizeof(asn_DEF_LTE_nonPrecoded_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_nonPrecoded_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_nonPrecoded_r13_tags_4)
		/sizeof(asn_DEF_LTE_nonPrecoded_r13_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_nonPrecoded_r13_4,
	2,	/* Elements count */
	&asn_SPC_LTE_nonPrecoded_r13_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_beamformedK1a_r13_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_P_C_AndCBSR_r13__cbsr_Selection_r13__beamformedK1a_r13, codebookSubsetRestriction3_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"codebookSubsetRestriction3-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_beamformedK1a_r13_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_beamformedK1a_r13_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* codebookSubsetRestriction3-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_beamformedK1a_r13_specs_7 = {
	sizeof(struct LTE_P_C_AndCBSR_r13__cbsr_Selection_r13__beamformedK1a_r13),
	offsetof(struct LTE_P_C_AndCBSR_r13__cbsr_Selection_r13__beamformedK1a_r13, _asn_ctx),
	asn_MAP_LTE_beamformedK1a_r13_tag2el_7,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_beamformedK1a_r13_7 = {
	"beamformedK1a-r13",
	"beamformedK1a-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_beamformedK1a_r13_tags_7,
	sizeof(asn_DEF_LTE_beamformedK1a_r13_tags_7)
		/sizeof(asn_DEF_LTE_beamformedK1a_r13_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_beamformedK1a_r13_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_beamformedK1a_r13_tags_7)
		/sizeof(asn_DEF_LTE_beamformedK1a_r13_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_beamformedK1a_r13_7,
	1,	/* Elements count */
	&asn_SPC_LTE_beamformedK1a_r13_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_beamformedKN_r13_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_P_C_AndCBSR_r13__cbsr_Selection_r13__beamformedKN_r13, codebookSubsetRestriction_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"codebookSubsetRestriction-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_beamformedKN_r13_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_beamformedKN_r13_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* codebookSubsetRestriction-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_beamformedKN_r13_specs_9 = {
	sizeof(struct LTE_P_C_AndCBSR_r13__cbsr_Selection_r13__beamformedKN_r13),
	offsetof(struct LTE_P_C_AndCBSR_r13__cbsr_Selection_r13__beamformedKN_r13, _asn_ctx),
	asn_MAP_LTE_beamformedKN_r13_tag2el_9,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_beamformedKN_r13_9 = {
	"beamformedKN-r13",
	"beamformedKN-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_beamformedKN_r13_tags_9,
	sizeof(asn_DEF_LTE_beamformedKN_r13_tags_9)
		/sizeof(asn_DEF_LTE_beamformedKN_r13_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_beamformedKN_r13_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_beamformedKN_r13_tags_9)
		/sizeof(asn_DEF_LTE_beamformedKN_r13_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_beamformedKN_r13_9,
	1,	/* Elements count */
	&asn_SPC_LTE_beamformedKN_r13_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_cbsr_Selection_r13_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_P_C_AndCBSR_r13__cbsr_Selection_r13, choice.nonPrecoded_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_nonPrecoded_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonPrecoded-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_P_C_AndCBSR_r13__cbsr_Selection_r13, choice.beamformedK1a_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_beamformedK1a_r13_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"beamformedK1a-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_P_C_AndCBSR_r13__cbsr_Selection_r13, choice.beamformedKN_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_LTE_beamformedKN_r13_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"beamformedKN-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_cbsr_Selection_r13_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nonPrecoded-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* beamformedK1a-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* beamformedKN-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_cbsr_Selection_r13_specs_3 = {
	sizeof(struct LTE_P_C_AndCBSR_r13__cbsr_Selection_r13),
	offsetof(struct LTE_P_C_AndCBSR_r13__cbsr_Selection_r13, _asn_ctx),
	offsetof(struct LTE_P_C_AndCBSR_r13__cbsr_Selection_r13, present),
	sizeof(((struct LTE_P_C_AndCBSR_r13__cbsr_Selection_r13 *)0)->present),
	asn_MAP_LTE_cbsr_Selection_r13_tag2el_3,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_cbsr_Selection_r13_3 = {
	"cbsr-Selection-r13",
	"cbsr-Selection-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_cbsr_Selection_r13_constr_3, CHOICE_constraint },
	asn_MBR_LTE_cbsr_Selection_r13_3,
	3,	/* Elements count */
	&asn_SPC_LTE_cbsr_Selection_r13_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_P_C_AndCBSR_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_P_C_AndCBSR_r13, p_C_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_p_C_r13_constr_2,  memb_LTE_p_C_r13_constraint_1 },
		0, 0, /* No default value */
		"p-C-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_P_C_AndCBSR_r13, cbsr_Selection_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_cbsr_Selection_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cbsr-Selection-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_P_C_AndCBSR_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_P_C_AndCBSR_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* p-C-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cbsr-Selection-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_P_C_AndCBSR_r13_specs_1 = {
	sizeof(struct LTE_P_C_AndCBSR_r13),
	offsetof(struct LTE_P_C_AndCBSR_r13, _asn_ctx),
	asn_MAP_LTE_P_C_AndCBSR_r13_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_P_C_AndCBSR_r13 = {
	"P-C-AndCBSR-r13",
	"P-C-AndCBSR-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_P_C_AndCBSR_r13_tags_1,
	sizeof(asn_DEF_LTE_P_C_AndCBSR_r13_tags_1)
		/sizeof(asn_DEF_LTE_P_C_AndCBSR_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_P_C_AndCBSR_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_P_C_AndCBSR_r13_tags_1)
		/sizeof(asn_DEF_LTE_P_C_AndCBSR_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_P_C_AndCBSR_r13_1,
	2,	/* Elements count */
	&asn_SPC_LTE_P_C_AndCBSR_r13_specs_1	/* Additional specs */
};

