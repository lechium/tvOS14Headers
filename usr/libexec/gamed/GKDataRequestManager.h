//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "APSConnectionDelegate-Protocol.h"
#import "GKLockStatusObserver-Protocol.h"
#import "GKNATObserverDelegate-Protocol.h"
#import "GKPreferencesDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class APSConnection, GKApplicationStateMonitor, GKNATObserver, GKReachability, NSCountedSet, NSData, NSDate, NSMutableDictionary, NSString, NSXPCListener;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface GKDataRequestManager : NSObject <NSXPCListenerDelegate, APSConnectionDelegate, GKNATObserverDelegate, GKPreferencesDelegate, GKLockStatusObserver>
{
    NSXPCListener *_publicListener;	// 8 = 0x8
    long long _currentEnvironment;	// 16 = 0x10
    int _natType;	// 24 = 0x18
    GKNATObserver *_natObserver;	// 32 = 0x20
    NSObject<OS_dispatch_semaphore> *_natSemaphore;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_natQueue;	// 48 = 0x30
    NSData *_pushToken;	// 56 = 0x38
    _Bool _receivesMemoryWarnings;	// 64 = 0x40
    long long _activePushEnvironment;	// 72 = 0x48
    NSDate *_nearbyQueryLastCheckDate;	// 80 = 0x50
    double _nearbyQueryAllowance;	// 88 = 0x58
    APSConnection *_apsConnection;	// 96 = 0x60
    APSConnection *_pushConnectionProd;	// 104 = 0x68
    APSConnection *_pushConnectionDev;	// 112 = 0x70
    NSMutableDictionary *_transactionBag;	// 120 = 0x78
    NSCountedSet *_transactionCounts;	// 128 = 0x80
    GKApplicationStateMonitor *_applicationStateMonitor;	// 136 = 0x88
    NSString *_authenticatingWithSettingsBundleID;	// 144 = 0x90
    GKReachability *_reachability;	// 152 = 0x98
}

+ (id)ratingsQueue;	// IMP=0x00000001000603bc
+ (id)statsQueue;	// IMP=0x0000000100060354
+ (_Bool)allowSelfSignedCertForEnvironment:(long long)arg1;	// IMP=0x000000010005bcfc
+ (id)syncQueue;	// IMP=0x0000000100059fc4
+ (id)pushQueue;	// IMP=0x0000000100059f5c
+ (id)clientQueue;	// IMP=0x0000000100059f50
+ (id)sharedManager;	// IMP=0x0000000100059f44
@property(retain, nonatomic) GKReachability *reachability; // @synthesize reachability=_reachability;
@property(retain) NSString *authenticatingWithSettingsBundleID; // @synthesize authenticatingWithSettingsBundleID=_authenticatingWithSettingsBundleID;
@property(retain, nonatomic) GKApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
@property(retain, nonatomic) NSCountedSet *transactionCounts; // @synthesize transactionCounts=_transactionCounts;
@property(retain, nonatomic) NSMutableDictionary *transactionBag; // @synthesize transactionBag=_transactionBag;
@property(retain, nonatomic) APSConnection *pushConnectionDev; // @synthesize pushConnectionDev=_pushConnectionDev;
@property(retain, nonatomic) APSConnection *pushConnectionProd; // @synthesize pushConnectionProd=_pushConnectionProd;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property double nearbyQueryAllowance; // @synthesize nearbyQueryAllowance=_nearbyQueryAllowance;
@property(retain) NSDate *nearbyQueryLastCheckDate; // @synthesize nearbyQueryLastCheckDate=_nearbyQueryLastCheckDate;
@property(nonatomic) _Bool receivesMemoryWarnings; // @synthesize receivesMemoryWarnings=_receivesMemoryWarnings;
@property(readonly) long long currentEnvironment; // @synthesize currentEnvironment=_currentEnvironment;
- (id)storeBag;	// IMP=0x0000000100060424
- (void)terminate;	// IMP=0x00000001000601e8
- (void)beginTransaction:(id)arg1;	// IMP=0x000000010005fff8
- (void)endTransaction:(id)arg1;	// IMP=0x000000010005fe50
- (void)processIncomingMessage:(id)arg1;	// IMP=0x000000010005fc64
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x000000010005f600
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x000000010005f378
- (void)processIncomingiMessageInvite:(id)arg1;	// IMP=0x000000010005ee7c
- (void)didReceiveIncomingIDSMessage:(id)arg1;	// IMP=0x000000010005ee70
- (void)gameCenterDidBecomeRestricted;	// IMP=0x000000010005ed90
- (void)loadLocalizedGameNameForBundleID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005ebb4
- (void)appStateChanged:(id)arg1;	// IMP=0x000000010005e7f0
- (void)terminateClient:(id)arg1;	// IMP=0x000000010005e6a4
- (void)synchronizeBagWithPreferences;	// IMP=0x000000010005e4b4
- (void)sendPushTokenForClient:(id)arg1;	// IMP=0x000000010005dd58
- (void)loadConnectivitySettingsAndStartNATObserver;	// IMP=0x000000010005da08
- (void)_resetNATObserverWithSettings:(id)arg1;	// IMP=0x000000010005d8b8
- (void)updateActivePushEnvironment;	// IMP=0x000000010005d63c
- (void)_updatePushEnvironmentWithStoreBag:(id)arg1;	// IMP=0x000000010005d464
@property(retain) NSData *pushToken; // @synthesize pushToken=_pushToken;
- (void)_setPushToken:(id)arg1;	// IMP=0x000000010005d2b0
@property long long activePushEnvironment; // @synthesize activePushEnvironment=_activePushEnvironment;
- (void)_setActivePushEnvironment:(long long)arg1;	// IMP=0x000000010005cefc
- (void)getValidNATTypeWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005cbd0
- (void)NATTypeDidChange:(int)arg1;	// IMP=0x000000010005cadc
@property int natType; // @synthesize natType=_natType;
- (void)_waitForValidNATType;	// IMP=0x000000010005c898
- (void)_setConnectivitySettings:(id)arg1;	// IMP=0x000000010005c698
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010005be8c
- (void)resetEnvironment;	// IMP=0x000000010005bd20
@property(readonly, nonatomic) long long preferredEnvironment;
- (void)dealloc;	// IMP=0x000000010005bba8
- (void)clearPushEnvironment;	// IMP=0x000000010005bac0
- (void)_clearPushConnections;	// IMP=0x000000010005b938
- (void)updateNotificationTopics;	// IMP=0x000000010005b8d0
- (void)setUpCloudKitNotificationTopics;	// IMP=0x000000010005b7c0
- (void)_updateNotificationTopics;	// IMP=0x000000010005b2f8
@property(readonly, nonatomic) APSConnection *activePushConnection; // @dynamic activePushConnection;
- (id)pushConnectionForEnvironment:(long long)arg1;	// IMP=0x000000010005b2a8
- (void)storeBagChanged:(id)arg1;	// IMP=0x000000010005b05c
- (void)finishStartup;	// IMP=0x000000010005a448
- (void)clientProxy:(id)arg1 didRefreshContentsForDataType:(unsigned int)arg2 userInfo:(id)arg3;	// IMP=0x000000010005a444
- (void)reachabilityDidChange:(id)arg1;	// IMP=0x000000010005a3f4
- (void)iCloudAccountAvailabilityChanged:(id)arg1;	// IMP=0x000000010005a3dc
- (id)init;	// IMP=0x000000010005a198
- (void)lockStatusDidChange;	// IMP=0x000000010005a194
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000010005a164
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x000000010005a02c
- (void)clearAllNearbyInvites;	// IMP=0x000000010009e400
- (void)handleNearbyInviteResponse:(id)arg1;	// IMP=0x000000010009e0d4
- (void)nearbyInviteWasCancelled:(id)arg1;	// IMP=0x000000010009dee0
- (void)presentNearbyInvite:(id)arg1;	// IMP=0x000000010009d878
- (id)updateRequestWithPushToken:(id)arg1;	// IMP=0x000000010018e460

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

