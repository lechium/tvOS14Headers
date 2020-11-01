//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASActivityPolicyPredicting-Protocol.h"

@class NSArray, NSDate, NSString, _DKPredictionTimeline, _DKPredictor;

@interface _DASDefaultPairedPolicy : NSObject <_DASActivityPolicyPredicting>
{
    NSString *_policyName;	// 8 = 0x8
    NSArray *_triggers;	// 16 = 0x10
    _DKPredictor *_predictor;	// 24 = 0x18
    _DKPredictionTimeline *_deviceNearbyTimeline;	// 32 = 0x20
    NSDate *_lastPredictionTimelineUpdate;	// 40 = 0x28
}

+ (id)policyInstance;	// IMP=0x00000001000240e4
- (void).cxx_destruct;	// IMP=0x00000001000247fc
@property(retain, nonatomic) NSDate *lastPredictionTimelineUpdate; // @synthesize lastPredictionTimelineUpdate=_lastPredictionTimelineUpdate;
@property(retain) _DKPredictionTimeline *deviceNearbyTimeline; // @synthesize deviceNearbyTimeline=_deviceNearbyTimeline;
@property(retain, nonatomic) _DKPredictor *predictor; // @synthesize predictor=_predictor;
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(copy, nonatomic) NSString *policyName; // @synthesize policyName=_policyName;
- (double)predictedScoreForActivity:(id)arg1 atDate:(id)arg2;	// IMP=0x0000000100024734
- (id)responseForActivity:(id)arg1 withState:(id)arg2;	// IMP=0x0000000100024468
- (double)scoreForActivity:(id)arg1 atDate:(id)arg2;	// IMP=0x0000000100024180
- (double)weightForActivity:(id)arg1;	// IMP=0x00000001000240dc
- (_Bool)appliesToActivity:(id)arg1;	// IMP=0x000000010002406c
- (_Bool)shouldIgnoreTrigger:(id)arg1 withState:(id)arg2;	// IMP=0x0000000100023f94
- (id)predictionForDeviceNearby;	// IMP=0x0000000100023dc8
- (id)init;	// IMP=0x0000000100023cc4
- (id)initializeTriggers;	// IMP=0x0000000100023b6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

