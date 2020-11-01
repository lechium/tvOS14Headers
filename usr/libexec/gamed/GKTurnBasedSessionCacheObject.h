//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKExpiringCacheObject.h"

@class NSData, NSDate, NSNumber, NSOrderedSet, NSString;

@interface GKTurnBasedSessionCacheObject : GKExpiringCacheObject
{
}

+ (id)sessionsWithSessionIDs:(id)arg1 inContext:(id)arg2;	// IMP=0x0000000100053ac8
+ (const void *)uniqueObjectIDLookupKey;	// IMP=0x0000000100053abc
+ (id)uniqueAttributeName;	// IMP=0x0000000100053ab0
+ (id)sessionWithID:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x0000000100053a18
+ (id)relationshipKeyPathsForPrefetch;	// IMP=0x0000000100052594
+ (id)entityName;	// IMP=0x0000000100052588
- (id)internalRepresentation;	// IMP=0x0000000100053eb8
- (id)participantAtIndex:(long long)arg1;	// IMP=0x0000000100053d38
- (void)expire;	// IMP=0x0000000100053cd4
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0000000100052f28
- (id)participantWithPlayerID:(id)arg1;	// IMP=0x0000000100052d18
- (void)saveGameData:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0000000100052ae4
- (void)expireGameData;	// IMP=0x00000001000529ac
- (void)deleteGameData;	// IMP=0x00000001000527fc
- (id)gameData;	// IMP=0x000000010005269c
- (void)prepareForDeletion;	// IMP=0x0000000100052650
- (_Bool)isActive;	// IMP=0x00000001000525d4

// Remaining properties
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSString *bundleVersion; // @dynamic bundleVersion;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) NSString *currentGuestID; // @dynamic currentGuestID;
@property(nonatomic) int currentParticipant; // @dynamic currentParticipant;
@property(retain, nonatomic) NSString *currentPlayerID; // @dynamic currentPlayerID;
@property(retain, nonatomic) NSDate *dataExpirationDate; // @dynamic dataExpirationDate;
@property(retain, nonatomic) NSDate *deletionDate; // @dynamic deletionDate;
@property(retain, nonatomic) NSOrderedSet *exchanges; // @dynamic exchanges;
@property(retain, nonatomic) NSDate *lastTurnDate; // @dynamic lastTurnDate;
@property(retain, nonatomic) NSString *lastTurnPlayerID; // @dynamic lastTurnPlayerID;
@property(retain, nonatomic) NSData *localizableMessage; // @dynamic localizableMessage;
@property(retain, nonatomic) NSString *matchDataVersion; // @dynamic matchDataVersion;
@property(nonatomic) int maxPlayers; // @dynamic maxPlayers;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(nonatomic) int minPlayers; // @dynamic minPlayers;
@property(retain, nonatomic) NSOrderedSet *participants; // @dynamic participants;
@property(retain, nonatomic) NSNumber *platform; // @dynamic platform;
@property(retain, nonatomic) NSString *reason; // @dynamic reason;
@property(retain, nonatomic) NSString *sessionID; // @dynamic sessionID;
@property(retain, nonatomic) NSString *shortBundleVersion; // @dynamic shortBundleVersion;
@property(retain, nonatomic) NSString *status; // @dynamic status;
@property(nonatomic) int turnNumber; // @dynamic turnNumber;
@property(retain, nonatomic) NSString *unusedID; // @dynamic unusedID;

@end

