/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/F1AP_R15.2.1`
 */

#include "F1AP_FreqBandNrItem.h"

#include "F1AP_ProtocolExtensionContainer.h"
#include "F1AP_SupportedSULFreqBandItem.h"
static int
memb_F1AP_freqBandIndicatorNr_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 1024)) {
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
memb_F1AP_supportedSULBandList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size <= 32)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_F1AP_supportedSULBandList_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..32)) */};
static asn_per_constraints_t asn_PER_type_F1AP_supportedSULBandList_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  0,  32 }	/* (SIZE(0..32)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_F1AP_freqBandIndicatorNr_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_F1AP_freqBandIndicatorNr_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  10,  10,  1,  1024 }	/* (1..1024,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_F1AP_supportedSULBandList_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..32)) */};
static asn_per_constraints_t asn_PER_memb_F1AP_supportedSULBandList_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  0,  32 }	/* (SIZE(0..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_F1AP_supportedSULBandList_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_F1AP_SupportedSULFreqBandItem,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_F1AP_supportedSULBandList_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_F1AP_supportedSULBandList_specs_3 = {
	sizeof(struct F1AP_FreqBandNrItem__supportedSULBandList),
	offsetof(struct F1AP_FreqBandNrItem__supportedSULBandList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_F1AP_supportedSULBandList_3 = {
	"supportedSULBandList",
	"supportedSULBandList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_F1AP_supportedSULBandList_tags_3,
	sizeof(asn_DEF_F1AP_supportedSULBandList_tags_3)
		/sizeof(asn_DEF_F1AP_supportedSULBandList_tags_3[0]) - 1, /* 1 */
	asn_DEF_F1AP_supportedSULBandList_tags_3,	/* Same as above */
	sizeof(asn_DEF_F1AP_supportedSULBandList_tags_3)
		/sizeof(asn_DEF_F1AP_supportedSULBandList_tags_3[0]), /* 2 */
	{ &asn_OER_type_F1AP_supportedSULBandList_constr_3, &asn_PER_type_F1AP_supportedSULBandList_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_F1AP_supportedSULBandList_3,
	1,	/* Single element */
	&asn_SPC_F1AP_supportedSULBandList_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_F1AP_FreqBandNrItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_FreqBandNrItem, freqBandIndicatorNr),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_F1AP_freqBandIndicatorNr_constr_2, &asn_PER_memb_F1AP_freqBandIndicatorNr_constr_2,  memb_F1AP_freqBandIndicatorNr_constraint_1 },
		0, 0, /* No default value */
		"freqBandIndicatorNr"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_FreqBandNrItem, supportedSULBandList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_F1AP_supportedSULBandList_3,
		0,
		{ &asn_OER_memb_F1AP_supportedSULBandList_constr_3, &asn_PER_memb_F1AP_supportedSULBandList_constr_3,  memb_F1AP_supportedSULBandList_constraint_1 },
		0, 0, /* No default value */
		"supportedSULBandList"
		},
	{ ATF_POINTER, 1, offsetof(struct F1AP_FreqBandNrItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ProtocolExtensionContainer_160P43,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_F1AP_FreqBandNrItem_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_F1AP_FreqBandNrItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_FreqBandNrItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* freqBandIndicatorNr */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* supportedSULBandList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_F1AP_FreqBandNrItem_specs_1 = {
	sizeof(struct F1AP_FreqBandNrItem),
	offsetof(struct F1AP_FreqBandNrItem, _asn_ctx),
	asn_MAP_F1AP_FreqBandNrItem_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_F1AP_FreqBandNrItem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_FreqBandNrItem = {
	"FreqBandNrItem",
	"FreqBandNrItem",
	&asn_OP_SEQUENCE,
	asn_DEF_F1AP_FreqBandNrItem_tags_1,
	sizeof(asn_DEF_F1AP_FreqBandNrItem_tags_1)
		/sizeof(asn_DEF_F1AP_FreqBandNrItem_tags_1[0]), /* 1 */
	asn_DEF_F1AP_FreqBandNrItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_FreqBandNrItem_tags_1)
		/sizeof(asn_DEF_F1AP_FreqBandNrItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_F1AP_FreqBandNrItem_1,
	3,	/* Elements count */
	&asn_SPC_F1AP_FreqBandNrItem_specs_1	/* Additional specs */
};

