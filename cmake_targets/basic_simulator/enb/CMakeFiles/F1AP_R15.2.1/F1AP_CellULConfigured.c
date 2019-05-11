/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/F1AP_R15.2.1`
 */

#include "F1AP_CellULConfigured.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_F1AP_CellULConfigured_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_F1AP_CellULConfigured_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_F1AP_CellULConfigured_value2enum_1[] = {
	{ 0,	4,	"none" },
	{ 1,	2,	"ul" },
	{ 2,	3,	"sul" },
	{ 3,	10,	"ul-and-sul" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_F1AP_CellULConfigured_enum2value_1[] = {
	0,	/* none(0) */
	2,	/* sul(2) */
	1,	/* ul(1) */
	3	/* ul-and-sul(3) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_F1AP_CellULConfigured_specs_1 = {
	asn_MAP_F1AP_CellULConfigured_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_F1AP_CellULConfigured_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_F1AP_CellULConfigured_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_F1AP_CellULConfigured = {
	"CellULConfigured",
	"CellULConfigured",
	&asn_OP_NativeEnumerated,
	asn_DEF_F1AP_CellULConfigured_tags_1,
	sizeof(asn_DEF_F1AP_CellULConfigured_tags_1)
		/sizeof(asn_DEF_F1AP_CellULConfigured_tags_1[0]), /* 1 */
	asn_DEF_F1AP_CellULConfigured_tags_1,	/* Same as above */
	sizeof(asn_DEF_F1AP_CellULConfigured_tags_1)
		/sizeof(asn_DEF_F1AP_CellULConfigured_tags_1[0]), /* 1 */
	{ &asn_OER_type_F1AP_CellULConfigured_constr_1, &asn_PER_type_F1AP_CellULConfigured_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_F1AP_CellULConfigured_specs_1	/* Additional specs */
};

