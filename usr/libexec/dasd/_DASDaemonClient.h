//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASActivityGroupSchedulingAndIntrospecting-Protocol.h"
#import "_DASActivityMetering-Protocol.h"
#import "_DASActivitySchedulerClient-Protocol.h"

@class NSMutableSet, NSString, NSXPCConnection, _DASDaemon;

@interface _DASDaemonClient : NSObject <_DASActivitySchedulerClient, _DASActivityGroupSchedulingAndIntrospecting, _DASActivityMetering>
{
    _Bool _isTestModeClient;	// 8 = 0x8
    _Bool _restricted;	// 9 = 0x9
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    NSXPCConnection *_connection;	// 16 = 0x10
    NSMutableSet *_submittedTasks;	// 24 = 0x18
    NSMutableSet *_delayedStartTasks;	// 32 = 0x20
    NSMutableSet *_startedTasks;	// 40 = 0x28
    _DASDaemon *_daemon;	// 48 = 0x30
    NSMutableSet *_runningBGTasks;	// 56 = 0x38
    NSString *_applicationBundleIdentifier;	// 64 = 0x40
    NSString *_mainApplicationBundleIdentifier;	// 72 = 0x48
}

+ (id)clientForDaemon:(id)arg1 withConnection:(id)arg2 isRestricted:(_Bool)arg3;	// IMP=0x000000010006316c
- (void).cxx_destruct;	// IMP=0x0000000100067624
@property(nonatomic) _Bool restricted; // @synthesize restricted=_restricted;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSString *mainApplicationBundleIdentifier; // @synthesize mainApplicationBundleIdentifier=_mainApplicationBundleIdentifier;
@property(retain, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(retain, nonatomic) NSMutableSet *runningBGTasks; // @synthesize runningBGTasks=_runningBGTasks;
@property(retain, nonatomic) _DASDaemon *daemon; // @synthesize daemon=_daemon;
@property(nonatomic) _Bool isTestModeClient; // @synthesize isTestModeClient=_isTestModeClient;
@property(retain, nonatomic) NSMutableSet *startedTasks; // @synthesize startedTasks=_startedTasks;
@property(retain, nonatomic) NSMutableSet *delayedStartTasks; // @synthesize delayedStartTasks=_delayedStartTasks;
@property(retain, nonatomic) NSMutableSet *submittedTasks; // @synthesize submittedTasks=_submittedTasks;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)activityStoppedWithParameters:(id)arg1;	// IMP=0x0000000100067554
- (void)activityStartedWithParameters:(id)arg1;	// IMP=0x0000000100067544
- (void)pauseWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100067484
- (void)enterTestModeWithParameters:(id)arg1;	// IMP=0x00000001000673d4
- (void)blockingPoliciesWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100067314
- (void)clasStatusWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010006726c
- (void)policiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000671c4
- (void)setCapacity:(double)arg1 forBudgetWithName:(id)arg2;	// IMP=0x000000010006711c
- (void)setBalance:(double)arg1 forBudgetWithName:(id)arg2;	// IMP=0x0000000100067074
- (void)remainingBalanceForBudgetWithName:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100066fb4
- (void)allBudgetsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100066f0c
- (void)statisticsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100066e64
- (void)currentPredictionsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100066dbc
- (void)deferActivities:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100066cfc
- (void)forceRunActivities:(id)arg1;	// IMP=0x0000000100066c54
- (void)activityRunStatisticsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100066bac
- (void)scoresForActivityWithName:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100066aec
- (void)runningGroupActivitiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100066a44
- (void)runningActivitiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010006699c
- (void)delayedRunningActivitiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000668f4
- (void)submittedActivitiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010006684c
- (void)completeTaskRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100066648
- (void)establishConnection:(CDUnknownBlockType)arg1;	// IMP=0x000000010006654c
- (void)willExpireBGTaskActivities:(id)arg1;	// IMP=0x00000001000662d8
- (void)handleLaunchFromDaemonForActivities:(id)arg1;	// IMP=0x0000000100066170
- (void)cancelAllTaskRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010006607c
- (void)cancelTaskRequestWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100065f6c
- (void)getPendingTaskRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100065e70
- (void)submitTaskRequest:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100065a74
- (void)validateCTBGTaskRequestWithActivity:(id)arg1;	// IMP=0x0000000100065a70
- (void)setApplicationURLForActivity:(id)arg1;	// IMP=0x0000000100065a6c
- (id)unsafe_mainApplicationBundleIdentifier;	// IMP=0x00000001000658d0
- (id)unsafe_applicationBundleIdentifier;	// IMP=0x00000001000657cc
- (id)bundleIdentifierFromTeamAppTuple:(id)arg1;	// IMP=0x0000000100065598
- (void)setMinimumBackgroundFetchInterval:(double)arg1 forApp:(id)arg2;	// IMP=0x0000000100065588
- (void)submitActivity:(id)arg1 inGroup:(id)arg2;	// IMP=0x0000000100065498
- (void)submitActivity:(id)arg1 inGroupWithName:(id)arg2;	// IMP=0x00000001000653a8
- (void)createActivityGroup:(id)arg1;	// IMP=0x000000010006524c
- (void)updateActivity:(id)arg1 withParameters:(id)arg2;	// IMP=0x00000001000651b0
- (void)activityCanceled:(id)arg1;	// IMP=0x0000000100065048
- (void)cancelAllActivities;	// IMP=0x0000000100064e28
- (void)activityCompleted:(id)arg1;	// IMP=0x0000000100064c0c
- (void)activityStarted:(id)arg1;	// IMP=0x00000001000649c8
- (void)delayedStartActivities:(id)arg1;	// IMP=0x00000001000648ac
- (void)startedActivities:(id)arg1;	// IMP=0x0000000100064750
- (void)handleRunningActivities:(id)arg1;	// IMP=0x000000010006464c
- (void)handleEligibleActivities:(CDUnknownBlockType)arg1;	// IMP=0x000000010006463c
- (void)submitActivities:(id)arg1;	// IMP=0x0000000100064570
- (void)submitActivity:(id)arg1;	// IMP=0x00000001000644a4
- (void)submitActivitiesInternal:(id)arg1;	// IMP=0x00000001000642d0
- (void)submitActivityInternal:(id)arg1;	// IMP=0x0000000100064218
- (void)dealloc;	// IMP=0x00000001000641c8
- (void)activity:(id)arg1 runWithoutHonoringPolicies:(id)arg2;	// IMP=0x000000010006413c
- (void)activity:(id)arg1 blockedOnPolicies:(id)arg2;	// IMP=0x00000001000640b0
- (void)cancelActivities:(id)arg1;	// IMP=0x0000000100063e60
- (void)suspendActivities:(id)arg1;	// IMP=0x0000000100063c28
- (void)runActivities:(id)arg1;	// IMP=0x00000001000639c4
- (void)runActivitiesWithDelayedStart:(id)arg1;	// IMP=0x0000000100063738
- (id)activityNamesFromActivities:(id)arg1;	// IMP=0x0000000100063570
- (void)handleClientInterruption;	// IMP=0x0000000100063518
- (id)unlockedActivitiesWithNames:(id)arg1 inSet:(id)arg2;	// IMP=0x0000000100063360
- (void)removeKnownActivitiesFromSet:(id)arg1;	// IMP=0x00000001000631ec
- (id)initWithDaemon:(id)arg1 withConnection:(id)arg2 isRestricted:(_Bool)arg3;	// IMP=0x0000000100062ea8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

