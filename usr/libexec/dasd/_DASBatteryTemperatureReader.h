//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASSignalReader-Protocol.h"

@class NSString;

@interface _DASBatteryTemperatureReader : NSObject <_DASSignalReader>
{
}

+ (id)batteryProperties;	// IMP=0x000000010000f0ac
- (id)lastModifiedDate;	// IMP=0x000000010000f26c
- (id)currentValue;	// IMP=0x000000010000f12c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

