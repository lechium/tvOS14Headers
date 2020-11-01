//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TableDrivenDecisionTree : NSObject
{
    NSArray *_componentControllers;	// 8 = 0x8
    NSArray *_hotspotControllers;	// 16 = 0x10
    unsigned char maxLoadIndexForComponent[17];	// 24 = 0x18
    unsigned char releaseMaxLoadIndexForComponent[17];	// 41 = 0x29
    unsigned int releaseRateForComponent[17];	// 60 = 0x3c
}

- (void)initDecisionTable:(struct __CFDictionary *)arg1;	// IMP=0x0000000100013c48
- (id)findCC:(int)arg1;	// IMP=0x0000000100013b24
- (void)evaluateDecisionTree;	// IMP=0x00000001000139f4
- (void)readReleaseRateForAllComponents;	// IMP=0x0000000100013930
- (int)getReleaseRateForComponent:(int)arg1;	// IMP=0x00000001000138ec
- (void)actionComponentControl;	// IMP=0x000000010001360c
- (int)getMTypeFromComponent:(int)arg1;	// IMP=0x00000001000135ec
- (id)initWithComponentControllers:(id)arg1 hotspotControllers:(id)arg2 decisionTreeTable:(id)arg3;	// IMP=0x0000000100013564

@end

