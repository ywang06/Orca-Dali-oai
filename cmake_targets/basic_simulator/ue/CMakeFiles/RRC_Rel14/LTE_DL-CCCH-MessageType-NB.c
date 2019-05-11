/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_DL-CCCH-MessageType-NB.h"

static asn_per_constraints_t asn_PER_type_LTE_c1_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_per_constraints_t asn_PER_type_LTE_DL_CCCH_MessageType_NB_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_c1_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DL_CCCH_MessageType_NB__c1, choice.rrcConnectionReestablishment_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RRCConnectionReestablishment_NB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionReestablishment-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DL_CCCH_MessageType_NB__c1, choice.rrcConnectionReestablishmentReject_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RRCConnectionReestablishmentReject,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionReestablishmentReject-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DL_CCCH_MessageType_NB__c1, choice.rrcConnectionReject_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RRCConnectionReject_NB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionReject-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DL_CCCH_MessageType_NB__c1, choice.rrcConnectionSetup_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RRCConnectionSetup_NB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcConnectionSetup-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DL_CCCH_MessageType_NB__c1, choice.spare4),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DL_CCCH_MessageType_NB__c1, choice.spare3),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare3"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DL_CCCH_MessageType_NB__c1, choice.spare2),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DL_CCCH_MessageType_NB__c1, choice.spare1),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"spare1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_c1_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionReestablishment-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rrcConnectionReestablishmentReject-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* rrcConnectionReject-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rrcConnectionSetup-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* spare4 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* spare3 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* spare2 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* spare1 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_c1_specs_2 = {
	sizeof(struct LTE_DL_CCCH_MessageType_NB__c1),
	offsetof(struct LTE_DL_CCCH_MessageType_NB__c1, _asn_ctx),
	offsetof(struct LTE_DL_CCCH_MessageType_NB__c1, present),
	sizeof(((struct LTE_DL_CCCH_MessageType_NB__c1 *)0)->present),
	asn_MAP_LTE_c1_tag2el_2,
	8,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_c1_2 = {
	"c1",
	"c1",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_c1_constr_2, CHOICE_constraint },
	asn_MBR_LTE_c1_2,
	8,	/* Elements count */
	&asn_SPC_LTE_c1_specs_2	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_LTE_messageClassExtension_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_messageClassExtension_specs_11 = {
	sizeof(struct LTE_DL_CCCH_MessageType_NB__messageClassExtension),
	offsetof(struct LTE_DL_CCCH_MessageType_NB__messageClassExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_messageClassExtension_11 = {
	"messageClassExtension",
	"messageClassExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_messageClassExtension_tags_11,
	sizeof(asn_DEF_LTE_messageClassExtension_tags_11)
		/sizeof(asn_DEF_LTE_messageClassExtension_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_messageClassExtension_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_messageClassExtension_tags_11)
		/sizeof(asn_DEF_LTE_messageClassExtension_tags_11[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_LTE_messageClassExtension_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_DL_CCCH_MessageType_NB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DL_CCCH_MessageType_NB, choice.c1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_c1_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"c1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_DL_CCCH_MessageType_NB, choice.messageClassExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_messageClassExtension_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"messageClassExtension"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_DL_CCCH_MessageType_NB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* c1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* messageClassExtension */
};
asn_CHOICE_specifics_t asn_SPC_LTE_DL_CCCH_MessageType_NB_specs_1 = {
	sizeof(struct LTE_DL_CCCH_MessageType_NB),
	offsetof(struct LTE_DL_CCCH_MessageType_NB, _asn_ctx),
	offsetof(struct LTE_DL_CCCH_MessageType_NB, present),
	sizeof(((struct LTE_DL_CCCH_MessageType_NB *)0)->present),
	asn_MAP_LTE_DL_CCCH_MessageType_NB_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_DL_CCCH_MessageType_NB = {
	"DL-CCCH-MessageType-NB",
	"DL-CCCH-MessageType-NB",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_DL_CCCH_MessageType_NB_constr_1, CHOICE_constraint },
	asn_MBR_LTE_DL_CCCH_MessageType_NB_1,
	2,	/* Elements count */
	&asn_SPC_LTE_DL_CCCH_MessageType_NB_specs_1	/* Additional specs */
};

