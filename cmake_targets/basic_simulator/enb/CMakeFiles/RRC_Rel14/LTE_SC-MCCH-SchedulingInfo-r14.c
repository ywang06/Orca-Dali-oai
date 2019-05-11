/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#include "LTE_SC-MCCH-SchedulingInfo-r14.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_LTE_sf10_constraint_28(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 9)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_sf20_constraint_28(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 19)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_sf32_constraint_28(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_sf40_constraint_28(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 39)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_sf64_constraint_28(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_sf80_constraint_28(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 79)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_sf128_constraint_28(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 127)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_sf160_constraint_28(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 159)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_sf256_constraint_28(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_sf320_constraint_28(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 319)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_sf512_constraint_28(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 511)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_sf640_constraint_28(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 639)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_sf1024_constraint_28(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_sf2048_constraint_28(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2047)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_sf4096_constraint_28(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 4095)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_LTE_sf8192_constraint_28(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 8191)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_LTE_onDurationTimerSCPTM_r14_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_drx_InactivityTimerSCPTM_r14_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sf10_constr_29 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  9 }	/* (0..9) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sf20_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  19 }	/* (0..19) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sf32_constr_31 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sf40_constr_32 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  39 }	/* (0..39) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sf64_constr_33 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sf80_constr_34 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  79 }	/* (0..79) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sf128_constr_35 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  127 }	/* (0..127) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sf160_constr_36 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  159 }	/* (0..159) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sf256_constr_37 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sf320_constr_38 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  319 }	/* (0..319) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sf512_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  511 }	/* (0..511) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sf640_constr_40 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  639 }	/* (0..639) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sf1024_constr_41 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sf2048_constr_42 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sf4096_constr_43 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 12,  12,  0,  4095 }	/* (0..4095) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_LTE_sf8192_constr_44 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 13,  13,  0,  8191 }	/* (0..8191) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_LTE_schedulingPeriodStartOffsetSCPTM_r14_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LTE_onDurationTimerSCPTM_r14_value2enum_2[] = {
	{ 0,	5,	"psf10" },
	{ 1,	5,	"psf20" },
	{ 2,	6,	"psf100" },
	{ 3,	6,	"psf300" },
	{ 4,	6,	"psf500" },
	{ 5,	7,	"psf1000" },
	{ 6,	7,	"psf1200" },
	{ 7,	7,	"psf1600" }
};
static const unsigned int asn_MAP_LTE_onDurationTimerSCPTM_r14_enum2value_2[] = {
	0,	/* psf10(0) */
	2,	/* psf100(2) */
	5,	/* psf1000(5) */
	6,	/* psf1200(6) */
	7,	/* psf1600(7) */
	1,	/* psf20(1) */
	3,	/* psf300(3) */
	4	/* psf500(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_onDurationTimerSCPTM_r14_specs_2 = {
	asn_MAP_LTE_onDurationTimerSCPTM_r14_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_onDurationTimerSCPTM_r14_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_onDurationTimerSCPTM_r14_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_onDurationTimerSCPTM_r14_2 = {
	"onDurationTimerSCPTM-r14",
	"onDurationTimerSCPTM-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_onDurationTimerSCPTM_r14_tags_2,
	sizeof(asn_DEF_LTE_onDurationTimerSCPTM_r14_tags_2)
		/sizeof(asn_DEF_LTE_onDurationTimerSCPTM_r14_tags_2[0]) - 1, /* 1 */
	asn_DEF_LTE_onDurationTimerSCPTM_r14_tags_2,	/* Same as above */
	sizeof(asn_DEF_LTE_onDurationTimerSCPTM_r14_tags_2)
		/sizeof(asn_DEF_LTE_onDurationTimerSCPTM_r14_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_onDurationTimerSCPTM_r14_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_onDurationTimerSCPTM_r14_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_LTE_drx_InactivityTimerSCPTM_r14_value2enum_11[] = {
	{ 0,	4,	"psf0" },
	{ 1,	4,	"psf1" },
	{ 2,	4,	"psf2" },
	{ 3,	4,	"psf4" },
	{ 4,	4,	"psf8" },
	{ 5,	5,	"psf16" },
	{ 6,	5,	"psf32" },
	{ 7,	5,	"psf64" },
	{ 8,	6,	"psf128" },
	{ 9,	6,	"psf256" },
	{ 10,	5,	"ps512" },
	{ 11,	7,	"psf1024" },
	{ 12,	7,	"psf2048" },
	{ 13,	7,	"psf4096" },
	{ 14,	7,	"psf8192" },
	{ 15,	8,	"psf16384" }
};
static const unsigned int asn_MAP_LTE_drx_InactivityTimerSCPTM_r14_enum2value_11[] = {
	10,	/* ps512(10) */
	0,	/* psf0(0) */
	1,	/* psf1(1) */
	11,	/* psf1024(11) */
	8,	/* psf128(8) */
	5,	/* psf16(5) */
	15,	/* psf16384(15) */
	2,	/* psf2(2) */
	12,	/* psf2048(12) */
	9,	/* psf256(9) */
	6,	/* psf32(6) */
	3,	/* psf4(3) */
	13,	/* psf4096(13) */
	7,	/* psf64(7) */
	4,	/* psf8(4) */
	14	/* psf8192(14) */
};
static const asn_INTEGER_specifics_t asn_SPC_LTE_drx_InactivityTimerSCPTM_r14_specs_11 = {
	asn_MAP_LTE_drx_InactivityTimerSCPTM_r14_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_LTE_drx_InactivityTimerSCPTM_r14_enum2value_11,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LTE_drx_InactivityTimerSCPTM_r14_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_drx_InactivityTimerSCPTM_r14_11 = {
	"drx-InactivityTimerSCPTM-r14",
	"drx-InactivityTimerSCPTM-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_LTE_drx_InactivityTimerSCPTM_r14_tags_11,
	sizeof(asn_DEF_LTE_drx_InactivityTimerSCPTM_r14_tags_11)
		/sizeof(asn_DEF_LTE_drx_InactivityTimerSCPTM_r14_tags_11[0]) - 1, /* 1 */
	asn_DEF_LTE_drx_InactivityTimerSCPTM_r14_tags_11,	/* Same as above */
	sizeof(asn_DEF_LTE_drx_InactivityTimerSCPTM_r14_tags_11)
		/sizeof(asn_DEF_LTE_drx_InactivityTimerSCPTM_r14_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_LTE_drx_InactivityTimerSCPTM_r14_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LTE_drx_InactivityTimerSCPTM_r14_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LTE_schedulingPeriodStartOffsetSCPTM_r14_28[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sf10_constr_29,  memb_LTE_sf10_constraint_28 },
		0, 0, /* No default value */
		"sf10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf20),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sf20_constr_30,  memb_LTE_sf20_constraint_28 },
		0, 0, /* No default value */
		"sf20"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf32),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sf32_constr_31,  memb_LTE_sf32_constraint_28 },
		0, 0, /* No default value */
		"sf32"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf40),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sf40_constr_32,  memb_LTE_sf40_constraint_28 },
		0, 0, /* No default value */
		"sf40"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf64),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sf64_constr_33,  memb_LTE_sf64_constraint_28 },
		0, 0, /* No default value */
		"sf64"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf80),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sf80_constr_34,  memb_LTE_sf80_constraint_28 },
		0, 0, /* No default value */
		"sf80"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf128),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sf128_constr_35,  memb_LTE_sf128_constraint_28 },
		0, 0, /* No default value */
		"sf128"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf160),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sf160_constr_36,  memb_LTE_sf160_constraint_28 },
		0, 0, /* No default value */
		"sf160"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf256),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sf256_constr_37,  memb_LTE_sf256_constraint_28 },
		0, 0, /* No default value */
		"sf256"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf320),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sf320_constr_38,  memb_LTE_sf320_constraint_28 },
		0, 0, /* No default value */
		"sf320"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf512),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sf512_constr_39,  memb_LTE_sf512_constraint_28 },
		0, 0, /* No default value */
		"sf512"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf640),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sf640_constr_40,  memb_LTE_sf640_constraint_28 },
		0, 0, /* No default value */
		"sf640"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf1024),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sf1024_constr_41,  memb_LTE_sf1024_constraint_28 },
		0, 0, /* No default value */
		"sf1024"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf2048),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sf2048_constr_42,  memb_LTE_sf2048_constraint_28 },
		0, 0, /* No default value */
		"sf2048"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf4096),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sf4096_constr_43,  memb_LTE_sf4096_constraint_28 },
		0, 0, /* No default value */
		"sf4096"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14, choice.sf8192),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_LTE_sf8192_constr_44,  memb_LTE_sf8192_constraint_28 },
		0, 0, /* No default value */
		"sf8192"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_schedulingPeriodStartOffsetSCPTM_r14_tag2el_28[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sf10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sf20 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sf32 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sf40 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sf64 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sf80 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* sf128 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* sf160 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* sf256 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* sf320 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* sf512 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* sf640 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* sf1024 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* sf2048 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* sf4096 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 } /* sf8192 */
};
static asn_CHOICE_specifics_t asn_SPC_LTE_schedulingPeriodStartOffsetSCPTM_r14_specs_28 = {
	sizeof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14),
	offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14, _asn_ctx),
	offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14, present),
	sizeof(((struct LTE_SC_MCCH_SchedulingInfo_r14__schedulingPeriodStartOffsetSCPTM_r14 *)0)->present),
	asn_MAP_LTE_schedulingPeriodStartOffsetSCPTM_r14_tag2el_28,
	16,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_LTE_schedulingPeriodStartOffsetSCPTM_r14_28 = {
	"schedulingPeriodStartOffsetSCPTM-r14",
	"schedulingPeriodStartOffsetSCPTM-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_LTE_schedulingPeriodStartOffsetSCPTM_r14_constr_28, CHOICE_constraint },
	asn_MBR_LTE_schedulingPeriodStartOffsetSCPTM_r14_28,
	16,	/* Elements count */
	&asn_SPC_LTE_schedulingPeriodStartOffsetSCPTM_r14_specs_28	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_LTE_SC_MCCH_SchedulingInfo_r14_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14, onDurationTimerSCPTM_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_onDurationTimerSCPTM_r14_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"onDurationTimerSCPTM-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14, drx_InactivityTimerSCPTM_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LTE_drx_InactivityTimerSCPTM_r14_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-InactivityTimerSCPTM-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14, schedulingPeriodStartOffsetSCPTM_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_LTE_schedulingPeriodStartOffsetSCPTM_r14_28,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"schedulingPeriodStartOffsetSCPTM-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_LTE_SC_MCCH_SchedulingInfo_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LTE_SC_MCCH_SchedulingInfo_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* onDurationTimerSCPTM-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drx-InactivityTimerSCPTM-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* schedulingPeriodStartOffsetSCPTM-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_LTE_SC_MCCH_SchedulingInfo_r14_specs_1 = {
	sizeof(struct LTE_SC_MCCH_SchedulingInfo_r14),
	offsetof(struct LTE_SC_MCCH_SchedulingInfo_r14, _asn_ctx),
	asn_MAP_LTE_SC_MCCH_SchedulingInfo_r14_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LTE_SC_MCCH_SchedulingInfo_r14 = {
	"SC-MCCH-SchedulingInfo-r14",
	"SC-MCCH-SchedulingInfo-r14",
	&asn_OP_SEQUENCE,
	asn_DEF_LTE_SC_MCCH_SchedulingInfo_r14_tags_1,
	sizeof(asn_DEF_LTE_SC_MCCH_SchedulingInfo_r14_tags_1)
		/sizeof(asn_DEF_LTE_SC_MCCH_SchedulingInfo_r14_tags_1[0]), /* 1 */
	asn_DEF_LTE_SC_MCCH_SchedulingInfo_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_LTE_SC_MCCH_SchedulingInfo_r14_tags_1)
		/sizeof(asn_DEF_LTE_SC_MCCH_SchedulingInfo_r14_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LTE_SC_MCCH_SchedulingInfo_r14_1,
	3,	/* Elements count */
	&asn_SPC_LTE_SC_MCCH_SchedulingInfo_r14_specs_1	/* Additional specs */
};

