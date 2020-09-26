//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BKSAnimationFenceHandle, BSAnimationSettings, NSString, NSValue;
@protocol PBSPictureInPictureDelegateServiceInterface;

@protocol PBSPictureInPictureServiceInterface <NSObject>
- (void)applyPictureInPictureInsetsValue:(NSValue *)arg1 fromSource:(NSString *)arg2 withAnimationSettings:(BSAnimationSettings *)arg3 usingAnimationFence:(BKSAnimationFenceHandle *)arg4;
- (void)mutePictureInPicture:(_Bool)arg1;
- (void)expandPictureInPicture;
- (void)movePictureInPicture;
- (void)cancelPictureInPictureFromPlayerInterface:(long long)arg1;
- (void)fetchCurrentPictureInPictureStateWithReply:(void (^)(PBSPictureInPictureState *, NSError *))arg1;
- (void)setServiceDelegate:(id <PBSPictureInPictureDelegateServiceInterface>)arg1;
@end
