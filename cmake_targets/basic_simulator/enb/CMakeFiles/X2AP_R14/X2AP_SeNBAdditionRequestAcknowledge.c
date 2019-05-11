/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "/home/carlos/dualCon/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/X2AP_R14`
 */

#include "X2AP_SeNBAdditionRequestAcknowledge.h"

asn_TYPE_member_t asn_MBR_X2AP_SeNBAdditionRequestAcknowledge_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_SeNBAdditionRequestAcknowledge, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2AP_ProtocolIE_Container_4989P31,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_X2AP_SeNBAdditionRequestAcknowledge_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_SeNBAdditionRequestAcknowledge_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_X2AP_SeNBAdditionRequestAcknowledge_specs_1 = {
	sizeof(struct X2AP_SeNBAdditionRequestAcknowledge),
	offsetof(struct X2AP_SeNBAdditionRequestAcknowledge, _asn_ctx),
	asn_MAP_X2AP_SeNBAdditionRequestAcknowledge_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_SeNBAdditionRequestAcknowledge = {
	"SeNBAdditionRequestAcknowledge",
	"SeNBAdditionRequestAcknowledge",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_SeNBAdditionRequestAcknowledge_tags_1,
	sizeof(asn_DEF_X2AP_SeNBAdditionRequestAcknowledge_tags_1)
		/sizeof(asn_DEF_X2AP_SeNBAdditionRequestAcknowledge_tags_1[0]), /* 1 */
	asn_DEF_X2AP_SeNBAdditionRequestAcknowledge_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_SeNBAdditionRequestAcknowledge_tags_1)
		/sizeof(asn_DEF_X2AP_SeNBAdditionRequestAcknowledge_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_SeNBAdditionRequestAcknowledge_1,
	1,	/* Elements count */
	&asn_SPC_X2AP_SeNBAdditionRequestAcknowledge_specs_1	/* Additional specs */
};

