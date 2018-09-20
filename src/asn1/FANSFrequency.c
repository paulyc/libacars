/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "FANSFrequency.h"

static asn_per_constraints_t asn_PER_type_FANSFrequency_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_FANSFrequency_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSFrequency, choice.frequencyhf),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSFrequencyhf,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyhf"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSFrequency, choice.frequencyvhf),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSFrequencyvhf,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyvhf"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSFrequency, choice.frequencyuhf),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSFrequencyuhf,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyuhf"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSFrequency, choice.frequencysatchannel),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSFrequencysatchannel,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencysatchannel"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_FANSFrequency_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* frequencyhf */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* frequencyvhf */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* frequencyuhf */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* frequencysatchannel */
};
static asn_CHOICE_specifics_t asn_SPC_FANSFrequency_specs_1 = {
	sizeof(struct FANSFrequency),
	offsetof(struct FANSFrequency, _asn_ctx),
	offsetof(struct FANSFrequency, present),
	sizeof(((struct FANSFrequency *)0)->present),
	asn_MAP_FANSFrequency_tag2el_1,
	4,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_FANSFrequency = {
	"FANSFrequency",
	"FANSFrequency",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_FANSFrequency_constr_1,
	asn_MBR_FANSFrequency_1,
	4,	/* Elements count */
	&asn_SPC_FANSFrequency_specs_1	/* Additional specs */
};
