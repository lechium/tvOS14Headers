//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKExpiringCacheObject.h"

#import "GKCacheObjectImageProtocol-Protocol.h"

@class GKAchievementDescriptionListCacheObject, GKLeaderboardSetListCacheObject, GKTurnBasedSessionListCacheObject, NSDate, NSNumber, NSSet, NSString;

@interface GKGameCacheObject : GKExpiringCacheObject <GKCacheObjectImageProtocol>
{
}

+ (id)entityName;	// IMP=0x0000000100046a1c
+ (id)_gamesForFullGameDescriptors:(id)arg1 context:(id)arg2;	// IMP=0x0000000100045124
+ (id)gamesForGameDescriptors:(id)arg1 context:(id)arg2;	// IMP=0x0000000100045080
+ (id)gamesForBundleIDs:(id)arg1 context:(id)arg2;	// IMP=0x0000000100044fdc
+ (id)gameForBundleID:(id)arg1 context:(id)arg2;	// IMP=0x0000000100044efc
+ (id)gameForGameDescriptor:(id)arg1 context:(id)arg2;	// IMP=0x0000000100044e60
+ (id)fetchSortDescriptors;	// IMP=0x0000000100044db4
+ (const void *)uniqueObjectIDLookupKey;	// IMP=0x0000000100044da8
+ (id)uniqueAttributeName;	// IMP=0x0000000100044d9c
- (id)gameDescriptor;	// IMP=0x0000000100046764
- (id)leaderboardSetWithIdentifier:(id)arg1;	// IMP=0x00000001000466e8
- (id)internalRepresentation;	// IMP=0x00000001000465c0
- (_Bool)storePiecesExpired;	// IMP=0x0000000100046590
- (_Bool)storePiecesValid;	// IMP=0x000000010004654c
- (void)updateStorePiecesWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x000000010004603c
- (void)updateWithServerRepresentation:(id)arg1 expirationDate:(id)arg2;	// IMP=0x0000000100045a3c
- (void)updateWithGameDescriptor:(id)arg1;	// IMP=0x00000001000454e4
- (_Bool)isValid;	// IMP=0x0000000100045468
- (void)invalidate;	// IMP=0x0000000100044d48

// Remaining properties
@property(retain, nonatomic) GKAchievementDescriptionListCacheObject *achievementDescriptionList; // @dynamic achievementDescriptionList;
@property(retain, nonatomic) NSSet *achievementLists; // @dynamic achievementLists;
@property(retain, nonatomic) NSNumber *adamID; // @dynamic adamID;
@property(retain, nonatomic) NSString *artistName; // @dynamic artistName;
@property(nonatomic) float averageUserRating; // @dynamic averageUserRating;
@property(retain, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(retain, nonatomic) NSString *bundleVersion; // @dynamic bundleVersion;
@property(retain, nonatomic) NSSet *compatiblePlatforms; // @dynamic compatiblePlatforms;
@property(readonly, copy) NSString *debugDescription;
@property(retain, nonatomic) NSString *defaultCategory; // @dynamic defaultCategory;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSNumber *externalVersion; // @dynamic externalVersion;
@property(retain, nonatomic) NSSet *flowRates; // @dynamic flowRates;
@property(retain, nonatomic) NSSet *gameRecords; // @dynamic gameRecords;
@property(nonatomic) _Bool hasAggregateLeaderboard; // @dynamic hasAggregateLeaderboard;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *image128; // @dynamic image128;
@property(retain, nonatomic) NSString *image256; // @dynamic image256;
@property(retain, nonatomic) NSString *image512; // @dynamic image512;
@property(retain, nonatomic) NSString *image64; // @dynamic image64;
@property(retain, nonatomic) NSString *imageTemplate; // @dynamic imageTemplate;
@property(retain, nonatomic) NSSet *invites; // @dynamic invites;
@property(nonatomic) _Bool isArcadeGame; // @dynamic isArcadeGame;
@property(retain, nonatomic) NSSet *leaderboardLists; // @dynamic leaderboardLists;
@property(retain, nonatomic) GKLeaderboardSetListCacheObject *leaderboardSetList; // @dynamic leaderboardSetList;
@property(retain, nonatomic) NSSet *leaderboards; // @dynamic leaderboards;
@property(retain, nonatomic) NSSet *listEntries; // @dynamic listEntries;
@property(nonatomic) unsigned int maxAchievementPoints; // @dynamic maxAchievementPoints;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned int numberOfAchievements; // @dynamic numberOfAchievements;
@property(nonatomic) unsigned int numberOfCategories; // @dynamic numberOfCategories;
@property(nonatomic) unsigned int numberOfLeaderboardSets; // @dynamic numberOfLeaderboardSets;
@property(nonatomic) long long numberOfUserRatings; // @dynamic numberOfUserRatings;
@property(nonatomic) _Bool owned; // @dynamic owned;
@property(retain, nonatomic) NSNumber *platform; // @dynamic platform;
@property(retain, nonatomic) NSSet *playerLists; // @dynamic playerLists;
@property(retain, nonatomic) NSSet *players; // @dynamic players;
@property(retain, nonatomic) NSSet *playersToInvite; // @dynamic playersToInvite;
@property(nonatomic) _Bool prerendered; // @dynamic prerendered;
@property(retain, nonatomic) NSString *priceDisplay; // @dynamic priceDisplay;
@property(retain, nonatomic) NSSet *recentPlayerLists; // @dynamic recentPlayerLists;
@property(retain, nonatomic) NSSet *recommendationEntries; // @dynamic recommendationEntries;
@property(retain, nonatomic) NSString *shortBundleVersion; // @dynamic shortBundleVersion;
@property(retain, nonatomic) NSString *shortViewItemURL; // @dynamic shortViewItemURL;
@property(nonatomic) NSString *softwareType; // @dynamic softwareType;
@property(retain, nonatomic) NSDate *storePiecesExpirationDate; // @dynamic storePiecesExpirationDate;
@property(readonly) Class superclass;
@property(nonatomic) _Bool supportsAchievements; // @dynamic supportsAchievements;
@property(nonatomic) _Bool supportsChallenges; // @dynamic supportsChallenges;
@property(nonatomic) _Bool supportsLeaderboardSets; // @dynamic supportsLeaderboardSets;
@property(nonatomic) _Bool supportsLeaderboards; // @dynamic supportsLeaderboards;
@property(nonatomic) _Bool supportsMultiplayer; // @dynamic supportsMultiplayer;
@property(nonatomic) _Bool supportsTurnBasedMultiplayer; // @dynamic supportsTurnBasedMultiplayer;
@property(retain, nonatomic) NSString *tellAFriendMessageContentsUrl; // @dynamic tellAFriendMessageContentsUrl;
@property(retain, nonatomic) NSSet *topGameEntries; // @dynamic topGameEntries;
@property(retain, nonatomic) GKTurnBasedSessionListCacheObject *turnBasedSessionList; // @dynamic turnBasedSessionList;
@property(retain, nonatomic) NSSet *turnBasedSessions; // @dynamic turnBasedSessions;
@property(retain, nonatomic) NSString *viewItemURL; // @dynamic viewItemURL;

@end

