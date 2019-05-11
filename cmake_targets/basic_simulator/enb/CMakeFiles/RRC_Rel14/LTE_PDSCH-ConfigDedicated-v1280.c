/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PDSCH-ConfigDedicated-v1280.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_tbsIndexAlt_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_tbsIndexAlt_r12_value2enum_2[] = {
	{ 0,	3,	"a26" },
	{ 1,	3,	"a33" }
};
static const unsigned int asn_MAP_LTE_tbsIndexAlt_r12_enum2value_2[] = {
	0,	/* a26(0) */
	1	/* a33(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_tbsIndexAlt_r12_specs_2 = {
	asn_MAP_LTE_tbsIndexAlt_r12_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_tbsIndexAlt_r12_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_tbsIndexAlt_r12_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_tbsIndexAlt_r12_2 = {
	"tbsIndexAlt-r12",
	"tbsIndexAlt-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_tbsIndexAlt_r12_tags_2,
	sizeof(asn_DEF_LTE_tbsIndexAlt_r12_tags_2)
		/sizeof(asn_DEF_LTE_tbsIndexAlt_r12_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_tbsIndexAlt_r12_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_tbsIndexAlt_r12_tags_2)
		/sizeof(asn_DEF_LTE_tbsIndexAlt_r12_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_tbsIndexAlt_r12_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_tbsIndexAlt_r12_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_PDSCH_ConfigDedicated_v1280_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_PDSCH_ConfigDedicated_v1280, tbsIndexAlt_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_tbsIndexAlt_r12_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tbsIndexAlt-r12"
		},
};
static const int asn_MAP_LTE_PDSCH_ConfigDedicated_v1280_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_PDSCH_ConfigDedicated_v1280_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PDSCH_ConfigDedicated_v1280_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tbsIndexAlt-r12 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PDSCH_ConfigDedicated_v1280_specs_1 = {
	sizeof(struct LTE_PDSCH_ConfigDedicated_v1280),
	offsetof(struct LTE_PDSCH_ConfigDedicated_v1280, _asn_ctx),
	asn_MAP_LTE_PDSCH_ConfigDedicated_v1280_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_PDSCH_ConfigDedicated_v1280_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PDSCH_ConfigDedicated_v1280 = {
	"PDSCH-ConfigDedicated-v1280",
	"PDSCH-ConfigDedicated-v1280",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PDSCH_ConfigDedicated_v1280_tags_1,
	sizeof(asn_DEF_LTE_PDSCH_ConfigDedicated_v1280_tags_1)
		/sizeof(asn_DEF_LTE_PDSCH_ConfigDedicated_v1280_tags_1[0]), /* 1 */
	asn_DEF_LTE_PDSCH_ConfigDedicated_v1280_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PDSCH_ConfigDedicated_v1280_tags_1)
		/sizeof(asn_DEF_LTE_PDSCH_ConfigDedicated_v1280_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_PDSCH_ConfigDedicated_v1280_1,
	1,	/* Elements count */
	&asn_SPC_LTE_PDSCH_ConfigDedicated_v1280_specs_1	/* Additional specs */
};

