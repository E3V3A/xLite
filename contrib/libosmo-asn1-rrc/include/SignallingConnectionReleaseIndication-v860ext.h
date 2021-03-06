/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SignallingConnectionReleaseIndication_v860ext_H_
#define	_SignallingConnectionReleaseIndication_v860ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SignallingConnectionReleaseIndication_v860ext__signallingConnectionReleaseIndicationCause {
	SignallingConnectionReleaseIndication_v860ext__signallingConnectionReleaseIndicationCause_uERequestedPSDataSessionEnd	= 0,
	SignallingConnectionReleaseIndication_v860ext__signallingConnectionReleaseIndicationCause_anyOtherCause	= 1
} e_SignallingConnectionReleaseIndication_v860ext__signallingConnectionReleaseIndicationCause;

/* SignallingConnectionReleaseIndication-v860ext */
typedef struct SignallingConnectionReleaseIndication_v860ext {
	long	 signallingConnectionReleaseIndicationCause;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SignallingConnectionReleaseIndication_v860ext_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_signallingConnectionReleaseIndicationCause_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SignallingConnectionReleaseIndication_v860ext;

#ifdef __cplusplus
}
#endif

#endif	/* _SignallingConnectionReleaseIndication_v860ext_H_ */
#include <asn_internal.h>
