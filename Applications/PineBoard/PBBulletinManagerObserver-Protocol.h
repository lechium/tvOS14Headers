//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PBBulletinManager, PBRemoteBulletinViewController;

@protocol PBBulletinManagerObserver <NSObject>

@optional
- (void)bulletinManager:(PBBulletinManager *)arg1 didEndFocusOnBulletinViewController:(PBRemoteBulletinViewController *)arg2;
- (void)bulletinManager:(PBBulletinManager *)arg1 didBeginFocusOnBulletinViewController:(PBRemoteBulletinViewController *)arg2;
- (void)bulletinManager:(PBBulletinManager *)arg1 didDismissBulletinViewController:(PBRemoteBulletinViewController *)arg2;
- (void)bulletinManager:(PBBulletinManager *)arg1 willPresentBulletinViewController:(PBRemoteBulletinViewController *)arg2 withActivationActions:(unsigned long long)arg3;
@end

