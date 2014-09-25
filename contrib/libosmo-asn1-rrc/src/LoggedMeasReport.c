/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "LoggedMeasReport.h"

static int
loggedMeasAvailable_7_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
loggedMeasAvailable_7_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
loggedMeasAvailable_7_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	loggedMeasAvailable_7_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
loggedMeasAvailable_7_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	loggedMeasAvailable_7_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
loggedMeasAvailable_7_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	loggedMeasAvailable_7_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
loggedMeasAvailable_7_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	loggedMeasAvailable_7_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
loggedMeasAvailable_7_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	loggedMeasAvailable_7_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
loggedMeasAvailable_7_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	loggedMeasAvailable_7_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
loggedMeasAvailable_7_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	loggedMeasAvailable_7_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
loggedMeasAvailable_7_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	loggedMeasAvailable_7_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
memb_absoluteTimeInfo_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 48)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_loggedMeasAvailable_constr_7 = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_absoluteTimeInfo_constr_2 = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  48,  48 }	/* (SIZE(48..48)) */,
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_loggedMeasAvailable_value2enum_7[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_loggedMeasAvailable_enum2value_7[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_loggedMeasAvailable_specs_7 = {
	asn_MAP_loggedMeasAvailable_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_loggedMeasAvailable_enum2value_7,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_loggedMeasAvailable_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_loggedMeasAvailable_7 = {
	"loggedMeasAvailable",
	"loggedMeasAvailable",
	loggedMeasAvailable_7_free,
	loggedMeasAvailable_7_print,
	loggedMeasAvailable_7_constraint,
	loggedMeasAvailable_7_decode_ber,
	loggedMeasAvailable_7_encode_der,
	loggedMeasAvailable_7_decode_xer,
	loggedMeasAvailable_7_encode_xer,
	loggedMeasAvailable_7_decode_uper,
	loggedMeasAvailable_7_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_loggedMeasAvailable_tags_7,
	sizeof(asn_DEF_loggedMeasAvailable_tags_7)
		/sizeof(asn_DEF_loggedMeasAvailable_tags_7[0]) - 1, /* 1 */
	asn_DEF_loggedMeasAvailable_tags_7,	/* Same as above */
	sizeof(asn_DEF_loggedMeasAvailable_tags_7)
		/sizeof(asn_DEF_loggedMeasAvailable_tags_7[0]), /* 2 */
	&asn_PER_type_loggedMeasAvailable_constr_7,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_loggedMeasAvailable_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LoggedMeasReport_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasReport, absoluteTimeInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_absoluteTimeInfo_constraint_1,
		&asn_PER_memb_absoluteTimeInfo_constr_2,
		0,
		"absoluteTimeInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasReport, traceReference),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TraceReference,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"traceReference"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasReport, traceRecordingSession),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TraceRecordingSession,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"traceRecordingSession"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasReport, tce_Id),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TCE_Id,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tce-Id"
		},
	{ ATF_POINTER, 2, offsetof(struct LoggedMeasReport, loggedMeasInfoList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoggedMeasInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"loggedMeasInfoList"
		},
	{ ATF_POINTER, 1, offsetof(struct LoggedMeasReport, loggedMeasAvailable),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_loggedMeasAvailable_7,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"loggedMeasAvailable"
		},
};
static int asn_MAP_LoggedMeasReport_oms_1[] = { 4, 5 };
static ber_tlv_tag_t asn_DEF_LoggedMeasReport_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LoggedMeasReport_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* absoluteTimeInfo at 16527 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* traceReference at 16528 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* traceRecordingSession at 16529 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tce-Id at 16530 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* loggedMeasInfoList at 16531 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* loggedMeasAvailable at 16532 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LoggedMeasReport_specs_1 = {
	sizeof(struct LoggedMeasReport),
	offsetof(struct LoggedMeasReport, _asn_ctx),
	asn_MAP_LoggedMeasReport_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_LoggedMeasReport_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LoggedMeasReport = {
	"LoggedMeasReport",
	"LoggedMeasReport",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_LoggedMeasReport_tags_1,
	sizeof(asn_DEF_LoggedMeasReport_tags_1)
		/sizeof(asn_DEF_LoggedMeasReport_tags_1[0]), /* 1 */
	asn_DEF_LoggedMeasReport_tags_1,	/* Same as above */
	sizeof(asn_DEF_LoggedMeasReport_tags_1)
		/sizeof(asn_DEF_LoggedMeasReport_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LoggedMeasReport_1,
	6,	/* Elements count */
	&asn_SPC_LoggedMeasReport_specs_1	/* Additional specs */
};
