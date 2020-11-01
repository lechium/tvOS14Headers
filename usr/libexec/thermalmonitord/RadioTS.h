//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RadioTS : NSObject
{
    int _sensorIndexTB0R;	// 8 = 0x8
    int _sensorIndexTB1R;	// 12 = 0xc
    _Bool _hasBaseBandTempSensors;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100018bc8
- (_Bool)hasBaseBandTempSensors;	// IMP=0x0000000100018c68
- (void)registerForThermalReport;	// IMP=0x0000000100018c64
- (void)queryThermalSensorInfo;	// IMP=0x0000000100018c60
- (id)init;	// IMP=0x0000000100018c2c

@end

