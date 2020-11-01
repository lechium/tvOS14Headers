//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

@interface TMPreferences : NSObject
{
    NSUserDefaults *_defaults;	// 8 = 0x8
}

@property _Bool NTPUseServicePort;
@property(getter=isAutomaticTimeZoneEnabled) _Bool automaticTimeZoneEnabled;
@property(getter=isAutomaticTimeEnabled) _Bool automaticTimeEnabled;
@property(readonly) _Bool shouldAllowTimeTool;
@property(readonly) _Bool shouldAlertWhenIslanded;
@property(readonly) _Bool shouldClamp;
@property(readonly, copy) NSString *NTPServerAddress;
@property(readonly) double RTCFrequencyNoiseDensity;
@property(readonly) double RTCFrequencyTolerance;
@property(readonly) _Bool shouldUseFilesystemTimestamp;
@property(readonly, getter=areTimeZonePopupsEnabled) _Bool timeZonePopupsEnabled;
@property(readonly) long long NTPServicePortMaxRetries;
@property(readonly) double NTPWantedThreshold;
@property(readonly) double basebandWantedThreshold;
@property(readonly) NSString *providerName;
@property(readonly) double NTPUnsetSchedulingInterval;
@property(readonly) long long NTPBurstRetryAttempts;
@property(readonly) double NTPBurstRetryInterval;
@property(readonly) double NTPSchedulingInterval;
@property(readonly) long long commandHistorySizeKey;
@property(readonly) double settimeofdayThreshold;
@property(readonly) double RTCWakeUncertainty;
@property(readonly) double RTCMachSyncInterval;
@property(readonly) _Bool shouldCorrectOnWake;
@property(readonly) _Bool shouldFetchOnWake;
@property(readonly, copy) NSString *NTPServerPort;
- (id)description;	// IMP=0x0000000100016adc
- (void)setAccurateThresholds:(_Bool)arg1;	// IMP=0x000000010001685c
@property(readonly) _Bool shouldUseAccurateThresholdsByDefault;
@property(readonly, getter=isWatch) _Bool watch;
@property(readonly) _Bool supportsBasebandAPTimeSync;
@property(readonly, getter=isMac) _Bool mac;
@property(readonly, getter=isAppleTV) _Bool appleTV;
- (id)init;	// IMP=0x0000000100016750
- (id)initWithDefaults:(id)arg1;	// IMP=0x0000000100016160
- (void)dealloc;	// IMP=0x0000000100016118

@end

