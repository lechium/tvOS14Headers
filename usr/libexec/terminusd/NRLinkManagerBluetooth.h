//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRLinkManager.h"

#import "CBScalablePipeManagerDelegate-Protocol.h"
#import "NRLinkDelegate-Protocol.h"

@class CBScalablePipeManager, NSMutableSet, NSString, NWEndpoint;
@protocol NRLinkManagerBluetoothDelegate;

@interface NRLinkManagerBluetooth : NRLinkManager <NRLinkDelegate, CBScalablePipeManagerDelegate>
{
    _Bool _pipeRegistering;	// 8 = 0x8
    _Bool _pipeRegistered;	// 9 = 0x9
    _Bool _pipeRegisteredOnce;	// 10 = 0xa
    _Bool _pipeRegistrationCycleInProgress;	// 11 = 0xb
    _Bool _noBTCallbackSimCrashGenerated;	// 12 = 0xc
    _Bool _datagramPipeRequested;	// 13 = 0xd
    _Bool _datagramPipeRegistering;	// 14 = 0xe
    _Bool _datagramPipeRegistered;	// 15 = 0xf
    _Bool _urgentPipeRegistering;	// 16 = 0x10
    _Bool _urgentPipeRegistered;	// 17 = 0x11
    _Bool _pipeUnregistering;	// 18 = 0x12
    _Bool _urgentPipeUnregistering;	// 19 = 0x13
    _Bool _hasPendingPipeRegisterRequest;	// 20 = 0x14
    _Bool _hasPendingUrgentPipeRegisterRequest;	// 21 = 0x15
    NSMutableSet *_links;	// 24 = 0x18
    NWEndpoint *_defaultDeviceEndpoint;	// 32 = 0x20
    CBScalablePipeManager *_pipeManager;	// 40 = 0x28
    unsigned long long _registrationUpdateCounter;	// 48 = 0x30
    NSMutableSet *_connectedPipes;	// 56 = 0x38
    id <NRLinkManagerBluetoothDelegate> _bluetoothManagerDelegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000001000102a4
@property(nonatomic) __weak id <NRLinkManagerBluetoothDelegate> bluetoothManagerDelegate; // @synthesize bluetoothManagerDelegate=_bluetoothManagerDelegate;
@property(retain, nonatomic) NSMutableSet *connectedPipes; // @synthesize connectedPipes=_connectedPipes;
@property(nonatomic) _Bool hasPendingUrgentPipeRegisterRequest; // @synthesize hasPendingUrgentPipeRegisterRequest=_hasPendingUrgentPipeRegisterRequest;
@property(nonatomic) _Bool hasPendingPipeRegisterRequest; // @synthesize hasPendingPipeRegisterRequest=_hasPendingPipeRegisterRequest;
@property(nonatomic) _Bool urgentPipeUnregistering; // @synthesize urgentPipeUnregistering=_urgentPipeUnregistering;
@property(nonatomic) _Bool pipeUnregistering; // @synthesize pipeUnregistering=_pipeUnregistering;
@property(nonatomic) _Bool urgentPipeRegistered; // @synthesize urgentPipeRegistered=_urgentPipeRegistered;
@property(nonatomic) _Bool urgentPipeRegistering; // @synthesize urgentPipeRegistering=_urgentPipeRegistering;
@property(nonatomic) _Bool datagramPipeRegistered; // @synthesize datagramPipeRegistered=_datagramPipeRegistered;
@property(nonatomic) _Bool datagramPipeRegistering; // @synthesize datagramPipeRegistering=_datagramPipeRegistering;
@property(nonatomic) _Bool datagramPipeRequested; // @synthesize datagramPipeRequested=_datagramPipeRequested;
@property(nonatomic) unsigned long long registrationUpdateCounter; // @synthesize registrationUpdateCounter=_registrationUpdateCounter;
@property(nonatomic) _Bool noBTCallbackSimCrashGenerated; // @synthesize noBTCallbackSimCrashGenerated=_noBTCallbackSimCrashGenerated;
@property(nonatomic) _Bool pipeRegistrationCycleInProgress; // @synthesize pipeRegistrationCycleInProgress=_pipeRegistrationCycleInProgress;
@property(nonatomic) _Bool pipeRegisteredOnce; // @synthesize pipeRegisteredOnce=_pipeRegisteredOnce;
@property(nonatomic) _Bool pipeRegistered; // @synthesize pipeRegistered=_pipeRegistered;
@property(nonatomic) _Bool pipeRegistering; // @synthesize pipeRegistering=_pipeRegistering;
@property(retain, nonatomic) CBScalablePipeManager *pipeManager; // @synthesize pipeManager=_pipeManager;
@property(retain, nonatomic) NWEndpoint *defaultDeviceEndpoint; // @synthesize defaultDeviceEndpoint=_defaultDeviceEndpoint;
@property(retain, nonatomic) NSMutableSet *links; // @synthesize links=_links;
- (void)checkEnabledDevices;	// IMP=0x000000010000fd24
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;	// IMP=0x000000010000f628
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;	// IMP=0x000000010000f3e0
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;	// IMP=0x000000010000f1bc
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;	// IMP=0x000000010000ee74
- (void)scalablePipeManagerDidUpdateState:(id)arg1;	// IMP=0x000000010000ed78
- (void)cyclePipeRegistration;	// IMP=0x000000010000ed0c
- (void)handleSPMStateChange:(long long)arg1;	// IMP=0x000000010000e938
- (void)unregisterUrgentPipe;	// IMP=0x000000010000e7e0
- (void)registerUrgentPipeIfNeeded;	// IMP=0x000000010000e588
- (void)unregisterPipe;	// IMP=0x000000010000e420
- (void)registerPipe;	// IMP=0x000000010000e1c8
- (void)linkPeerIsAsleep:(id)arg1 isAsleep:(_Bool)arg2;	// IMP=0x000000010000e10c
- (void)linkDidReceiveData:(id)arg1 data:(id)arg2;	// IMP=0x000000010000ded0
- (void)linkIsUnavailable:(id)arg1;	// IMP=0x000000010000dc28
- (void)linkIsSuspended:(id)arg1;	// IMP=0x000000010000da4c
- (void)linkIsReady:(id)arg1;	// IMP=0x000000010000d5f8
- (void)linkIsAvailable:(id)arg1;	// IMP=0x000000010000d1b8
- (_Bool)setMPKLLoggingWithEnabled:(_Bool)arg1;	// IMP=0x000000010000d054
- (void)pipeisAvailable:(id)arg1;	// IMP=0x000000010000c984
- (void)setLinkRequirementsForNRUUID:(id)arg1 inputBPS:(unsigned int)arg2 outputBPS:(unsigned int)arg3 packetsPS:(unsigned int)arg4;	// IMP=0x000000010000c7b8
- (void)disconnectFromPeripherals;	// IMP=0x000000010000c780
- (void)registerDatagramPipeIfApplicable;	// IMP=0x000000010000c73c
- (void)unregisterDatagramPipe;	// IMP=0x000000010000c5e0
- (void)registerDatagramPipe;	// IMP=0x000000010000c300
- (long long)getCBScalablePipeEndpointType;	// IMP=0x000000010000c2ac
- (void)connectToPeripherals;	// IMP=0x000000010000c274
- (void)setup;	// IMP=0x000000010000c1e8
- (void)resetConnectedPipes;	// IMP=0x000000010000c1a8
- (id)copyStatusString;	// IMP=0x000000010000bfc8
- (id)copyName;	// IMP=0x000000010000bfbc
- (void)dealloc;	// IMP=0x000000010000bf20
- (void)invalidateManager;	// IMP=0x000000010000be70
- (void)cancel;	// IMP=0x000000010000bc9c
- (id)initManagerWithQueue:(id)arg1 managerDelegate:(id)arg2 bluetoothManagerDelegate:(id)arg3;	// IMP=0x000000010000ba54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

