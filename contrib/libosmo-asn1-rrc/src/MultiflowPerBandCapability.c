/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "MultiflowPerBandCapability.h"

static int
memb_numberOfCells_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_numberOfFrequencies_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_numberOfCells_constr_2 = {
	{ APC_CONSTRAINED,	 3,  3,  2,  8 }	/* (2..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_numberOfFrequencies_constr_3 = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_MultiflowPerBandCapability_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MultiflowPerBandCapability, numberOfCells),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_numberOfCells_constraint_1,
		&asn_PER_memb_numberOfCells_constr_2,
		0,
		"numberOfCells"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MultiflowPerBandCapability, numberOfFrequencies),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_numberOfFrequencies_constraint_1,
		&asn_PER_memb_numberOfFrequencies_constr_3,
		0,
		"numberOfFrequencies"
		},
	{ ATF_POINTER, 2, offsetof(struct MultiflowPerBandCapability, mimo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiflowMIMOCapability,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mimo"
		},
	{ ATF_POINTER, 1, offsetof(struct MultiflowPerBandCapability, nonContiguousCapability),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MultiflowNonContiguousCapability,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonContiguousCapability"
		},
};
static int asn_MAP_MultiflowPerBandCapability_oms_1[] = { 2, 3 };
static ber_tlv_tag_t asn_DEF_MultiflowPerBandCapability_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_MultiflowPerBandCapability_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* numberOfCells at 1300 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* numberOfFrequencies at 1301 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mimo at 1302 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonContiguousCapability at 1303 */
};
static asn_SEQUENCE_specifics_t asn_SPC_MultiflowPerBandCapability_specs_1 = {
	sizeof(struct MultiflowPerBandCapability),
	offsetof(struct MultiflowPerBandCapability, _asn_ctx),
	asn_MAP_MultiflowPerBandCapability_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MultiflowPerBandCapability_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MultiflowPerBandCapability = {
	"MultiflowPerBandCapability",
	"MultiflowPerBandCapability",
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
	asn_DEF_MultiflowPerBandCapability_tags_1,
	sizeof(asn_DEF_MultiflowPerBandCapability_tags_1)
		/sizeof(asn_DEF_MultiflowPerBandCapability_tags_1[0]), /* 1 */
	asn_DEF_MultiflowPerBandCapability_tags_1,	/* Same as above */
	sizeof(asn_DEF_MultiflowPerBandCapability_tags_1)
		/sizeof(asn_DEF_MultiflowPerBandCapability_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MultiflowPerBandCapability_1,
	4,	/* Elements count */
	&asn_SPC_MultiflowPerBandCapability_specs_1	/* Additional specs */
};

