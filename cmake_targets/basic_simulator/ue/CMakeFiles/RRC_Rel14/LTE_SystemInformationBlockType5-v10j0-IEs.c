/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SystemInformationBlockType5-v10j0-IEs.h"

static int
memb_LTE_interFreqCarrierFreqList_v10j0_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_interFreqCarrierFreqList_v10j0_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_interFreqCarrierFreqList_v10j0_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_interFreqCarrierFreqList_v10j0_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LTE_InterFreqCarrierFreqInfo_v10j0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_interFreqCarrierFreqList_v10j0_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_interFreqCarrierFreqList_v10j0_specs_2 = {
	sizeof(struct LTE_SystemInformationBlockType5_v10j0_IEs__interFreqCarrierFreqList_v10j0),
	offsetof(struct LTE_SystemInformationBlockType5_v10j0_IEs__interFreqCarrierFreqList_v10j0, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_interFreqCarrierFreqList_v10j0_2 = {
	"interFreqCarrierFreqList-v10j0",
	"interFreqCarrierFreqList-v10j0",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_interFreqCarrierFreqList_v10j0_tags_2,
	sizeof(asn_DEF_LTE_interFreqCarrierFreqList_v10j0_tags_2)
		/sizeof(asn_DEF_LTE_interFreqCarrierFreqList_v10j0_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_interFreqCarrierFreqList_v10j0_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_interFreqCarrierFreqList_v10j0_tags_2)
		/sizeof(asn_DEF_LTE_interFreqCarrierFreqList_v10j0_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_interFreqCarrierFreqList_v10j0_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_LTE_interFreqCarrierFreqList_v10j0_2,
	1,	/* Single element */
	&asn_SPC_LTE_interFreqCarrierFreqList_v10j0_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType5_v10j0_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType5_v10j0_IEs, interFreqCarrierFreqList_v10j0),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_interFreqCarrierFreqList_v10j0_2,
		0,
		{ 0, &asn_PER_memb_LTE_interFreqCarrierFreqList_v10j0_constr_2,  memb_LTE_interFreqCarrierFreqList_v10j0_constraint_1 },
		0, 0, /* No default value */
		"interFreqCarrierFreqList-v10j0"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType5_v10j0_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_SystemInformationBlockType5_v10l0_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_SystemInformationBlockType5_v10j0_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_SystemInformationBlockType5_v10j0_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SystemInformationBlockType5_v10j0_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqCarrierFreqList-v10j0 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType5_v10j0_IEs_specs_1 = {
	sizeof(struct LTE_SystemInformationBlockType5_v10j0_IEs),
	offsetof(struct LTE_SystemInformationBlockType5_v10j0_IEs, _asn_ctx),
	asn_MAP_LTE_SystemInformationBlockType5_v10j0_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_SystemInformationBlockType5_v10j0_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType5_v10j0_IEs = {
	"SystemInformationBlockType5-v10j0-IEs",
	"SystemInformationBlockType5-v10j0-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SystemInformationBlockType5_v10j0_IEs_tags_1,
	sizeof(asn_DEF_LTE_SystemInformationBlockType5_v10j0_IEs_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType5_v10j0_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_SystemInformationBlockType5_v10j0_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SystemInformationBlockType5_v10j0_IEs_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType5_v10j0_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SystemInformationBlockType5_v10j0_IEs_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SystemInformationBlockType5_v10j0_IEs_specs_1	/* Additional specs */
};

