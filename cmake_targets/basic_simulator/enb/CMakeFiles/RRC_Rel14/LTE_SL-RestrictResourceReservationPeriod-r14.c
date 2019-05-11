/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SL-RestrictResourceReservationPeriod-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LTE_SL_RestrictResourceReservationPeriod_r14_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_SL_RestrictResourceReservationPeriod_r14_value2enum_1[] = {
	{ 0,	6,	"v0dot2" },
	{ 1,	6,	"v0dot5" },
	{ 2,	2,	"v1" },
	{ 3,	2,	"v2" },
	{ 4,	2,	"v3" },
	{ 5,	2,	"v4" },
	{ 6,	2,	"v5" },
	{ 7,	2,	"v6" },
	{ 8,	2,	"v7" },
	{ 9,	2,	"v8" },
	{ 10,	2,	"v9" },
	{ 11,	3,	"v10" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_SL_RestrictResourceReservationPeriod_r14_enum2value_1[] = {
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	0,	/* v0dot2(0) */
	1,	/* v0dot5(1) */
	2,	/* v1(2) */
	11,	/* v10(11) */
	3,	/* v2(3) */
	4,	/* v3(4) */
	5,	/* v4(5) */
	6,	/* v5(6) */
	7,	/* v6(7) */
	8,	/* v7(8) */
	9,	/* v8(9) */
	10	/* v9(10) */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_SL_RestrictResourceReservationPeriod_r14_specs_1 = {
	asn_MAP_LTE_SL_RestrictResourceReservationPeriod_r14_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_SL_RestrictResourceReservationPeriod_r14_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_SL_RestrictResourceReservationPeriod_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_SL_RestrictResourceReservationPeriod_r14 = {
	"SL-RestrictResourceReservationPeriod-r14",
	"SL-RestrictResourceReservationPeriod-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_SL_RestrictResourceReservationPeriod_r14_tags_1,
	sizeof(asn_DEF_LTE_SL_RestrictResourceReservationPeriod_r14_tags_1)
		/sizeof(asn_DEF_LTE_SL_RestrictResourceReservationPeriod_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_SL_RestrictResourceReservationPeriod_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SL_RestrictResourceReservationPeriod_r14_tags_1)
		/sizeof(asn_DEF_LTE_SL_RestrictResourceReservationPeriod_r14_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LTE_SL_RestrictResourceReservationPeriod_r14_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_SL_RestrictResourceReservationPeriod_r14_specs_1	/* Additional specs */
};

