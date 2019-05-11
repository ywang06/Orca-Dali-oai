/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/F1AP_R15.2.1`
 */

#include "F1AP_Cells-Failed-to-be-Activated-List-Item.h"

#include "F1AP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_F1AP_Cells_Failed_to_be_Activated_List_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_Cells_Failed_to_be_Activated_List_Item, nRCGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_NRCGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nRCGI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct F1AP_Cells_Failed_to_be_Activated_List_Item, cause),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_F1AP_Cause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cause"
		},
	{ ATF_POINTER, 1, offsetof(struct F1AP_Cells_Failed_to_be_Activated_List_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_F1AP_ProtocolExtensionContainer_160P4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_F1AP_Cells_Failed_to_be_Activated_List_Item_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_F1AP_Cells_Failed_to_be_Activated_List_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_F1AP_Cells_Failed_to_be_Activated_List_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nRCGI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cause */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_F1AP_Cells_Failed_to_be_Activated_List_Item_specs_1 = {
	sizeof(struct F1AP_Cells_Failed_to_be_Activated_List_Item),
	offsetof(struct F1AP_Cells_Failed_to_be_Activated_List_Item, _asn_ctx),
	asn_MAP_F1AP_Cells_Failed_to_be_Activated_List_Item_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_F1AP_Cells_Failed_to_be_Activated_List_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_Cells_Failed_to_be_Activated_List_Item = {
	"Cells-Failed-to-be-Activated-List-Item",
	"Cells-Failed-to-be-Activated-List-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_F1AP_Cells_Failed_to_be_Activated_List_Item_tags_1,
	sizeof(asn_DEF_F1AP_Cells_Failed_to_be_Activated_List_Item_tags_1)
		/sizeof(asn_DEF_F1AP_Cells_Failed_to_be_Activated_List_Item_tags_1[0]), /* 1 */
	asn_DEF_F1AP_Cells_Failed_to_be_Activated_List_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_Cells_Failed_to_be_Activated_List_Item_tags_1)
		/sizeof(asn_DEF_F1AP_Cells_Failed_to_be_Activated_List_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_F1AP_Cells_Failed_to_be_Activated_List_Item_1,
	3,	/* Elements count */
	&asn_SPC_F1AP_Cells_Failed_to_be_Activated_List_Item_specs_1	/* Additional specs */
};

