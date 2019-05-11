/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#include "S1AP_E-RABLevelQoSParameters.h"

#include "S1AP_GBR-QosInformation.h"
#include "S1AP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1AP_E_RABLevelQoSParameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_E_RABLevelQoSParameters, qCI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_QCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qCI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_E_RABLevelQoSParameters, allocationRetentionPriority),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_AllocationAndRetentionPriority,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"allocationRetentionPriority"
		},
	{ ATF_POINTER, 2, offsetof(struct S1AP_E_RABLevelQoSParameters, gbrQosInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_GBR_QosInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gbrQosInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_E_RABLevelQoSParameters, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_6628P51,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_E_RABLevelQoSParameters_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_S1AP_E_RABLevelQoSParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_E_RABLevelQoSParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* qCI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* allocationRetentionPriority */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gbrQosInformation */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_E_RABLevelQoSParameters_specs_1 = {
	sizeof(struct S1AP_E_RABLevelQoSParameters),
	offsetof(struct S1AP_E_RABLevelQoSParameters, _asn_ctx),
	asn_MAP_S1AP_E_RABLevelQoSParameters_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_S1AP_E_RABLevelQoSParameters_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_E_RABLevelQoSParameters = {
	"E-RABLevelQoSParameters",
	"E-RABLevelQoSParameters",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_E_RABLevelQoSParameters_tags_1,
	sizeof(asn_DEF_S1AP_E_RABLevelQoSParameters_tags_1)
		/sizeof(asn_DEF_S1AP_E_RABLevelQoSParameters_tags_1[0]), /* 1 */
	asn_DEF_S1AP_E_RABLevelQoSParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_E_RABLevelQoSParameters_tags_1)
		/sizeof(asn_DEF_S1AP_E_RABLevelQoSParameters_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_E_RABLevelQoSParameters_1,
	4,	/* Elements count */
	&asn_SPC_S1AP_E_RABLevelQoSParameters_specs_1	/* Additional specs */
};

