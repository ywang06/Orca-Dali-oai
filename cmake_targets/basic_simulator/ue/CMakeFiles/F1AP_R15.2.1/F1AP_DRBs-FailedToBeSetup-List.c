/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Contents"
 * 	found in "/home/carlos/dualCon/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-PDU-Contents.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/F1AP_R15.2.1`
 */

#include "F1AP_DRBs-FailedToBeSetup-List.h"

#include "F1AP_ProtocolIE-SingleContainer.h"
static asn_oer_constraints_t asn_OER_type_F1AP_DRBs_FailedToBeSetup_List_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..64)) */};
static asn_per_constraints_t asn_PER_type_F1AP_DRBs_FailedToBeSetup_List_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_F1AP_DRBs_FailedToBeSetup_List_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_F1AP_ProtocolIE_SingleContainer_126P23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_F1AP_DRBs_FailedToBeSetup_List_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_F1AP_DRBs_FailedToBeSetup_List_specs_1 = {
	sizeof(struct F1AP_DRBs_FailedToBeSetup_List),
	offsetof(struct F1AP_DRBs_FailedToBeSetup_List, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_F1AP_DRBs_FailedToBeSetup_List = {
	"DRBs-FailedToBeSetup-List",
	"DRBs-FailedToBeSetup-List",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_F1AP_DRBs_FailedToBeSetup_List_tags_1,
	sizeof(asn_DEF_F1AP_DRBs_FailedToBeSetup_List_tags_1)
		/sizeof(asn_DEF_F1AP_DRBs_FailedToBeSetup_List_tags_1[0]), /* 1 */
	asn_DEF_F1AP_DRBs_FailedToBeSetup_List_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_DRBs_FailedToBeSetup_List_tags_1)
		/sizeof(asn_DEF_F1AP_DRBs_FailedToBeSetup_List_tags_1[0]), /* 1 */
	{ &asn_OER_type_F1AP_DRBs_FailedToBeSetup_List_constr_1, &asn_PER_type_F1AP_DRBs_FailedToBeSetup_List_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_F1AP_DRBs_FailedToBeSetup_List_1,
	1,	/* Single element */
	&asn_SPC_F1AP_DRBs_FailedToBeSetup_List_specs_1	/* Additional specs */
};

