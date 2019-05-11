/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "/home/carlos/dualCon/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/S1AP_R14`
 */

#include "S1AP_E-RABNotToBeModifiedListBearerModInd.h"

int
S1AP_E_RABNotToBeModifiedListBearerModInd_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 256)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using S1AP_E_RAB_IE_ContainerList_1145P7,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_S1AP_E_RABNotToBeModifiedListBearerModInd_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_S1AP_E_RABNotToBeModifiedListBearerModInd_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1AP_E_RABNotToBeModifiedListBearerModInd = {
	"E-RABNotToBeModifiedListBearerModInd",
	"E-RABNotToBeModifiedListBearerModInd",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1AP_E_RABNotToBeModifiedListBearerModInd_tags_1,
	sizeof(asn_DEF_S1AP_E_RABNotToBeModifiedListBearerModInd_tags_1)
		/sizeof(asn_DEF_S1AP_E_RABNotToBeModifiedListBearerModInd_tags_1[0]), /* 1 */
	asn_DEF_S1AP_E_RABNotToBeModifiedListBearerModInd_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_E_RABNotToBeModifiedListBearerModInd_tags_1)
		/sizeof(asn_DEF_S1AP_E_RABNotToBeModifiedListBearerModInd_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_S1AP_E_RABNotToBeModifiedListBearerModInd_constr_1, S1AP_E_RABNotToBeModifiedListBearerModInd_constraint },
	asn_MBR_S1AP_ProtocolIE_ContainerList_6614P7_15,
	1,	/* Single element */
	&asn_SPC_S1AP_ProtocolIE_ContainerList_6614P7_specs_15	/* Additional specs */
};

