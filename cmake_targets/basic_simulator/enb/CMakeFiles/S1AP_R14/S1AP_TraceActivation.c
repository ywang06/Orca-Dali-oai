/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#include "S1AP_TraceActivation.h"

#include "S1AP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_S1AP_TraceActivation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_TraceActivation, e_UTRAN_Trace_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_E_UTRAN_Trace_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-UTRAN-Trace-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_TraceActivation, interfacesToTrace),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_InterfacesToTrace,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interfacesToTrace"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_TraceActivation, traceDepth),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_TraceDepth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"traceDepth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_TraceActivation, traceCollectionEntityIPAddress),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_TransportLayerAddress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"traceCollectionEntityIPAddress"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_TraceActivation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_6628P107,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_TraceActivation_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_S1AP_TraceActivation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_TraceActivation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-UTRAN-Trace-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* interfacesToTrace */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* traceDepth */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* traceCollectionEntityIPAddress */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1AP_TraceActivation_specs_1 = {
	sizeof(struct S1AP_TraceActivation),
	offsetof(struct S1AP_TraceActivation, _asn_ctx),
	asn_MAP_S1AP_TraceActivation_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_S1AP_TraceActivation_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_TraceActivation = {
	"TraceActivation",
	"TraceActivation",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_TraceActivation_tags_1,
	sizeof(asn_DEF_S1AP_TraceActivation_tags_1)
		/sizeof(asn_DEF_S1AP_TraceActivation_tags_1[0]), /* 1 */
	asn_DEF_S1AP_TraceActivation_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_TraceActivation_tags_1)
		/sizeof(asn_DEF_S1AP_TraceActivation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_TraceActivation_1,
	5,	/* Elements count */
	&asn_SPC_S1AP_TraceActivation_specs_1	/* Additional specs */
};

