//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBProcess, FBSSceneIdentity, FBScene, UIActivityContinuationAction;

@protocol PBAuxiliaryScenePresenting <NSObject>
@property(readonly, nonatomic) long long presentingLayoutLevel;
- (void)dismissAuxiliaryScene:(FBScene *)arg1 completion:(void (^)(void))arg2;
- (void)presentAuxiliaryScene:(FBScene *)arg1;
- (FBSSceneIdentity *)sceneIdentifierForActivity:(UIActivityContinuationAction *)arg1 withProcess:(FBProcess *)arg2;
@end
