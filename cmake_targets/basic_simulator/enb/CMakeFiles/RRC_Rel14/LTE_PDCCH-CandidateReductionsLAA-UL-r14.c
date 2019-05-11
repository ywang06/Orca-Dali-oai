/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PDCCH-CandidateReductionsLAA-UL-r14.h"

asn_per_constraints_t asn_PER_type_LTE_PDCCH_CandidateReductionsLAA_UL_r14_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDCCH_CandidateReductionsLAA_UL_r14__setup, pdcch_candidateReductionAL1_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PDCCH_CandidateReductionValue_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcch-candidateReductionAL1-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDCCH_CandidateReductionsLAA_UL_r14__setup, pdcch_candidateReductionAL2_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PDCCH_CandidateReductionValue_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcch-candidateReductionAL2-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDCCH_CandidateReductionsLAA_UL_r14__setup, pdcch_candidateReductionAL3_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PDCCH_CandidateReductionValue_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcch-candidateReductionAL3-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDCCH_CandidateReductionsLAA_UL_r14__setup, pdcch_candidateReductionAL4_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PDCCH_CandidateReductionValue_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcch-candidateReductionAL4-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDCCH_CandidateReductionsLAA_UL_r14__setup, pdcch_candidateReductionAL5_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PDCCH_CandidateReductionValue_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcch-candidateReductionAL5-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdcch-candidateReductionAL1-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdcch-candidateReductionAL2-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* pdcch-candidateReductionAL3-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* pdcch-candidateReductionAL4-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* pdcch-candidateReductionAL5-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_setup_specs_3 = {
	sizeof(struct LTE_PDCCH_CandidateReductionsLAA_UL_r14__setup),
	offsetof(struct LTE_PDCCH_CandidateReductionsLAA_UL_r14__setup, _asn_ctx),
	asn_MAP_LTE_setup_tag2el_3,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
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
	5,	/* Elements count */
	&asn_SPC_LTE_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PDCCH_CandidateReductionsLAA_UL_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDCCH_CandidateReductionsLAA_UL_r14, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PDCCH_CandidateReductionsLAA_UL_r14, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_setup_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PDCCH_CandidateReductionsLAA_UL_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_LTE_PDCCH_CandidateReductionsLAA_UL_r14_specs_1 = {
	sizeof(struct LTE_PDCCH_CandidateReductionsLAA_UL_r14),
	offsetof(struct LTE_PDCCH_CandidateReductionsLAA_UL_r14, _asn_ctx),
	offsetof(struct LTE_PDCCH_CandidateReductionsLAA_UL_r14, present),
	sizeof(((struct LTE_PDCCH_CandidateReductionsLAA_UL_r14 *)0)->present),
	asn_MAP_LTE_PDCCH_CandidateReductionsLAA_UL_r14_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PDCCH_CandidateReductionsLAA_UL_r14 = {
	"PDCCH-CandidateReductionsLAA-UL-r14",
	"PDCCH-CandidateReductionsLAA-UL-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_PDCCH_CandidateReductionsLAA_UL_r14_constr_1, CHOICE_constraint },
	asn_MBR_LTE_PDCCH_CandidateReductionsLAA_UL_r14_1,
	2,	/* Elements count */
	&asn_SPC_LTE_PDCCH_CandidateReductionsLAA_UL_r14_specs_1	/* Additional specs */
};

