//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableArray;

@interface GKEventEmitter : NSObject
{
    NSHashTable *_listeners;	// 8 = 0x8
    NSMutableArray *_supportedProtocols;	// 16 = 0x10
    _Bool _shouldQueue;	// 24 = 0x18
    NSMutableArray *_queuedEvents;	// 32 = 0x20
}

+ (id)eventEmitterForProtocols:(id)arg1 shouldQueue:(_Bool)arg2;	// IMP=0x0000000100060638
+ (id)eventEmitterForProtocols:(id)arg1;	// IMP=0x0000000100060620
@property(retain, nonatomic) NSMutableArray *queuedEvents; // @synthesize queuedEvents=_queuedEvents;
@property(nonatomic) _Bool shouldQueue; // @synthesize shouldQueue=_shouldQueue;
@property(retain, nonatomic) NSMutableArray *supportedProtocols; // @synthesize supportedProtocols=_supportedProtocols;
@property(retain, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
- (_Bool)listenerRegisteredForSelector:(SEL)arg1;	// IMP=0x0000000100060dd4
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000100060c34
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000100060aec
- (id)invocationForProtocol:(id)arg1 selector:(SEL)arg2;	// IMP=0x0000000100060a94
- (id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2;	// IMP=0x0000000100060a24
- (void)unregisterAllListeners;	// IMP=0x0000000100060a14
- (void)unregisterListener:(id)arg1;	// IMP=0x0000000100060a04
- (void)registerListener:(id)arg1;	// IMP=0x00000001000608a8
- (void)dispatchQueuedEventsToListener:(id)arg1;	// IMP=0x00000001000607a4
- (void)dealloc;	// IMP=0x000000010006074c
- (id)initWithSupportedProtocols:(id)arg1 shouldQueue:(_Bool)arg2;	// IMP=0x0000000100060678

@end

