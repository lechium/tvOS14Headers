//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CommonProduct;

@interface ThermalManager : NSObject
{
    struct __CFRunLoop *localMainRunloop;	// 8 = 0x8
    int productName;	// 16 = 0x10
    CommonProduct *product;	// 24 = 0x18
    struct __CFDictionary *_plistConfig;	// 32 = 0x20
}

@property(readonly) struct __CFRunLoop *localMainRunloop; // @synthesize localMainRunloop;
- (_Bool)getPotentialForcedThermalPressureLevel;	// IMP=0x000000010000a85c
- (void)canaryModeExitEarly:(int)arg1;	// IMP=0x000000010000a84c
- (int)canaryTempThreshold;	// IMP=0x000000010000a83c
- (int)canaryTempSensorIndex;	// IMP=0x000000010000a82c
- (int)desiredLoopInterval;	// IMP=0x000000010000a81c
- (_Bool)useTcalAdjust:(unsigned int)arg1;	// IMP=0x000000010000a80c
- (struct __CFString *)getTGraphData:(int)arg1;	// IMP=0x000000010000a7d0
- (void)initDataCollection;	// IMP=0x000000010000a73c
- (int)canSystemSleep;	// IMP=0x000000010000a71c
- (void)updateSystemPowerState:(_Bool)arg1;	// IMP=0x000000010000a70c
- (void)updateSystemLoad:(_Bool)arg1;	// IMP=0x000000010000a574
- (void)checkForArcOverride:(struct __SCPreferences *)arg1 key:(struct __CFString *)arg2;	// IMP=0x000000010000a4f0
- (void)checkForLifetimeServoOverride:(struct __SCPreferences *)arg1 key:(struct __CFString *)arg2;	// IMP=0x000000010000a454
- (void)updatePrefs:(struct __SCPreferences *)arg1:(_Bool)arg2;	// IMP=0x0000000100009160
- (int)getModeratePressureVersion;	// IMP=0x0000000100009150
- (_Bool)isDeviceApplicable;	// IMP=0x00000001000090f8
- (void)SaveProductString:(int)arg1;	// IMP=0x00000001000090f0
- (void)probeAllSupervisorControlLoadingIndex;	// IMP=0x00000001000090e0
- (void)initializeReadPrefs:(struct __SCPreferences *)arg1;	// IMP=0x00000001000090d0
- (void)hintComponentControlTakeAction;	// IMP=0x00000001000090c0
- (int)getProductTotalPowerSensors;	// IMP=0x00000001000090b0
- (int)getProductTotalSensors;	// IMP=0x00000001000090a0
- (struct iir_filter_t *)getProductFilterValues;	// IMP=0x0000000100009090
- (unsigned long long)getMaxSensorValue;	// IMP=0x0000000100009080
- (unsigned int)getRequiredCalibrationResistorSamples;	// IMP=0x0000000100009070
- (int)getProductCalibrationSensorID;	// IMP=0x0000000100009060
- (int)getProductCalibrationDefault;	// IMP=0x0000000100009050
- (void *)getConfigurationFor:(struct __CFString *)arg1;	// IMP=0x0000000100009044
- (void)createNewProduct:(struct __CFRunLoop *)arg1;	// IMP=0x0000000100008f5c
- (void)createConnectionToCT;	// IMP=0x0000000100008f4c
- (void)dealloc;	// IMP=0x0000000100008f04
- (id)initWithConfig:(struct __CFDictionary *)arg1;	// IMP=0x0000000100008ebc

@end

