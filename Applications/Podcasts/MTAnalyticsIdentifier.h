//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MTAnalyticsIdentifier : NSObject
{
}

+ (id)_generateIdentifier;	// IMP=0x0000000100053a54
+ (_Bool)resetIdentifiersFromCloudIfNeeded;	// IMP=0x00000001000537dc
+ (_Bool)isCloudAccountChanged;	// IMP=0x0000000100053724
+ (void)resetIdentifiersFromSettings;	// IMP=0x00000001000535fc
+ (_Bool)resetIdentifiersIfNeeded;	// IMP=0x00000001000534d4
+ (void)updateCloudKeychainEnabled;	// IMP=0x0000000100053418
+ (_Bool)isCloudKeychainEnabled;	// IMP=0x00000001000533a4
+ (void)setCloudPersonId:(id)arg1;	// IMP=0x0000000100053314
+ (id)cloudPersonId;	// IMP=0x00000001000532c8
+ (id)currentAccountId;	// IMP=0x0000000100053254
+ (id)localPersonIdAccountId;	// IMP=0x00000001000531f0
+ (void)setResetNeeded:(_Bool)arg1;	// IMP=0x0000000100053188
+ (_Bool)isResetNeeded;	// IMP=0x000000010005312c
+ (void)setLocalPersonIdAccountId:(id)arg1;	// IMP=0x00000001000530b4
+ (void)setLocalPersonId:(id)arg1;	// IMP=0x0000000100053004
+ (id)localPersonId;	// IMP=0x0000000100052f84
+ (void)resetDeviceId;	// IMP=0x0000000100052f10
+ (id)deviceId;	// IMP=0x0000000100052eac

@end

