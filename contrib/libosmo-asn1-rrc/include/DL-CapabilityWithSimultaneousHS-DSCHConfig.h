/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_DL_CapabilityWithSimultaneousHS_DSCHConfig_H_
#define	_DL_CapabilityWithSimultaneousHS_DSCHConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_CapabilityWithSimultaneousHS_DSCHConfig {
	DL_CapabilityWithSimultaneousHS_DSCHConfig_kbps32	= 0,
	DL_CapabilityWithSimultaneousHS_DSCHConfig_kbps64	= 1,
	DL_CapabilityWithSimultaneousHS_DSCHConfig_kbps128	= 2,
	DL_CapabilityWithSimultaneousHS_DSCHConfig_kbps384	= 3
} e_DL_CapabilityWithSimultaneousHS_DSCHConfig;

/* DL-CapabilityWithSimultaneousHS-DSCHConfig */
typedef long	 DL_CapabilityWithSimultaneousHS_DSCHConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_CapabilityWithSimultaneousHS_DSCHConfig;
asn_struct_free_f DL_CapabilityWithSimultaneousHS_DSCHConfig_free;
asn_struct_print_f DL_CapabilityWithSimultaneousHS_DSCHConfig_print;
asn_constr_check_f DL_CapabilityWithSimultaneousHS_DSCHConfig_constraint;
ber_type_decoder_f DL_CapabilityWithSimultaneousHS_DSCHConfig_decode_ber;
der_type_encoder_f DL_CapabilityWithSimultaneousHS_DSCHConfig_encode_der;
xer_type_decoder_f DL_CapabilityWithSimultaneousHS_DSCHConfig_decode_xer;
xer_type_encoder_f DL_CapabilityWithSimultaneousHS_DSCHConfig_encode_xer;
per_type_decoder_f DL_CapabilityWithSimultaneousHS_DSCHConfig_decode_uper;
per_type_encoder_f DL_CapabilityWithSimultaneousHS_DSCHConfig_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_CapabilityWithSimultaneousHS_DSCHConfig_H_ */
#include <asn_internal.h>