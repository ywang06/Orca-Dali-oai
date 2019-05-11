/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_DedicatedInfoCDMA2000.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_LTE_DedicatedInfoCDMA2000_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_DedicatedInfoCDMA2000 = {
	"DedicatedInfoCDMA2000",
	"DedicatedInfoCDMA2000",
	&asn_OP_OCTET_STRING,
	asn_DEF_LTE_DedicatedInfoCDMA2000_tags_1,
	sizeof(asn_DEF_LTE_DedicatedInfoCDMA2000_tags_1)
		/sizeof(asn_DEF_LTE_DedicatedInfoCDMA2000_tags_1[0]), /* 1 */
	asn_DEF_LTE_DedicatedInfoCDMA2000_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_DedicatedInfoCDMA2000_tags_1)
		/sizeof(asn_DEF_LTE_DedicatedInfoCDMA2000_tags_1[0]), /* 1 */
	{ 0, 0, OCTET_STRING_constraint },
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

