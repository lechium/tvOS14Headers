//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NDUserEventAgentConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
    NSObject<OS_xpc_object> *_listener;	// 24 = 0x18
    NSDictionary *_registeredClients;	// 32 = 0x20
    NSMutableDictionary *_pendingWakes;	// 40 = 0x28
}

+ (id)sharedUserEventAgentConnection;	// IMP=0x0000000100033ea8
- (void).cxx_destruct;	// IMP=0x000000010003355c
- (void)removePendingWakeForClient:(id)arg1 sessionIdentifier:(id)arg2;	// IMP=0x0000000100033498
- (void)performWake:(CDUnknownBlockType)arg1 uponNotification:(id)arg2 sessionIdentifier:(id)arg3;	// IMP=0x000000010003339c
- (void)launchProcessWithIdentifier:(id)arg1 sessionIdentifier:(id)arg2;	// IMP=0x00000001000332d8
- (_Bool)canLaunchProcessWithIdentifier:(id)arg1;	// IMP=0x0000000100033298
- (void)handleNewConnection:(id)arg1;	// IMP=0x0000000100033170
- (void)start;	// IMP=0x0000000100033060
- (id)init;	// IMP=0x0000000100032f74

@end
