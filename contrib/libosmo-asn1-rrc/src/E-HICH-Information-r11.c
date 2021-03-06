/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "E-HICH-Information-r11.h"

static asn_TYPE_member_t asn_MBR_E_HICH_Information_r11_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E_HICH_Information_r11, channelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_HICH_ChannelisationCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelisationCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_HICH_Information_r11, signatureSequence),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_HICH_RGCH_SignatureSequence,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"signatureSequence"
		},
	{ ATF_POINTER, 1, offsetof(struct E_HICH_Information_r11, secondarySignatureSequence),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_HICH_RGCH_SignatureSequence,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"secondarySignatureSequence"
		},
};
static int asn_MAP_E_HICH_Information_r11_oms_1[] = { 2 };
static ber_tlv_tag_t asn_DEF_E_HICH_Information_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_E_HICH_Information_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* channelisationCode at 8413 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* signatureSequence at 8414 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* secondarySignatureSequence at 8415 */
};
static asn_SEQUENCE_specifics_t asn_SPC_E_HICH_Information_r11_specs_1 = {
	sizeof(struct E_HICH_Information_r11),
	offsetof(struct E_HICH_Information_r11, _asn_ctx),
	asn_MAP_E_HICH_Information_r11_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_E_HICH_Information_r11_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_E_HICH_Information_r11 = {
	"E-HICH-Information-r11",
	"E-HICH-Information-r11",
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
	asn_DEF_E_HICH_Information_r11_tags_1,
	sizeof(asn_DEF_E_HICH_Information_r11_tags_1)
		/sizeof(asn_DEF_E_HICH_Information_r11_tags_1[0]), /* 1 */
	asn_DEF_E_HICH_Information_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_HICH_Information_r11_tags_1)
		/sizeof(asn_DEF_E_HICH_Information_r11_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_E_HICH_Information_r11_1,
	3,	/* Elements count */
	&asn_SPC_E_HICH_Information_r11_specs_1	/* Additional specs */
};

