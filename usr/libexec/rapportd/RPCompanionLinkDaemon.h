//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "RPMessageable-Protocol.h"
#import "RPSubDaemonable-Protocol.h"

@class CUBLEServer, CUBluetoothScalablePipe, CUBonjourAdvertiser, CUBonjourBrowser, CUHomeKitManager, CUNetLinkManager, CUSleepWakeMonitor, CUSystemMonitor, CUTCPServer, CUWiFiManager, NSData, NSMutableDictionary, NSMutableSet, NSString, NSUserDefaults, NSXPCInterface, NSXPCListener, RPCompanionLinkDevice, RPConnection, RPHIDDaemon, RPHomeKitManager, RPMediaControlDaemon, RPSiriDaemon, RPTextInputDaemon, SFClient, SFDeviceDiscovery, SFService;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface RPCompanionLinkDaemon : NSObject <NSXPCListenerDelegate, RPMessageable, RPSubDaemonable>
{
    _Bool _activateCalled;	// 8 = 0x8
    NSMutableDictionary *_activeDevices;	// 16 = 0x10
    int _airplayBuddyNotReachableState;	// 24 = 0x18
    int _airplayLeaderState;	// 28 = 0x1c
    NSMutableDictionary *_bleDevices;	// 32 = 0x20
    SFDeviceDiscovery *_bleActionDiscovery;	// 40 = 0x28
    unsigned int _bleActionDiscoveryID;	// 48 = 0x30
    NSMutableDictionary *_bleClientConnections;	// 56 = 0x38
    SFDeviceDiscovery *_bleDiscovery;	// 64 = 0x40
    unsigned long long _bleDiscoveryControlFlags;	// 72 = 0x48
    _Bool _bleDiscoveryForce;	// 80 = 0x50
    unsigned int _bleDiscoveryID;	// 84 = 0x54
    _Bool _bleDiscoveryScreenOff;	// 88 = 0x58
    SFService *_bleNeedsCLinkAdvertiser;	// 96 = 0x60
    NSMutableDictionary *_bleNeedsCLinkDevices;	// 104 = 0x68
    SFDeviceDiscovery *_bleNeedsCLinkScanner;	// 112 = 0x70
    unsigned int _bleNeedsCLinkScannerID;	// 120 = 0x78
    _Bool _bleProximityDetection;	// 124 = 0x7c
    CUBLEServer *_bleServer;	// 128 = 0x80
    NSMutableSet *_bleServerConnections;	// 136 = 0x88
    CUBonjourAdvertiser *_bonjourAdvertiser;	// 144 = 0x90
    CUBonjourAdvertiser *_bonjourAWDLAdvertiser;	// 152 = 0x98
    _Bool _bonjourAWDLAdvertiserForce;	// 160 = 0xa0
    NSMutableDictionary *_bonjourAWDLDevices;	// 168 = 0xa8
    CUBonjourBrowser *_bonjourBrowser;	// 176 = 0xb0
    CUBonjourBrowser *_bonjourBrowserAWDL;	// 184 = 0xb8
    _Bool _bonjourBrowserAWDLForce;	// 192 = 0xc0
    unsigned long long _bonjourReevaluateNextTicks;	// 200 = 0xc8
    NSObject<OS_dispatch_source> *_bonjourReevaluateTimer;	// 208 = 0xd0
    NSData *_btAdvAddrData;	// 216 = 0xd8
    NSString *_btAdvAddrStr;	// 224 = 0xe0
    CUSystemMonitor *_btAdvAddrMonitor;	// 232 = 0xe8
    _Bool _prefBTPipeEnabled;	// 240 = 0xf0
    CUBluetoothScalablePipe *_btPipe;	// 248 = 0xf8
    RPConnection *_btPipeConnection;	// 256 = 0x100
    unsigned int _cnxIDLast;	// 264 = 0x108
    NSString *_deviceAuthTagStr;	// 272 = 0x110
    NSData *_discoveryNonceData;	// 280 = 0x118
    SFClient *_duetSyncClient;	// 288 = 0x120
    _Bool _disabled;	// 296 = 0x128
    NSMutableDictionary *_interestEvents;	// 304 = 0x130
    NSMutableDictionary *_interestPeers;	// 312 = 0x138
    _Bool _invalidateCalled;	// 320 = 0x140
    _Bool _invalidateDone;	// 321 = 0x141
    _Bool _fixedSoundBoardNameIssue;	// 322 = 0x142
    NSData *_homeKitAuthTag;	// 328 = 0x148
    _Bool _homeKitForceGetIdentity;	// 336 = 0x150
    _Bool _homeKitGettingIdentity;	// 337 = 0x151
    NSData *_homeKitIRK;	// 344 = 0x158
    NSData *_homeKitLTPK;	// 352 = 0x160
    CUHomeKitManager *_homeKitManager;	// 360 = 0x168
    NSData *_homeKitRotatingID;	// 368 = 0x170
    _Bool _homeKitWaiting;	// 376 = 0x178
    CUNetLinkManager *_netLinkManager;	// 384 = 0x180
    _Bool _mediaRemoteIDGetting;	// 392 = 0x188
    _Bool _mediaRouteIDGetting;	// 393 = 0x189
    _Bool _miscStarted;	// 394 = 0x18a
    NSObject<OS_os_transaction> *_osTransaction;	// 400 = 0x190
    RPConnection *_personalCnx;	// 408 = 0x198
    NSMutableDictionary *_registeredEvents;	// 416 = 0x1a0
    NSMutableSet *_registeredProfileIDs;	// 424 = 0x1a8
    NSMutableDictionary *_registeredRequests;	// 432 = 0x1b0
    RPHomeKitManager *_rpHomeKitManager;	// 440 = 0x1b8
    unsigned int _sessionIDLast;	// 448 = 0x1c0
    _Bool _serverBonjourInfraPairing;	// 452 = 0x1c4
    CUSleepWakeMonitor *_sleepWakeMonitor;	// 456 = 0x1c8
    NSUserDefaults *_soundBoardPrefs;	// 464 = 0x1d0
    _Bool _soundBoardUserLeader;	// 472 = 0x1d8
    _Bool _soundBoardUserLeaderKVO;	// 473 = 0x1d9
    unsigned long long _startTicks;	// 480 = 0x1e0
    unsigned long long _startTicksFull;	// 488 = 0x1e8
    RPConnection *_stereoCnx;	// 496 = 0x1f0
    CUSystemMonitor *_systemMonitor;	// 504 = 0x1f8
    NSMutableDictionary *_tcpClientConnections;	// 512 = 0x200
    NSMutableSet *_tcpServerConnections;	// 520 = 0x208
    CUTCPServer *_tcpServer;	// 528 = 0x210
    NSMutableDictionary *_unauthDevices;	// 536 = 0x218
    NSData *_uniqueIDData;	// 544 = 0x220
    NSString *_uniqueIDStr;	// 552 = 0x228
    CUWiFiManager *_wifiManager;	// 560 = 0x230
    unsigned int _xidLast;	// 568 = 0x238
    NSMutableSet *_xpcConnections;	// 576 = 0x240
    NSXPCInterface *_xpcClientInterface;	// 584 = 0x248
    NSXPCInterface *_xpcServerInterface;	// 592 = 0x250
    NSXPCListener *_xpcListener;	// 600 = 0x258
    unsigned int _xpcLastID;	// 608 = 0x260
    NSMutableDictionary *_xpcMatchingMap;	// 616 = 0x268
    _Bool _prefAppSignIn;	// 624 = 0x270
    _Bool _prefBLEClient;	// 625 = 0x271
    _Bool _prefClientEnabled;	// 626 = 0x272
    _Bool _prefCommunal;	// 627 = 0x273
    _Bool _prefHomeKitConfigured;	// 628 = 0x274
    _Bool _prefHomeKitEnabled;	// 629 = 0x275
    _Bool _prefIPEnabled;	// 630 = 0x276
    unsigned int _prefMaxConnectionCount;	// 632 = 0x278
    _Bool _prefServerBonjourAlways;	// 636 = 0x27c
    _Bool _prefServerBonjourOpportunitistic;	// 637 = 0x27d
    _Bool _prefServerEnabled;	// 638 = 0x27e
    _Bool _prefServerShouldRun;	// 639 = 0x27f
    RPHIDDaemon *_hidDaemon;	// 640 = 0x280
    _Bool _prefHIDEnabled;	// 648 = 0x288
    RPMediaControlDaemon *_mediaControlDaemon;	// 656 = 0x290
    _Bool _prefMediaControlEnabled;	// 664 = 0x298
    RPSiriDaemon *_siriDaemon;	// 672 = 0x2a0
    _Bool _prefSiriEnabled;	// 680 = 0x2a8
    RPTextInputDaemon *_textInputDaemon;	// 688 = 0x2b0
    _Bool _prefTextInputEnabled;	// 696 = 0x2b8
    _Bool _prefTouchEnabled;	// 697 = 0x2b9
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 704 = 0x2c0
    RPCompanionLinkDevice *_localDeviceInfo;	// 712 = 0x2c8
    NSMutableSet *_activeServers;	// 720 = 0x2d0
    NSMutableDictionary *_activeSessions;	// 728 = 0x2d8
}

+ (id)sharedCompanionLinkDaemon;	// IMP=0x0000000100006924
- (void).cxx_destruct;	// IMP=0x0000000100023f00
@property(retain, nonatomic) NSMutableDictionary *activeSessions; // @synthesize activeSessions=_activeSessions;
@property(retain, nonatomic) NSMutableSet *activeServers; // @synthesize activeServers=_activeServers;
@property(readonly, nonatomic) RPCompanionLinkDevice *localDeviceInfo; // @synthesize localDeviceInfo=_localDeviceInfo;
- (void)setDispatchQueue:(id)arg1;	// IMP=0x0000000100023ec4
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)_xpcConnectionInvalidated:(id)arg1;	// IMP=0x0000000100023e48
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000001000238b4
- (void)_sessionHandlePeerDisconnect:(id)arg1;	// IMP=0x0000000100023590
- (void)_sessionHandleStopRequest:(id)arg1 options:(id)arg2 cnx:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000230cc
- (void)_sessionHandleStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010002251c
- (void)sessionStopSend:(id)arg1 session:(id)arg2 xpcID:(unsigned int)arg3;	// IMP=0x00000001000221dc
- (void)sessionStartSend:(id)arg1 session:(id)arg2 xpcID:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100021bf0
- (_Bool)_allowMessageForRegistrationOptions:(id)arg1 cnx:(id)arg2;	// IMP=0x0000000100021b54
- (void)_receivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 unauth:(_Bool)arg5 cnx:(id)arg6;	// IMP=0x00000001000217a4
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 xpcID:(unsigned int)arg4 options:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000001000214c4
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100021414
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100021374
- (void)deregisterRequestID:(id)arg1;	// IMP=0x00000001000212d4
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010002110c
- (void)_registerConnectionRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100020f44
- (void)_receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 unauth:(_Bool)arg4 cnx:(id)arg5;	// IMP=0x0000000100020bb4
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010002029c
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100020200
- (void)deregisterEventID:(id)arg1;	// IMP=0x0000000100020160
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000010001ff98
- (void)_homeKitUpdateInfo:(_Bool)arg1;	// IMP=0x000000010001fa84
- (void)_homeKitSelfAccessoryUpdated;	// IMP=0x000000010001f620
- (void)_homeKitSelfAccessoryMediaSystemUpdated:(int)arg1;	// IMP=0x000000010001eadc
- (void)_homeKitSelfAccessoryMediaAccessUpdated;	// IMP=0x000000010001e7f0
- (void)_homeKitIdentityUpdated:(id)arg1 error:(id)arg2;	// IMP=0x000000010001e3b4
- (id)_homeKitDecryptRotatingIDForBonjourDevice:(id)arg1;	// IMP=0x000000010001e1c4
- (_Bool)_homeKitAuthMatchForBonjourDevice:(id)arg1;	// IMP=0x000000010001e078
- (void)_homeKitEnsureStopped;	// IMP=0x000000010001dfbc
- (void)_homeKitEnsureStarted;	// IMP=0x000000010001da58
- (id)_getAppleID;	// IMP=0x000000010001da10
- (void)_textInputEnsureStopped;	// IMP=0x000000010001d978
- (void)_textInputEnsureStarted;	// IMP=0x000000010001d840
- (void)_stereoDeviceUpdate:(int)arg1;	// IMP=0x000000010001cb20
- (void)_siriEnsureStopped;	// IMP=0x000000010001ca88
- (void)_siriEnsureStarted;	// IMP=0x000000010001c950
- (void)_reachabilityEnsureStopped;	// IMP=0x000000010001c8c4
- (void)_reachabilityEnsureStarted;	// IMP=0x000000010001c7f0
- (void)_personalDeviceUpdate;	// IMP=0x000000010001c498
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010001c2c0
- (void)_miscHandleSpeakRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c09c
- (void)_miscHandleLaunchAppRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001bc44
- (void)_miscEnsureStopped;	// IMP=0x000000010001bbc4
- (void)_miscEnsureStarted;	// IMP=0x000000010001b810
- (void)_mediaRouteIDGet;	// IMP=0x000000010001b50c
- (void)_mediaRemoteIDGet;	// IMP=0x000000010001b1ec
- (void)_mediaControlEnsureStopped;	// IMP=0x000000010001b154
- (void)_mediaControlEnsureStarted;	// IMP=0x000000010001af88
- (void)_localDeviceCleanup;	// IMP=0x000000010001af18
- (void)_localDeviceUpdate;	// IMP=0x0000000100019d9c
- (void)_interestSendEventID:(id)arg1 event:(id)arg2;	// IMP=0x0000000100019c2c
- (void)_interestRemoveForCnx:(id)arg1;	// IMP=0x0000000100019940
- (void)_interestReceived:(id)arg1 cnx:(id)arg2;	// IMP=0x00000001000193e8
- (void)interestDeregisterEventID:(id)arg1 peerIdentifier:(id)arg2 owner:(id)arg3;	// IMP=0x00000001000191b4
- (void)interestRegisterEventID:(id)arg1 peerIdentifier:(id)arg2 owner:(id)arg3;	// IMP=0x0000000100018f28
- (void)_hidEnsureStopped;	// IMP=0x0000000100018e90
- (void)_hidEnsureStarted;	// IMP=0x0000000100018d58
- (void)_forEachMatchingDestinationID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100018bec
- (void)_forEachConnectionWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000187c8
- (id)findUnauthDeviceForIdentifier:(id)arg1;	// IMP=0x00000001000185cc
- (id)_findDeviceWithDevice:(id)arg1 deviceMap:(id)arg2 matchedIdentifier:(id *)arg3;	// IMP=0x0000000100018468
- (id)_findConnectionByID:(id)arg1;	// IMP=0x00000001000182a8
- (id)findConnectedDeviceForIdentifier:(id)arg1 controlFlags:(unsigned long long)arg2 cnx:(id *)arg3;	// IMP=0x0000000100017f7c
- (void)_duetSyncEnsureStopped;	// IMP=0x0000000100017ee4
- (void)_duetSyncEnsureStarted;	// IMP=0x0000000100017e1c
- (id)_discoveryNonceOrRotate:(_Bool)arg1;	// IMP=0x0000000100017d48
- (void)_disconnectUnpairedDevices;	// IMP=0x0000000100017a34
- (void)_disconnectUnauthConnections;	// IMP=0x00000001000178a0
- (void)_disconnectRemovedSharedHomeDevices;	// IMP=0x000000010001758c
- (_Bool)_destinationID:(id)arg1 matchesCnx:(id)arg2;	// IMP=0x0000000100017254
- (void)_connectionStateChanged:(int)arg1 cnx:(id)arg2;	// IMP=0x0000000100016e90
- (void)_connectionConfigureCommon:(id)arg1;	// IMP=0x0000000100016b74
- (int)_airPlayLeaderStateUncached;	// IMP=0x00000001000168c8
- (void)_activeDeviceChanged:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x000000010001677c
- (void)_activeDeviceChangedForConnection:(id)arg1 bonjourDevice:(id)arg2;	// IMP=0x00000001000165b8
- (void)_activeDeviceRemoved:(id)arg1 cnx:(id)arg2;	// IMP=0x0000000100016184
- (void)_activeDeviceAdded:(id)arg1 cnx:(id)arg2;	// IMP=0x0000000100015e34
- (void)_btPipeSyncKeysIfNeeded;	// IMP=0x0000000100015bf4
- (void)_btPipeConnectionEnded:(id)arg1;	// IMP=0x0000000100015bac
- (void)_btPipeConnectionStart;	// IMP=0x00000001000156d4
- (void)_btPipeHandleStateChanged;	// IMP=0x00000001000155d4
- (void)_btPipeEnsureStopped;	// IMP=0x0000000100015520
- (void)_btPipeEnsureStarted;	// IMP=0x0000000100015190
- (void)_bleServerHandleConnectionEnded:(id)arg1;	// IMP=0x0000000100015118
- (void)_bleServerHandleConnectionStarted:(id)arg1;	// IMP=0x0000000100014c84
- (void)_bleServerEnsureStopped;	// IMP=0x0000000100014ae8
- (void)_bleServerEnsureStarted;	// IMP=0x0000000100014868
- (void)_serverTCPRemoveConnectionsWithIdentifier:(id)arg1 exceptConnection:(id)arg2;	// IMP=0x0000000100014604
- (void)_serverTCPHandleConnectionEnded:(id)arg1;	// IMP=0x000000010001458c
- (void)_serverTCPHandleConnectionStarted:(id)arg1;	// IMP=0x0000000100014000
- (void)_serverTCPEnsureStopped;	// IMP=0x0000000100013e64
- (void)_serverTCPEnsureStarted;	// IMP=0x0000000100013c30
- (void)_serverBTAddressChanged;	// IMP=0x0000000100013ab0
- (void)_serverBTAddressMonitorEnsureStopped;	// IMP=0x0000000100013a18
- (void)_serverBTAddressMonitorEnsureStarted;	// IMP=0x00000001000138cc
- (void)_serverBonjourAWDLAdvertiserUpdateTXT;	// IMP=0x00000001000136e0
- (void)_serverBonjourAWDLAdvertiserEnsureStopped;	// IMP=0x0000000100013618
- (void)_serverBonjourAWDLAdvertiserEnsureStarted;	// IMP=0x0000000100013374
- (void)_serverBonjourUpdateTXT;	// IMP=0x0000000100012f6c
- (id)_serverBonjourAuthTagStringWithData:(id)arg1;	// IMP=0x0000000100012e10
- (id)_serverBonjourAuthTagString;	// IMP=0x0000000100012d50
- (void)_serverBonjourEnsureStopped;	// IMP=0x0000000100012cb8
- (void)_serverBonjourEnsureStarted;	// IMP=0x0000000100012abc
- (_Bool)_serverBonjourShouldRun;	// IMP=0x0000000100012a54
- (void)_serverBLENeedsCLinkScannerDeviceLost:(id)arg1;	// IMP=0x00000001000128d8
- (void)_serverBLENeedsCLinkScannerDeviceFound:(id)arg1;	// IMP=0x0000000100012678
- (_Bool)_serverBLENeedsCLinkScannerScreenOff;	// IMP=0x00000001000125cc
- (void)_serverBLENeedsCLinkScannerEnsureStopped;	// IMP=0x0000000100012504
- (void)_serverBLENeedsCLinkScannerEnsureStarted;	// IMP=0x000000010001211c
- (void)_serverEnsureStopped;	// IMP=0x00000001000120b8
- (void)_serverEnsureStarted;	// IMP=0x0000000100011fb8
- (void)_clientReportChangedDevice:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x0000000100011e7c
- (void)_clientReportLostDevice:(id)arg1;	// IMP=0x0000000100011d48
- (void)_clientReportFoundDevice:(id)arg1;	// IMP=0x0000000100011c14
- (void)_clientOnDemandDiscoveryStart:(id)arg1 xpcCnx:(id)arg2;	// IMP=0x0000000100011888
- (void)_clientConnectionEndedUnauth:(id)arg1 publicID:(id)arg2;	// IMP=0x0000000100011788
- (_Bool)_clientConnectionStartUnauth:(id)arg1 client:(id)arg2 publicID:(id)arg3 xpcCnx:(id)arg4 error:(id *)arg5;	// IMP=0x0000000100010ef0
- (void)_clientConnectionEnded:(id)arg1 uniqueID:(id)arg2;	// IMP=0x0000000100010d88
- (_Bool)_clientConnectionStartOnDemand:(id)arg1 xpcCnx:(id)arg2 error:(id *)arg3;	// IMP=0x000000010000ffbc
- (void)_clientConnectionStart:(id)arg1 controlFlags:(unsigned long long)arg2 uniqueID:(id)arg3 identity:(id)arg4;	// IMP=0x000000010000f8e4
- (void)_clientBonjourAWDLBrowserLostDevice:(id)arg1;	// IMP=0x000000010000f7d8
- (void)_clientBonjourAWDLBrowserFoundDevice:(id)arg1;	// IMP=0x000000010000ef24
- (_Bool)_clientBonjourAWDLBrowserShouldRun;	// IMP=0x000000010000ed94
- (void)_clientBonjourAWDLBrowserEnsureStopped;	// IMP=0x000000010000ece0
- (void)_clientBonjourAWDLBrowserEnsureStarted;	// IMP=0x000000010000ea9c
- (void)_clientBonjourReevaluateUnauthDevices;	// IMP=0x000000010000e868
- (void)_clientBonjourReevaluateAllDevices;	// IMP=0x000000010000e4e4
- (void)_clientBonjourLostUnauthDevice:(id)arg1;	// IMP=0x000000010000e2d8
- (void)_clientBonjourFoundUnauthDevice:(id)arg1;	// IMP=0x000000010000dfa4
- (void)_clientBonjourLostDevice:(id)arg1;	// IMP=0x000000010000dcf0
- (_Bool)_clientBonjourFoundDevice:(id)arg1 reevaluate:(_Bool)arg2;	// IMP=0x000000010000d2f8
- (void)_clientBonjourEnsureStopped;	// IMP=0x000000010000d248
- (void)_clientBonjourEnsureStarted;	// IMP=0x000000010000cf90
- (_Bool)_clientBLENeedsCLinkAdvertiserShouldRun;	// IMP=0x000000010000ce0c
- (void)_clientBLENeedsCLinkAdvertiserEnsureStopped;	// IMP=0x000000010000cd74
- (void)_clientBLENeedsCLinkAdvertiserEnsureStarted;	// IMP=0x000000010000cb04
- (void)_clientBLEDiscoveryDeviceLost:(id)arg1 force:(_Bool)arg2;	// IMP=0x000000010000c7d0
- (void)_clientBLEDiscoveryDeviceFound:(id)arg1;	// IMP=0x000000010000c2dc
- (void)_clientBLEDiscoveryEnsureStopped;	// IMP=0x000000010000c214
- (void)_clientBLEDiscoveryEnsureStarted;	// IMP=0x000000010000bc5c
- (_Bool)_clientBLEActionDiscoveryShouldRun;	// IMP=0x000000010000bc54
- (void)_clientBLEActionDiscoveryEnsureStopped;	// IMP=0x000000010000bb84
- (void)_clientBLEActionDiscoveryEnsureStarted;	// IMP=0x000000010000b6a8
- (void)_clientEnsureStopped;	// IMP=0x000000010000b5f4
- (void)_clientEnsureStarted;	// IMP=0x000000010000b4ec
- (void)_updateForXPCServerChange;	// IMP=0x000000010000b2c0
- (void)_updateForXPCClientChange;	// IMP=0x000000010000aec0
- (void)_updateAssertions;	// IMP=0x000000010000abf8
- (void)_update;	// IMP=0x000000010000a700
- (void)_reportXPCMatchingDiscoveryCLink;	// IMP=0x000000010000a484
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x000000010000a30c
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009fd4
- (void)prefsChanged;	// IMP=0x00000001000094d4
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x0000000100008fb4
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x0000000100008dec
- (void)_invalidated;	// IMP=0x0000000100008cb8
- (void)_invalidate;	// IMP=0x00000001000089a0
- (void)invalidate;	// IMP=0x0000000100008938
- (void)_activate;	// IMP=0x00000001000086e0
- (void)activate;	// IMP=0x0000000100008660
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0000000100006a04
- (id)init;	// IMP=0x0000000100006990

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

