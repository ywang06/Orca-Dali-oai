/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#include "X2AP_GUGroupIDList.h"

#include "X2AP_GU-Group-ID.h"
static asn_per_constraints_t asn_PER_type_X2AP_GUGroupIDList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_X2AP_GUGroupIDList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_X2AP_GU_Group_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_X2AP_GUGroupIDList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_X2AP_GUGroupIDList_specs_1 = {
	sizeof(struct X2AP_GUGroupIDList),
	offsetof(struct X2AP_GUGroupIDList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_GUGroupIDList = {
	"GUGroupIDList",
	"GUGroupIDList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_X2AP_GUGroupIDList_tags_1,
	sizeof(asn_DEF_X2AP_GUGroupIDList_tags_1)
		/sizeof(asn_DEF_X2AP_GUGroupIDList_tags_1[0]), /* 1 */
	asn_DEF_X2AP_GUGroupIDList_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_GUGroupIDList_tags_1)
		/sizeof(asn_DEF_X2AP_GUGroupIDList_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_X2AP_GUGroupIDList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_X2AP_GUGroupIDList_1,
	1,	/* Single element */
	&asn_SPC_X2AP_GUGroupIDList_specs_1	/* Additional specs */
};

