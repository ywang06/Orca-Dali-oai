/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#include "S1AP_L3-Information.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_S1AP_L3_Information_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1AP_L3_Information = {
	"L3-Information",
	"L3-Information",
	&asn_OP_OCTET_STRING,
	asn_DEF_S1AP_L3_Information_tags_1,
	sizeof(asn_DEF_S1AP_L3_Information_tags_1)
		/sizeof(asn_DEF_S1AP_L3_Information_tags_1[0]), /* 1 */
	asn_DEF_S1AP_L3_Information_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_L3_Information_tags_1)
		/sizeof(asn_DEF_S1AP_L3_Information_tags_1[0]), /* 1 */
	{ 0, 0, OCTET_STRING_constraint },
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

