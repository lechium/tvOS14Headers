//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBScene, UIScenePresentationBinder;

@protocol UIScenePresentationBinderDelegate <NSObject>

@optional
- (void)scenePresentationBinder:(UIScenePresentationBinder *)arg1 didStopPresentingScene:(FBScene *)arg2;
- (void)scenePresentationBinder:(UIScenePresentationBinder *)arg1 didStartPresentingScene:(FBScene *)arg2;
- (_Bool)scenePresentationBinderShouldPresentSceneOnlyWhenLayersExist:(UIScenePresentationBinder *)arg1;
@end

