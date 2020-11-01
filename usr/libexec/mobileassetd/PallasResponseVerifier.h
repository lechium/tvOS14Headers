//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PallasResponseVerifier : NSObject
{
    double _issuanceDate;	// 8 = 0x8
    struct __SecKey *_leafPublicKey;	// 16 = 0x10
    const struct __CFString *_keyAlg;	// 24 = 0x18
}

@property(readonly) const struct __CFString *keyAlg; // @synthesize keyAlg=_keyAlg;
@property(readonly) struct __SecKey *leafPublicKey; // @synthesize leafPublicKey=_leafPublicKey;
@property(readonly) double issuanceDate; // @synthesize issuanceDate=_issuanceDate;
- (_Bool)verifyResponse:(id)arg1 signature:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000035cc
- (_Bool)verifyCerts:(id)arg1 error:(id *)arg2;	// IMP=0x000000010000321c
- (_Bool)determineAlg:(id)arg1;	// IMP=0x000000010000319c
- (id)init;	// IMP=0x0000000100003160

@end

