//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKTournamentService-Protocol.h"

@class NSString;

@interface GKCloudTournamentService : GKService <GKTournamentService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00000001000a26e0
+ (Class)interfaceClass;	// IMP=0x00000001000a26d4
- (oneway void)getAcceptedCustomTournamentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a7e30
- (oneway void)getShareURLForCustomTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a7b9c
- (void)tournamentForID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a7b30
- (oneway void)loadTournamentsWithPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a7750
- (oneway void)loadTournamentDefinitionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a73c4
- (oneway void)loadTournamentDefinitionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a7238
- (oneway void)registerPlayerInTournament:(id)arg1 playerGroup:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a6ed8
- (oneway void)getTournamentStateForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a6b10
- (oneway void)loadParticipantsForTournament:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a6770
- (oneway void)getLocalParticipantForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a63e4
- (oneway void)getTotalPlayerCountInTournament:(id)arg1 forGroup:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a5bd4
- (oneway void)getFriendCountInTournament:(id)arg1 forGroup:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a5454
- (oneway void)resumePlayInTournament:(id)arg1 withTryToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a50e4
- (oneway void)beginPlayInTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a4d44
- (oneway void)resignFromTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a49e4
- (oneway void)declineInvitationForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a4684
- (oneway void)acceptInvitationForTournament:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a4324
- (oneway void)removeCreator:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a3fb4
- (oneway void)addCreator:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a3c44
- (oneway void)removeInvitees:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a38d4
- (oneway void)addInvitees:(id)arg1 forTournament:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a3564
- (oneway void)createCustomTournamentWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000a319c
- (oneway void)reportProgressScore:(long long)arg1 withTryToken:(id)arg2 forTournament:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000a2e10
- (oneway void)reportScore:(long long)arg1 withTryToken:(id)arg2 forTournament:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000a2a84
- (oneway void)loadHistoricalDataForPlayer:(id)arg1 tournamentDefinition:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000a26e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

