//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKLeaderboardScoreRequest.h"

@class NSArray;

@interface GKLeaderboardScorePlayersRequest : GKLeaderboardScoreRequest
{
    NSArray *_playerInternals;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100078628
@property(copy, nonatomic) NSArray *playerInternals; // @synthesize playerInternals=_playerInternals;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000787cc
- (void)dealloc;	// IMP=0x000000010007877c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000786ec
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100078630
- (void)loadScoresWithService:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010014bbb4
- (void)generateScoresFromServerResponse:(id)arg1 service:(id)arg2 context:(id)arg3 timeToLive:(double)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000010014b778
- (id)resourceIdentifier;	// IMP=0x000000010014b5e0
- (id)serverRequestWithService:(id)arg1;	// IMP=0x000000010014b3ac
- (id)bagKey;	// IMP=0x000000010014b3a0

@end

