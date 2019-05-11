/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/S1AP_R14`
 */

#include "S1AP_PagingPriority.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_S1AP_PagingPriority_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_S1AP_PagingPriority_value2enum_1[] = {
	{ 0,	10,	"priolevel1" },
	{ 1,	10,	"priolevel2" },
	{ 2,	10,	"priolevel3" },
	{ 3,	10,	"priolevel4" },
	{ 4,	10,	"priolevel5" },
	{ 5,	10,	"priolevel6" },
	{ 6,	10,	"priolevel7" },
	{ 7,	10,	"priolevel8" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_S1AP_PagingPriority_enum2value_1[] = {
	0,	/* priolevel1(0) */
	1,	/* priolevel2(1) */
	2,	/* priolevel3(2) */
	3,	/* priolevel4(3) */
	4,	/* priolevel5(4) */
	5,	/* priolevel6(5) */
	6,	/* priolevel7(6) */
	7	/* priolevel8(7) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_S1AP_PagingPriority_specs_1 = {
	asn_MAP_S1AP_PagingPriority_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_S1AP_PagingPriority_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	9,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_S1AP_PagingPriority_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1AP_PagingPriority = {
	"PagingPriority",
	"PagingPriority",
	&asn_OP_NativeEnumerated,
	asn_DEF_S1AP_PagingPriority_tags_1,
	sizeof(asn_DEF_S1AP_PagingPriority_tags_1)
		/sizeof(asn_DEF_S1AP_PagingPriority_tags_1[0]), /* 1 */
	asn_DEF_S1AP_PagingPriority_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_PagingPriority_tags_1)
		/sizeof(asn_DEF_S1AP_PagingPriority_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_PagingPriority_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_S1AP_PagingPriority_specs_1	/* Additional specs */
};

