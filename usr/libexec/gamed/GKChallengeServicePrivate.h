//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKChallengeService.h"

#import "GKChallengeServicePrivate-Protocol.h"

@class NSString;

@interface GKChallengeServicePrivate : GKChallengeService <GKChallengeServicePrivate>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0000000100181fdc
+ (Class)interfaceClass;	// IMP=0x0000000100181fd0
- (oneway void)startGame:(id)arg1 withChallenge:(id)arg2;	// IMP=0x000000010018247c
- (oneway void)getCountOfChallengesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100181fe4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

