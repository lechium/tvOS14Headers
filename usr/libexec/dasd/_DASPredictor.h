//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKPredictor.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface _DASPredictor : _DKPredictor
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)predictorWithKnowledgeStore:(id)arg1 withQueue:(id)arg2;	// IMP=0x000000010001149c
- (void).cxx_destruct;	// IMP=0x00000001000118c4
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)deviceActivityLikelihood:(CDUnknownBlockType)arg1;	// IMP=0x00000001000117cc
- (void)pluginLikelihoodWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000116c8
- (void)launchLikelihoodPredictionForApp:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010001157c

@end

