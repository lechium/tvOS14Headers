//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NRLinkManager.h"

#import "NRLinkDelegate-Protocol.h"

@class NSMutableSet, NSString, NWAddressEndpoint;

@interface NRLinkManagerFixedInterface : NRLinkManager <NRLinkDelegate>
{
    _Bool _isFixedInterfaceLinkActive;	// 8 = 0x8
    NSMutableSet *_links;	// 16 = 0x10
    NWAddressEndpoint *_localEndpoint;	// 24 = 0x18
    NWAddressEndpoint *_peerEndpoint;	// 32 = 0x20
    NSString *_fixedInterfaceName;	// 40 = 0x28
    struct __SCDynamicStore *_dynamicStoreRef;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000100091060
@property(nonatomic) _Bool isFixedInterfaceLinkActive; // @synthesize isFixedInterfaceLinkActive=_isFixedInterfaceLinkActive;
@property(nonatomic) struct __SCDynamicStore *dynamicStoreRef; // @synthesize dynamicStoreRef=_dynamicStoreRef;
@property(retain, nonatomic) NSString *fixedInterfaceName; // @synthesize fixedInterfaceName=_fixedInterfaceName;
@property(retain, nonatomic) NWAddressEndpoint *peerEndpoint; // @synthesize peerEndpoint=_peerEndpoint;
@property(retain, nonatomic) NWAddressEndpoint *localEndpoint; // @synthesize localEndpoint=_localEndpoint;
@property(retain, nonatomic) NSMutableSet *links; // @synthesize links=_links;
- (void)checkEnabledDevices;	// IMP=0x0000000100090c88
- (void)linkDidReceiveData:(id)arg1 data:(id)arg2;	// IMP=0x0000000100090b04
- (void)linkIsUnavailable:(id)arg1;	// IMP=0x0000000100090948
- (void)linkIsSuspended:(id)arg1;	// IMP=0x00000001000907c8
- (void)linkIsReady:(id)arg1;	// IMP=0x0000000100090648
- (void)linkIsAvailable:(id)arg1;	// IMP=0x000000010009048c
- (void)setup;	// IMP=0x0000000100090210
- (id)createFixedInterfaceLinkForNRUUID:(id)arg1;	// IMP=0x00000001000900e8
- (id)copyStatusString;	// IMP=0x000000010008fee8
- (id)copyName;	// IMP=0x000000010008fedc
- (void)dealloc;	// IMP=0x000000010008fe40
- (void)invalidateManager;	// IMP=0x000000010008fe0c
- (void)cancel;	// IMP=0x000000010008fb7c
- (id)initManagerWithQueue:(id)arg1 managerDelegate:(id)arg2 fixedInterfaceName:(id)arg3 peerEndpoint:(id)arg4;	// IMP=0x000000010008f988

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

