/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_RRCConnectionSetupComplete-v1250-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_LTE_mobilityState_r12_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_mobilityHistoryAvail_r12_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_logMeasAvailableMBSFN_r12_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_mobilityState_r12_value2enum_2[] = {
	{ 0,	6,	"normal" },
	{ 1,	6,	"medium" },
	{ 2,	4,	"high" },
	{ 3,	5,	"spare" }
};
static const unsigned int asn_MAP_LTE_mobilityState_r12_enum2value_2[] = {
	2,	/* high(2) */
	1,	/* medium(1) */
	0,	/* normal(0) */
	3	/* spare(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_mobilityState_r12_specs_2 = {
	asn_MAP_LTE_mobilityState_r12_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_mobilityState_r12_enum2value_2,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_mobilityState_r12_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mobilityState_r12_2 = {
	"mobilityState-r12",
	"mobilityState-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_mobilityState_r12_tags_2,
	sizeof(asn_DEF_LTE_mobilityState_r12_tags_2)
		/sizeof(asn_DEF_LTE_mobilityState_r12_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_mobilityState_r12_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_mobilityState_r12_tags_2)
		/sizeof(asn_DEF_LTE_mobilityState_r12_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_mobilityState_r12_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_mobilityState_r12_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_mobilityHistoryAvail_r12_value2enum_7[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_mobilityHistoryAvail_r12_enum2value_7[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_mobilityHistoryAvail_r12_specs_7 = {
	asn_MAP_LTE_mobilityHistoryAvail_r12_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_mobilityHistoryAvail_r12_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_mobilityHistoryAvail_r12_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_mobilityHistoryAvail_r12_7 = {
	"mobilityHistoryAvail-r12",
	"mobilityHistoryAvail-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_mobilityHistoryAvail_r12_tags_7,
	sizeof(asn_DEF_LTE_mobilityHistoryAvail_r12_tags_7)
		/sizeof(asn_DEF_LTE_mobilityHistoryAvail_r12_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_mobilityHistoryAvail_r12_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_mobilityHistoryAvail_r12_tags_7)
		/sizeof(asn_DEF_LTE_mobilityHistoryAvail_r12_tags_7[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_mobilityHistoryAvail_r12_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_mobilityHistoryAvail_r12_specs_7	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_logMeasAvailableMBSFN_r12_value2enum_9[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_logMeasAvailableMBSFN_r12_enum2value_9[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_logMeasAvailableMBSFN_r12_specs_9 = {
	asn_MAP_LTE_logMeasAvailableMBSFN_r12_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_logMeasAvailableMBSFN_r12_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_logMeasAvailableMBSFN_r12_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_logMeasAvailableMBSFN_r12_9 = {
	"logMeasAvailableMBSFN-r12",
	"logMeasAvailableMBSFN-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_logMeasAvailableMBSFN_r12_tags_9,
	sizeof(asn_DEF_LTE_logMeasAvailableMBSFN_r12_tags_9)
		/sizeof(asn_DEF_LTE_logMeasAvailableMBSFN_r12_tags_9[0]) - 1, /* 1 */
	asn_DEF_LTE_logMeasAvailableMBSFN_r12_tags_9,	/* Same as above */
	sizeof(asn_DEF_LTE_logMeasAvailableMBSFN_r12_tags_9)
		/sizeof(asn_DEF_LTE_logMeasAvailableMBSFN_r12_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_logMeasAvailableMBSFN_r12_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_logMeasAvailableMBSFN_r12_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RRCConnectionSetupComplete_v1250_IEs_1[] = {
	{ ATF_POINTER, 4, offsetof(struct LTE_RRCConnectionSetupComplete_v1250_IEs, mobilityState_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_mobilityState_r12_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityState-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_RRCConnectionSetupComplete_v1250_IEs, mobilityHistoryAvail_r12),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_mobilityHistoryAvail_r12_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityHistoryAvail-r12"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RRCConnectionSetupComplete_v1250_IEs, logMeasAvailableMBSFN_r12),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_logMeasAvailableMBSFN_r12_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logMeasAvailableMBSFN-r12"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCConnectionSetupComplete_v1250_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RRCConnectionSetupComplete_v1320_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_RRCConnectionSetupComplete_v1250_IEs_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_LTE_RRCConnectionSetupComplete_v1250_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RRCConnectionSetupComplete_v1250_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mobilityState-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mobilityHistoryAvail-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* logMeasAvailableMBSFN-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionSetupComplete_v1250_IEs_specs_1 = {
	sizeof(struct LTE_RRCConnectionSetupComplete_v1250_IEs),
	offsetof(struct LTE_RRCConnectionSetupComplete_v1250_IEs, _asn_ctx),
	asn_MAP_LTE_RRCConnectionSetupComplete_v1250_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LTE_RRCConnectionSetupComplete_v1250_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionSetupComplete_v1250_IEs = {
	"RRCConnectionSetupComplete-v1250-IEs",
	"RRCConnectionSetupComplete-v1250-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RRCConnectionSetupComplete_v1250_IEs_tags_1,
	sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_v1250_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_v1250_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_RRCConnectionSetupComplete_v1250_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_v1250_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionSetupComplete_v1250_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_RRCConnectionSetupComplete_v1250_IEs_1,
	4,	/* Elements count */
	&asn_SPC_LTE_RRCConnectionSetupComplete_v1250_IEs_specs_1	/* Additional specs */
};

