//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMVPNSessionState.h"

@class NSObject;
@protocol OS_xpc_object;

@interface NESMVPNSessionStateIdle : NESMVPNSessionState
{
    _Bool _establishIPCWhenEnabled;	// 40 = 0x28
    _Bool _disposeInProgress;	// 41 = 0x29
    NSObject<OS_xpc_object> *_pendingStartMessage;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100066e44
@property _Bool disposeInProgress; // @synthesize disposeInProgress=_disposeInProgress;
@property(retain) NSObject<OS_xpc_object> *pendingStartMessage; // @synthesize pendingStartMessage=_pendingStartMessage;
@property _Bool establishIPCWhenEnabled; // @synthesize establishIPCWhenEnabled=_establishIPCWhenEnabled;
- (void)handleClearConfigurationResult:(_Bool)arg1;	// IMP=0x0000000100066ce0
- (_Bool)handleClearConfiguration;	// IMP=0x0000000100066bdc
- (void)handleSetConfigurationResult:(_Bool)arg1;	// IMP=0x0000000100066adc
- (_Bool)handleSetConfiguration;	// IMP=0x00000001000669d8
- (void)handlePluginDisposeComplete:(id)arg1;	// IMP=0x0000000100066974
- (void)handleEstablishIPCReplySent;	// IMP=0x0000000100066924
- (void)handleUpdateConfiguration;	// IMP=0x0000000100066578
- (void)handleEstablishIPC;	// IMP=0x000000010006632c
- (void)handlePlugin:(id)arg1 didStartWithPID:(int)arg2 error:(id)arg3;	// IMP=0x00000001000662a0
- (void)handlePluginDidDetachIPC:(id)arg1;	// IMP=0x000000010006613c
- (void)handleStartMessage:(id)arg1;	// IMP=0x0000000100066000
- (void)handlePendingStartMessage;	// IMP=0x0000000100065f64
- (void)enterWithSession:(id)arg1;	// IMP=0x0000000100065d5c
- (id)init;	// IMP=0x0000000100065d20

@end
