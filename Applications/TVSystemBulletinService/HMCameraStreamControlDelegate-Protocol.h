//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMCameraStreamControl, NSError;

@protocol HMCameraStreamControlDelegate <NSObject>

@optional
- (void)cameraStreamControl:(HMCameraStreamControl *)arg1 didStopStreamWithError:(NSError *)arg2;
- (void)cameraStreamControlDidStartStream:(HMCameraStreamControl *)arg1;
@end

