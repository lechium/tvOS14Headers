//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NEHelperDelegate-Protocol.h"

@class NSString;

@interface NEHelperHotspotConfigurationManager : NSObject <NEHelperDelegate>
{
    NSString *_bundleID;	// 8 = 0x8
}

+ (void)checkAppForConfigurationCleanup:(id)arg1;	// IMP=0x0000000100004228
+ (_Bool)verifyEntitlement:(id)arg1;	// IMP=0x0000000100002160
+ (void)initGlobals;	// IMP=0x0000000100002078
- (void).cxx_destruct;	// IMP=0x00000001000043a8
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)handleMessage:(id)arg1;	// IMP=0x00000001000040a8
- (_Bool)processRequest:(id)arg1;	// IMP=0x0000000100004034
- (_Bool)processQueryNetworks:(id)arg1;	// IMP=0x0000000100003df8
- (_Bool)processRemoveConfigurationRequest:(id)arg1;	// IMP=0x0000000100003cf4
- (void)removeWiFiNetworkConfiguration:(id)arg1;	// IMP=0x0000000100003a30
- (_Bool)checkIfJoinOnceNetworkAndDisassociate:(struct __WiFiManagerClient *)arg1;	// IMP=0x00000001000038b0
- (_Bool)processAddConfigurationRequest:(id)arg1;	// IMP=0x00000001000031e0
- (_Bool)checkIfSystemAppOrDaemon;	// IMP=0x000000010000308c
- (struct __WiFiNetwork *)createWiFiNetworkFromConfiguration:(id)arg1;	// IMP=0x000000010000299c
- (id)createEAPClientConfiguration:(id)arg1;	// IMP=0x0000000100002470
- (id)getTTLSInnerAuthenticationString:(long long)arg1;	// IMP=0x0000000100002418
@property(readonly, nonatomic) NSString *name;
- (id)initWithFirstMessage:(id)arg1;	// IMP=0x00000001000022a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

