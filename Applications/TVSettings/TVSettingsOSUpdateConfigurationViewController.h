//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class TVSettingsOSUpdateConfiguration;

@interface TVSettingsOSUpdateConfigurationViewController : TSKViewController
{
    TVSettingsOSUpdateConfiguration *_currentConfiguration;	// 8 = 0x8
    unsigned long long _configurationCheckState;	// 16 = 0x10
    unsigned long long _configurationLoadingState;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010007b104
@property(nonatomic) unsigned long long configurationLoadingState; // @synthesize configurationLoadingState=_configurationLoadingState;
@property(nonatomic) unsigned long long configurationCheckState; // @synthesize configurationCheckState=_configurationCheckState;
@property(retain, nonatomic) TVSettingsOSUpdateConfiguration *currentConfiguration; // @synthesize currentConfiguration=_currentConfiguration;
- (void)_warnAboutWrongURLs;	// IMP=0x000000010007ada8
- (void)_warnAboutMissingCarryProfile;	// IMP=0x000000010007ac00
- (void)_warnAboutMissingVPNProfile;	// IMP=0x000000010007aa58
- (void)_warnAboutMissingAppleConnectCredentials;	// IMP=0x000000010007a8b0
- (void)_configurationDidChange:(id)arg1;	// IMP=0x000000010007a54c
- (void)_configurationWillChange:(id)arg1;	// IMP=0x000000010007a500
- (void)_clearTextSettingItem:(id)arg1;	// IMP=0x000000010007a4e4
- (void)_checkConfiguration:(id)arg1;	// IMP=0x000000010007a004
- (void)_updateCheckConfigurationItem:(id)arg1;	// IMP=0x0000000100079c90
- (void)_updateConfigurationItem:(id)arg1 withValue:(id)arg2;	// IMP=0x0000000100079b70
- (id)loadSettingGroups;	// IMP=0x0000000100078614
- (void)viewDidLoad;	// IMP=0x0000000100078410
- (void)dealloc;	// IMP=0x0000000100078398

@end

