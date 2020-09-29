/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWDeferredContainer.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSDate;

@interface BWDeferredCaptureContainer : BWDeferredContainer {

	NSObject*<OS_dispatch_queue> _flushQueue;
	NSObject*<OS_dispatch_group> _flushGroup;
	BOOL _flushBuffersUponCommit;
	BOOL _foldersCreated;
	BOOL _committed;
	BOOL _preflushed;
	BOOL _cached;
	unsigned long long _cacheExpiryTime;
	NSDate* _commitTime;
	long long _commitDurationNS;
	long long _flushDurationNS;

}

@property (nonatomic,readonly) BOOL committed;                                //@synthesize committed=_committed - In the implementation block
@property (assign,nonatomic) BOOL cached;                                     //@synthesize cached=_cached - In the implementation block
@property (assign,nonatomic) unsigned long long cacheExpiryTime;              //@synthesize cacheExpiryTime=_cacheExpiryTime - In the implementation block
@property (nonatomic,readonly) long long commitDurationNS;                    //@synthesize commitDurationNS=_commitDurationNS - In the implementation block
@property (nonatomic,readonly) long long flushDurationNS;                     //@synthesize flushDurationNS=_flushDurationNS - In the implementation block
+(id)timeForManifest:(id)arg1 index:(unsigned long long)arg2 ;
+(id)captureRequestIdentifierForManifest:(id)arg1 ;
-(void)dealloc;
-(int)commit;
-(int)flush;
-(int)abort;
-(BOOL)cached;
-(void)setCached:(BOOL)arg1 ;
-(BOOL)committed;
-(int)preflush;
-(unsigned long long)cacheExpiryTime;
-(void)setCacheExpiryTime:(unsigned long long)arg1 ;
-(id)initWithApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 baseFolderURL:(id)arg3 flushBuffersUponCommit:(BOOL)arg4 err:(int*)arg5 ;
-(int)waitForFlush;
-(id)copyXPCEncoding:(int*)arg1 ;
-(long long)commitDurationNS;
-(long long)flushDurationNS;
-(int)commitCaptureSettings:(id)arg1 settings:(id)arg2 ;
-(int)commitPhotoDescriptor:(id)arg1 ;
-(int)commitDictionary:(id)arg1 tag:(id)arg2 ;
-(int)commitBuffer:(CVBufferRef)arg1 tag:(id)arg2 bufferType:(unsigned long long)arg3 compressionProfile:(int)arg4 metadataTag:(id)arg5 portType:(id)arg6 ;
-(int)commitMetadata:(id)arg1 tag:(id)arg2 bufferTag:(id)arg3 ;
-(int)commitArray:(id)arg1 tag:(id)arg2 ;
-(int)_addIntermediateObjectToXPCDictionary:(id)arg1 xpcDictionary:(id)arg2 ;
-(int)_createFolders;
@end

