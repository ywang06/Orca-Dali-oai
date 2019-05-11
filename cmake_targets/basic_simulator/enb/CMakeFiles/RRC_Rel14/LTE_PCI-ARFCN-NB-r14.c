/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_PCI-ARFCN-NB-r14.h"

asn_TYPE_member_t asn_MBR_LTE_PCI_ARFCN_NB_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_PCI_ARFCN_NB_r14, physCellId_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_PCI_ARFCN_NB_r14, carrierFreq_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_CarrierFreq_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r14"
		},
};
static const int asn_MAP_LTE_PCI_ARFCN_NB_r14_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_LTE_PCI_ARFCN_NB_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_PCI_ARFCN_NB_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* carrierFreq-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_PCI_ARFCN_NB_r14_specs_1 = {
	sizeof(struct LTE_PCI_ARFCN_NB_r14),
	offsetof(struct LTE_PCI_ARFCN_NB_r14, _asn_ctx),
	asn_MAP_LTE_PCI_ARFCN_NB_r14_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_LTE_PCI_ARFCN_NB_r14_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_PCI_ARFCN_NB_r14 = {
	"PCI-ARFCN-NB-r14",
	"PCI-ARFCN-NB-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_PCI_ARFCN_NB_r14_tags_1,
	sizeof(asn_DEF_LTE_PCI_ARFCN_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_PCI_ARFCN_NB_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_PCI_ARFCN_NB_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_PCI_ARFCN_NB_r14_tags_1)
		/sizeof(asn_DEF_LTE_PCI_ARFCN_NB_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_PCI_ARFCN_NB_r14_1,
	2,	/* Elements count */
	&asn_SPC_LTE_PCI_ARFCN_NB_r14_specs_1	/* Additional specs */
};

