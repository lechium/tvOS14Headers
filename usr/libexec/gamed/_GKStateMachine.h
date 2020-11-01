//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol _GKStateMachineDelegate;

@interface _GKStateMachine : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _shouldLogStateTransitions;	// 12 = 0xc
    NSDictionary *_validTransitions;	// 16 = 0x10
    id <_GKStateMachineDelegate> _delegate;	// 24 = 0x18
    NSString *_currentState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000ea0f0
@property __weak id <_GKStateMachineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSDictionary *validTransitions; // @synthesize validTransitions=_validTransitions;
@property(nonatomic) _Bool shouldLogStateTransitions; // @synthesize shouldLogStateTransitions=_shouldLogStateTransitions;
- (void)_performTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x00000001000e9eb4
- (id)_validateTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x00000001000e9bbc
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x00000001000e9b78
- (_Bool)_setCurrentState:(id)arg1;	// IMP=0x00000001000e99b4
@property(retain) NSString *currentState; // @synthesize currentState=_currentState;
- (_Bool)applyState:(id)arg1;	// IMP=0x00000001000e999c
- (void)dealloc;	// IMP=0x00000001000e990c
- (id)init;	// IMP=0x00000001000e98d0

@end

