/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/S1AP_R14`
 */

#include "S1AP_HOReport.h"

#include "S1AP_CandidatePCIList.h"
asn_TYPE_member_t asn_MBR_S1AP_HOReport_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_HOReport, hoType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_HoType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hoType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_HOReport, hoReportType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_HoReportType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hoReportType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_HOReport, hosourceID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_S1AP_IRAT_Cell_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hosourceID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_HOReport, hoTargetID),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_S1AP_IRAT_Cell_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hoTargetID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_HOReport, candidateCellList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CandidateCellList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"candidateCellList"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_HOReport, candidatePCIList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CandidatePCIList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"candidatePCIList"
		},
};
static const int asn_MAP_S1AP_HOReport_oms_1[] = { 5 };
static const ber_tlv_tag_t asn_DEF_S1AP_HOReport_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_HOReport_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hoType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* hoReportType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* hosourceID */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* hoTargetID */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* candidateCellList */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* candidatePCIList */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_HOReport_specs_1 = {
	sizeof(struct S1AP_HOReport),
	offsetof(struct S1AP_HOReport, _asn_ctx),
	asn_MAP_S1AP_HOReport_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_S1AP_HOReport_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_HOReport = {
	"HOReport",
	"HOReport",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_HOReport_tags_1,
	sizeof(asn_DEF_S1AP_HOReport_tags_1)
		/sizeof(asn_DEF_S1AP_HOReport_tags_1[0]), /* 1 */
	asn_DEF_S1AP_HOReport_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_HOReport_tags_1)
		/sizeof(asn_DEF_S1AP_HOReport_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_HOReport_1,
	6,	/* Elements count */
	&asn_SPC_S1AP_HOReport_specs_1	/* Additional specs */
};

