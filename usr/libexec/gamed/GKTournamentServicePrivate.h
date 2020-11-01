//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKTournamentService.h"

#import "GKTournamentServicePrivate-Protocol.h"

@class NSString;

@interface GKTournamentServicePrivate : GKTournamentService <GKTournamentServicePrivate>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0000000100066860
+ (Class)interfaceClass;	// IMP=0x0000000100066854
- (oneway void)removeCustomTournament:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100066e1c
- (oneway void)resetTournamentDataForTournamentsWithTournamentDefinitionIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100066ba0
- (oneway void)loadTournamentWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100066868

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

