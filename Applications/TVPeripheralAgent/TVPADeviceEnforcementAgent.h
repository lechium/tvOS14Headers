//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSBluetoothManagerDelegate-Protocol.h"

@class CUBluetoothClient, NSMutableDictionary, NSSet, NSString;

@interface TVPADeviceEnforcementAgent : NSObject <TVSBluetoothManagerDelegate>
{
    int _notifyTokens[32];	// 8 = 0x8
    NSSet *_priorConnectedDevices;	// 136 = 0x88
    _Bool _observingPhysicalNetworkInterface;	// 144 = 0x90
    _Bool _observingConnectedDevices;	// 145 = 0x91
    _Bool _enforcing;	// 146 = 0x92
    CUBluetoothClient *_discoveryClient;	// 152 = 0x98
    NSMutableDictionary *_connectedDevices;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000010000834c
- (_Bool)askUserAboutDisconnectingAudioDevice;	// IMP=0x0000000100008074
- (_Bool)askUserAboutConnectingAudioDevice;	// IMP=0x0000000100007d9c
- (void)tellUserUpdateNeededForDisconnectedDevice:(id)arg1;	// IMP=0x0000000100007ab8
- (void)tellUserDevice:(id)arg1 disconnectedDueToDeviceLimit:(long long)arg2;	// IMP=0x00000001000074a8
- (void)_bluetoothManagerUpdated:(id)arg1;	// IMP=0x0000000100007008
- (void)_didCompleteDeviceConnection:(id)arg1 currentState:(unsigned int)arg2;	// IMP=0x0000000100006700
- (void)bluetoothManager:(id)arg1 didCompleteDeviceConnection:(id)arg2 error:(id)arg3;	// IMP=0x0000000100005fb0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100005d08
- (void)startEnforcing;	// IMP=0x0000000100005b0c
- (_Bool)_isBreakingEnforcableRuleForDeviceType:(long long)arg1;	// IMP=0x0000000100005a84
- (void)_applyNewEnforcement;	// IMP=0x00000001000051c4
- (void)dealloc;	// IMP=0x000000010000500c
- (id)init;	// IMP=0x0000000100004a20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

