//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDSharedRemoteTextInputDelegate-Protocol.h"

@class CUSystemMonitor, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSUUID, RPCompanionLinkClient, SDNotificationManager, SFDeviceDiscovery, SFService, WPNearby;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDRemoteInteractionAgent : NSObject <SDSharedRemoteTextInputDelegate>
{
    NSObject<OS_dispatch_source> *_aggressiveTimer;	// 8 = 0x8
    WPNearby *_bleWPNearby;	// 16 = 0x10
    _Bool _clientEnabled;	// 24 = 0x18
    RPCompanionLinkClient *_clinkClient;	// 32 = 0x20
    _Bool _cloudPairedOnly;	// 40 = 0x28
    SFService *_controlService;	// 48 = 0x30
    NSUUID *_currentSessionID;	// 56 = 0x38
    NSString *_currentText;	// 64 = 0x40
    SFDeviceDiscovery *_deviceDiscovery;	// 72 = 0x48
    NSMutableDictionary *_devices;	// 80 = 0x50
    _Bool _idsMonitorInstalled;	// 88 = 0x58
    NSMutableSet *_legacy_sessionDeviceIDs;	// 96 = 0x60
    SDNotificationManager *_notificationManager;	// 104 = 0x68
    long long _rssiThreshold;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_rtiTimer;	// 120 = 0x78
    _Bool _serverEnabled;	// 128 = 0x80
    NSSet *_sessionDeviceIDs;	// 136 = 0x88
    NSMutableSet *_sessions;	// 144 = 0x90
    CUSystemMonitor *_systemMonitor;	// 152 = 0x98
    _Bool _preventNotifications;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 168 = 0xa8
}

+ (id)sharedAgent;	// IMP=0x00000001000cdcb4
- (void).cxx_destruct;	// IMP=0x00000001000d2910
@property(nonatomic) _Bool preventNotifications; // @synthesize preventNotifications=_preventNotifications;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)testKeyboardUpdateWithDelay;	// IMP=0x00000001000d28d8
- (void)testKeyboardUpdate;	// IMP=0x00000001000d27cc
- (void)testKeyboardRemoveWithDelay;	// IMP=0x00000001000d27b0
- (void)testKeyboardRemove;	// IMP=0x00000001000d26d4
- (void)testKeyboardPostWithDelay;	// IMP=0x00000001000d26b8
- (void)testKeyboardPostThenUpdate;	// IMP=0x00000001000d25c0
- (void)testKeyboardPost:(id)arg1;	// IMP=0x00000001000d249c
- (void)clientUserDidTapNotification:(id)arg1;	// IMP=0x00000001000d2424
- (void)_clientUpdateCoalesceTimerForDevice:(id)arg1 identifier:(id)arg2;	// IMP=0x00000001000d2420
- (void)clientTextSessionDidBegin:(id)arg1 device:(id)arg2;	// IMP=0x00000001000d23d0
- (void)clientNotificationUpdateForDevice:(id)arg1 info:(id)arg2;	// IMP=0x00000001000d2250
- (void)clientNotificationUpdateForDevice:(id)arg1 rtiData:(id)arg2;	// IMP=0x00000001000d20d0
- (void)clientNotificationRemoveForDevice:(id)arg1;	// IMP=0x00000001000d1f78
- (void)clientNotificationPostIfNeededForDevice:(id)arg1;	// IMP=0x00000001000d1dc0
- (_Bool)_clientShouldStart;	// IMP=0x00000001000d1c34
- (void)_clientDeviceLockStatusChanged;	// IMP=0x00000001000d1b2c
- (void)_clientDeviceLost:(id)arg1;	// IMP=0x00000001000d1a1c
- (void)_clientDeviceFound:(id)arg1;	// IMP=0x00000001000d1720
- (void)_clientClinkDeviceChanged:(id)arg1;	// IMP=0x00000001000d169c
- (void)_clientClinkDeviceLost:(id)arg1;	// IMP=0x00000001000d1618
- (void)_clientClinkDeviceFound:(id)arg1;	// IMP=0x00000001000d1594
- (void)_clientEnsureStopped;	// IMP=0x00000001000d149c
- (void)_clientEnsureStarted;	// IMP=0x00000001000d0a20
- (void)sessionStop:(id)arg1;	// IMP=0x00000001000d0978
- (int)sessionStart:(id)arg1;	// IMP=0x00000001000d060c
- (void)advertisingTimerStart;	// IMP=0x00000001000d04d4
- (void)advertisingTimerFired;	// IMP=0x00000001000d0428
- (void)handleInputDidEndWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2;	// IMP=0x00000001000d030c
- (void)handleInputDidBeginWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2;	// IMP=0x00000001000d0118
- (void)handleEventWithData:(id)arg1;	// IMP=0x00000001000d0058
- (void)_sendRTIPayload:(id)arg1;	// IMP=0x00000001000cfd18
- (void)_serverSendTextSessionDidEnd:(id)arg1;	// IMP=0x00000001000cfa98
- (void)_serverSendTextSessionDidBegin:(id)arg1;	// IMP=0x00000001000cf798
- (void)_legacy_serverRespondInfo:(id)arg1;	// IMP=0x00000001000cf6ac
- (void)_legacy_serverHandleRequest:(id)arg1;	// IMP=0x00000001000cf430
- (void)_legacy_serverHandleEvent:(id)arg1;	// IMP=0x00000001000cefe4
- (void)nearby:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3;	// IMP=0x00000001000cef28
- (void)_serverEnsureStopped;	// IMP=0x00000001000cee20
- (void)_serverEnsureStarted;	// IMP=0x00000001000cea3c
- (void)_commonIDSChanged:(id)arg1;	// IMP=0x00000001000ce968
- (void)_commonEnsureStopped;	// IMP=0x00000001000ce870
- (void)_commonEnsureStarted;	// IMP=0x00000001000ce764
- (void)_update;	// IMP=0x00000001000ce6d8
- (void)prefsChanged;	// IMP=0x00000001000ce2e8
- (void)invalidate;	// IMP=0x00000001000ce1d4
- (void)activate;	// IMP=0x00000001000ce00c
- (id)description;	// IMP=0x00000001000cdd84
- (id)init;	// IMP=0x00000001000cdd20

@end

