/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#include "X2AP_ReportingPeriodicityCSIR.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_X2AP_ReportingPeriodicityCSIR_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_X2AP_ReportingPeriodicityCSIR_value2enum_1[] = {
	{ 0,	3,	"ms5" },
	{ 1,	4,	"ms10" },
	{ 2,	4,	"ms20" },
	{ 3,	4,	"ms40" },
	{ 4,	4,	"ms80" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_X2AP_ReportingPeriodicityCSIR_enum2value_1[] = {
	1,	/* ms10(1) */
	2,	/* ms20(2) */
	3,	/* ms40(3) */
	0,	/* ms5(0) */
	4	/* ms80(4) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_X2AP_ReportingPeriodicityCSIR_specs_1 = {
	asn_MAP_X2AP_ReportingPeriodicityCSIR_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_X2AP_ReportingPeriodicityCSIR_enum2value_1,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	6,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_X2AP_ReportingPeriodicityCSIR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_X2AP_ReportingPeriodicityCSIR = {
	"ReportingPeriodicityCSIR",
	"ReportingPeriodicityCSIR",
	&asn_OP_NativeEnumerated,
	asn_DEF_X2AP_ReportingPeriodicityCSIR_tags_1,
	sizeof(asn_DEF_X2AP_ReportingPeriodicityCSIR_tags_1)
		/sizeof(asn_DEF_X2AP_ReportingPeriodicityCSIR_tags_1[0]), /* 1 */
	asn_DEF_X2AP_ReportingPeriodicityCSIR_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_ReportingPeriodicityCSIR_tags_1)
		/sizeof(asn_DEF_X2AP_ReportingPeriodicityCSIR_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_X2AP_ReportingPeriodicityCSIR_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_X2AP_ReportingPeriodicityCSIR_specs_1	/* Additional specs */
};

