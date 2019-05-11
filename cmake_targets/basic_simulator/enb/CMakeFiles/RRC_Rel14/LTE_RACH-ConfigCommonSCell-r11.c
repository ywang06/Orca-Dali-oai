/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_RACH-ConfigCommonSCell-r11.h"

static asn_TYPE_member_t asn_MBR_LTE_ra_SupervisionInfo_r11_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RACH_ConfigCommonSCell_r11__ra_SupervisionInfo_r11, preambleTransMax_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PreambleTransMax,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"preambleTransMax-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_ra_SupervisionInfo_r11_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ra_SupervisionInfo_r11_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* preambleTransMax-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ra_SupervisionInfo_r11_specs_3 = {
	sizeof(struct LTE_RACH_ConfigCommonSCell_r11__ra_SupervisionInfo_r11),
	offsetof(struct LTE_RACH_ConfigCommonSCell_r11__ra_SupervisionInfo_r11, _asn_ctx),
	asn_MAP_LTE_ra_SupervisionInfo_r11_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ra_SupervisionInfo_r11_3 = {
	"ra-SupervisionInfo-r11",
	"ra-SupervisionInfo-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ra_SupervisionInfo_r11_tags_3,
	sizeof(asn_DEF_LTE_ra_SupervisionInfo_r11_tags_3)
		/sizeof(asn_DEF_LTE_ra_SupervisionInfo_r11_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_ra_SupervisionInfo_r11_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_ra_SupervisionInfo_r11_tags_3)
		/sizeof(asn_DEF_LTE_ra_SupervisionInfo_r11_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ra_SupervisionInfo_r11_3,
	1,	/* Elements count */
	&asn_SPC_LTE_ra_SupervisionInfo_r11_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RACH_ConfigCommonSCell_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RACH_ConfigCommonSCell_r11, powerRampingParameters_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PowerRampingParameters,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"powerRampingParameters-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RACH_ConfigCommonSCell_r11, ra_SupervisionInfo_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_LTE_ra_SupervisionInfo_r11_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ra-SupervisionInfo-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_RACH_ConfigCommonSCell_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RACH_ConfigCommonSCell_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* powerRampingParameters-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ra-SupervisionInfo-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RACH_ConfigCommonSCell_r11_specs_1 = {
	sizeof(struct LTE_RACH_ConfigCommonSCell_r11),
	offsetof(struct LTE_RACH_ConfigCommonSCell_r11, _asn_ctx),
	asn_MAP_LTE_RACH_ConfigCommonSCell_r11_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RACH_ConfigCommonSCell_r11 = {
	"RACH-ConfigCommonSCell-r11",
	"RACH-ConfigCommonSCell-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RACH_ConfigCommonSCell_r11_tags_1,
	sizeof(asn_DEF_LTE_RACH_ConfigCommonSCell_r11_tags_1)
		/sizeof(asn_DEF_LTE_RACH_ConfigCommonSCell_r11_tags_1[0]), /* 1 */
	asn_DEF_LTE_RACH_ConfigCommonSCell_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RACH_ConfigCommonSCell_r11_tags_1)
		/sizeof(asn_DEF_LTE_RACH_ConfigCommonSCell_r11_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_RACH_ConfigCommonSCell_r11_1,
	2,	/* Elements count */
	&asn_SPC_LTE_RACH_ConfigCommonSCell_r11_specs_1	/* Additional specs */
};

