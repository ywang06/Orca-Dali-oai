/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#include "X2AP_RNTP-Threshold.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_X2AP_RNTP_Threshold_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  15 }	/* (0..15,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_X2AP_RNTP_Threshold_value2enum_1[] = {
	{ 0,	13,	"minusInfinity" },
	{ 1,	11,	"minusEleven" },
	{ 2,	8,	"minusTen" },
	{ 3,	9,	"minusNine" },
	{ 4,	10,	"minusEight" },
	{ 5,	10,	"minusSeven" },
	{ 6,	8,	"minusSix" },
	{ 7,	9,	"minusFive" },
	{ 8,	9,	"minusFour" },
	{ 9,	10,	"minusThree" },
	{ 10,	8,	"minusTwo" },
	{ 11,	8,	"minusOne" },
	{ 12,	4,	"zero" },
	{ 13,	3,	"one" },
	{ 14,	3,	"two" },
	{ 15,	5,	"three" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_X2AP_RNTP_Threshold_enum2value_1[] = {
	4,	/* minusEight(4) */
	1,	/* minusEleven(1) */
	7,	/* minusFive(7) */
	8,	/* minusFour(8) */
	0,	/* minusInfinity(0) */
	3,	/* minusNine(3) */
	11,	/* minusOne(11) */
	5,	/* minusSeven(5) */
	6,	/* minusSix(6) */
	2,	/* minusTen(2) */
	9,	/* minusThree(9) */
	10,	/* minusTwo(10) */
	13,	/* one(13) */
	15,	/* three(15) */
	14,	/* two(14) */
	12	/* zero(12) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_X2AP_RNTP_Threshold_specs_1 = {
	asn_MAP_X2AP_RNTP_Threshold_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_X2AP_RNTP_Threshold_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	17,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_X2AP_RNTP_Threshold_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_X2AP_RNTP_Threshold = {
	"RNTP-Threshold",
	"RNTP-Threshold",
	&asn_OP_NativeEnumerated,
	asn_DEF_X2AP_RNTP_Threshold_tags_1,
	sizeof(asn_DEF_X2AP_RNTP_Threshold_tags_1)
		/sizeof(asn_DEF_X2AP_RNTP_Threshold_tags_1[0]), /* 1 */
	asn_DEF_X2AP_RNTP_Threshold_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_RNTP_Threshold_tags_1)
		/sizeof(asn_DEF_X2AP_RNTP_Threshold_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_X2AP_RNTP_Threshold_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_X2AP_RNTP_Threshold_specs_1	/* Additional specs */
};

