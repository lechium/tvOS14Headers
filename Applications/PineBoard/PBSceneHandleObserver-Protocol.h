//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSSceneClientSettings, FBSSceneClientSettingsDiff, FBSSceneTransitionContext, FBScene, FBSceneUpdateContext, NSError, PBSceneHandle;

@protocol PBSceneHandleObserver <NSObject>

@optional
- (void)sceneDidInvalidate:(PBSceneHandle *)arg1;
- (void)sceneHandle:(PBSceneHandle *)arg1 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg2 oldClientSettings:(FBSSceneClientSettings *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)sceneHandle:(PBSceneHandle *)arg1 didCompleteUpdateWithContext:(FBSceneUpdateContext *)arg2 error:(NSError *)arg3;
- (void)sceneHandle:(PBSceneHandle *)arg1 didApplyUpdateWithContext:(FBSceneUpdateContext *)arg2;
- (void)sceneHandle:(PBSceneHandle *)arg1 didPrepareUpdateWithContext:(FBSceneUpdateContext *)arg2;
- (void)sceneContentStateDidChange:(PBSceneHandle *)arg1;
- (void)sceneHandle:(PBSceneHandle *)arg1 didDestroyScene:(FBScene *)arg2;
- (void)sceneHandle:(PBSceneHandle *)arg1 willDestroyScene:(FBScene *)arg2;
- (void)sceneHandle:(PBSceneHandle *)arg1 didCreateScene:(FBScene *)arg2;
@end

