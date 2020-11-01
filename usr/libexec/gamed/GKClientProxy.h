//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKClientProtocol-Protocol.h"
#import "_GKStateMachineDelegate-Protocol.h"

@class GKDatabaseConnection, GKEntitlements, GKEventTuple, GKGameInternal, GKInviteSession, GKMatchResponse, GKResourceManager, GKThreadsafeDictionary, NSDate, NSDictionary, NSLocale, NSMapTable, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSXPCConnection, _GKStateMachine;
@protocol GKUIViewService, OS_dispatch_queue;

@interface GKClientProxy : NSObject <GKClientProtocol, _GKStateMachineDelegate>
{
    _Bool _deniedProductionEnvironment;	// 8 = 0x8
    _Bool _productionSigned;	// 9 = 0x9
    _Bool _installed;	// 10 = 0xa
    _Bool _supportsMultipleActivePlayers;	// 11 = 0xb
    _Bool _isOcelot;	// 12 = 0xc
    unsigned char _achievementsRateLimitedCurrentState;	// 13 = 0xd
    unsigned char _scoresRateLimitedCurrentState;	// 14 = 0xe
    _Bool _initialized;	// 15 = 0xf
    int _pid;	// 16 = 0x10
    unsigned int _applicationState;	// 20 = 0x14
    unsigned int _previousApplicationState;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_replyQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_authQueue;	// 40 = 0x28
    NSXPCConnection *_connection;	// 48 = 0x30
    GKEntitlements *_entitlements;	// 56 = 0x38
    NSNumber *_adamID;	// 64 = 0x40
    NSNumber *_sandboxExtensionToken;	// 72 = 0x48
    NSNumber *_externalVersion;	// 80 = 0x50
    NSString *_bundleIdentifier;	// 88 = 0x58
    NSString *_bundleVersion;	// 96 = 0x60
    NSString *_bundleShortVersion;	// 104 = 0x68
    long long _environment;	// 112 = 0x70
    NSDate *_achievementsRateLimitingStartDate;	// 120 = 0x78
    long long _achievementsRateLimitingCurrentNumberOfRequests;	// 128 = 0x80
    NSDate *_scoresRateLimitingStartDate;	// 136 = 0x88
    long long _scoresRateLimitingCurrentNumberOfRequests;	// 144 = 0x90
    NSMutableDictionary *_alreadyCoalescingNetworkRequests;	// 152 = 0x98
    NSString *_language;	// 160 = 0xa0
    GKClientProxy<GKUIViewService> *_viewService;	// 168 = 0xa8
    GKGameInternal *_currentGame;	// 176 = 0xb0
    GKEventTuple *_launchEvent;	// 184 = 0xb8
    GKInviteSession *_inviteSession;	// 192 = 0xc0
    GKMatchResponse *_currentMatchResponse;	// 200 = 0xc8
    _GKStateMachine *_appInitStateMachine;	// 208 = 0xd0
    GKThreadsafeDictionary *_appSessions;	// 216 = 0xd8
    NSObject<OS_dispatch_queue> *_delayedRequestsQueue;	// 224 = 0xe0
    GKDatabaseConnection *_delayedRequestsDBConnection;	// 232 = 0xe8
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 240 = 0xf0
    GKResourceManager *_resourceManager;	// 248 = 0xf8
    NSMutableSet *_pendingDataTypesForRefresh;	// 256 = 0x100
    NSMapTable *_extensionProxies;	// 264 = 0x108
    NSDictionary *_preferencesFromBag;	// 272 = 0x110
}

+ (id)syncQueue;	// IMP=0x00000001001280a8
+ (void)closeDatabaseFromManagedObjectContextForMOC:(id)arg1;	// IMP=0x00000001000712d0
+ (void)closeDatabaseFromManagedObjectContextForPlayer:(id)arg1;	// IMP=0x0000000100071298
+ (id)newManagedObjectContextForClient:(id)arg1 player:(id)arg2;	// IMP=0x0000000100071168
+ (id)_newManagedObjectContextForPlayer:(id)arg1;	// IMP=0x0000000100070ab8
+ (id)cacheFileQueue;	// IMP=0x0000000100070a50
+ (id)managedObjectModel;	// IMP=0x0000000100070864
+ (void)removeAllCaches;	// IMP=0x00000001000704e8
+ (void)removeCacheForPlayer:(id)arg1;	// IMP=0x00000001000701a0
+ (id)cacheFileURLForClient:(id)arg1 player:(id)arg2;	// IMP=0x0000000100070170
+ (id)cacheDirectoryURLForClient:(id)arg1 player:(id)arg2;	// IMP=0x000000010006fe7c
+ (id)cacheDirectoryForBundleID:(id)arg1 environment:(long long)arg2;	// IMP=0x000000010006fe0c
+ (id)_existingManagedObjectContextForPlayer:(id)arg1;	// IMP=0x000000010006fbc4
+ (id)contextKeyForPlayer:(id)arg1;	// IMP=0x000000010006fb94
+ (void)removeClient:(id)arg1;	// IMP=0x000000010012b540
+ (void)enumerateClientsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010012b474
+ (id)clientsToBeEnumerated;	// IMP=0x000000010012b250
+ (id)clientForMatchmakingRID:(id)arg1;	// IMP=0x000000010012b088
+ (id)clientForInviteSessionToken:(id)arg1;	// IMP=0x000000010012ac84
+ (id)foregroundClient;	// IMP=0x000000010012ab20
+ (id)clientForBundleID:(id)arg1 pid:(int)arg2 createIfNecessary:(_Bool)arg3;	// IMP=0x000000010012ab08
+ (id)clientForBundleID:(id)arg1 bundle:(id)arg2 pid:(int)arg3 createIfNecessary:(_Bool)arg4;	// IMP=0x000000010012a108
+ (_Bool)isExtensionBundleID:(id)arg1;	// IMP=0x0000000100129f7c
+ (id)clientForProcessIdentifier:(int)arg1;	// IMP=0x0000000100129edc
+ (id)clientForBundleID:(id)arg1;	// IMP=0x0000000100129ec4
+ (id)gameCenterClient;	// IMP=0x0000000100129ea0
+ (id)_clientLookup;	// IMP=0x0000000100129e24
+ (id)factoryQueue;	// IMP=0x0000000100129db4
+ (void)saveAppInitState:(id)arg1 forBundleID:(id)arg2 pid:(int)arg3;	// IMP=0x000000010012f1d8
+ (id)lastKnownAppInitStateForClientWithBundleID:(id)arg1 pid:(int)arg2;	// IMP=0x000000010012edec
+ (void)authenticationDidChange;	// IMP=0x000000010012e998
+ (void)performDelayedRequestsForEnvironment:(long long)arg1;	// IMP=0x0000000100136218
+ (id)storeAndForwardDirectoryPathForEnvironment:(long long)arg1;	// IMP=0x0000000100134dcc
- (void).cxx_destruct;	// IMP=0x0000000100129c5c
@property(copy, nonatomic) NSDictionary *preferencesFromBag; // @synthesize preferencesFromBag=_preferencesFromBag;
@property(retain, nonatomic) NSMapTable *extensionProxies; // @synthesize extensionProxies=_extensionProxies;
@property(retain, nonatomic) NSMutableSet *pendingDataTypesForRefresh; // @synthesize pendingDataTypesForRefresh=_pendingDataTypesForRefresh;
@property(retain, nonatomic) GKResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(retain, nonatomic) GKDatabaseConnection *delayedRequestsDBConnection; // @synthesize delayedRequestsDBConnection=_delayedRequestsDBConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delayedRequestsQueue; // @synthesize delayedRequestsQueue=_delayedRequestsQueue;
@property(retain, nonatomic) GKThreadsafeDictionary *appSessions; // @synthesize appSessions=_appSessions;
@property(retain) _GKStateMachine *appInitStateMachine; // @synthesize appInitStateMachine=_appInitStateMachine;
@property _Bool initialized; // @synthesize initialized=_initialized;
@property(retain) GKMatchResponse *currentMatchResponse; // @synthesize currentMatchResponse=_currentMatchResponse;
@property(retain) GKInviteSession *inviteSession; // @synthesize inviteSession=_inviteSession;
@property(retain, nonatomic) GKEventTuple *launchEvent; // @synthesize launchEvent=_launchEvent;
@property unsigned int previousApplicationState; // @synthesize previousApplicationState=_previousApplicationState;
@property unsigned int applicationState; // @synthesize applicationState=_applicationState;
@property(retain, nonatomic) GKGameInternal *currentGame; // @synthesize currentGame=_currentGame;
@property(nonatomic) __weak GKClientProxy<GKUIViewService> *viewService; // @synthesize viewService=_viewService;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSMutableDictionary *alreadyCoalescingNetworkRequests; // @synthesize alreadyCoalescingNetworkRequests=_alreadyCoalescingNetworkRequests;
@property(nonatomic) unsigned char scoresRateLimitedCurrentState; // @synthesize scoresRateLimitedCurrentState=_scoresRateLimitedCurrentState;
@property(nonatomic) long long scoresRateLimitingCurrentNumberOfRequests; // @synthesize scoresRateLimitingCurrentNumberOfRequests=_scoresRateLimitingCurrentNumberOfRequests;
@property(retain, nonatomic) NSDate *scoresRateLimitingStartDate; // @synthesize scoresRateLimitingStartDate=_scoresRateLimitingStartDate;
@property(nonatomic) unsigned char achievementsRateLimitedCurrentState; // @synthesize achievementsRateLimitedCurrentState=_achievementsRateLimitedCurrentState;
@property(nonatomic) long long achievementsRateLimitingCurrentNumberOfRequests; // @synthesize achievementsRateLimitingCurrentNumberOfRequests=_achievementsRateLimitingCurrentNumberOfRequests;
@property(retain, nonatomic) NSDate *achievementsRateLimitingStartDate; // @synthesize achievementsRateLimitingStartDate=_achievementsRateLimitingStartDate;
@property _Bool isOcelot; // @synthesize isOcelot=_isOcelot;
@property(nonatomic) _Bool supportsMultipleActivePlayers; // @synthesize supportsMultipleActivePlayers=_supportsMultipleActivePlayers;
@property(nonatomic) _Bool installed; // @synthesize installed=_installed;
@property(nonatomic) _Bool productionSigned; // @synthesize productionSigned=_productionSigned;
@property(nonatomic) _Bool deniedProductionEnvironment; // @synthesize deniedProductionEnvironment=_deniedProductionEnvironment;
@property(nonatomic) long long environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *bundleShortVersion; // @synthesize bundleShortVersion=_bundleShortVersion;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSNumber *externalVersion; // @synthesize externalVersion=_externalVersion;
@property(retain, nonatomic) NSNumber *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(retain) GKEntitlements *entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *authQueue; // @synthesize authQueue=_authQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
- (void)deleteInviteSession;	// IMP=0x000000010012979c
- (void)cancelInvitationForSession:(id)arg1 playerID:(id)arg2 pushTokens:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001001291f0
- (_Bool)processMatchResponse:(id)arg1;	// IMP=0x0000000100128904
- (void)checkMatchStatus;	// IMP=0x000000010012834c
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x00000001001282f0
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x0000000100128118
- (void)setLaunchEvent:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x0000000100127ebc
- (void)updatePreferencesFromBag:(id)arg1;	// IMP=0x0000000100127e5c
- (void)setExtensionProxy:(id)arg1 forBundleID:(id)arg2;	// IMP=0x0000000100127d3c
- (_Bool)isExtension;	// IMP=0x0000000100127d34
- (_Bool)isUIService;	// IMP=0x0000000100127d2c
- (_Bool)isGameCenter;	// IMP=0x0000000100127cd4
@property(readonly, nonatomic) NSLocale *locale; // @dynamic locale;
@property(readonly, nonatomic) NSDictionary *gameDescriptor;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100127820
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)resetCache:(id)arg1;	// IMP=0x00000001001276c0
- (void)_setupCache;	// IMP=0x00000001001276bc
- (id)credentialForPlayer:(id)arg1;	// IMP=0x0000000100127548
- (id)transportWithCredential:(id)arg1;	// IMP=0x0000000100127484
- (void)dealloc;	// IMP=0x0000000100127390
- (void)updateIfRecentlyInstalled;	// IMP=0x0000000100127060
- (id)initWithBundleIdentifier:(id)arg1 bundleOrNil:(id)arg2 pid:(int)arg3;	// IMP=0x0000000100126a0c
- (void)initializeInitializationStateMachine;	// IMP=0x00000001001268a0
- (void)invalidateStoreFrontDependentObjects;	// IMP=0x0000000100070904
- (id)transactionGroupIfCacheExistsForPlayer:(id)arg1;	// IMP=0x000000010006fd88
- (id)transactionGroupForPlayer:(id)arg1;	// IMP=0x000000010006fd24
- (id)_managedObjectContextForPlayer:(id)arg1;	// IMP=0x000000010006fc08
- (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010012e6e4
- (oneway void)resetLoginCancelCount;	// IMP=0x000000010012e500
- (oneway void)loadRemoteImageDataForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010012e460
- (oneway void)localizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010012e320
- (oneway void)getAuthenticatedPlayerIDWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010012e1e4
- (oneway void)getAccountNameWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010012df64
- (oneway void)getAuthenticatedLocalPlayersWithStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010012d408
- (oneway void)getGamedFiredUpWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010012d218
- (oneway void)getAuthenticatedPlayerInfo:(CDUnknownBlockType)arg1;	// IMP=0x000000010012ced4
- (oneway void)getPrivateServicesForPID:(int)arg1 localPlayer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010012caf8
- (oneway void)getServicesForPID:(int)arg1 localPlayer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010012c698
- (oneway void)getPrivateServicesWithTransport:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010012c0c0
- (oneway void)getServicesWithTransport:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010012b9d0
- (oneway void)setTestGame:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010012b9bc
- (oneway void)setHostPID:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010012b9a8
- (id)serviceForClass:(Class)arg1 transport:(id)arg2 client:(id)arg3 credential:(id)arg4;	// IMP=0x000000010012b6fc
- (void)didEnterForeground;	// IMP=0x000000010012f768
- (void)updateAppInitState;	// IMP=0x000000010012f688
- (id)verifyAuthorized;	// IMP=0x000000010012ecb8
- (id)appInitState;	// IMP=0x000000010012eca8
- (_Bool)setAppInitState:(id)arg1;	// IMP=0x000000010012ec98
- (void)stateDidChange;	// IMP=0x000000010012ec0c
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x000000010012eb88
- (void)sendAuthenticationDidChangeNotificationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010012e9c8
- (void)bgInitializeWithCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100134934
- (void)initializeWithCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100134388
- (void)removeAppSessionForPlayer:(id)arg1;	// IMP=0x0000000100134378
- (id)appSessionForPlayer:(id)arg1;	// IMP=0x00000001001342f0
- (void)addAppSession:(id)arg1 forCredential:(id)arg2;	// IMP=0x00000001001341c4
- (void)backgroundWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100133a98
- (void)terminateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010013336c
- (oneway void)setLogBits:(int)arg1;	// IMP=0x00000001001331b8
- (oneway void)authenticatedPlayersDidChange:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100132c88
- (oneway void)completedOptimisticAuthenticationWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x0000000100132bdc
- (oneway void)setCurrentGame:(id)arg1 serverEnvironment:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100132818
- (oneway void)getPreferenceForKey:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100132778
- (oneway void)setPreferencesValues:(id)arg1;	// IMP=0x000000010013260c
- (oneway void)refreshPendingDataTypes;	// IMP=0x00000001001324d8
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x0000000100132094
- (oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;	// IMP=0x0000000100131fa0
- (oneway void)session:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 fromPlayer:(id)arg4;	// IMP=0x0000000100131e3c
- (oneway void)session:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;	// IMP=0x0000000100131cf4
- (oneway void)session:(id)arg1 player:(id)arg2 didSaveData:(id)arg3;	// IMP=0x0000000100131bac
- (oneway void)session:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;	// IMP=0x0000000100131a78
- (oneway void)session:(id)arg1 removedPlayer:(id)arg2;	// IMP=0x0000000100131954
- (oneway void)session:(id)arg1 addedPlayer:(id)arg2;	// IMP=0x0000000100131830
- (oneway void)localPlayerAcceptedCustomTournamentInvite;	// IMP=0x00000001001316d4
- (oneway void)didReceiveData:(id)arg1 reliably:(_Bool)arg2 forRecipients:(id)arg3 fromSender:(id)arg4;	// IMP=0x0000000100131584
- (oneway void)didDisconnectFromParticipantWithID:(id)arg1;	// IMP=0x000000010013147c
- (oneway void)didConnectToParticipantWithID:(id)arg1;	// IMP=0x0000000100131374
- (oneway void)relayPushNotification:(id)arg1;	// IMP=0x0000000100131190
- (oneway void)cancelGameInvite:(id)arg1;	// IMP=0x0000000100130fac
- (oneway void)declineInviteWithNotification:(id)arg1;	// IMP=0x0000000100130dc8
- (oneway void)acceptInviteWithNotification:(id)arg1;	// IMP=0x0000000100130be4
- (oneway void)acceptMultiplayerGameInvite;	// IMP=0x0000000100130a84
- (oneway void)fetchTurnBasedData;	// IMP=0x0000000100130984
- (oneway void)achievementSelected:(id)arg1;	// IMP=0x000000010013087c
- (oneway void)scoreSelected:(id)arg1;	// IMP=0x0000000100130774
- (oneway void)challengeCompleted:(id)arg1;	// IMP=0x0000000100130600
- (oneway void)challengeReceived:(id)arg1;	// IMP=0x00000001001304f8
- (oneway void)completedChallengeSelected:(id)arg1;	// IMP=0x00000001001303f0
- (oneway void)receivedChallengeSelected:(id)arg1;	// IMP=0x00000001001302e8
- (oneway void)friendRequestSelected:(id)arg1;	// IMP=0x00000001001301a0
- (oneway void)respondedToNearbyInvite:(id)arg1;	// IMP=0x0000000100130098
- (oneway void)resetNetworkActivity;	// IMP=0x000000010012ffbc
- (oneway void)endNetworkActivity;	// IMP=0x000000010012fee0
- (oneway void)beginNetworkActivity;	// IMP=0x000000010012fe04
- (oneway void)requestSandboxExtension:(CDUnknownBlockType)arg1;	// IMP=0x000000010012fca0
- (void)performDelayedRequestsForCredential:(id)arg1;	// IMP=0x0000000100137540
- (void)performDelayedRequestsForEnvironment:(long long)arg1;	// IMP=0x0000000100137470
- (void)performPassThroughScoreRequestsForEnvironment:(long long)arg1;	// IMP=0x0000000100136d78
- (void)performPassThroughAchievementRequestsForEnvironment:(long long)arg1;	// IMP=0x0000000100136680
- (id)removeFriendWriterWithCredential:(id)arg1;	// IMP=0x0000000100136174
- (id)removeGameWriterWithCredential:(id)arg1;	// IMP=0x00000001001360d0
- (id)deletePlayerPhotoWriterWithCredential:(id)arg1;	// IMP=0x000000010013602c
- (id)setPlayerPhotoWriterWithCredential:(id)arg1;	// IMP=0x0000000100135f88
- (id)setPlayerStatusWriterWithCredential:(id)arg1;	// IMP=0x0000000100135ee4
- (id)abortChallengesWriterWithCredential:(id)arg1;	// IMP=0x0000000100135e40
- (id)issueChallengesWriterWithCredential:(id)arg1;	// IMP=0x0000000100135d9c
- (id)submitAchievementsWriterWithCredential:(id)arg1;	// IMP=0x0000000100135ce4
- (id)submitRatingsWriterWithCredential:(id)arg1;	// IMP=0x0000000100135c40
- (id)submitScoresWriterWithCredential:(id)arg1;	// IMP=0x0000000100135b9c
- (id)_delayedRequestWriterWithCacheWriterClass:(Class)arg1 cacheReaderClass:(Class)arg2 networkWriterClass:(Class)arg3 bagKey:(id)arg4 batchSubmissionInterval:(long long)arg5 credential:(id)arg6;	// IMP=0x0000000100135824
- (void)_removeDelayedRequestStore;	// IMP=0x00000001001353d0
- (void)_setupDelayedRequestsWriters;	// IMP=0x00000001001351a8
- (id)requestsCacheForEnvironment:(long long)arg1;	// IMP=0x0000000100134f5c
- (id)storeAndForwardDirectoryPathForEnvironment:(long long)arg1;	// IMP=0x0000000100134ef4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

