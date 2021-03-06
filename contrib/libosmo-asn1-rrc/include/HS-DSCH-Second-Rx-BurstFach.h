/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_HS_DSCH_Second_Rx_BurstFach_H_
#define	_HS_DSCH_Second_Rx_BurstFach_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HS_DSCH_Second_Rx_BurstFach {
	HS_DSCH_Second_Rx_BurstFach_f1	= 0,
	HS_DSCH_Second_Rx_BurstFach_f2	= 1
} e_HS_DSCH_Second_Rx_BurstFach;

/* HS-DSCH-Second-Rx-BurstFach */
typedef long	 HS_DSCH_Second_Rx_BurstFach_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HS_DSCH_Second_Rx_BurstFach;
asn_struct_free_f HS_DSCH_Second_Rx_BurstFach_free;
asn_struct_print_f HS_DSCH_Second_Rx_BurstFach_print;
asn_constr_check_f HS_DSCH_Second_Rx_BurstFach_constraint;
ber_type_decoder_f HS_DSCH_Second_Rx_BurstFach_decode_ber;
der_type_encoder_f HS_DSCH_Second_Rx_BurstFach_encode_der;
xer_type_decoder_f HS_DSCH_Second_Rx_BurstFach_decode_xer;
xer_type_encoder_f HS_DSCH_Second_Rx_BurstFach_encode_xer;
per_type_decoder_f HS_DSCH_Second_Rx_BurstFach_decode_uper;
per_type_encoder_f HS_DSCH_Second_Rx_BurstFach_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _HS_DSCH_Second_Rx_BurstFach_H_ */
#include <asn_internal.h>
