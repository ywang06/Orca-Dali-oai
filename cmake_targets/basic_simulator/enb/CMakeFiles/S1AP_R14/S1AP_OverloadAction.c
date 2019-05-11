/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#include "S1AP_OverloadAction.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_S1AP_OverloadAction_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_S1AP_OverloadAction_value2enum_1[] = {
	{ 0,	26,	"reject-non-emergency-mo-dt" },
	{ 1,	24,	"reject-rrc-cr-signalling" },
	{ 2,	61,	"permit-emergency-sessions-and-mobile-terminated-services-only" },
	{ 3,	65,	"permit-high-priority-sessions-and-mobile-terminated-services-only" },
	{ 4,	28,	"reject-delay-tolerant-access" },
	{ 5,	89,	"permit-high-priority-sessions-and-exception-reporting-and-mobile-terminated-services-only" },
	{ 6,	56,	"not-accept-mo-data-or-delay-tolerant-access-from-CP-CIoT" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_S1AP_OverloadAction_enum2value_1[] = {
	6,	/* not-accept-mo-data-or-delay-tolerant-access-from-CP-CIoT(6) */
	2,	/* permit-emergency-sessions-and-mobile-terminated-services-only(2) */
	5,	/* permit-high-priority-sessions-and-exception-reporting-and-mobile-terminated-services-only(5) */
	3,	/* permit-high-priority-sessions-and-mobile-terminated-services-only(3) */
	4,	/* reject-delay-tolerant-access(4) */
	0,	/* reject-non-emergency-mo-dt(0) */
	1	/* reject-rrc-cr-signalling(1) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_S1AP_OverloadAction_specs_1 = {
	asn_MAP_S1AP_OverloadAction_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_S1AP_OverloadAction_enum2value_1,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_S1AP_OverloadAction_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1AP_OverloadAction = {
	"OverloadAction",
	"OverloadAction",
	&asn_OP_NativeEnumerated,
	asn_DEF_S1AP_OverloadAction_tags_1,
	sizeof(asn_DEF_S1AP_OverloadAction_tags_1)
		/sizeof(asn_DEF_S1AP_OverloadAction_tags_1[0]), /* 1 */
	asn_DEF_S1AP_OverloadAction_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_OverloadAction_tags_1)
		/sizeof(asn_DEF_S1AP_OverloadAction_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_OverloadAction_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_S1AP_OverloadAction_specs_1	/* Additional specs */
};

