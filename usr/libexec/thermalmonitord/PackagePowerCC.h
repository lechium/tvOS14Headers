//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ComponentControl.h"

#import "tGraphDataSource-Protocol.h"

@interface PackagePowerCC : ComponentControl <tGraphDataSource>
{
    int _packageCCListId;	// 128 = 0x80
}

- (void)refreshCPMSTGraphTelemetry;	// IMP=0x00000001000146c4
- (void)updatePowerTarget;	// IMP=0x0000000100014598
- (void)defaultCPMSAction;	// IMP=0x000000010001458c
- (void)defaultAction;	// IMP=0x0000000100014580
- (id)initWithParams:(struct __CFDictionary *)arg1;	// IMP=0x0000000100014388

@end

