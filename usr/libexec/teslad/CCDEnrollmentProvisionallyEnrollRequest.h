//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CCDEnrollmentRequest.h"

@class NSString;

@interface CCDEnrollmentProvisionallyEnrollRequest : CCDEnrollmentRequest
{
    NSString *_nonce;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000eb98
@property(retain, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
- (id)requestPayload;	// IMP=0x000000010000ea54
- (id)userDefaultsEnrollmentURLKey;	// IMP=0x000000010000ea44
- (id)enrollmentURLString;	// IMP=0x000000010000ea34
- (long long)requestType;	// IMP=0x000000010000ea2c

@end

