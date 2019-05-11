/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_CSI-RS-ConfigEMIMO2-r14.h"

asn_per_constraints_t asn_PER_type_LTE_CSI_RS_ConfigEMIMO2_r14_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LTE_CSI_RS_ConfigEMIMO2_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CSI_RS_ConfigEMIMO2_r14, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_CSI_RS_ConfigEMIMO2_r14, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CSI_RS_ConfigBeamformed_r14,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_CSI_RS_ConfigEMIMO2_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_LTE_CSI_RS_ConfigEMIMO2_r14_specs_1 = {
	sizeof(struct LTE_CSI_RS_ConfigEMIMO2_r14),
	offsetof(struct LTE_CSI_RS_ConfigEMIMO2_r14, _asn_ctx),
	offsetof(struct LTE_CSI_RS_ConfigEMIMO2_r14, present),
	sizeof(((struct LTE_CSI_RS_ConfigEMIMO2_r14 *)0)->present),
	asn_MAP_LTE_CSI_RS_ConfigEMIMO2_r14_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_LTE_CSI_RS_ConfigEMIMO2_r14 = {
	"CSI-RS-ConfigEMIMO2-r14",
	"CSI-RS-ConfigEMIMO2-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_CSI_RS_ConfigEMIMO2_r14_constr_1, CHOICE_constraint },
	asn_MBR_LTE_CSI_RS_ConfigEMIMO2_r14_1,
	2,	/* Elements count */
	&asn_SPC_LTE_CSI_RS_ConfigEMIMO2_r14_specs_1	/* Additional specs */
};

