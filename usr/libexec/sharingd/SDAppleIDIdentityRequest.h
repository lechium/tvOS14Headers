//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, SDAppleIDServerTask;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAppleIDIdentityRequest : NSObject
{
    _Bool _activated;	// 8 = 0x8
    NSString *_altDSID;	// 16 = 0x10
    SDAppleIDServerTask *_certificateCreateTask;	// 24 = 0x18
    NSDate *_certificateExpirationDate;	// 32 = 0x20
    SDAppleIDServerTask *_certificateFetchTask;	// 40 = 0x28
    NSString *_certificatePEM;	// 48 = 0x30
    NSString *_certificateSerialNumber;	// 56 = 0x38
    long long _certificateStatus;	// 64 = 0x40
    NSString *_certificateToken;	// 72 = 0x48
    unsigned long long _createRetryCount;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_createDelayTimer;	// 88 = 0x58
    NSString *_csrPEM;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_fetchDelayTimer;	// 104 = 0x68
    unsigned long long _fetchRetryCount;	// 112 = 0x70
    NSString *_intermediateCertificatePEM;	// 120 = 0x78
    _Bool _invalidated;	// 128 = 0x80
    struct __SecKey *_privateKey;	// 136 = 0x88
    NSData *_privateKeyPersistentReference;	// 144 = 0x90
    struct __SecKey *_publicKey;	// 152 = 0x98
    NSString *_appleID;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 168 = 0xa8
    CDUnknownBlockType _responseHandler;	// 176 = 0xb0
    CDUnknownBlockType _certificateTokenHandler;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0000000100104c8c
@property(copy, nonatomic) CDUnknownBlockType certificateTokenHandler; // @synthesize certificateTokenHandler=_certificateTokenHandler;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (void)invalidate;	// IMP=0x0000000100104be0
- (id)initWithAppleID:(id)arg1 certificateToken:(id)arg2 privateKeyPersistentReference:(id)arg3;	// IMP=0x0000000100104af4
- (id)initWithAppleID:(id)arg1;	// IMP=0x0000000100104a60
- (void)activate;	// IMP=0x00000001001049f8
- (void)_sendFetchCertificateRequest;	// IMP=0x00000001001047e8
- (void)_sendCreateCertificateRequest;	// IMP=0x00000001001043a0
- (void)_scheduleFetchRetryWithDelay:(unsigned long long)arg1;	// IMP=0x00000001001042fc
- (void)_scheduleCreateRetryWithDelay:(unsigned long long)arg1;	// IMP=0x0000000100104258
- (void)_scheduleFetchCertificateTaskWithDelay:(unsigned long long)arg1;	// IMP=0x00000001001040ec
- (void)_scheduleCreateCertificateTaskWithDelay:(unsigned long long)arg1;	// IMP=0x0000000100103f80
- (void)_responseHandlerWithIdentity:(id)arg1 error:(id)arg2;	// IMP=0x0000000100103eb8
- (void)_handleKeyPairAvailable;	// IMP=0x0000000100103c50
- (void)_handleReceivedCertificate;	// IMP=0x00000001001039a0
- (void)_handleFetchTimerFired;	// IMP=0x0000000100103908
- (void)_handleCreateTimerFired;	// IMP=0x0000000100103870
- (void)_handleCertificate:(struct __SecCertificate *)arg1 intermediateCertificate:(struct __SecCertificate *)arg2 withTrustResult:(_Bool)arg3 error:(int)arg4;	// IMP=0x0000000100103078
- (void)_handleCertificateFetchResponseWithInfo:(id)arg1 error:(id)arg2;	// IMP=0x0000000100102310
- (void)_handleCertificateFetchResponseError:(id)arg1;	// IMP=0x00000001001021d4
- (void)_handleCertificateCreateResponseWithInfo:(id)arg1 error:(id)arg2;	// IMP=0x0000000100101f38
- (void)_handleCertificateCreateResponseError:(id)arg1;	// IMP=0x0000000100101e64
- (void)dealloc;	// IMP=0x0000000100101e0c
- (void)_invalidate;	// IMP=0x0000000100101b48
- (void)_activate;	// IMP=0x00000001001019ac

@end

