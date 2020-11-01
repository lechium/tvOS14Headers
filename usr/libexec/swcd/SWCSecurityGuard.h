//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SWCSecurityGuard : NSObject
{
}

+ (id)new;	// IMP=0x0000000100020d30
+ (id)sharedSecurityGuard;	// IMP=0x0000000100020cb8
- (_Bool)verifyTrust:(struct __SecTrust *)arg1 allowInstalledRootCertificates:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000100021130
- (_Bool)verifyTrust:(struct __SecTrust *)arg1 error:(id *)arg2;	// IMP=0x000000010002111c
- (id)JSONObjectWithSignedJSONData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100020d6c
- (id)init;	// IMP=0x0000000100020d3c
- (_Bool)_verifyExtendedValidationOfTrust:(struct __SecTrust *)arg1 error:(id *)arg2;	// IMP=0x0000000100021f68
- (id)_errorForUntrustedRootCertificateOfTrust:(struct __SecTrust *)arg1;	// IMP=0x0000000100021cec
- (optional_252cd4e3)_evaluateTrust:(struct __SecTrust *)arg1 allowingKeychains:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000100021908
- (optional_252cd4e3)_evaluateTrust:(struct __SecTrust *)arg1 error:(id *)arg2;	// IMP=0x0000000100021408
- (id)_init;	// IMP=0x00000001000213d4

@end

