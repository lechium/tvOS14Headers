//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSBaseXPCServer.h>

@class NSObject;
@protocol BKSystemApplicationServerDelegate, OS_dispatch_queue;

@interface BKSystemApplicationServer : BSBaseXPCServer
{
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    _Bool _systemAppWasPreviouslyAlive;	// 24 = 0x18
    id <BKSystemApplicationServerDelegate> _delegate;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010004f9c4
- (void).cxx_destruct;	// IMP=0x00000001000506cc
@property(nonatomic) __weak id <BKSystemApplicationServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_queue_handlePing:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000100050650
- (void)_queue_handleActions:(id)arg1 forClient:(id)arg2;	// IMP=0x000000010005055c
- (void)_queue_handleFinishBooting:(id)arg1 forClient:(id)arg2;	// IMP=0x00000001000504d0
- (void)_queue_handleCheckIn:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000100050378
- (void)_queue_handleConnect:(id)arg1 forClient:(id)arg2;	// IMP=0x00000001000501b0
- (void)queue_handleMessage:(id)arg1 client:(id)arg2;	// IMP=0x0000000100050030
- (void)queue_clientRemoved:(id)arg1;	// IMP=0x000000010004ffa4
- (void)queue_clientAdded:(id)arg1;	// IMP=0x000000010004ffa0
- (id)queue_newClientForConnection:(id)arg1;	// IMP=0x000000010004ff4c
- (_Bool)queue_shouldAcceptNewConnection:(id)arg1;	// IMP=0x000000010004ff3c
- (_Bool)auditTokenRepresentsSystemApp:(CDStruct_6ad76789 *)arg1;	// IMP=0x000000010004fddc
- (_Bool)pingSystemApp:(id)arg1;	// IMP=0x000000010004fae8
- (id)init;	// IMP=0x000000010004fa60

@end

