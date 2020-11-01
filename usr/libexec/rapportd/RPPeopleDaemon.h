//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "RPSubDaemonable-Protocol.h"

@class CUCoalescer, CUSystemMonitor, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener, SFDeviceDiscovery;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPPeopleDaemon : NSObject <NSXPCListenerDelegate, RPSubDaemonable>
{
    int _airdropModeNotifyToken;	// 8 = 0x8
    int _airdropMode;	// 12 = 0xc
    NSMutableArray *_bufferedCloudMessages;	// 16 = 0x10
    SFDeviceDiscovery *_deviceDiscovery;	// 24 = 0x18
    unsigned int _deviceDiscoveryID;	// 32 = 0x20
    NSMutableDictionary *_discoveredDevices;	// 40 = 0x28
    NSMutableSet *_discoveryClients;	// 48 = 0x30
    unsigned int _discoveryFlagsAggregate;	// 56 = 0x38
    _Bool _invalidateCalled;	// 60 = 0x3c
    _Bool _invalidateDone;	// 61 = 0x3d
    _Bool _prefPeopleStrangers;	// 62 = 0x3e
    int _prefTrackWhileAsleepState;	// 64 = 0x40
    NSString *_primaryAppleIDCached;	// 72 = 0x48
    CUSystemMonitor *_systemMonitor;	// 80 = 0x50
    NSMutableSet *_xpcConnections;	// 88 = 0x58
    NSXPCListener *_xpcListener;	// 96 = 0x60
    CUSystemMonitor *_familyMemberMonitor;	// 104 = 0x68
    NSMutableDictionary *_familyAccountIdentityMap;	// 112 = 0x70
    NSMutableDictionary *_familyDeviceIdentityMap;	// 120 = 0x78
    unsigned long long _familyFlags;	// 128 = 0x80
    int _familyNotifyToken;	// 136 = 0x88
    NSObject<OS_dispatch_source> *_familySyncCheckTimer;	// 144 = 0x90
    _Bool _prefPeopleDiscoveryFamily;	// 152 = 0x98
    NSMutableDictionary *_friendAccountIdentityMap;	// 160 = 0xa0
    NSMutableDictionary *_friendDeviceIdentityMap;	// 168 = 0xa8
    _Bool _friendPrivacyGetting;	// 176 = 0xb0
    NSArray *_friendsSuggestedArray;	// 184 = 0xb8
    _Bool _friendsSuggestedGetting;	// 192 = 0xc0
    _Bool _friendsSuggestedNeedsUpdate;	// 193 = 0xc1
    int _friendsSuggestedNotifyToken;	// 196 = 0xc4
    NSObject<OS_dispatch_source> *_friendsSuggestedPollTimer;	// 200 = 0xc8
    long long _prefFamilyIdentityPruneSeconds;	// 208 = 0xd0
    long long _prefFriendAccountPruneSeconds;	// 216 = 0xd8
    long long _prefFriendRefreshMaxSeconds;	// 224 = 0xe0
    long long _prefFriendRefreshMinSeconds;	// 232 = 0xe8
    long long _prefFriendRefreshSeconds;	// 240 = 0xf0
    int _prefFriendSuggestMax;	// 248 = 0xf8
    int _prefFriendSuggestPollSeconds;	// 252 = 0xfc
    long long _prefFriendSyncDelaySeconds;	// 256 = 0x100
    _Bool _prefPeopleDiscoveryFriends;	// 264 = 0x108
    double _prefPrivacyCoalesceMinSecs;	// 272 = 0x110
    double _prefPrivacyCoalesceMaxSecs;	// 280 = 0x118
    CUCoalescer *_privacyChangedCoalescer;	// 288 = 0x120
    int _privacyChangedNotifyToken;	// 296 = 0x128
    double _pruneLastSeconds;	// 304 = 0x130
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 312 = 0x138
}

+ (id)sharedPeopleDaemon;	// IMP=0x000000010003aa30
- (void).cxx_destruct;	// IMP=0x0000000100047ab0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x0000000100047a28
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010004776c
- (unsigned int)_updateIdentityType:(int)arg1 idsDeviceID:(id)arg2 appleID:(id)arg3 contactID:(id)arg4 msg:(id)arg5;	// IMP=0x0000000100046d68
- (_Bool)_sendCloudIdentityFrameType:(unsigned char)arg1 destinationID:(id)arg2 flags:(unsigned int)arg3 msgCtx:(id)arg4;	// IMP=0x0000000100046a20
- (void)_processBufferedCloudMessages;	// IMP=0x00000001000465ec
- (void)_bufferCloudMessage:(id)arg1 frameType:(unsigned char)arg2 msgCtx:(id)arg3;	// IMP=0x000000010004630c
- (void)receivedFriendIdentityUpdate:(id)arg1 msgCtx:(id)arg2;	// IMP=0x0000000100045db8
- (void)receivedFriendIdentityResponse:(id)arg1 msgCtx:(id)arg2;	// IMP=0x0000000100045714
- (void)receivedFriendIdentityRequest:(id)arg1 msgCtx:(id)arg2;	// IMP=0x0000000100045198
- (void)_updateFriendSyncing;	// IMP=0x0000000100044754
- (void)_updateFriendPrivacyResults:(id)arg1;	// IMP=0x00000001000441e4
- (void)_updateFriendPrivacy;	// IMP=0x0000000100043e34
- (_Bool)_updateFriendDevices;	// IMP=0x0000000100043b84
- (unsigned int)_updateFriendIdentityWithAppleID:(id)arg1 contactID:(id)arg2 sendersKnownAlias:(id)arg3 userAdded:(_Bool)arg4 updateDateRequested:(_Bool)arg5;	// IMP=0x000000010004353c
- (_Bool)_updateFriendAccounts;	// IMP=0x0000000100042cc4
- (void)_updateFriendIdentities;	// IMP=0x0000000100042b84
- (void)_resetFriends;	// IMP=0x00000001000427f8
- (_Bool)_pruneFriendDevices;	// IMP=0x0000000100042530
- (_Bool)_pruneFriendAccounts:(_Bool)arg1;	// IMP=0x0000000100042194
- (_Bool)_pruneFriends:(_Bool)arg1;	// IMP=0x0000000100041f9c
- (void)_friendsUpdateSuggestedIfNeeded;	// IMP=0x00000001000418b0
- (void)_friendsEnsureStopped;	// IMP=0x00000001000417e0
- (void)_friendsEnsureStarted;	// IMP=0x00000001000415d8
- (void)_updateFamilyNotification;	// IMP=0x00000001000413c8
- (void)receivedFamilyIdentityUpdate:(id)arg1 msgCtx:(id)arg2;	// IMP=0x00000001000410b8
- (void)receivedFamilyIdentityResponse:(id)arg1 msgCtx:(id)arg2;	// IMP=0x0000000100040d24
- (void)receivedFamilyIdentityRequest:(id)arg1 msgCtx:(id)arg2;	// IMP=0x00000001000409c8
- (void)_updateFamilySyncing;	// IMP=0x0000000100040134
- (_Bool)_pruneFamilyDevices;	// IMP=0x000000010003fc1c
- (_Bool)_updateFamilyDevices;	// IMP=0x000000010003f96c
- (_Bool)_updateFamilyIdentityWithFamilyMember:(id)arg1;	// IMP=0x000000010003f55c
- (_Bool)_updateFamilyAccounts;	// IMP=0x000000010003eec8
- (void)_updateFamilyIdentities;	// IMP=0x000000010003ed7c
- (void)_familyEnsureStopped;	// IMP=0x000000010003ec6c
- (void)_familyEnsureStarted;	// IMP=0x000000010003e9fc
- (void)_daemonDeviceChanged:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x000000010003e7a0
- (void)_daemonDeviceLost:(id)arg1;	// IMP=0x000000010003e5a0
- (void)_daemonDeviceFound:(id)arg1;	// IMP=0x000000010003e378
- (void)_discoveryEnsureStopped;	// IMP=0x000000010003e2bc
- (void)_discoveryEnsureStarted;	// IMP=0x000000010003da10
- (void)_regenerateSelfIdentity:(id)arg1;	// IMP=0x000000010003d818
- (id)_primaryAppleID:(_Bool)arg1;	// IMP=0x000000010003d6f0
- (void)_update;	// IMP=0x000000010003d62c
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x000000010003d624
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010003d61c
- (void)prefsChanged;	// IMP=0x000000010003cb88
- (_Bool)addOrUpdateIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003c6b8
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x000000010003bc24
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x000000010003ba40
- (void)_invalidated;	// IMP=0x000000010003b994
- (void)_invalidate;	// IMP=0x000000010003b760
- (void)invalidate;	// IMP=0x000000010003b6f8
- (void)_activate;	// IMP=0x000000010003b354
- (void)activate;	// IMP=0x000000010003b2ec
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000010003ab18
- (id)init;	// IMP=0x000000010003aa9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
