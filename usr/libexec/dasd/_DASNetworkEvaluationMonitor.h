//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface _DASNetworkEvaluationMonitor : NSObject
{
    NSMutableDictionary *_networkPathEvaluators;	// 8 = 0x8
    NSMutableSet *_evaluatorsBeingObserved;	// 16 = 0x10
    NSMutableDictionary *_activityIDToNumber;	// 24 = 0x18
    NSMutableDictionary *_activityNumberToID;	// 32 = 0x20
    CDUnknownBlockType _callback;	// 40 = 0x28
    long long _constrainedNetworkStatus;	// 48 = 0x30
}

+ (id)nwParametersForActivity:(id)arg1;	// IMP=0x0000000100068a6c
+ (id)defaultUnconstrainedPathEvaluator;	// IMP=0x00000001000689ac
+ (id)defaultInexpensivePathEvaluator;	// IMP=0x00000001000688ec
+ (id)defaultPathEvaluator;	// IMP=0x0000000100068870
+ (id)sharedInstance;	// IMP=0x0000000100068804
- (void).cxx_destruct;	// IMP=0x00000001000697b8
@property(nonatomic) long long constrainedNetworkStatus; // @synthesize constrainedNetworkStatus=_constrainedNetworkStatus;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSMutableDictionary *activityNumberToID; // @synthesize activityNumberToID=_activityNumberToID;
@property(retain, nonatomic) NSMutableDictionary *activityIDToNumber; // @synthesize activityIDToNumber=_activityIDToNumber;
@property(retain, nonatomic) NSMutableSet *evaluatorsBeingObserved; // @synthesize evaluatorsBeingObserved=_evaluatorsBeingObserved;
@property(retain, nonatomic) NSMutableDictionary *networkPathEvaluators; // @synthesize networkPathEvaluators=_networkPathEvaluators;
- (_Bool)isUnconstrainedPathAvailableForActivity:(id)arg1;	// IMP=0x00000001000694e4
- (_Bool)isNetworkPathAvailableForActivity:(id)arg1;	// IMP=0x000000010006936c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001000691a4
- (void)stopMonitoringActivity:(id)arg1;	// IMP=0x0000000100068f20
- (void)startMonitoringActivity:(id)arg1 withNetworkParameters:(id)arg2 withEndpoint:(id)arg3;	// IMP=0x0000000100068c9c
- (_Bool)requiresNetworkPathMonitoring:(id)arg1;	// IMP=0x0000000100068c30
- (void)registerForNetworkEvaluationWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000100068c00
- (id)init;	// IMP=0x0000000100068710

@end

