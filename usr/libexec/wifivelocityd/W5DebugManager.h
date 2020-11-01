//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface W5DebugManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (void)__airplayLoggingEnabledWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c694
+ (void)__setAirPlayLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001c664
+ (void)__disableAirPlayLoggingWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c63c
+ (void)__enableAirPlayLoggingWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c504
+ (void)__ios_setBluetoothLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001c338
+ (void)__ios_bluetoothLoggingEnabledWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c19c
+ (void)__setValue:(id)arg1 key:(id)arg2 domain:(id)arg3;	// IMP=0x000000010001c16c
+ (id)__valueForKey:(id)arg1 domain:(id)arg2;	// IMP=0x000000010001c144
+ (void)__setOpenDirectoryLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001c080
+ (void)__openDirectoryLoggingEnabledWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001be50
+ (void)__mostRecentLogWithSuffix:(id)arg1 logPath:(id)arg2 queue:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010001b9ec
+ (void)__setDHCPLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001b910
+ (void)__setDNSLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001b824
+ (void)__dnsLoggingEnabledWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b680
+ (void)__toggleDNSLoggingWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b658
+ (void)__setEAPOLLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001b4d0
+ (void)__eapolLoggingEnabledWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001b3ac
+ (_Bool)__getEAPOLDebugFlagsEnabled;	// IMP=0x000000010001b31c
+ (_Bool)__setEAPOLDebugFlagsEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000010001b1e8
+ (void)__ios__setWiFiLoggingEnabled:(_Bool)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000010001b0e0
+ (void)__ios_wifiLoggingEnabledWithQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001afcc
+ (void)setOSLogPreferenceLevel:(id)arg1 enableOvserizeMessages:(_Bool)arg2 subsystem:(id)arg3;	// IMP=0x000000010001add8
- (void)__setNoLoggingWiFiProfileInstalled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001cba4
- (void)__queryNoLoggingWiFiProfileInstalledAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010001ca88
- (void)__setMegaWiFiProfileInstalled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c908
- (void)__queryMegaWiFiProfileInstalledAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c7ec
- (void)setOpenDirectoryDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001adbc
- (void)queryOpenDirectoryDebugLoggingAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010001ada0
- (void)setAirPlayDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ad84
- (void)queryAirPlayDebugLoggingAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010001ad68
- (void)setDNSDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ad4c
- (void)queryDNSDebugLoggingAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010001ad30
- (void)setDHCPDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ad14
- (void)setEAPOLDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001acf8
- (void)queryEAPOLDebugLoggingAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010001acdc
- (void)setBluetoothDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001acc0
- (void)queryBluetoothDebugLoggingAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010001aca4
- (void)setWiFiDebugLoggingEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ac88
- (void)queryWiFiDebugLoggingAndReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010001ac6c
- (void)setDebugConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010001a53c
- (id)queryDebugConfigurationAndReturnError:(out id *)arg1;	// IMP=0x000000010001a2ec
- (void)queryDebugConfigurationAndReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100019ad8
- (void)dealloc;	// IMP=0x0000000100019a8c
- (id)init;	// IMP=0x0000000100019a20

@end

