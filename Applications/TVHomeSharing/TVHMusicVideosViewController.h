//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHMediaEntitiesFetchViewController.h"

#import "TVHMediaEntitiesFetchViewControllerDelegate-Protocol.h"
#import "TVHMediaEntitiesGridViewControllerDelegate-Protocol.h"

@class NSString, TVHMediaEntitiesGridViewController;

@interface TVHMusicVideosViewController : TVHMediaEntitiesFetchViewController <TVHMediaEntitiesFetchViewControllerDelegate, TVHMediaEntitiesGridViewControllerDelegate>
{
    TVHMediaEntitiesGridViewController *_gridViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010009fe4c
@property(retain, nonatomic) TVHMediaEntitiesGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
- (void)_updateWithFetchControllerResultSet:(id)arg1;	// IMP=0x000000010009fd24
- (void)_playAllWithShuffle:(_Bool)arg1;	// IMP=0x000000010009fc18
- (void)_handleShuffleAllButtonAction;	// IMP=0x000000010009fc08
- (void)_handlePlayAllButtonAction;	// IMP=0x000000010009fbf8
- (void)_playMusicVideo:(id)arg1;	// IMP=0x000000010009fb34
- (void)mediaEntitiesGridViewController:(id)arg1 didPlayMediaEntity:(id)arg2;	// IMP=0x000000010009fb24
- (void)mediaEntitiesGridViewController:(id)arg1 didSelectMediaEntity:(id)arg2;	// IMP=0x000000010009fb14
- (void)mediaEntitiesGridViewController:(id)arg1 configureLockup:(id)arg2 forMediaEntity:(id)arg3;	// IMP=0x000000010009f9f8
- (void)mediaEntitiesFetchViewController:(id)arg1 updateContentViewController:(id)arg2 withFetchControllerResultSet:(id)arg3;	// IMP=0x000000010009f9e8
- (id)mediaEntitiesFetchViewController:(id)arg1 contentViewControllerWithFetchControllerResultSet:(id)arg2 sourceMediaEntity:(id)arg3 sourceMediaEntityBackgroundImageInfo:(id)arg4;	// IMP=0x000000010009f5ac
- (id)initWithMediaLibrary:(id)arg1;	// IMP=0x000000010009f28c
- (id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2 mode:(unsigned long long)arg3 sourceMediaEntity:(id)arg4 sourceMediaEntitiesFetchContext:(id)arg5;	// IMP=0x000000010009f204

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

