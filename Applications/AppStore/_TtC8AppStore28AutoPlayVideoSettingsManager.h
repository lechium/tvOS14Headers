//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC8AppStore28AutoPlayVideoSettingsManager : NSObject
{
    MISSING_TYPE *defaultAutoPlayVideoSetting;	// 8 = 0x8
    MISSING_TYPE *reduceMotionSetLastAutoPlayVideoValueKey;	// 24 = 0x18
    MISSING_TYPE *lastReduceMotionValueKey;	// 40 = 0x28
    MISSING_TYPE *lowPowerModeSetLastAutoPlayVideoValueKey;	// 56 = 0x38
    MISSING_TYPE *lastLowPowerModeValueKey;	// 72 = 0x48
    MISSING_TYPE *autoPlayVideoSettingKey;	// 88 = 0x58
    MISSING_TYPE *userSetAutoPlayVideoSettingKey;	// 104 = 0x68
    MISSING_TYPE *lastUserSetAutoPlayVideoValueKey;	// 120 = 0x78
    MISSING_TYPE *autoPlayUserSetting;	// 136 = 0x88
    MISSING_TYPE *networkInquiry;	// 144 = 0x90
    MISSING_TYPE *networkObservation;	// 184 = 0xb8
    MISSING_TYPE *networkMayUseCellular;	// 224 = 0xe0
    MISSING_TYPE *fullScreenAudioSettingsTimeoutMinutes;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x00000001000e664c
- (void)saveFullScreenAudioSettings;	// IMP=0x00000001000e7450
- (void)restoreFullScreenAudioSettings;	// IMP=0x00000001000e744c
- (void)updateAutoPlayVideoSettings;	// IMP=0x00000001000e70f4
- (void)dealloc;	// IMP=0x00000001000e65a0
- (id)init;	// IMP=0x00000001000e64f0

@end

