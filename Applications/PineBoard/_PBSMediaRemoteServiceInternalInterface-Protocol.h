//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, PBSMediaRemoteSiriContext;

@protocol _PBSMediaRemoteServiceInternalInterface <NSObject>
- (void)__noteUserPresenceDetected;
- (void)__dismissPinDialogWithToken:(id)arg1;
- (void)__showPinDialogWithOptions:(NSDictionary *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)__stopSiriWithContext:(PBSMediaRemoteSiriContext *)arg1;
- (void)__startSiriWithContext:(PBSMediaRemoteSiriContext *)arg1;
- (void)__activateSiriWithContext:(PBSMediaRemoteSiriContext *)arg1;
@end

