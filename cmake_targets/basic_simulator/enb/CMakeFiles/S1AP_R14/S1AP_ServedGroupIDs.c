/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#include "S1AP_ServedGroupIDs.h"

asn_per_constraints_t asn_PER_type_S1AP_ServedGroupIDs_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_S1AP_ServedGroupIDs_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_S1AP_MME_Group_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_ServedGroupIDs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_S1AP_ServedGroupIDs_specs_1 = {
	sizeof(struct S1AP_ServedGroupIDs),
	offsetof(struct S1AP_ServedGroupIDs, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_ServedGroupIDs = {
	"ServedGroupIDs",
	"ServedGroupIDs",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1AP_ServedGroupIDs_tags_1,
	sizeof(asn_DEF_S1AP_ServedGroupIDs_tags_1)
		/sizeof(asn_DEF_S1AP_ServedGroupIDs_tags_1[0]), /* 1 */
	asn_DEF_S1AP_ServedGroupIDs_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_ServedGroupIDs_tags_1)
		/sizeof(asn_DEF_S1AP_ServedGroupIDs_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_ServedGroupIDs_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_S1AP_ServedGroupIDs_1,
	1,	/* Single element */
	&asn_SPC_S1AP_ServedGroupIDs_specs_1	/* Additional specs */
};

