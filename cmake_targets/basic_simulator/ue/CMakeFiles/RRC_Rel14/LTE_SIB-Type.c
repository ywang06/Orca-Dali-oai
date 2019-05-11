/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SIB-Type.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LTE_SIB_Type_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  15 }	/* (0..15,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_SIB_Type_value2enum_1[] = {
	{ 0,	8,	"sibType3" },
	{ 1,	8,	"sibType4" },
	{ 2,	8,	"sibType5" },
	{ 3,	8,	"sibType6" },
	{ 4,	8,	"sibType7" },
	{ 5,	8,	"sibType8" },
	{ 6,	8,	"sibType9" },
	{ 7,	9,	"sibType10" },
	{ 8,	9,	"sibType11" },
	{ 9,	14,	"sibType12-v920" },
	{ 10,	14,	"sibType13-v920" },
	{ 11,	15,	"sibType14-v1130" },
	{ 12,	15,	"sibType15-v1130" },
	{ 13,	15,	"sibType16-v1130" },
	{ 14,	15,	"sibType17-v1250" },
	{ 15,	15,	"sibType18-v1250" },
	{ 16,	15,	"sibType19-v1250" },
	{ 17,	15,	"sibType20-v1310" },
	{ 18,	15,	"sibType21-v1430" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_LTE_SIB_Type_enum2value_1[] = {
	7,	/* sibType10(7) */
	8,	/* sibType11(8) */
	9,	/* sibType12-v920(9) */
	10,	/* sibType13-v920(10) */
	11,	/* sibType14-v1130(11) */
	12,	/* sibType15-v1130(12) */
	13,	/* sibType16-v1130(13) */
	14,	/* sibType17-v1250(14) */
	15,	/* sibType18-v1250(15) */
	16,	/* sibType19-v1250(16) */
	17,	/* sibType20-v1310(17) */
	18,	/* sibType21-v1430(18) */
	0,	/* sibType3(0) */
	1,	/* sibType4(1) */
	2,	/* sibType5(2) */
	3,	/* sibType6(3) */
	4,	/* sibType7(4) */
	5,	/* sibType8(5) */
	6	/* sibType9(6) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_SIB_Type_specs_1 = {
	asn_MAP_LTE_SIB_Type_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_SIB_Type_enum2value_1,	/* N => "tag"; sorted by N */
	19,	/* Number of elements in the maps */
	17,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_SIB_Type_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_SIB_Type = {
	"SIB-Type",
	"SIB-Type",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_SIB_Type_tags_1,
	sizeof(asn_DEF_LTE_SIB_Type_tags_1)
		/sizeof(asn_DEF_LTE_SIB_Type_tags_1[0]), /* 1 */
	asn_DEF_LTE_SIB_Type_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SIB_Type_tags_1)
		/sizeof(asn_DEF_LTE_SIB_Type_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LTE_SIB_Type_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_SIB_Type_specs_1	/* Additional specs */
};

