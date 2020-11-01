//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "OctagonStateMachineEngine-Protocol.h"

@class CKKSLockStateTracker, OctagonStateMachine;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface EscrowRequestController : NSObject <OctagonStateMachineEngine>
{
    _Bool _forceIgnoreCloudServicesRateLimiting;	// 8 = 0x8
    _Bool _haveRecordedDate;	// 9 = 0x9
    OctagonStateMachine *_stateMachine;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CKKSLockStateTracker *_lockStateTracker;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100034950
@property _Bool haveRecordedDate; // @synthesize haveRecordedDate=_haveRecordedDate;
@property(retain) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property _Bool forceIgnoreCloudServicesRateLimiting; // @synthesize forceIgnoreCloudServicesRateLimiting=_forceIgnoreCloudServicesRateLimiting;
@property(retain) OctagonStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (void)storePrerecordsInEscrowRPC:(CDUnknownBlockType)arg1;	// IMP=0x0000000100034738
- (void)triggerEscrowUpdateRPC:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100033f34
- (id)_onqueueNextStateMachineTransition:(id)arg1 flags:(id)arg2 pendingFlags:(id)arg3;	// IMP=0x0000000100033578
- (id)initWithLockStateTracker:(id)arg1;	// IMP=0x000000010003333c

@end

