/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_FANSTimeEtaDestination_H_
#define	_FANSTimeEtaDestination_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSTime.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FANSTimeEtaDestination */
typedef FANSTime_t	 FANSTimeEtaDestination_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSTimeEtaDestination;
asn_struct_free_f FANSTimeEtaDestination_free;
asn_struct_print_f FANSTimeEtaDestination_print;
asn_constr_check_f FANSTimeEtaDestination_constraint;
ber_type_decoder_f FANSTimeEtaDestination_decode_ber;
der_type_encoder_f FANSTimeEtaDestination_encode_der;
xer_type_decoder_f FANSTimeEtaDestination_decode_xer;
xer_type_encoder_f FANSTimeEtaDestination_encode_xer;
per_type_decoder_f FANSTimeEtaDestination_decode_uper;
per_type_encoder_f FANSTimeEtaDestination_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSTimeEtaDestination_H_ */
#include "asn_internal.h"
