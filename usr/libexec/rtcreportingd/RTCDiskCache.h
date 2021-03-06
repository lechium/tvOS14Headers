//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, RTCActivitySchedulerOptions, RTCSelfReporter;
@protocol OS_dispatch_queue, RTCDiskCacheDelegate;

@interface RTCDiskCache : NSObject
{
    RTCActivitySchedulerOptions *_options;	// 8 = 0x8
    RTCSelfReporter *_selfReporter;	// 16 = 0x10
    NSString *_rootPath;	// 24 = 0x18
    NSString *_oldestCacheFile;	// 32 = 0x20
    NSString *_newestCacheFile;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_stateQueue;	// 48 = 0x30
    id <RTCDiskCacheDelegate> _delegate;	// 56 = 0x38
}

@property(readonly) RTCActivitySchedulerOptions *options; // @synthesize options=_options;
@property(readonly) NSString *newestCacheFile; // @synthesize newestCacheFile=_newestCacheFile;
@property(readonly) NSString *oldestCacheFile; // @synthesize oldestCacheFile=_oldestCacheFile;
- (void)removeFromCacheDispatched:(id)arg1;	// IMP=0x0000000100006738
- (id)copyFirstEvent;	// IMP=0x0000000100006658
- (void)addEvent:(id)arg1;	// IMP=0x0000000100006284
- (id)getOldestEventDispatched;	// IMP=0x0000000100005ab4
- (_Bool)searchForCacheFileWithOrder:(int)arg1;	// IMP=0x0000000100005978
- (_Bool)searchForCacheFileWithOrderDispatched:(int)arg1;	// IMP=0x0000000100005694
- (_Bool)isSizeORTimeLimitationExceededForFile:(id)arg1;	// IMP=0x00000001000055c4
- (_Bool)isSizeORTimeLimitationExceededForFileDispatched:(id)arg1;	// IMP=0x000000010000549c
- (id)pruneFileIfExpired:(id)arg1;	// IMP=0x0000000100005314
- (id)pruneFileIfExpiredDispatched:(id)arg1;	// IMP=0x00000001000051d0
- (void)deleteAllCacheFiles;	// IMP=0x000000010000510c
- (void)deleteCurrentNewestCacheFile;	// IMP=0x00000001000050a0
- (void)deleteCurrentOldestCacheFile;	// IMP=0x0000000100005018
- (void)deleteCurrentCacheFileWithOrderDispatched:(int)arg1;	// IMP=0x0000000100004f74
- (id)cacheFileExtention;	// IMP=0x0000000100004f68
- (id)diskCacheRootPath;	// IMP=0x0000000100004f60
- (void)writeInitialHeaderToFile:(id)arg1;	// IMP=0x0000000100004ef4
- (_Bool)secureWriteDataForHandle:(id)arg1 data:(id)arg2;	// IMP=0x0000000100004eb0
- (void)syncUp;	// IMP=0x0000000100004e9c
- (void)setSelfReporter:(id)arg1;	// IMP=0x0000000100004e74
- (id)delegate;	// IMP=0x0000000100004e6c
- (void)dealloc;	// IMP=0x0000000100004dbc
- (id)initWithOptions:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000100004c14

@end

