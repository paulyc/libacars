/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_FANSPositionTime_H_
#define	_FANSPositionTime_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSPosition.h"
#include "FANSTime.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FANSPositionTime */
typedef struct FANSPositionTime {
	FANSPosition_t	 position;
	FANSTime_t	 time;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSPositionTime_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSPositionTime;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSPositionTime_H_ */
#include "asn_internal.h"
