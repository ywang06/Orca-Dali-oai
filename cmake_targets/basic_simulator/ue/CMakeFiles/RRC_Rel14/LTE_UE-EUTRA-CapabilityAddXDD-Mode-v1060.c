/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#include "LTE_UE-EUTRA-CapabilityAddXDD-Mode-v1060.h"

static int
memb_LTE_featureGroupIndRel10_v1060_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_LTE_featureGroupIndRel10_v1060_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  32,  32 }	/* (SIZE(32..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_LTE_ext1_7[] = {
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060__ext1, otdoa_PositioningCapabilities_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_OTDOA_PositioningCapabilities_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"otdoa-PositioningCapabilities-r10"
		},
};
static const int asn_MAP_LTE_ext1_oms_7[] = { 0 };
static const ber_tlv_tag_t asn_DEF_LTE_ext1_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_ext1_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* otdoa-PositioningCapabilities-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LTE_ext1_specs_7 = {
	sizeof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060__ext1),
	offsetof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060__ext1, _asn_ctx),
	asn_MAP_LTE_ext1_tag2el_7,
	1,	/* Count of tags in the map */
	asn_MAP_LTE_ext1_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_ext1_7 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_ext1_tags_7,
	sizeof(asn_DEF_LTE_ext1_tags_7)
		/sizeof(asn_DEF_LTE_ext1_tags_7[0]) - 1, /* 1 */
	asn_DEF_LTE_ext1_tags_7,	/* Same as above */
	sizeof(asn_DEF_LTE_ext1_tags_7)
		/sizeof(asn_DEF_LTE_ext1_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_ext1_7,
	1,	/* Elements count */
	&asn_SPC_LTE_ext1_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060_1[] = {
	{ ATF_POINTER, 5, offsetof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060, phyLayerParameters_v1060),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_PhyLayerParameters_v1020,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phyLayerParameters-v1060"
		},
	{ ATF_POINTER, 4, offsetof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060, featureGroupIndRel10_v1060),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_LTE_featureGroupIndRel10_v1060_constr_3,  memb_LTE_featureGroupIndRel10_v1060_constraint_1 },
		0, 0, /* No default value */
		"featureGroupIndRel10-v1060"
		},
	{ ATF_POINTER, 3, offsetof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060, interRAT_ParametersCDMA2000_v1060),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_IRAT_ParametersCDMA2000_1XRTT_v1020,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interRAT-ParametersCDMA2000-v1060"
		},
	{ ATF_POINTER, 2, offsetof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060, interRAT_ParametersUTRA_TDD_v1060),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_IRAT_ParametersUTRA_TDD_v1020,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interRAT-ParametersUTRA-TDD-v1060"
		},
	{ ATF_POINTER, 1, offsetof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_LTE_ext1_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* phyLayerParameters-v1060 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* featureGroupIndRel10-v1060 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* interRAT-ParametersCDMA2000-v1060 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* interRAT-ParametersUTRA-TDD-v1060 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060_specs_1 = {
	sizeof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060),
	offsetof(struct LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060, _asn_ctx),
	asn_MAP_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060_oms_1,	/* Optional members */
	4, 1,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060 = {
	"UE-EUTRA-CapabilityAddXDD-Mode-v1060",
	"UE-EUTRA-CapabilityAddXDD-Mode-v1060",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060_tags_1,
	sizeof(asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060_tags_1)
		/sizeof(asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060_tags_1[0]), /* 1 */
	asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060_tags_1)
		/sizeof(asn_DEF_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060_1,
	5,	/* Elements count */
	&asn_SPC_LTE_UE_EUTRA_CapabilityAddXDD_Mode_v1060_specs_1	/* Additional specs */
};

