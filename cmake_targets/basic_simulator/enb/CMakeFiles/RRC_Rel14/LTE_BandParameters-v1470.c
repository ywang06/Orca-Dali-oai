/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_BandParameters-v1470.h"

asn_TYPE_member_t asn_MBR_LTE_BandParameters_v1470_1[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_BandParameters_v1470, bandParametersDL_v1470),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_MIMO_CA_ParametersPerBoBC_v1470,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandParametersDL-v1470"
		},
};
static const int asn_MAP_LTE_BandParameters_v1470_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_BandParameters_v1470_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_BandParameters_v1470_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* bandParametersDL-v1470 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_BandParameters_v1470_specs_1 = {
	sizeof(struct LTE_BandParameters_v1470),
	offsetof(struct LTE_BandParameters_v1470, _asn_ctx),
	asn_MAP_LTE_BandParameters_v1470_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_BandParameters_v1470_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_BandParameters_v1470 = {
	"BandParameters-v1470",
	"BandParameters-v1470",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_BandParameters_v1470_tags_1,
	sizeof(asn_DEF_LTE_BandParameters_v1470_tags_1)
		/sizeof(asn_DEF_LTE_BandParameters_v1470_tags_1[0]), /* 1 */
	asn_DEF_LTE_BandParameters_v1470_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_BandParameters_v1470_tags_1)
		/sizeof(asn_DEF_LTE_BandParameters_v1470_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_BandParameters_v1470_1,
	1,	/* Elements count */
	&asn_SPC_LTE_BandParameters_v1470_specs_1	/* Additional specs */
};

