//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

@class CommonProduct;

@interface ThermalLevelCC : ComponentControl
{
    CommonProduct *product;	// 128 = 0x80
    unsigned int currThermLevel;	// 136 = 0x88
    unsigned int prevThermLevel;	// 140 = 0x8c
}

- (void)refreshFunctionalTelemetry;	// IMP=0x0000000100017a04
- (void)defaultAction;	// IMP=0x00000001000179a0
- (id)initWithProduct:(id)arg1;	// IMP=0x00000001000178d4

@end

