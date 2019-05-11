/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/carlos/dualCon/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/X2AP_R14`
 */

#include "X2AP_E-RABs-ToBeSetupRetrieve-Item.h"

#include "X2AP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_X2AP_E_RABs_ToBeSetupRetrieve_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_E_RABs_ToBeSetupRetrieve_Item, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_E_RAB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RAB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_E_RABs_ToBeSetupRetrieve_Item, e_RAB_Level_QoS_Parameters),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_E_RAB_Level_QoS_Parameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RAB-Level-QoS-Parameters"
		},
	{ ATF_POINTER, 2, offsetof(struct X2AP_E_RABs_ToBeSetupRetrieve_Item, bearerType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_BearerType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bearerType"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_E_RABs_ToBeSetupRetrieve_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_5040P42,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_E_RABs_ToBeSetupRetrieve_Item_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_X2AP_E_RABs_ToBeSetupRetrieve_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_E_RABs_ToBeSetupRetrieve_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* e-RAB-Level-QoS-Parameters */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bearerType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2AP_E_RABs_ToBeSetupRetrieve_Item_specs_1 = {
	sizeof(struct X2AP_E_RABs_ToBeSetupRetrieve_Item),
	offsetof(struct X2AP_E_RABs_ToBeSetupRetrieve_Item, _asn_ctx),
	asn_MAP_X2AP_E_RABs_ToBeSetupRetrieve_Item_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_X2AP_E_RABs_ToBeSetupRetrieve_Item_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_E_RABs_ToBeSetupRetrieve_Item = {
	"E-RABs-ToBeSetupRetrieve-Item",
	"E-RABs-ToBeSetupRetrieve-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_E_RABs_ToBeSetupRetrieve_Item_tags_1,
	sizeof(asn_DEF_X2AP_E_RABs_ToBeSetupRetrieve_Item_tags_1)
		/sizeof(asn_DEF_X2AP_E_RABs_ToBeSetupRetrieve_Item_tags_1[0]), /* 1 */
	asn_DEF_X2AP_E_RABs_ToBeSetupRetrieve_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_E_RABs_ToBeSetupRetrieve_Item_tags_1)
		/sizeof(asn_DEF_X2AP_E_RABs_ToBeSetupRetrieve_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_E_RABs_ToBeSetupRetrieve_Item_1,
	4,	/* Elements count */
	&asn_SPC_X2AP_E_RABs_ToBeSetupRetrieve_Item_specs_1	/* Additional specs */
};

