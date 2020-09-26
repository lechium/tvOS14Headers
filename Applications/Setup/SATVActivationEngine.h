//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class NSDictionary, NSMutableData, NSString, NSURL, NSURLRequest, NSURLSession, NSURLSessionConfiguration;

@interface SATVActivationEngine : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    NSURLSession *_session;	// 8 = 0x8
    NSMutableData *_activationData;	// 16 = 0x10
    _Bool _allowAnyHTTPSCertificate;	// 24 = 0x18
    NSURLSessionConfiguration *_sessionConfiguration;	// 32 = 0x20
    NSURL *_overrideActivationURL;	// 40 = 0x28
    NSURL *_overrideSessionURL;	// 48 = 0x30
    CDUnknownBlockType _completion;	// 56 = 0x38
    NSDictionary *_responseHeaders;	// 64 = 0x40
    NSURLRequest *_activationRequest;	// 72 = 0x48
    NSString *_userAgent;	// 80 = 0x50
}

+ (id)activationEngineWithOverrideActivationURL:(id)arg1 sessionURL:(id)arg2;	// IMP=0x0000000100026550
- (void).cxx_destruct;	// IMP=0x00000001000283f8
@property(retain) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) NSURLRequest *activationRequest; // @synthesize activationRequest=_activationRequest;
@property(copy, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSURL *overrideSessionURL; // @synthesize overrideSessionURL=_overrideSessionURL;
@property(copy, nonatomic) NSURL *overrideActivationURL; // @synthesize overrideActivationURL=_overrideActivationURL;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(nonatomic) _Bool allowAnyHTTPSCertificate; // @synthesize allowAnyHTTPSCertificate=_allowAnyHTTPSCertificate;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100028110
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100027e48
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0000000100027da8
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100027cd8
- (void)makeRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100027ba4
- (void)tryActivateWithOptions:(id)arg1 requestMutator:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100027798
- (void)_sendSessionRequest:(id)arg1 withOptions:(id)arg2;	// IMP=0x0000000100026e30
- (id)_newActivationRequestWithOptions:(id)arg1 sessionData:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100026894
@property(readonly, nonatomic) NSURLSession *session;
- (void)_cleanup;	// IMP=0x0000000100026738
- (void)cancel;	// IMP=0x0000000100026668
- (id)initWithOverrideActivationURL:(id)arg1 sessionURL:(id)arg2;	// IMP=0x00000001000265c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
