/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#include "S1AP_E-RABFailedToSetupItemHOReqAck.h"

#include "S1AP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_S1AP_E_RABFailedToSetupItemHOReqAck_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_E_RABFailedToSetupItemHOReqAck, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_E_RAB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RAB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_E_RABFailedToSetupItemHOReqAck, cause),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_S1AP_Cause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cause"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_E_RABFailedToSetupItemHOReqAck, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_6628P3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_E_RABFailedToSetupItemHOReqAck_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_S1AP_E_RABFailedToSetupItemHOReqAck_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_E_RABFailedToSetupItemHOReqAck_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cause */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1AP_E_RABFailedToSetupItemHOReqAck_specs_1 = {
	sizeof(struct S1AP_E_RABFailedToSetupItemHOReqAck),
	offsetof(struct S1AP_E_RABFailedToSetupItemHOReqAck, _asn_ctx),
	asn_MAP_S1AP_E_RABFailedToSetupItemHOReqAck_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1AP_E_RABFailedToSetupItemHOReqAck_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_E_RABFailedToSetupItemHOReqAck = {
	"E-RABFailedToSetupItemHOReqAck",
	"E-RABFailedToSetupItemHOReqAck",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_E_RABFailedToSetupItemHOReqAck_tags_1,
	sizeof(asn_DEF_S1AP_E_RABFailedToSetupItemHOReqAck_tags_1)
		/sizeof(asn_DEF_S1AP_E_RABFailedToSetupItemHOReqAck_tags_1[0]), /* 1 */
	asn_DEF_S1AP_E_RABFailedToSetupItemHOReqAck_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_E_RABFailedToSetupItemHOReqAck_tags_1)
		/sizeof(asn_DEF_S1AP_E_RABFailedToSetupItemHOReqAck_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_E_RABFailedToSetupItemHOReqAck_1,
	3,	/* Elements count */
	&asn_SPC_S1AP_E_RABFailedToSetupItemHOReqAck_specs_1	/* Additional specs */
};

