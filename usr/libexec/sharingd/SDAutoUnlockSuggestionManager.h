//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDAutoUnlockNotificationsObserver-Protocol.h"
#import "SDAutoUnlockTransportClient-Protocol.h"

@class NSArray, NSMutableArray, NSString, NSUUID, SFAutoUnlockDevice, SFBLEScanner;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockSuggestionManager : NSObject <SDAutoUnlockTransportClient, SDAutoUnlockNotificationsObserver>
{
    _Bool _foundFirstPeer;	// 8 = 0x8
    NSString *_suggestedDeviceID;	// 16 = 0x10
    NSString *_setupRetryDeviceID;	// 24 = 0x18
    SFAutoUnlockDevice *_lastSuccessfulDevice;	// 32 = 0x20
    SFBLEScanner *_scanner;	// 40 = 0x28
    NSMutableArray *_foundPeers;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_scanTimer;	// 56 = 0x38
    NSArray *_currentBluetoothIDs;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_serviceTimer;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_deviceTimer;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_setupRetryDeviceTimer;	// 88 = 0x58
    NSMutableArray *_suggestedPeers;	// 96 = 0x60
    SFAutoUnlockDevice *_suggestedPeer;	// 104 = 0x68
    NSUUID *_suggestionManagerSessionID;	// 112 = 0x70
    SFAutoUnlockDevice *_setupRetryDevice;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_suggestionManagerQueue;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000010017f55c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *suggestionManagerQueue; // @synthesize suggestionManagerQueue=_suggestionManagerQueue;
@property(retain, nonatomic) SFAutoUnlockDevice *setupRetryDevice; // @synthesize setupRetryDevice=_setupRetryDevice;
@property(retain, nonatomic) NSUUID *suggestionManagerSessionID; // @synthesize suggestionManagerSessionID=_suggestionManagerSessionID;
@property(retain, nonatomic) SFAutoUnlockDevice *suggestedPeer; // @synthesize suggestedPeer=_suggestedPeer;
@property(retain, nonatomic) NSMutableArray *suggestedPeers; // @synthesize suggestedPeers=_suggestedPeers;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *setupRetryDeviceTimer; // @synthesize setupRetryDeviceTimer=_setupRetryDeviceTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *deviceTimer; // @synthesize deviceTimer=_deviceTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *serviceTimer; // @synthesize serviceTimer=_serviceTimer;
@property(retain, nonatomic) NSArray *currentBluetoothIDs; // @synthesize currentBluetoothIDs=_currentBluetoothIDs;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *scanTimer; // @synthesize scanTimer=_scanTimer;
@property(retain, nonatomic) NSMutableArray *foundPeers; // @synthesize foundPeers=_foundPeers;
@property(retain, nonatomic) SFBLEScanner *scanner; // @synthesize scanner=_scanner;
@property(nonatomic) _Bool foundFirstPeer; // @synthesize foundFirstPeer=_foundFirstPeer;
@property(retain, nonatomic) SFAutoUnlockDevice *lastSuccessfulDevice; // @synthesize lastSuccessfulDevice=_lastSuccessfulDevice;
@property(copy, nonatomic) NSString *setupRetryDeviceID; // @synthesize setupRetryDeviceID=_setupRetryDeviceID;
@property(copy, nonatomic) NSString *suggestedDeviceID; // @synthesize suggestedDeviceID=_suggestedDeviceID;
- (void)_systemHasPoweredOn;	// IMP=0x000000010017f3c8
- (void)_systemWillSleep;	// IMP=0x000000010017f360
- (_Bool)alwaysShowSetupRetry;	// IMP=0x000000010017f338
- (id)testDeviceID;	// IMP=0x000000010017f31c
- (_Bool)ignoreBackOff;	// IMP=0x000000010017f2f4
- (_Bool)suggestionsEnabled;	// IMP=0x000000010017f2cc
- (void)setRetriedSetup;	// IMP=0x000000010017f278
- (_Bool)retriedSetup;	// IMP=0x000000010017f180
- (void)loadSuggestedPeers;	// IMP=0x000000010017f0b0
- (void)setFeatureSuggestedForDeviceID:(id)arg1;	// IMP=0x000000010017eefc
- (_Bool)featureSuggestedForDeviceID:(id)arg1;	// IMP=0x000000010017ee84
- (void)updateDefaultsForDeviceID:(id)arg1;	// IMP=0x000000010017eb10
- (_Bool)canSuggestForDeviceID:(id)arg1;	// IMP=0x000000010017e8b0
- (_Bool)shouldSendRequestsForDeviceID:(id)arg1;	// IMP=0x000000010017e764
- (void)watchAvailableForUnlockWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010017e754
- (void)transport:(id)arg1 didReceivePayload:(id)arg2 type:(unsigned short)arg3 deviceID:(id)arg4;	// IMP=0x000000010017e3dc
- (void)sendStartAdvertisingToDeviceID:(id)arg1;	// IMP=0x000000010017e200
- (void)invalidateScanTimer;	// IMP=0x000000010017e128
- (void)restartScanTimer:(unsigned long long)arg1;	// IMP=0x000000010017df3c
- (void)invalidateScanner;	// IMP=0x000000010017ddf8
- (void)handleFoundPeer:(id)arg1;	// IMP=0x000000010017d9e0
- (void)startScanningForIDSDeviceIDs:(id)arg1;	// IMP=0x000000010017d1e4
- (void)invalidateServiceTimer;	// IMP=0x000000010017d10c
- (void)restartServiceTimer:(unsigned long long)arg1;	// IMP=0x000000010017cf08
- (void)invalidateSuggestionService;	// IMP=0x000000010017cea4
- (void)updateSuggestionService;	// IMP=0x000000010017ce34
- (void)invalidateSuggestedDeviceTimer;	// IMP=0x000000010017cd5c
- (void)restartSuggestedDeviceTimer:(long long)arg1;	// IMP=0x000000010017cb34
- (void)postSuggestionNotification;	// IMP=0x000000010017c9a8
- (void)postNotificationIfNeeded;	// IMP=0x000000010017c7b4
- (void)invalidateSetupRetryDeviceTimer;	// IMP=0x000000010017c6dc
- (void)restartSetupRetryDeviceTimer:(long long)arg1;	// IMP=0x000000010017c4b4
- (void)setupRetryNotificationDismissed;	// IMP=0x000000010017c3c8
- (void)setupRetryNotificationSetUpSelected;	// IMP=0x000000010017c3c4
- (void)setupRetryIfNeeded;	// IMP=0x000000010017c180
- (void)screenLockUnlocked:(id)arg1;	// IMP=0x000000010017c0bc
- (void)triggerDevicesIfNeeded;	// IMP=0x000000010017c0b8
- (void)handleTestSuggestion;	// IMP=0x000000010017bfc0
- (void)addObservers;	// IMP=0x000000010017bf24
- (id)init;	// IMP=0x000000010017be08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

