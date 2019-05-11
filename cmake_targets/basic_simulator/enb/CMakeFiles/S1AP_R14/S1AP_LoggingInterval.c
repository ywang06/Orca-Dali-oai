/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#include "S1AP_LoggingInterval.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_S1AP_LoggingInterval_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_S1AP_LoggingInterval_value2enum_1[] = {
	{ 0,	5,	"ms128" },
	{ 1,	5,	"ms256" },
	{ 2,	5,	"ms512" },
	{ 3,	6,	"ms1024" },
	{ 4,	6,	"ms2048" },
	{ 5,	6,	"ms3072" },
	{ 6,	6,	"ms4096" },
	{ 7,	6,	"ms6144" }
};
static const unsigned int asn_MAP_S1AP_LoggingInterval_enum2value_1[] = {
	3,	/* ms1024(3) */
	0,	/* ms128(0) */
	4,	/* ms2048(4) */
	1,	/* ms256(1) */
	5,	/* ms3072(5) */
	6,	/* ms4096(6) */
	2,	/* ms512(2) */
	7	/* ms6144(7) */
};
const asn_INTEGER_specifics_t asn_SPC_S1AP_LoggingInterval_specs_1 = {
	asn_MAP_S1AP_LoggingInterval_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_S1AP_LoggingInterval_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_S1AP_LoggingInterval_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1AP_LoggingInterval = {
	"LoggingInterval",
	"LoggingInterval",
	&asn_OP_NativeEnumerated,
	asn_DEF_S1AP_LoggingInterval_tags_1,
	sizeof(asn_DEF_S1AP_LoggingInterval_tags_1)
		/sizeof(asn_DEF_S1AP_LoggingInterval_tags_1[0]), /* 1 */
	asn_DEF_S1AP_LoggingInterval_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_LoggingInterval_tags_1)
		/sizeof(asn_DEF_S1AP_LoggingInterval_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_LoggingInterval_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_S1AP_LoggingInterval_specs_1	/* Additional specs */
};

