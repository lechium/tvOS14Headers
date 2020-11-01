//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class CCDRequest, NSError, NSMutableData, NSString, NSTimer, NSURLSession;

@interface CCDOperation : NSOperation <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    _Bool _operationExecuting;	// 8 = 0x8
    _Bool _operationFinished;	// 9 = 0x9
    _Bool _operationReady;	// 10 = 0xa
    _Bool _requestFailed;	// 11 = 0xb
    CCDRequest *_teslaRequest;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    NSMutableData *_responseData;	// 32 = 0x20
    NSURLSession *_urlSession;	// 40 = 0x28
    NSTimer *_timeoutTimer;	// 48 = 0x30
    double _retryAfterInterval;	// 56 = 0x38
    long long _requestCount;	// 64 = 0x40
    NSString *_httpResponseContentType;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010000af28
@property(retain, nonatomic) NSString *httpResponseContentType; // @synthesize httpResponseContentType=_httpResponseContentType;
@property(nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) _Bool requestFailed; // @synthesize requestFailed=_requestFailed;
@property(nonatomic) double retryAfterInterval; // @synthesize retryAfterInterval=_retryAfterInterval;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(nonatomic) _Bool operationReady; // @synthesize operationReady=_operationReady;
@property(nonatomic) _Bool operationFinished; // @synthesize operationFinished=_operationFinished;
@property(nonatomic) _Bool operationExecuting; // @synthesize operationExecuting=_operationExecuting;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) CCDRequest *teslaRequest; // @synthesize teslaRequest=_teslaRequest;
- (void)timeoutTimerDidFire:(id)arg1;	// IMP=0x000000010000ad7c
- (void)_startRetryTimerWithInterval:(double)arg1;	// IMP=0x000000010000ac5c
- (void)_retryRequestIfAllowedAfterDelayOrFailWithError:(id)arg1;	// IMP=0x000000010000abd4
- (void)_retryRequestIfAllowed:(_Bool)arg1 afterDelay:(double)arg2 orFailWithError:(id)arg3;	// IMP=0x000000010000aaf0
- (void)_retryRequestOrFailWithError:(id)arg1;	// IMP=0x000000010000aa90
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010000a9fc
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000010000a89c
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x000000010000a7a8
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010000a5d4
- (void)_printStatusCode:(long long)arg1;	// IMP=0x000000010000a474
- (void)_sendResponseInfoToRemoteWithStatusCode:(long long)arg1;	// IMP=0x000000010000a2c8
- (long long)_statusCodeFromResponse:(id)arg1;	// IMP=0x000000010000a190
- (void)_callCompletionBlockWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x000000010000a08c
- (void)_endOperation;	// IMP=0x000000010000a040
- (void)_sendFailureNoticeToRemote;	// IMP=0x0000000100009f58
- (void)_startURLRequest;	// IMP=0x0000000100009dac
- (void)_invalidateAndCancelURLSession;	// IMP=0x0000000100009d54
- (void)completeOperationWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x0000000100009ce0
- (id)responseWithResponseData:(id)arg1 contentType:(id)arg2 statusCode:(long long)arg3 retryNeeded:(_Bool *)arg4 outError:(id *)arg5;	// IMP=0x0000000100009c64
- (_Bool)isExecuting;	// IMP=0x0000000100009c54
- (_Bool)isFinished;	// IMP=0x0000000100009c44
- (void)start;	// IMP=0x0000000100009acc
- (void)dealloc;	// IMP=0x0000000100009a80
- (_Bool)isReady;	// IMP=0x0000000100009908
- (id)init;	// IMP=0x00000001000098c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

