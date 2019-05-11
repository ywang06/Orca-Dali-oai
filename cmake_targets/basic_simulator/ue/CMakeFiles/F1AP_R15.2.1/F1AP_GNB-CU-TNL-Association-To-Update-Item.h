/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "/home/carlos/dualCon/openair2/F1AP/MESSAGES/ASN1/R15.2.1/F1AP-IEs.asn"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example -findirect-choice -fno-include-deps -D /home/carlos/dualCon/cmake_targets/basic_simulator/ue/CMakeFiles/F1AP_R15.2.1`
 */

#ifndef	_F1AP_GNB_CU_TNL_Association_To_Update_Item_H_
#define	_F1AP_GNB_CU_TNL_Association_To_Update_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "F1AP_CP-TransportLayerAddress.h"
#include "F1AP_TNLAssociationUsage.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct F1AP_ProtocolExtensionContainer;

/* F1AP_GNB-CU-TNL-Association-To-Update-Item */
typedef struct F1AP_GNB_CU_TNL_Association_To_Update_Item {
	F1AP_CP_TransportLayerAddress_t	 tNLAssociationTransportLayerAddress;
	F1AP_TNLAssociationUsage_t	*tNLAssociationUsage;	/* OPTIONAL */
	struct F1AP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1AP_GNB_CU_TNL_Association_To_Update_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1AP_GNB_CU_TNL_Association_To_Update_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _F1AP_GNB_CU_TNL_Association_To_Update_Item_H_ */
#include <asn_internal.h>
