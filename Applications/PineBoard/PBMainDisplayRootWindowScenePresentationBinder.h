//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIRootWindowScenePresentationBinder.h>

#import "PBInstanceDependable-Protocol.h"

@class NSString, UIRootSceneWindow;

@interface PBMainDisplayRootWindowScenePresentationBinder : UIRootWindowScenePresentationBinder <PBInstanceDependable>
{
    UIRootSceneWindow *_rootWindow;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100118c8c
+ (id)dependencyDescription;	// IMP=0x0000000100118bd4
- (void).cxx_destruct;	// IMP=0x0000000100118f64
@property(readonly, nonatomic) UIRootSceneWindow *rootWindow; // @synthesize rootWindow=_rootWindow;
- (id)init;	// IMP=0x0000000100118d5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
