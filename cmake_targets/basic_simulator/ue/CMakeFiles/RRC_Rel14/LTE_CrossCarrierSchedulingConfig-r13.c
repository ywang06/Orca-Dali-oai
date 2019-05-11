/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_CrossCarrierSchedulingConfig-r13.h"

static int
memb_LTE_pdsch_Start_r13_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
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
memb_LTE_cif_InSchedulingCell_r13_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_pdsch_Start_r13_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_cif_InSchedulingCell_r13_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  7 }	/* (1..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_schedulingCellInfo_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_own_r13_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13__own_r13, cif_Presence_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cif-Presence-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_own_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_own_r13_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cif-Presence-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_own_r13_specs_3 = {
	sizeof(struct LTE_CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13__own_r13),
	offsetof(struct LTE_CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13__own_r13, _asn_ctx),
	asn_MAP_LTE_own_r13_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_own_r13_3 = {
	"own-r13",
	"own-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_own_r13_tags_3,
	sizeof(asn_DEF_LTE_own_r13_tags_3)
		/sizeof(asn_DEF_LTE_own_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_own_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_own_r13_tags_3)
		/sizeof(asn_DEF_LTE_own_r13_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_own_r13_3,
	1,	/* Elements count */
	&asn_SPC_LTE_own_r13_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_other_r13_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13__other_r13, schedulingCellId_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ServCellIndex_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"schedulingCellId-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13__other_r13, pdsch_Start_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_pdsch_Start_r13_constr_7,  memb_LTE_pdsch_Start_r13_constraint_5 },
		0, 0, /* No default value */
		"pdsch-Start-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13__other_r13, cif_InSchedulingCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_cif_InSchedulingCell_r13_constr_8,  memb_LTE_cif_InSchedulingCell_r13_constraint_5 },
		0, 0, /* No default value */
		"cif-InSchedulingCell-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_other_r13_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_other_r13_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* schedulingCellId-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdsch-Start-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cif-InSchedulingCell-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_other_r13_specs_5 = {
	sizeof(struct LTE_CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13__other_r13),
	offsetof(struct LTE_CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13__other_r13, _asn_ctx),
	asn_MAP_LTE_other_r13_tag2el_5,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_other_r13_5 = {
	"other-r13",
	"other-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_other_r13_tags_5,
	sizeof(asn_DEF_LTE_other_r13_tags_5)
		/sizeof(asn_DEF_LTE_other_r13_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_other_r13_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_other_r13_tags_5)
		/sizeof(asn_DEF_LTE_other_r13_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_other_r13_5,
	3,	/* Elements count */
	&asn_SPC_LTE_other_r13_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_schedulingCellInfo_r13_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13, choice.own_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_own_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"own-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13, choice.other_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_other_r13_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"other-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_schedulingCellInfo_r13_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* own-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* other-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_schedulingCellInfo_r13_specs_2 = {
	sizeof(struct LTE_CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13),
	offsetof(struct LTE_CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13, _asn_ctx),
	offsetof(struct LTE_CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13, present),
	sizeof(((struct LTE_CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13 *)0)->present),
	asn_MAP_LTE_schedulingCellInfo_r13_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_schedulingCellInfo_r13_2 = {
	"schedulingCellInfo-r13",
	"schedulingCellInfo-r13",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_schedulingCellInfo_r13_constr_2, CHOICE_constraint },
	asn_MBR_LTE_schedulingCellInfo_r13_2,
	2,	/* Elements count */
	&asn_SPC_LTE_schedulingCellInfo_r13_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_CrossCarrierSchedulingConfig_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CrossCarrierSchedulingConfig_r13, schedulingCellInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_schedulingCellInfo_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"schedulingCellInfo-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_CrossCarrierSchedulingConfig_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_CrossCarrierSchedulingConfig_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* schedulingCellInfo-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_CrossCarrierSchedulingConfig_r13_specs_1 = {
	sizeof(struct LTE_CrossCarrierSchedulingConfig_r13),
	offsetof(struct LTE_CrossCarrierSchedulingConfig_r13, _asn_ctx),
	asn_MAP_LTE_CrossCarrierSchedulingConfig_r13_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_CrossCarrierSchedulingConfig_r13 = {
	"CrossCarrierSchedulingConfig-r13",
	"CrossCarrierSchedulingConfig-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_CrossCarrierSchedulingConfig_r13_tags_1,
	sizeof(asn_DEF_LTE_CrossCarrierSchedulingConfig_r13_tags_1)
		/sizeof(asn_DEF_LTE_CrossCarrierSchedulingConfig_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_CrossCarrierSchedulingConfig_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_CrossCarrierSchedulingConfig_r13_tags_1)
		/sizeof(asn_DEF_LTE_CrossCarrierSchedulingConfig_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_CrossCarrierSchedulingConfig_r13_1,
	1,	/* Elements count */
	&asn_SPC_LTE_CrossCarrierSchedulingConfig_r13_specs_1	/* Additional specs */
};

