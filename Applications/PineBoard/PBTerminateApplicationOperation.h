//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class FBProcessManager, RBSProcessIdentity;

@interface PBTerminateApplicationOperation : NSOperation
{
    _Bool _executing;	// 8 = 0x8
    _Bool _finished;	// 9 = 0x9
    FBProcessManager *_processManager;	// 16 = 0x10
    RBSProcessIdentity *_applicationProcessIdentity;	// 24 = 0x18
    CDUnknownBlockType _terminateApplicationCompletionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100262bc8
@property(copy, nonatomic) CDUnknownBlockType terminateApplicationCompletionHandler; // @synthesize terminateApplicationCompletionHandler=_terminateApplicationCompletionHandler;
@property(readonly, nonatomic) RBSProcessIdentity *applicationProcessIdentity; // @synthesize applicationProcessIdentity=_applicationProcessIdentity;
@property(readonly, nonatomic) FBProcessManager *processManager; // @synthesize processManager=_processManager;
- (void)start;	// IMP=0x0000000100261fc4
- (_Bool)isFinished;	// IMP=0x0000000100261f54
- (_Bool)isExecuting;	// IMP=0x0000000100261ee4
- (_Bool)isAsynchronous;	// IMP=0x0000000100261ec4
- (id)initWithApplicationProcessIdentity:(id)arg1;	// IMP=0x0000000100261de4
- (id)initWithProcessManager:(id)arg1 applicationProcessIdentity:(id)arg2;	// IMP=0x0000000100261c94

@end
