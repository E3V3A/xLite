/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "../asn/Internode-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_ImplementationSpecificParams_H_
#define	_ImplementationSpecificParams_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ImplementationSpecificParams */
typedef BIT_STRING_t	 ImplementationSpecificParams_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ImplementationSpecificParams;
asn_struct_free_f ImplementationSpecificParams_free;
asn_struct_print_f ImplementationSpecificParams_print;
asn_constr_check_f ImplementationSpecificParams_constraint;
ber_type_decoder_f ImplementationSpecificParams_decode_ber;
der_type_encoder_f ImplementationSpecificParams_encode_der;
xer_type_decoder_f ImplementationSpecificParams_decode_xer;
xer_type_encoder_f ImplementationSpecificParams_encode_xer;
per_type_decoder_f ImplementationSpecificParams_decode_uper;
per_type_encoder_f ImplementationSpecificParams_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ImplementationSpecificParams_H_ */
#include <asn_internal.h>