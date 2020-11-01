//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAssetDownloadSessionDelegate-Protocol.h"

@class AVAssetDownloadSession, AVURLAsset, NSDictionary, NSURL;
@protocol NDAVAssetDownloadSessionWrapperDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface NDAVAssetDownloadSessionWrapper : NSObject <AVAssetDownloadSessionDelegate>
{
    AVURLAsset *_asset;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    unsigned int _powerAssertion;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 32 = 0x20
    _Bool _progressTimerRunning;	// 40 = 0x28
    AVAssetDownloadSession *_downloadSession;	// 48 = 0x30
    id <NDAVAssetDownloadSessionWrapperDelegate> _delegate;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 64 = 0x40
    NSURL *_URL;	// 72 = 0x48
    NSURL *_destinationURL;	// 80 = 0x50
    NSDictionary *_options;	// 88 = 0x58
    unsigned long long _downloadToken;	// 96 = 0x60
    unsigned long long _countOfBytesWritten;	// 104 = 0x68
    unsigned long long _countOfBytesExpectedToWrite;	// 112 = 0x70
    unsigned long long _taskIdentifier;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000010000dfe8
@property _Bool progressTimerRunning; // @synthesize progressTimerRunning=_progressTimerRunning;
@property unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property unsigned long long countOfBytesExpectedToWrite; // @synthesize countOfBytesExpectedToWrite=_countOfBytesExpectedToWrite;
@property unsigned long long countOfBytesWritten; // @synthesize countOfBytesWritten=_countOfBytesWritten;
@property(readonly) unsigned long long downloadToken; // @synthesize downloadToken=_downloadToken;
@property(readonly, retain) NSDictionary *options; // @synthesize options=_options;
@property(readonly, copy) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, copy) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly) __weak id <NDAVAssetDownloadSessionWrapperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) AVAssetDownloadSession *downloadSession; // @synthesize downloadSession=_downloadSession;
- (void)assetDownloadSession:(id)arg1 didResolveMediaSelection:(id)arg2;	// IMP=0x000000010000debc
- (void)assetDownloadSession:(id)arg1 didFinishDownloadForMediaSelection:(id)arg2;	// IMP=0x000000010000dde8
- (void)assetDownloadSession:(id)arg1 didLoadTimeRange:(CDStruct_3c1748cc)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg4 forMediaSelection:(id)arg5;	// IMP=0x000000010000dcf4
- (void)assetDownloadSession:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000010000dc20
- (void)assetDownloadSessionDidFinishDownload:(id)arg1;	// IMP=0x000000010000db80
- (void)startLoadingMetadata;	// IMP=0x000000010000db28
- (void)cancelAndDeliverError:(id)arg1;	// IMP=0x000000010000da94
- (void)cancel;	// IMP=0x000000010000da28
- (void)suspend;	// IMP=0x000000010000d978
- (void)resume;	// IMP=0x000000010000d800
- (void)releasePowerAssertion;	// IMP=0x000000010000d6f8
- (void)takePowerAssertion;	// IMP=0x000000010000d4a0
- (void)sendProgressUpdate;	// IMP=0x000000010000d370
- (void)didReceiveMediaSelectionResolutionNotification:(id)arg1;	// IMP=0x000000010000d318
- (void)didReceiveTimeRangesChangedNotification:(id)arg1;	// IMP=0x000000010000d294
- (void)didReceiveFileSizeAvailableNotification:(id)arg1;	// IMP=0x000000010000d290
- (void)didReceiveFailedNotification:(id)arg1;	// IMP=0x000000010000d238
- (void)didReceiveSucceededNotification:(id)arg1;	// IMP=0x000000010000d1e0
- (void)disavowSession;	// IMP=0x000000010000d0dc
- (void)removeSessionObservers;	// IMP=0x000000010000cfa4
- (void)addSessionObservers;	// IMP=0x000000010000ce44
- (id)initWithURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 delegate:(id)arg4 queue:(id)arg5;	// IMP=0x000000010000c470
- (id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 delegate:(id)arg4 queue:(id)arg5;	// IMP=0x000000010000c248
- (_Bool)doesAVAssetDownloadSessionSupportMultipleDownloads;	// IMP=0x000000010000c220

@end
