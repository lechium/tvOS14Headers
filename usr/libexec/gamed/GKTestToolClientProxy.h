//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKClientProxy.h"

@class GKGameInternal;

@interface GKTestToolClientProxy : GKClientProxy
{
    GKGameInternal *_testGame;	// 8 = 0x8
}

@property(retain, nonatomic) GKGameInternal *testGame; // @synthesize testGame=_testGame;
- (id)externalVersion;	// IMP=0x000000010010eb34
- (id)adamID;	// IMP=0x000000010010eaf8
- (id)bundleShortVersion;	// IMP=0x000000010010eaac
- (id)bundleVersion;	// IMP=0x000000010010ea70
- (id)bundleIdentifier;	// IMP=0x000000010010ea34
- (id)transportWithCredential:(id)arg1;	// IMP=0x000000010010e9b0
- (void)dealloc;	// IMP=0x000000010010e960
- (oneway void)setTestGame:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010010e6e4

@end

