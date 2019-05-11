/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SPS-Config.h"

asn_TYPE_member_t asn_MBR_LTE_SPS_Config_1[] = {
	{ ATF_POINTER, 3, offsetof(struct LTE_SPS_Config, semiPersistSchedC_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_C_RNTI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"semiPersistSchedC-RNTI"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_SPS_Config, sps_ConfigDL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_SPS_ConfigDL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-ConfigDL"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_SPS_Config, sps_ConfigUL),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_SPS_ConfigUL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-ConfigUL"
		},
};
static const int asn_MAP_LTE_SPS_Config_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_LTE_SPS_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SPS_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* semiPersistSchedC-RNTI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sps-ConfigDL */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sps-ConfigUL */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SPS_Config_specs_1 = {
	sizeof(struct LTE_SPS_Config),
	offsetof(struct LTE_SPS_Config, _asn_ctx),
	asn_MAP_LTE_SPS_Config_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_LTE_SPS_Config_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SPS_Config = {
	"SPS-Config",
	"SPS-Config",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SPS_Config_tags_1,
	sizeof(asn_DEF_LTE_SPS_Config_tags_1)
		/sizeof(asn_DEF_LTE_SPS_Config_tags_1[0]), /* 1 */
	asn_DEF_LTE_SPS_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SPS_Config_tags_1)
		/sizeof(asn_DEF_LTE_SPS_Config_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SPS_Config_1,
	3,	/* Elements count */
	&asn_SPC_LTE_SPS_Config_specs_1	/* Additional specs */
};

