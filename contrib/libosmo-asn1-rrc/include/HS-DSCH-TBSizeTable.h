/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_HS_DSCH_TBSizeTable_H_
#define	_HS_DSCH_TBSizeTable_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HS_DSCH_TBSizeTable {
	HS_DSCH_TBSizeTable_octetAligned	= 0
} e_HS_DSCH_TBSizeTable;

/* HS-DSCH-TBSizeTable */
typedef long	 HS_DSCH_TBSizeTable_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HS_DSCH_TBSizeTable;
asn_struct_free_f HS_DSCH_TBSizeTable_free;
asn_struct_print_f HS_DSCH_TBSizeTable_print;
asn_constr_check_f HS_DSCH_TBSizeTable_constraint;
ber_type_decoder_f HS_DSCH_TBSizeTable_decode_ber;
der_type_encoder_f HS_DSCH_TBSizeTable_encode_der;
xer_type_decoder_f HS_DSCH_TBSizeTable_decode_xer;
xer_type_encoder_f HS_DSCH_TBSizeTable_encode_xer;
per_type_decoder_f HS_DSCH_TBSizeTable_decode_uper;
per_type_encoder_f HS_DSCH_TBSizeTable_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _HS_DSCH_TBSizeTable_H_ */
#include <asn_internal.h>