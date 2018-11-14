/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_FANSATCMessageHeader_H_
#define	_FANSATCMessageHeader_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSMsgIdentificationNumber.h"
#include "FANSMsgReferenceNumber.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FANSTimestamp;

/* FANSATCMessageHeader */
typedef struct FANSATCMessageHeader {
	FANSMsgIdentificationNumber_t	 msgIdentificationNumber;
	FANSMsgReferenceNumber_t	*msgReferenceNumber	/* OPTIONAL */;
	struct FANSTimestamp	*timestamp	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSATCMessageHeader_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSATCMessageHeader;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FANSTimestamp.h"

#endif	/* _FANSATCMessageHeader_H_ */
#include "asn_internal.h"
