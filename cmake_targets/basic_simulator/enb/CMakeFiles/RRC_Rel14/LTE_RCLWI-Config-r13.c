/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_RCLWI-Config-r13.h"

static asn_per_constraints_t asn_PER_type_LTE_command_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_steerToWLAN_r13_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RCLWI_Config_r13__command__steerToWLAN_r13, mobilityConfig_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_WLAN_Id_List_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mobilityConfig-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_steerToWLAN_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_steerToWLAN_r13_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* mobilityConfig-r13 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_steerToWLAN_r13_specs_3 = {
	sizeof(struct LTE_RCLWI_Config_r13__command__steerToWLAN_r13),
	offsetof(struct LTE_RCLWI_Config_r13__command__steerToWLAN_r13, _asn_ctx),
	asn_MAP_LTE_steerToWLAN_r13_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_steerToWLAN_r13_3 = {
	"steerToWLAN-r13",
	"steerToWLAN-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_steerToWLAN_r13_tags_3,
	sizeof(asn_DEF_LTE_steerToWLAN_r13_tags_3)
		/sizeof(asn_DEF_LTE_steerToWLAN_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_LTE_steerToWLAN_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_LTE_steerToWLAN_r13_tags_3)
		/sizeof(asn_DEF_LTE_steerToWLAN_r13_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_steerToWLAN_r13_3,
	1,	/* Elements count */
	&asn_SPC_LTE_steerToWLAN_r13_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_command_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RCLWI_Config_r13__command, choice.steerToWLAN_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_LTE_steerToWLAN_r13_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"steerToWLAN-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RCLWI_Config_r13__command, choice.steerToLTE_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"steerToLTE-r13"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_command_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* steerToWLAN-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* steerToLTE-r13 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_command_specs_2 = {
	sizeof(struct LTE_RCLWI_Config_r13__command),
	offsetof(struct LTE_RCLWI_Config_r13__command, _asn_ctx),
	offsetof(struct LTE_RCLWI_Config_r13__command, present),
	sizeof(((struct LTE_RCLWI_Config_r13__command *)0)->present),
	asn_MAP_LTE_command_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_command_2 = {
	"command",
	"command",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_command_constr_2, CHOICE_constraint },
	asn_MBR_LTE_command_2,
	2,	/* Elements count */
	&asn_SPC_LTE_command_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_RCLWI_Config_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_RCLWI_Config_r13, command),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_command_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"command"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_RCLWI_Config_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_RCLWI_Config_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* command */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_RCLWI_Config_r13_specs_1 = {
	sizeof(struct LTE_RCLWI_Config_r13),
	offsetof(struct LTE_RCLWI_Config_r13, _asn_ctx),
	asn_MAP_LTE_RCLWI_Config_r13_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_RCLWI_Config_r13 = {
	"RCLWI-Config-r13",
	"RCLWI-Config-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_RCLWI_Config_r13_tags_1,
	sizeof(asn_DEF_LTE_RCLWI_Config_r13_tags_1)
		/sizeof(asn_DEF_LTE_RCLWI_Config_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_RCLWI_Config_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_RCLWI_Config_r13_tags_1)
		/sizeof(asn_DEF_LTE_RCLWI_Config_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_RCLWI_Config_r13_1,
	1,	/* Elements count */
	&asn_SPC_LTE_RCLWI_Config_r13_specs_1	/* Additional specs */
};

