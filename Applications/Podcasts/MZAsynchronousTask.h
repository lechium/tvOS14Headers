//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MZTaskAssertion, NSError, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MZAsynchronousTask : NSObject
{
    _Bool _taskInvalidationDisabled;	// 8 = 0x8
    int _cancelType;	// 12 = 0xc
    CDUnknownBlockType _expirationHandler;	// 16 = 0x10
    CDUnknownBlockType _finishedHandler;	// 24 = 0x18
    id _result;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSString *_taskDebugDescription;	// 48 = 0x30
    MZTaskAssertion *_taskAssertion;	// 56 = 0x38
    NSMutableArray *_completions;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_handlerQueue;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    double _taskTimeout;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_taskTimeoutTimer;	// 96 = 0x60
    double _assertionTimeout;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_assertionTimeoutTimer;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000100044a68
@property(retain, nonatomic) NSObject<OS_dispatch_source> *assertionTimeoutTimer; // @synthesize assertionTimeoutTimer=_assertionTimeoutTimer;
@property(nonatomic) double assertionTimeout; // @synthesize assertionTimeout=_assertionTimeout;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *taskTimeoutTimer; // @synthesize taskTimeoutTimer=_taskTimeoutTimer;
@property(nonatomic) double taskTimeout; // @synthesize taskTimeout=_taskTimeout;
@property(nonatomic) _Bool taskInvalidationDisabled; // @synthesize taskInvalidationDisabled=_taskInvalidationDisabled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
@property(retain, nonatomic) NSMutableArray *completions; // @synthesize completions=_completions;
@property(retain, nonatomic) MZTaskAssertion *taskAssertion; // @synthesize taskAssertion=_taskAssertion;
@property(copy, nonatomic) NSString *taskDebugDescription; // @synthesize taskDebugDescription=_taskDebugDescription;
- (void)invokeTaskCompletionBlocksWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000444f0
- (void)addTaskCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044434
- (void)invalidate;	// IMP=0x00000001000443d4
- (void)_invalidateTaskAssertionForced:(_Bool)arg1;	// IMP=0x00000001000441e8
- (void)endTaskOperation;	// IMP=0x00000001000441ac
- (void)finishTaskOperationWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000100043fa4
- (void)beginTaskOperation;	// IMP=0x0000000100043c24
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(nonatomic) int cancelType; // @synthesize cancelType=_cancelType;
- (void)_onQueueFireExpirationHandlerIfNecesary;	// IMP=0x00000001000436c4
@property(copy, nonatomic) CDUnknownBlockType finishedHandler; // @synthesize finishedHandler=_finishedHandler;
@property(copy, nonatomic) CDUnknownBlockType expirationHandler; // @synthesize expirationHandler=_expirationHandler;
- (id)description;	// IMP=0x0000000100043128
- (void)_invalidateAssertionTimer;	// IMP=0x0000000100043040
- (void)_invalidateTaskTimer;	// IMP=0x0000000100042f58
- (void)dealloc;	// IMP=0x0000000100042e7c
- (id)initWithHandlerQueue:(id)arg1 taskTimeout:(double)arg2 assertionTimeout:(double)arg3 debugDescription:(id)arg4;	// IMP=0x0000000100042a38

@end

