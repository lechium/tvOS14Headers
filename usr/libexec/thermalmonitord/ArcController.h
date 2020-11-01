//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "tGraphDataSource-Protocol.h"

@class CommonProduct;
@protocol OS_dispatch_queue;

@interface ArcController : NSObject <tGraphDataSource>
{
    CommonProduct *_product;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_arcQueue;	// 16 = 0x10
    int _mitigationsActive;	// 24 = 0x18
    int _thresholdModuleTemperature;	// 28 = 0x1c
    int _thresholdModuleTemperatureHysteresis;	// 32 = 0x20
    int _thresholdVirtualTemperature;	// 36 = 0x24
    int _thresholdVirtualTemperatureHysteresis;	// 40 = 0x28
    float _gainMitigated;	// 44 = 0x2c
    float _gainUnmitigated;	// 48 = 0x30
    int _latestModuleTemperature;	// 52 = 0x34
    int _latestVirtualTemperature;	// 56 = 0x38
    int _originalThresholdModuleTemperature;	// 60 = 0x3c
    int _originalThresholdVirtualTemperature;	// 64 = 0x40
}

- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x0000000100027a50
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x0000000100027a3c
- (int)numberOfFields;	// IMP=0x0000000100027a34
- (void)overrideParam:(id)arg1 value:(int)arg2;	// IMP=0x00000001000278e8
- (void)updateInternal;	// IMP=0x000000010002776c
- (void)update;	// IMP=0x0000000100027700
- (id)initWithParams:(id)arg1 product:(id)arg2;	// IMP=0x0000000100027458
- (id)init;	// IMP=0x0000000100027444

@end
