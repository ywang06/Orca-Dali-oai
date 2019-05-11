/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_MeasIdToAddModExt-r12.h"

asn_TYPE_member_t asn_MBR_LTE_MeasIdToAddModExt_r12_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasIdToAddModExt_r12, measId_v1250),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasId_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measId-v1250"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasIdToAddModExt_r12, measObjectId_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MeasObjectId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measObjectId-r12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_MeasIdToAddModExt_r12, reportConfigId_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_ReportConfigId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportConfigId-r12"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_MeasIdToAddModExt_r12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_MeasIdToAddModExt_r12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measId-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measObjectId-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* reportConfigId-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_MeasIdToAddModExt_r12_specs_1 = {
	sizeof(struct LTE_MeasIdToAddModExt_r12),
	offsetof(struct LTE_MeasIdToAddModExt_r12, _asn_ctx),
	asn_MAP_LTE_MeasIdToAddModExt_r12_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_MeasIdToAddModExt_r12 = {
	"MeasIdToAddModExt-r12",
	"MeasIdToAddModExt-r12",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_MeasIdToAddModExt_r12_tags_1,
	sizeof(asn_DEF_LTE_MeasIdToAddModExt_r12_tags_1)
		/sizeof(asn_DEF_LTE_MeasIdToAddModExt_r12_tags_1[0]), /* 1 */
	asn_DEF_LTE_MeasIdToAddModExt_r12_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_MeasIdToAddModExt_r12_tags_1)
		/sizeof(asn_DEF_LTE_MeasIdToAddModExt_r12_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_MeasIdToAddModExt_r12_1,
	3,	/* Elements count */
	&asn_SPC_LTE_MeasIdToAddModExt_r12_specs_1	/* Additional specs */
};

