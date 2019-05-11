/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/carlos/dualCon/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/carlos/dualCon/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_LTE_IDC_Config_r11_H_
#define	_LTE_IDC_Config_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LTE_IDC_Config_r11__idc_Indication_r11 {
	LTE_IDC_Config_r11__idc_Indication_r11_setup	= 0
} e_LTE_IDC_Config_r11__idc_Indication_r11;
typedef enum LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11 {
	LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11_n2	= 0,
	LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11_n5	= 1,
	LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11_n10	= 2,
	LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11_n15	= 3,
	LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11_n20	= 4,
	LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11_n30	= 5,
	LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11_spare2	= 6,
	LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11_spare1	= 7
} e_LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialSubframes_r11;
typedef enum LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11 {
	LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11_sf200	= 0,
	LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11_sf500	= 1,
	LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11_sf1000	= 2,
	LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11_sf2000	= 3,
	LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11_spare4	= 4,
	LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11_spare3	= 5,
	LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11_spare2	= 6,
	LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11_spare1	= 7
} e_LTE_IDC_Config_r11__autonomousDenialParameters_r11__autonomousDenialValidity_r11;
typedef enum LTE_IDC_Config_r11__ext1__idc_Indication_UL_CA_r11 {
	LTE_IDC_Config_r11__ext1__idc_Indication_UL_CA_r11_setup	= 0
} e_LTE_IDC_Config_r11__ext1__idc_Indication_UL_CA_r11;
typedef enum LTE_IDC_Config_r11__ext2__idc_HardwareSharingIndication_r13 {
	LTE_IDC_Config_r11__ext2__idc_HardwareSharingIndication_r13_setup	= 0
} e_LTE_IDC_Config_r11__ext2__idc_HardwareSharingIndication_r13;

/* LTE_IDC-Config-r11 */
typedef struct LTE_IDC_Config_r11 {
	long	*idc_Indication_r11;	/* OPTIONAL */
	struct LTE_IDC_Config_r11__autonomousDenialParameters_r11 {
		long	 autonomousDenialSubframes_r11;
		long	 autonomousDenialValidity_r11;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *autonomousDenialParameters_r11;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct LTE_IDC_Config_r11__ext1 {
		long	*idc_Indication_UL_CA_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct LTE_IDC_Config_r11__ext2 {
		long	*idc_HardwareSharingIndication_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LTE_IDC_Config_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_idc_Indication_r11_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_autonomousDenialSubframes_r11_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_autonomousDenialValidity_r11_14;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_idc_Indication_UL_CA_r11_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_LTE_idc_HardwareSharingIndication_r13_28;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LTE_IDC_Config_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_LTE_IDC_Config_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_LTE_IDC_Config_r11_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _LTE_IDC_Config_r11_H_ */
#include <asn_internal.h>
