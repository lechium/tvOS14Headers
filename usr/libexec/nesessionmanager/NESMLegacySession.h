//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NESMSession.h"

@class NEVPNProtocol, NSDictionary, NSString;

@interface NESMLegacySession : NESMSession
{
    int _sessionType;	// 8 = 0x8
    NEVPNProtocol *_protocol;	// 16 = 0x10
    struct _ne_sm_bridge *_bridge;	// 24 = 0x18
    NSDictionary *_userOptions;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000602d8
@property(retain) NSDictionary *userOptions; // @synthesize userOptions=_userOptions;
@property struct _ne_sm_bridge *bridge; // @synthesize bridge=_bridge;
@property int sessionType; // @synthesize sessionType=_sessionType;
@property(retain) NEVPNProtocol *protocol; // @synthesize protocol=_protocol;
- (void)handleInitializeState;	// IMP=0x000000010005ff28
- (void)handleInstalledAppsChanged;	// IMP=0x000000010005fad8
- (void)handleDeviceUnlock;	// IMP=0x000000010005f9fc
- (void)handleDeviceLock;	// IMP=0x000000010005f920
- (void)handleUserSwitch;	// IMP=0x000000010005f844
- (void)handleUserLogout;	// IMP=0x000000010005f768
- (_Bool)handleUpdateConfiguration:(id)arg1;	// IMP=0x000000010005f4bc
- (void)uninstall;	// IMP=0x000000010005f2cc
- (void)install;	// IMP=0x000000010005ebf4
- (void)updateDNSSkipPolicies;	// IMP=0x000000010005ea9c
- (void)handleGetInfoMessage:(id)arg1 withType:(int)arg2;	// IMP=0x000000010005e6a0
- (void)handleSecuritySessionInfoRequest:(id)arg1;	// IMP=0x000000010005e514
- (void)handleChangeEventForInterface:(id)arg1 newFlags:(unsigned long long)arg2 previousFlags:(unsigned long long)arg3;	// IMP=0x000000010005e1e0
- (void)handleWakeup;	// IMP=0x000000010005e0a4
- (void)handleSleepTime:(double)arg1;	// IMP=0x000000010005dfd4
- (_Bool)handleSleep;	// IMP=0x000000010005ded8
- (void)handleStopMessageWithReason:(int)arg1;	// IMP=0x000000010005ddbc
- (void)handleStartMessage:(id)arg1;	// IMP=0x000000010005d634
- (id)addDecryptedPasswordsToOptions:(id)arg1;	// IMP=0x000000010005cf2c
- (void)performBlockOnMainRunLoop:(CDUnknownBlockType)arg1;	// IMP=0x000000010005cee4
- (void)handleDisposable;	// IMP=0x000000010005ce3c
- (id)copyIPv4Dictionary;	// IMP=0x000000010005cd6c
- (id)copyDNSDictionary;	// IMP=0x000000010005cc9c
- (_Bool)hasDNSInstalled;	// IMP=0x000000010005cbb8
- (_Bool)hasProxiesInstalled;	// IMP=0x000000010005ca74
@property(readonly) NSString *interfaceName;
- (void)dealloc;	// IMP=0x000000010005c6f8
- (int)type;	// IMP=0x000000010005c6ec
- (id)initWithConfiguration:(id)arg1 andServer:(id)arg2 andProtocol:(id)arg3 andSessionType:(int)arg4;	// IMP=0x000000010005c3f0

@end
