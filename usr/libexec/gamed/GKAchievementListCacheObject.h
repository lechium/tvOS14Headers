//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKListCacheObject.h"

@class GKGameCacheObject, GKPlayerProfileCacheObject;

@interface GKAchievementListCacheObject : GKListCacheObject
{
}

+ (id)entityName;	// IMP=0x00000001000470ac
- (id)internalRepresentation;	// IMP=0x00000001000472d8
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0000000100047120
- (_Bool)isValid;	// IMP=0x00000001000470b8

// Remaining properties
@property(retain, nonatomic) GKGameCacheObject *game; // @dynamic game;
@property(retain, nonatomic) GKPlayerProfileCacheObject *player; // @dynamic player;

@end

