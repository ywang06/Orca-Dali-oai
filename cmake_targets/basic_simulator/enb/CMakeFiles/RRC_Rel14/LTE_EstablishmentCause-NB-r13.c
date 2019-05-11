/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_EstablishmentCause-NB-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_LTE_EstablishmentCause_NB_r13_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_EstablishmentCause_NB_r13_value2enum_1[] = {
	{ 0,	9,	"mt-Access" },
	{ 1,	13,	"mo-Signalling" },
	{ 2,	7,	"mo-Data" },
	{ 3,	16,	"mo-ExceptionData" },
	{ 4,	25,	"delayTolerantAccess-v1330" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_LTE_EstablishmentCause_NB_r13_enum2value_1[] = {
	4,	/* delayTolerantAccess-v1330(4) */
	2,	/* mo-Data(2) */
	3,	/* mo-ExceptionData(3) */
	1,	/* mo-Signalling(1) */
	0,	/* mt-Access(0) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5	/* spare3(5) */
};
const asn_INTEGER_specifics_t asn_SPC_LTE_EstablishmentCause_NB_r13_specs_1 = {
	asn_MAP_LTE_EstablishmentCause_NB_r13_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_EstablishmentCause_NB_r13_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_EstablishmentCause_NB_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LTE_EstablishmentCause_NB_r13 = {
	"EstablishmentCause-NB-r13",
	"EstablishmentCause-NB-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_EstablishmentCause_NB_r13_tags_1,
	sizeof(asn_DEF_LTE_EstablishmentCause_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_EstablishmentCause_NB_r13_tags_1[0]), /* 1 */
	asn_DEF_LTE_EstablishmentCause_NB_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_EstablishmentCause_NB_r13_tags_1)
		/sizeof(asn_DEF_LTE_EstablishmentCause_NB_r13_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_LTE_EstablishmentCause_NB_r13_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_EstablishmentCause_NB_r13_specs_1	/* Additional specs */
};

