/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_MonitoredCellRACH_List_v7g0ext_H_
#define	_MonitoredCellRACH_List_v7g0ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DeltaRSCPPerCell;

/* MonitoredCellRACH-List-v7g0ext */
typedef struct MonitoredCellRACH_List_v7g0ext {
	A_SEQUENCE_OF(struct DeltaRSCPPerCell) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MonitoredCellRACH_List_v7g0ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MonitoredCellRACH_List_v7g0ext;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DeltaRSCPPerCell.h"

#endif	/* _MonitoredCellRACH_List_v7g0ext_H_ */
#include <asn_internal.h>
