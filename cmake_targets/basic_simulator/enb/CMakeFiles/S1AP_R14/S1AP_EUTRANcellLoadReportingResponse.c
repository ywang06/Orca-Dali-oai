/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#include "S1AP_EUTRANcellLoadReportingResponse.h"

asn_TYPE_member_t asn_MBR_S1AP_EUTRANcellLoadReportingResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1AP_EUTRANcellLoadReportingResponse, compositeAvailableCapacityGroup),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_CompositeAvailableCapacityGroup,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"compositeAvailableCapacityGroup"
		},
};
static const ber_tlv_tag_t asn_DEF_S1AP_EUTRANcellLoadReportingResponse_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_EUTRANcellLoadReportingResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* compositeAvailableCapacityGroup */
};
asn_SEQUENCE_specifics_t asn_SPC_S1AP_EUTRANcellLoadReportingResponse_specs_1 = {
	sizeof(struct S1AP_EUTRANcellLoadReportingResponse),
	offsetof(struct S1AP_EUTRANcellLoadReportingResponse, _asn_ctx),
	asn_MAP_S1AP_EUTRANcellLoadReportingResponse_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_EUTRANcellLoadReportingResponse = {
	"EUTRANcellLoadReportingResponse",
	"EUTRANcellLoadReportingResponse",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_EUTRANcellLoadReportingResponse_tags_1,
	sizeof(asn_DEF_S1AP_EUTRANcellLoadReportingResponse_tags_1)
		/sizeof(asn_DEF_S1AP_EUTRANcellLoadReportingResponse_tags_1[0]), /* 1 */
	asn_DEF_S1AP_EUTRANcellLoadReportingResponse_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_EUTRANcellLoadReportingResponse_tags_1)
		/sizeof(asn_DEF_S1AP_EUTRANcellLoadReportingResponse_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_EUTRANcellLoadReportingResponse_1,
	1,	/* Elements count */
	&asn_SPC_S1AP_EUTRANcellLoadReportingResponse_specs_1	/* Additional specs */
};

