/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#include "X2AP_ProSeAuthorized.h"

#include "X2AP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_X2AP_ProSeAuthorized_1[] = {
	{ ATF_POINTER, 3, offsetof(struct X2AP_ProSeAuthorized, proSeDirectDiscovery),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProSeDirectDiscovery,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"proSeDirectDiscovery"
		},
	{ ATF_POINTER, 2, offsetof(struct X2AP_ProSeAuthorized, proSeDirectCommunication),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProSeDirectCommunication,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"proSeDirectCommunication"
		},
	{ ATF_POINTER, 1, offsetof(struct X2AP_ProSeAuthorized, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolExtensionContainer_5040P100,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_X2AP_ProSeAuthorized_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_X2AP_ProSeAuthorized_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_ProSeAuthorized_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* proSeDirectDiscovery */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* proSeDirectCommunication */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2AP_ProSeAuthorized_specs_1 = {
	sizeof(struct X2AP_ProSeAuthorized),
	offsetof(struct X2AP_ProSeAuthorized, _asn_ctx),
	asn_MAP_X2AP_ProSeAuthorized_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_X2AP_ProSeAuthorized_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_ProSeAuthorized = {
	"ProSeAuthorized",
	"ProSeAuthorized",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_ProSeAuthorized_tags_1,
	sizeof(asn_DEF_X2AP_ProSeAuthorized_tags_1)
		/sizeof(asn_DEF_X2AP_ProSeAuthorized_tags_1[0]), /* 1 */
	asn_DEF_X2AP_ProSeAuthorized_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_ProSeAuthorized_tags_1)
		/sizeof(asn_DEF_X2AP_ProSeAuthorized_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_ProSeAuthorized_1,
	3,	/* Elements count */
	&asn_SPC_X2AP_ProSeAuthorized_specs_1	/* Additional specs */
};

