//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKChallengeBulletin.h"

@interface GKChallengeReceivedBulletin : GKChallengeBulletin
{
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010002b700
- (void)handleDeclineAction;	// IMP=0x000000010002c6f0
- (void)handleAction:(id)arg1;	// IMP=0x000000010002c51c
- (unsigned long long)launchEventType;	// IMP=0x000000010002c514
- (void)assembleBulletin;	// IMP=0x000000010002c0e8
- (void)notifyClient:(id)arg1;	// IMP=0x000000010002bfe8
- (void)dealloc;	// IMP=0x000000010002b6cc
- (id)init;	// IMP=0x000000010002b698

@end

