//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_PBWallpaperSceneView.h"

@interface _PBSuspensionSnapshotView : _PBWallpaperSceneView
{
    CDUnknownBlockType _snapshotLoadRequestBuilder;	// 48 = 0x30
}

+ (_Bool)isWallpaperRequired;	// IMP=0x00000001002216c8
- (void).cxx_destruct;	// IMP=0x0000000100221d98
@property(copy, nonatomic) CDUnknownBlockType snapshotLoadRequestBuilder; // @synthesize snapshotLoadRequestBuilder=_snapshotLoadRequestBuilder;
- (id)_newSnapshotView;	// IMP=0x00000001002218a8
- (void)didMoveToWindow;	// IMP=0x0000000100221720
- (id)contentViewToAnimateToOnInterfaceChange;	// IMP=0x00000001002216e8

@end

