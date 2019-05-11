/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_MBSFN-SubframeConfig-v1430.h"

static int
memb_LTE_oneFrame_v1430_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_LTE_fourFrames_v1430_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_oneFrame_v1430_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_fourFrames_v1430_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_subframeAllocation_v1430_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_subframeAllocation_v1430_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBSFN_SubframeConfig_v1430__subframeAllocation_v1430, choice.oneFrame_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_oneFrame_v1430_constr_3,  memb_LTE_oneFrame_v1430_constraint_2 },
		0, 0, /* No default value */
		"oneFrame-v1430"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBSFN_SubframeConfig_v1430__subframeAllocation_v1430, choice.fourFrames_v1430),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_fourFrames_v1430_constr_4,  memb_LTE_fourFrames_v1430_constraint_2 },
		0, 0, /* No default value */
		"fourFrames-v1430"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_subframeAllocation_v1430_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* oneFrame-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* fourFrames-v1430 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_subframeAllocation_v1430_specs_2 = {
	sizeof(struct LTE_MBSFN_SubframeConfig_v1430__subframeAllocation_v1430),
	offsetof(struct LTE_MBSFN_SubframeConfig_v1430__subframeAllocation_v1430, _asn_ctx),
	offsetof(struct LTE_MBSFN_SubframeConfig_v1430__subframeAllocation_v1430, present),
	sizeof(((struct LTE_MBSFN_SubframeConfig_v1430__subframeAllocation_v1430 *)0)->present),
	asn_MAP_LTE_subframeAllocation_v1430_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_subframeAllocation_v1430_2 = {
	"subframeAllocation-v1430",
	"subframeAllocation-v1430",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_subframeAllocation_v1430_constr_2, CHOICE_constraint },
	asn_MBR_LTE_subframeAllocation_v1430_2,
	2,	/* Elements count */
	&asn_SPC_LTE_subframeAllocation_v1430_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_MBSFN_SubframeConfig_v1430_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MBSFN_SubframeConfig_v1430, subframeAllocation_v1430),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_subframeAllocation_v1430_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subframeAllocation-v1430"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_MBSFN_SubframeConfig_v1430_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MBSFN_SubframeConfig_v1430_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* subframeAllocation-v1430 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_MBSFN_SubframeConfig_v1430_specs_1 = {
	sizeof(struct LTE_MBSFN_SubframeConfig_v1430),
	offsetof(struct LTE_MBSFN_SubframeConfig_v1430, _asn_ctx),
	asn_MAP_LTE_MBSFN_SubframeConfig_v1430_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MBSFN_SubframeConfig_v1430 = {
	"MBSFN-SubframeConfig-v1430",
	"MBSFN-SubframeConfig-v1430",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_MBSFN_SubframeConfig_v1430_tags_1,
	sizeof(asn_DEF_LTE_MBSFN_SubframeConfig_v1430_tags_1)
		/sizeof(asn_DEF_LTE_MBSFN_SubframeConfig_v1430_tags_1[0]), /* 1 */
	asn_DEF_LTE_MBSFN_SubframeConfig_v1430_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MBSFN_SubframeConfig_v1430_tags_1)
		/sizeof(asn_DEF_LTE_MBSFN_SubframeConfig_v1430_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_MBSFN_SubframeConfig_v1430_1,
	1,	/* Elements count */
	&asn_SPC_LTE_MBSFN_SubframeConfig_v1430_specs_1	/* Additional specs */
};

