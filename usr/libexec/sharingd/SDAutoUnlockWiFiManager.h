//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSMutableArray, NSString, SDAutoUnlockWiFiRequest;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockWiFiManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _awdlStartFailed;	// 8 = 0x8
    _Bool _awdlStarting;	// 9 = 0x9
    _Bool _awdlTimerFired;	// 10 = 0xa
    NSObject<OS_dispatch_source> *_awdlTimer;	// 16 = 0x10
    id _awdlNetwork;	// 24 = 0x18
    SDAutoUnlockWiFiRequest *_currentRequest;	// 32 = 0x20
    CLLocationManager *_locationManager;	// 40 = 0x28
    NSMutableArray *_wifiRequestQueue;	// 48 = 0x30
}

+ (id)sharedManager;	// IMP=0x00000001001523f4
- (void).cxx_destruct;	// IMP=0x0000000100154778
@property(retain, nonatomic) NSMutableArray *wifiRequestQueue; // @synthesize wifiRequestQueue=_wifiRequestQueue;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain) SDAutoUnlockWiFiRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(nonatomic) _Bool awdlTimerFired; // @synthesize awdlTimerFired=_awdlTimerFired;
@property(nonatomic) _Bool awdlStarting; // @synthesize awdlStarting=_awdlStarting;
@property(nonatomic) _Bool awdlStartFailed; // @synthesize awdlStartFailed=_awdlStartFailed;
@property(retain) id awdlNetwork; // @synthesize awdlNetwork=_awdlNetwork;
@property(retain) NSObject<OS_dispatch_source> *awdlTimer; // @synthesize awdlTimer=_awdlTimer;
- (void)_handleNetworkStoppedWithError:(long long)arg1;	// IMP=0x0000000100154664
- (void)handleNetworkStoppedWithError:(long long)arg1;	// IMP=0x0000000100154604
- (void)_handleNetworkStarted:(struct __WiFiNetwork *)arg1 error:(long long)arg2;	// IMP=0x00000001001542c8
- (void)handleNetworkStarted:(struct __WiFiNetwork *)arg1 error:(long long)arg2;	// IMP=0x0000000100154258
- (void)handleAWDLTimerFired;	// IMP=0x0000000100154124
- (void)invalidateAWDLTimer;	// IMP=0x000000010015404c
- (void)restartAWDLTimer;	// IMP=0x0000000100153e48
- (void)_handleAWDLDisabledIfNeeded;	// IMP=0x0000000100153cf8
- (void)_stopAWDL;	// IMP=0x0000000100153b1c
- (void)_startAWDLWithInfo:(id)arg1;	// IMP=0x0000000100153794
- (void)locationManager:(id)arg1 rangingDidFailForPeer:(id)arg2 withError:(id)arg3;	// IMP=0x0000000100153650
- (void)locationManager:(id)arg1 didRangePeers:(id)arg2;	// IMP=0x0000000100153524
- (void)_disableRangeable;	// IMP=0x0000000100153324
- (void)_enableRangeableIfNeeded;	// IMP=0x00000001001530f4
- (void)_startRanging;	// IMP=0x0000000100152f0c
- (void)_invalidateCurrentRequest;	// IMP=0x0000000100152e68
- (void)_processRequestQueue;	// IMP=0x0000000100152b64
- (void)cancelWiFiRequest:(id)arg1;	// IMP=0x000000010015284c
- (_Bool)addWiFiRequest:(id)arg1;	// IMP=0x0000000100152750
- (void)_removeObservers;	// IMP=0x0000000100152700
- (void)_addObservers;	// IMP=0x00000001001526fc
- (void)_createWiFiObserver;	// IMP=0x00000001001526f8
- (void)_createLocationManager;	// IMP=0x000000010015253c
- (void)start;	// IMP=0x00000001001524c4
- (id)init;	// IMP=0x0000000100152460

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
