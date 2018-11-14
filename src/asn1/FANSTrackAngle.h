/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_FANSTrackAngle_H_
#define	_FANSTrackAngle_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSDegrees.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FANSTrackAngle */
typedef FANSDegrees_t	 FANSTrackAngle_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSTrackAngle;
asn_struct_free_f FANSTrackAngle_free;
asn_struct_print_f FANSTrackAngle_print;
asn_constr_check_f FANSTrackAngle_constraint;
ber_type_decoder_f FANSTrackAngle_decode_ber;
der_type_encoder_f FANSTrackAngle_encode_der;
xer_type_decoder_f FANSTrackAngle_decode_xer;
xer_type_encoder_f FANSTrackAngle_encode_xer;
per_type_decoder_f FANSTrackAngle_decode_uper;
per_type_encoder_f FANSTrackAngle_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSTrackAngle_H_ */
#include "asn_internal.h"
