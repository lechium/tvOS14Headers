//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTBaseQueryObserver, MTDefaultsChangeNotifier;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MTBaseProcessor : NSObject
{
    _Bool _isStopping;	// 8 = 0x8
    MTBaseQueryObserver *_queryObserver;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_timer;	// 24 = 0x18
    MTDefaultsChangeNotifier *_defaultsNotifier;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    NSObject *_isStoppingLock;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00000001000a8ed8
+ (void)initialize;	// IMP=0x00000001000a8e74
- (void).cxx_destruct;	// IMP=0x00000001000aa090
@property(retain, nonatomic) NSObject *isStoppingLock; // @synthesize isStoppingLock=_isStoppingLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) MTDefaultsChangeNotifier *defaultsNotifier; // @synthesize defaultsNotifier=_defaultsNotifier;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) MTBaseQueryObserver *queryObserver; // @synthesize queryObserver=_queryObserver;
- (void)enqueueWorkBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a9da8
- (id)defaultPropertiesThatAffectPredicate;	// IMP=0x00000001000a9da0
- (void)results:(CDUnknownBlockType)arg1;	// IMP=0x00000001000a9d34
- (void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2;	// IMP=0x00000001000a9cd8
- (id)predicate;	// IMP=0x00000001000a9c94
- (id)entityName;	// IMP=0x00000001000a9c50
- (double)updatePredicateDuration;	// IMP=0x00000001000a9c48
- (void)updatePredicate;	// IMP=0x00000001000a9b10
- (id)createQueryObserver;	// IMP=0x00000001000a9880
- (_Bool)isRunning;	// IMP=0x00000001000a9850
@property(nonatomic) _Bool isStopping;
- (void)stop;	// IMP=0x00000001000a971c
- (_Bool)start;	// IMP=0x00000001000a9080
- (id)init;	// IMP=0x00000001000a9018

@end

