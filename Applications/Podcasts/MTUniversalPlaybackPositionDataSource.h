//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MZUniversalPlaybackPositionDataSource-Protocol.h"

@class NSString;

@interface MTUniversalPlaybackPositionDataSource : NSObject <MZUniversalPlaybackPositionDataSource>
{
}

+ (double)uppLastSyncTime;	// IMP=0x000000010007f43c
+ (void)setUppLastSyncTime:(double)arg1;	// IMP=0x000000010007f3a8
+ (void)resetUppLastSyncTimeAndDomainVersion;	// IMP=0x000000010007f30c
+ (void)updateEpisode:(id)arg1 withUPPMetadata:(id)arg2;	// IMP=0x000000010007f1c4
+ (id)mediaItemIdentifierForEpisode:(id)arg1;	// IMP=0x000000010007dce4
- (void)commitUniversalPlaybackPositionTransaction:(id)arg1 domainVersion:(id)arg2 metadataEnumerationBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010007e3d0
- (void)cancelUniversalPlaybackPositionTransaction:(id)arg1;	// IMP=0x000000010007e3cc
- (id)beginTransactionWithItemsToSyncEnumerationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010007de00
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x000000010007dd64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

