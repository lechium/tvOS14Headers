//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPBeaconManagerUserAgentDaemonInternalXPCProtocol-Protocol.h"
#import "SPLocalBeaconManagerXPCProtocol-Protocol.h"
#import "SPLocalPairingManagerXPCProtocol-Protocol.h"

@class MISSING_TYPE;

@interface _TtC12searchpartyd34LightweightBeaconManagerTrampoline : NSObject <SPLocalBeaconManagerXPCProtocol, SPLocalPairingManagerXPCProtocol, SPBeaconManagerUserAgentDaemonInternalXPCProtocol>
{
    MISSING_TYPE *implementation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000e3788
- (id)init;	// IMP=0x00000001000e3798
- (void)currentBeaconingKeyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e36b0
- (void)notifyBeaconKeyURLChanged:(id)arg1 deleted:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000e35b0
- (void)notifyConfigurationChanged:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e34dc
- (void)purgeLocalBeaconRecordWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e3484
- (void)pushLocalBeaconRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e33e0
- (void)alwaysBeaconStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e3338
- (void)setAlwaysBeaconState:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000e327c
- (void)getLocalPairingDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e31d4
- (void)getMacBeaconConfigWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e3174
- (void)beaconingKeysWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e30a8
- (void)beaconingStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000e2ff0

@end
