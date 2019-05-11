/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SystemInformationBlockType5-NB-r13.h"

static int
memb_LTE_scptm_FreqOffset_r14_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_LTE_scptm_FreqOffset_r14_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_ext1_6[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType5_NB_r13__ext1, scptm_FreqOffset_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_scptm_FreqOffset_r14_constr_7,  memb_LTE_scptm_FreqOffset_r14_constraint_6 },
		0, 0, /* No default value */
		"scptm-FreqOffset-r14"
		},
};
static const int asn_MAP_LTE_ext1_oms_6[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* scptm-FreqOffset-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_6 = {
	sizeof(struct LTE_SystemInformationBlockType5_NB_r13__ext1),
	offsetof(struct LTE_SystemInformationBlockType5_NB_r13__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_6,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_6 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_6,
	sizeof(asn_DEF_LTE_ext1_tags_6)
		/sizeof(asn_DEF_LTE_ext1_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_6)
		/sizeof(asn_DEF_LTE_ext1_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_6,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType5_NB_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType5_NB_r13, interFreqCarrierFreqList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_InterFreqCarrierFreqList_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqCarrierFreqList-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType5_NB_r13, t_Reselection_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_T_Reselection_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-Reselection-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType5_NB_r13, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType5_NB_r13, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_LTE_ext1_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_LTE_SystemInformationBlockType5_NB_r13_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_SystemInformationBlockType5_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SystemInformationBlockType5_NB_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqCarrierFreqList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* t-Reselection-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType5_NB_r13_specs_1 = {
	sizeof(struct LTE_SystemInformationBlockType5_NB_r13),
	offsetof(struct LTE_SystemInformationBlockType5_NB_r13, _asn_ctx),
	asn_MAP_LTE_SystemInformationBlockType5_NB_r13_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_SystemInformationBlockType5_NB_r13_oms_1,	/* Optional members */
	1, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType5_NB_r13 = {
	"SystemInformationBlockType5-NB-r13",
	"SystemInformationBlockType5-NB-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SystemInformationBlockType5_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_SystemInformationBlockType5_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType5_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_SystemInformationBlockType5_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SystemInformationBlockType5_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType5_NB_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SystemInformationBlockType5_NB_r13_1,
	4,	/* Elements count */
	&asn_SPC_LTE_SystemInformationBlockType5_NB_r13_specs_1	/* Additional specs */
};

