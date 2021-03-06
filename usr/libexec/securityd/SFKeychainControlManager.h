//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "SFKeychainControl-Protocol.h"

@class NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface SFKeychainControlManager : NSObject <SFKeychainControl, NSXPCListenerDelegate>
{
    NSXPCListener *_listener;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x0000000100061dd8
- (void).cxx_destruct;	// IMP=0x0000000100061ba0
- (void)rpcDeleteCorruptedItemsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100061b18
- (void)rpcFindCorruptedItemsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100061a80
- (_Bool)deleteCorruptedItemsWithError:(id *)arg1;	// IMP=0x0000000100061798
- (id)findCorruptedItemsWithError:(id *)arg1;	// IMP=0x000000010006125c
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100061028
- (id)xpcControlEndpoint;	// IMP=0x0000000100060fd0
- (id)_init;	// IMP=0x0000000100060f38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

