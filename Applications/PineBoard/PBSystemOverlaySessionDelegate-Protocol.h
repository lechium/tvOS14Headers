//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PBSystemOverlaySession, PBSystemOverlaySessionDismissalContext;

@protocol PBSystemOverlaySessionDelegate <NSObject>
- (void)systemOverlaySessionDidInvalidate:(PBSystemOverlaySession *)arg1;
- (void)systemOverlaySessionDidCancel:(PBSystemOverlaySession *)arg1 withContext:(PBSystemOverlaySessionDismissalContext *)arg2;
- (void)systemOverlaySessionDidDismiss:(PBSystemOverlaySession *)arg1;
- (void)systemOverlaySessionWillDismiss:(PBSystemOverlaySession *)arg1 withContext:(PBSystemOverlaySessionDismissalContext *)arg2;
- (void)systemOverlaySessionDidPresent:(PBSystemOverlaySession *)arg1;
- (void)systemOverlaySessionWillPresent:(PBSystemOverlaySession *)arg1;
@end

