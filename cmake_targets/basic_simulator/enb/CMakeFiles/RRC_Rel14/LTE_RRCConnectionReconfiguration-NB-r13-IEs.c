/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_RRCConnectionReconfiguration-NB-r13-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_dedicatedInfoNASList_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 2)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_dedicatedInfoNASList_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_fullConfig_r13_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_dedicatedInfoNASList_r13_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 1,  1,  1,  2 }	/* (SIZE(1..2)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_dedicatedInfoNASList_r13_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_LTE_DedicatedInfoNAS,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_dedicatedInfoNASList_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_LTE_dedicatedInfoNASList_r13_specs_2 = {
	sizeof(struct LTE_RRCConnectionReconfiguration_NB_r13_IEs__dedicatedInfoNASList_r13),
	offsetof(struct LTE_RRCConnectionReconfiguration_NB_r13_IEs__dedicatedInfoNASList_r13, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_dedicatedInfoNASList_r13_2 = {
	"dedicatedInfoNASList-r13",
	"dedicatedInfoNASList-r13",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_LTE_dedicatedInfoNASList_r13_tags_2,
	sizeof(asn_DEF_LTE_dedicatedInfoNASList_r13_tags_2)
		/sizeof(asn_DEF_LTE_dedicatedInfoNASList_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_dedicatedInfoNASList_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_dedicatedInfoNASList_r13_tags_2)
		/sizeof(asn_DEF_LTE_dedicatedInfoNASList_r13_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_dedicatedInfoNASList_r13_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_LTE_dedicatedInfoNASList_r13_2,
	1,	/* Single element */
	&asn_SPC_LTE_dedicatedInfoNASList_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_fullConfig_r13_value2enum_5[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_LTE_fullConfig_r13_enum2value_5[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_fullConfig_r13_specs_5 = {
	asn_MAP_LTE_fullConfig_r13_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_fullConfig_r13_enum2value_5,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_fullConfig_r13_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_fullConfig_r13_5 = {
	"fullConfig-r13",
	"fullConfig-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_fullConfig_r13_tags_5,
	sizeof(asn_DEF_LTE_fullConfig_r13_tags_5)
		/sizeof(asn_DEF_LTE_fullConfig_r13_tags_5[0]) - 1, /* 1 */
	asn_DEF_LTE_fullConfig_r13_tags_5,	/* Same as above */
	sizeof(asn_DEF_LTE_fullConfig_r13_tags_5)
		/sizeof(asn_DEF_LTE_fullConfig_r13_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_fullConfig_r13_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_fullConfig_r13_specs_5	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_LTE_nonCriticalExtension_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_nonCriticalExtension_specs_8 = {
	sizeof(struct LTE_RRCConnectionReconfiguration_NB_r13_IEs__nonCriticalExtension),
	offsetof(struct LTE_RRCConnectionReconfiguration_NB_r13_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_nonCriticalExtension_8 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_nonCriticalExtension_tags_8,
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_8)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_8[0]) - 1, /* 1 */
	asn_DEF_LTE_nonCriticalExtension_tags_8,	/* Same as above */
	sizeof(asn_DEF_LTE_nonCriticalExtension_tags_8)
		/sizeof(asn_DEF_LTE_nonCriticalExtension_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_LTE_nonCriticalExtension_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RRCConnectionReconfiguration_NB_r13_IEs_1[] = {
	{ ATF_POINTER, 5, offsetof(struct LTE_RRCConnectionReconfiguration_NB_r13_IEs, dedicatedInfoNASList_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_dedicatedInfoNASList_r13_2,
		0,
		{ 0, &asn_PER_memb_LTE_dedicatedInfoNASList_r13_constr_2,  memb_LTE_dedicatedInfoNASList_r13_constraint_1 },
		0, 0, /* No default value */
		"dedicatedInfoNASList-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_RRCConnectionReconfiguration_NB_r13_IEs, radioResourceConfigDedicated_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_RadioResourceConfigDedicated_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigDedicated-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_RRCConnectionReconfiguration_NB_r13_IEs, fullConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_fullConfig_r13_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fullConfig-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_RRCConnectionReconfiguration_NB_r13_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_RRCConnectionReconfiguration_NB_r13_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LTE_nonCriticalExtension_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LTE_RRCConnectionReconfiguration_NB_r13_IEs_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_LTE_RRCConnectionReconfiguration_NB_r13_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RRCConnectionReconfiguration_NB_r13_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dedicatedInfoNASList-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* radioResourceConfigDedicated-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* fullConfig-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RRCConnectionReconfiguration_NB_r13_IEs_specs_1 = {
	sizeof(struct LTE_RRCConnectionReconfiguration_NB_r13_IEs),
	offsetof(struct LTE_RRCConnectionReconfiguration_NB_r13_IEs, _asn_ctx),
	asn_MAP_LTE_RRCConnectionReconfiguration_NB_r13_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LTE_RRCConnectionReconfiguration_NB_r13_IEs_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RRCConnectionReconfiguration_NB_r13_IEs = {
	"RRCConnectionReconfiguration-NB-r13-IEs",
	"RRCConnectionReconfiguration-NB-r13-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RRCConnectionReconfiguration_NB_r13_IEs_tags_1,
	sizeof(asn_DEF_LTE_RRCConnectionReconfiguration_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionReconfiguration_NB_r13_IEs_tags_1[0]), /* 1 */
	asn_DEF_LTE_RRCConnectionReconfiguration_NB_r13_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RRCConnectionReconfiguration_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_LTE_RRCConnectionReconfiguration_NB_r13_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_RRCConnectionReconfiguration_NB_r13_IEs_1,
	5,	/* Elements count */
	&asn_SPC_LTE_RRCConnectionReconfiguration_NB_r13_IEs_specs_1	/* Additional specs */
};

