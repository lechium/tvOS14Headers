//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSMapTable, NSOperationQueue, NSString, NSURLSession;
@protocol SWCDownloaderDelegate;

@interface SWCDownloader : NSObject <NSURLSessionDataDelegate>
{
    NSOperationQueue *_queue;	// 8 = 0x8
    NSURLSession *_sessions[4];	// 16 = 0x10
    NSMapTable *_allTaskStates;	// 48 = 0x30
    id <SWCDownloaderDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000057b4
@property __weak id <SWCDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0000000100005320
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000001000051d4
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100004680
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100004240
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100003be0
- (void)enumerateActiveAASAFileDownloadsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000038b0
- (void)updateAASAFileForDomain:(id)arg1 downloadRoute:(unsigned char)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000375c
- (void)updateAASAFileForDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000036cc
- (void)downloadAASAFileForDomain:(id)arg1 downloadRoute:(unsigned char)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100003578
- (void)downloadAASAFileForDomain:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000034e8
- (void)receiveSIGTERMSignal;	// IMP=0x00000001000033a0
- (id)init;	// IMP=0x0000000100003204
- (void)_invokeCompletionHandlerForState:(id)arg1 JSONObject:(id)arg2 error:(id)arg3;	// IMP=0x0000000100008584
- (void)_processDownloadedDataForState:(id)arg1;	// IMP=0x0000000100008090
- (id)_replaceTaskState:(id)arg1;	// IMP=0x0000000100007d64
- (void)_resumePendingTasks;	// IMP=0x000000010000780c
- (void)_enumerateTaskStatesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007644
- (id)_URLRequestWithDomain:(id)arg1 downloadRoute:(unsigned char)arg2;	// IMP=0x0000000100007114
- (void)_downloadAASAFileForDomain:(id)arg1 downloadRoute:(unsigned char)arg2 discretionary:(_Bool)arg3 completionHandlers:(id)arg4;	// IMP=0x0000000100006818
- (id)_taskStateForDomain:(id)arg1 downloadRoute:(unsigned char)arg2;	// IMP=0x000000010000655c
- (unsigned long long)_maximumActiveTaskCountForSessionID:(unsigned char)arg1;	// IMP=0x0000000100006538
- (id)_sessionForTaskState:(id)arg1;	// IMP=0x000000010000632c
- (unsigned char)_sessionIDForTaskState:(id)arg1;	// IMP=0x00000001000062ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

