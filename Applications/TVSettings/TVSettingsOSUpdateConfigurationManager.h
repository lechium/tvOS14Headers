//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TVSettingsOSUpdateConfiguration;

@interface TVSettingsOSUpdateConfigurationManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x000000010005e544
- (void)_completeSetCurrentConfiguration:(id)arg1 withData:(id)arg2 error:(id)arg3;	// IMP=0x0000000100060494
- (id)manualConfiguration;	// IMP=0x0000000100060290
- (id)shippingConfiguration;	// IMP=0x0000000100060084
- (id)dailyConfiguration;	// IMP=0x000000010005fd8c
- (id)livabilityConfiguration;	// IMP=0x000000010005fa94
@property(retain, nonatomic) TVSettingsOSUpdateConfiguration *currentConfiguration;
- (id)availableConfigurations;	// IMP=0x000000010005e5b0

@end

