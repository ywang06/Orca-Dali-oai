/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SystemInformationBlockType14-r11.h"

static int
memb_LTE_eab_PerPLMN_List_r11_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 6)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_eab_PerPLMN_List_r11_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (SIZE(1..6)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_eab_PerPLMN_List_r11_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (SIZE(1..6)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_eab_Param_r11_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_eab_PerPLMN_List_r11_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_LTE_EAB_ConfigPLMN_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_eab_PerPLMN_List_r11_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_eab_PerPLMN_List_r11_specs_4 = {
	sizeof(struct LTE_SystemInformationBlockType14_r11__eab_Param_r11__eab_PerPLMN_List_r11),
	offsetof(struct LTE_SystemInformationBlockType14_r11__eab_Param_r11__eab_PerPLMN_List_r11, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_eab_PerPLMN_List_r11_4 = {
	"eab-PerPLMN-List-r11",
	"eab-PerPLMN-List-r11",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_eab_PerPLMN_List_r11_tags_4,
	sizeof(asn_DEF_LTE_eab_PerPLMN_List_r11_tags_4)
		/sizeof(asn_DEF_LTE_eab_PerPLMN_List_r11_tags_4[0]) - 1, /* 1 */
	asn_DEF_LTE_eab_PerPLMN_List_r11_tags_4,	/* Same as above */
	sizeof(asn_DEF_LTE_eab_PerPLMN_List_r11_tags_4)
		/sizeof(asn_DEF_LTE_eab_PerPLMN_List_r11_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_eab_PerPLMN_List_r11_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_LTE_eab_PerPLMN_List_r11_4,
	1,	/* Single element */
	&asn_SPC_LTE_eab_PerPLMN_List_r11_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_eab_Param_r11_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType14_r11__eab_Param_r11, choice.eab_Common_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_EAB_Config_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eab-Common-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SystemInformationBlockType14_r11__eab_Param_r11, choice.eab_PerPLMN_List_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_eab_PerPLMN_List_r11_4,
		0,
		{ 0, &asn_PER_memb_LTE_eab_PerPLMN_List_r11_constr_4,  memb_LTE_eab_PerPLMN_List_r11_constraint_2 },
		0, 0, /* No default value */
		"eab-PerPLMN-List-r11"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_eab_Param_r11_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eab-Common-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eab-PerPLMN-List-r11 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_eab_Param_r11_specs_2 = {
	sizeof(struct LTE_SystemInformationBlockType14_r11__eab_Param_r11),
	offsetof(struct LTE_SystemInformationBlockType14_r11__eab_Param_r11, _asn_ctx),
	offsetof(struct LTE_SystemInformationBlockType14_r11__eab_Param_r11, present),
	sizeof(((struct LTE_SystemInformationBlockType14_r11__eab_Param_r11 *)0)->present),
	asn_MAP_LTE_eab_Param_r11_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_eab_Param_r11_2 = {
	"eab-Param-r11",
	"eab-Param-r11",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_eab_Param_r11_constr_2, CHOICE_constraint },
	asn_MBR_LTE_eab_Param_r11_2,
	2,	/* Elements count */
	&asn_SPC_LTE_eab_Param_r11_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SystemInformationBlockType14_r11_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_SystemInformationBlockType14_r11, eab_Param_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_eab_Param_r11_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eab-Param-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SystemInformationBlockType14_r11, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
};
static const int asn_MAP_LTE_SystemInformationBlockType14_r11_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_SystemInformationBlockType14_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SystemInformationBlockType14_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eab-Param-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* lateNonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SystemInformationBlockType14_r11_specs_1 = {
	sizeof(struct LTE_SystemInformationBlockType14_r11),
	offsetof(struct LTE_SystemInformationBlockType14_r11, _asn_ctx),
	asn_MAP_LTE_SystemInformationBlockType14_r11_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_SystemInformationBlockType14_r11_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SystemInformationBlockType14_r11 = {
	"SystemInformationBlockType14-r11",
	"SystemInformationBlockType14-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SystemInformationBlockType14_r11_tags_1,
	sizeof(asn_DEF_LTE_SystemInformationBlockType14_r11_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType14_r11_tags_1[0]), /* 1 */
	asn_DEF_LTE_SystemInformationBlockType14_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SystemInformationBlockType14_r11_tags_1)
		/sizeof(asn_DEF_LTE_SystemInformationBlockType14_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SystemInformationBlockType14_r11_1,
	2,	/* Elements count */
	&asn_SPC_LTE_SystemInformationBlockType14_r11_specs_1	/* Additional specs */
};

