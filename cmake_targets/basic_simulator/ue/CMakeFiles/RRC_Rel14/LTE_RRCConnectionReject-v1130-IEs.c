/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_RRCConnectionReject-v1130-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_deprioritisationType_r11_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_deprioritisationTimer_r11_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_deprioritisationType_r11_value2enum_3[] = {
	{ 0,	9,	"frequency" },
	{ 1,	6,	"e-utra" }
};
static const unsigned int asn_MAP_LTE_deprioritisationType_r11_enum2value_3[] = {
	1,	/* e-utra(1) */
	0	/* frequency(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_deprioritisationType_r11_specs_3 = {
	asn_MAP_LTE_deprioritisationType_r11_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_deprioritisationType_r11_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_deprioritisationType_r11_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_deprioritisationType_r11_3 = {
	"deprioritisationType-r11",
	"deprioritisationType-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_deprioritisationType_r11_tags_3,
	sizeof(asn_DEF_LTE_deprioritisationType_r11_tags_3)
		/sizeof(asn_DEF_LTE_deprioritisationType_r11_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_deprioritisationType_r11_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_deprioritisationType_r11_tags_3)
		/sizeof(asn_DEF_LTE_deprioritisationType_r11_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_deprioritisationType_r11_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_deprioritisationType_r11_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_deprioritisationTimer_r11_value2enum_6[] = {
	{ 0,	4,	"min5" },
	{ 1,	5,	"min10" },
	{ 2,	5,	"min15" },
	{ 3,	5,	"min30" }
};
static const unsigned int asn_MAP_LTE_deprioritisationTimer_r11_enum2value_6[] = {
	1,	/* min10(1) */
	2,	/* min15(2) */
	3,	/* min30(3) */
	0	/* min5(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_deprioritisationTimer_r11_specs_6 = {
	asn_MAP_LTE_deprioritisationTimer_r11_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_deprioritisationTimer_r11_enum2value_6,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_deprioritisationTimer_r11_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_deprioritisationTimer_r11_6 = {
	"deprioritisationTimer-r11",
	"deprioritisationTimer-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_deprioritisationTimer_r11_tags_6,
	sizeof(asn_DEF_LTE_deprioritisationTimer_r11_tags_6)
		/sizeof(asn_DEF_LTE_deprioritisationTimer_r11_tags_6[0]) - 1, /* 1 */
	asn_DEF_LTE_deprioritisationTimer_r11_tags_6,	/* Same as above */
	sizeof(asn_DEF_LTE_deprioritisationTimer_r11_tags_6)
		/sizeof(asn_DEF_LTE_deprioritisationTimer_r11_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_deprioritisationTimer_r11_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_deprioritisationTimer_r11_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_deprioritisationReq_r11_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReject_v1130_IEs__deprioritisationReq_r11, deprioritisationType_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_deprioritisationType_r11_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deprioritisationType-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RRCConnectionReject_v1130_IEs__deprioritisationReq_r11, deprioritisationTimer_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_deprioritisationTimer_r11_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deprioritisationTimer-r11"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_deprioritisationReq_r11_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_deprioritisationReq_r11_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* deprioritisationType-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* deprioritisationTimer-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_deprioritisationReq_r11_specs_2 = {
	sizeof(struct LTE_RRCConnectionReject_v1130_IEs__deprioritisationReq_r11),
	offsetof(struct LTE_RRCConnectionReject_v1130_IEs__deprioritisationReq_r11, _asn_ctx),
	asn_MAP_LTE_deprioritisationReq_r11_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_deprioritisationReq_r11_2 = {
	"deprioritisationReq-r11",
	"deprioritisationReq-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_deprioritisationReq_r11_tags_2,
	sizeof(asn_DEF_LTE_deprioritisationReq_r11_tags_2)
		/sizeof(asn_DEF_LTE_deprioritisationReq_r11_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_deprioritisationReq_r11_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_deprioritisationReq_r11_tags_2)
		/sizeof(asn_DEF_LTE_deprioritisationReq_r11_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_deprioritisationReq_r11_2,
	2,	/* Elements count */
	&asn_SPC_LTE_deprioritisationReq_r11_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RRCConnectionReject_v1130_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct LTE_RRCConnectionReject_v1130_IEs, deprioritisationReq_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_deprioritisationReq_r11_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deprioritisationReq-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCConnectionReject_v1130_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RRCConnectionReject_v1320_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_RRCConnectionReject_v1130_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_LTE_RRCConnectionReject_v1130_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RRCConnectionReject_v1130_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* deprioritisationReq-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionReject_v1130_IEs_specs_1 = {
	sizeof(struct LTE_RRCConnectionReject_v1130_IEs),
	offsetof(struct LTE_RRCConnectionReject_v1130_IEs, _asn_ctx),
	asn_MAP_LTE_RRCConnectionReject_v1130_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_RRCConnectionReject_v1130_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReject_v1130_IEs = {
	"RRCConnectionReject-v1130-IEs",
	"RRCConnectionReject-v1130-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RRCConnectionReject_v1130_IEs_tags_1,
	sizeof(asn_DEF_LTE_RRCConnectionReject_v1130_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionReject_v1130_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_RRCConnectionReject_v1130_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RRCConnectionReject_v1130_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionReject_v1130_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_RRCConnectionReject_v1130_IEs_1,
	2,	/* Elements count */
	&asn_SPC_LTE_RRCConnectionReject_v1130_IEs_specs_1	/* Additional specs */
};

