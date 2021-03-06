//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTTVGenericSettingsViewController.h"

#import "MTPodcastInfoViewDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class MTDefaultsChangeNotifier, MTOptionSetting, MTRadioGroupDescription, MTSetting, MTSettingsGroup, NSString;
@protocol MTShowSettingsViewControllerDelegate;

@interface MTShowSettingsViewController : MTTVGenericSettingsViewController <MTPodcastInfoViewDelegate, UIPopoverPresentationControllerDelegate>
{
    _Bool _descriptionViewIsExpanded;	// 8 = 0x8
    id <MTShowSettingsViewControllerDelegate> _delegate;	// 16 = 0x10
    NSString *_uuid;	// 24 = 0x18
    MTSettingsGroup *_showSettingsGroup;	// 32 = 0x20
    MTSetting *_subscribedSetting;	// 40 = 0x28
    MTSettingsGroup *_presetSettingsGroup;	// 48 = 0x30
    MTOptionSetting *_showTypeSetting;	// 56 = 0x38
    MTRadioGroupDescription *_showTypeRadioGroup;	// 64 = 0x40
    MTSettingsGroup *_customSettingsGroup;	// 72 = 0x48
    MTSetting *_episodeOrderSetting;	// 80 = 0x50
    MTOptionSetting *_deletePlayedEpisodesSetting;	// 88 = 0x58
    MTOptionSetting *_episodesToKeepSetting;	// 96 = 0x60
    MTOptionSetting *_refreshIntervalSetting;	// 104 = 0x68
    MTSettingsGroup *_timelySettingsGroup;	// 112 = 0x70
    MTRadioGroupDescription *_episodeLimitRadioGroup;	// 120 = 0x78
    MTDefaultsChangeNotifier *_defaultsNotifier;	// 128 = 0x80
}

+ (void)promptToTurnOnRemovePlayedEpisodesForPodcast:(id)arg1 presentingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000cc2e4
- (void).cxx_destruct;	// IMP=0x00000001000ce380
@property(retain, nonatomic) MTDefaultsChangeNotifier *defaultsNotifier; // @synthesize defaultsNotifier=_defaultsNotifier;
@property(retain, nonatomic) MTRadioGroupDescription *episodeLimitRadioGroup; // @synthesize episodeLimitRadioGroup=_episodeLimitRadioGroup;
@property(retain, nonatomic) MTSettingsGroup *timelySettingsGroup; // @synthesize timelySettingsGroup=_timelySettingsGroup;
@property(retain, nonatomic) MTOptionSetting *refreshIntervalSetting; // @synthesize refreshIntervalSetting=_refreshIntervalSetting;
@property(retain, nonatomic) MTOptionSetting *episodesToKeepSetting; // @synthesize episodesToKeepSetting=_episodesToKeepSetting;
@property(retain, nonatomic) MTOptionSetting *deletePlayedEpisodesSetting; // @synthesize deletePlayedEpisodesSetting=_deletePlayedEpisodesSetting;
@property(retain, nonatomic) MTSetting *episodeOrderSetting; // @synthesize episodeOrderSetting=_episodeOrderSetting;
@property(retain, nonatomic) MTSettingsGroup *customSettingsGroup; // @synthesize customSettingsGroup=_customSettingsGroup;
@property(retain, nonatomic) MTRadioGroupDescription *showTypeRadioGroup; // @synthesize showTypeRadioGroup=_showTypeRadioGroup;
@property(retain, nonatomic) MTOptionSetting *showTypeSetting; // @synthesize showTypeSetting=_showTypeSetting;
@property(retain, nonatomic) MTSettingsGroup *presetSettingsGroup; // @synthesize presetSettingsGroup=_presetSettingsGroup;
@property(retain, nonatomic) MTSetting *subscribedSetting; // @synthesize subscribedSetting=_subscribedSetting;
@property(retain, nonatomic) MTSettingsGroup *showSettingsGroup; // @synthesize showSettingsGroup=_showSettingsGroup;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) _Bool descriptionViewIsExpanded; // @synthesize descriptionViewIsExpanded=_descriptionViewIsExpanded;
@property(nonatomic) __weak id <MTShowSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)syncControllerOperationCompleted:(id)arg1;	// IMP=0x00000001000ce0e0
- (_Bool)_hideGroupName:(id)arg1;	// IMP=0x00000001000cdf20
- (_Bool)_showGroup:(id)arg1 name:(id)arg2;	// IMP=0x00000001000cdd34
- (_Bool)_isShowingGroup:(id)arg1;	// IMP=0x00000001000cdc20
- (_Bool)isShowingTimelySettings;	// IMP=0x00000001000cdc0c
- (_Bool)hideTimleySettings;	// IMP=0x00000001000cdbf8
- (_Bool)showTimleySettings;	// IMP=0x00000001000cdb98
- (_Bool)isShowingCustomSettings;	// IMP=0x00000001000cdb84
- (_Bool)hideCustomSettings;	// IMP=0x00000001000cdb70
- (_Bool)showCustomSettings;	// IMP=0x00000001000cdb10
- (_Bool)updateTimleySettingsVisibility;	// IMP=0x00000001000cda9c
- (_Bool)updateCustomSettingsVisibility;	// IMP=0x00000001000cda28
- (void)addPodcastInfoViewHeader;	// IMP=0x00000001000cda24
- (void)podcastInfoViewWasTapped:(id)arg1;	// IMP=0x00000001000cda14
- (void)podcastInfoViewDidExpand:(id)arg1;	// IMP=0x00000001000cd988
- (id)metricDataSource;	// IMP=0x00000001000cd8d4
- (id)metricsName;	// IMP=0x00000001000cd8c8
- (void)updateShowPresetSetting:(unsigned long long)arg1;	// IMP=0x00000001000cd65c
- (void)updateIntervalSettingChanged:(unsigned long long)arg1;	// IMP=0x00000001000cd508
- (void)updateEpisodeOrder:(_Bool)arg1;	// IMP=0x00000001000cd368
- (void)updateNotifications:(_Bool)arg1;	// IMP=0x00000001000cd1cc
- (void)updateNotificationSettingsToMatchSubscription:(_Bool)arg1;	// IMP=0x00000001000cd1c8
- (void)updateSubscription:(_Bool)arg1;	// IMP=0x00000001000cce8c
- (void)updateDeletePlayedEpisodes:(long long)arg1;	// IMP=0x00000001000ccce4
- (void)updateEpisodeLimit:(long long)arg1;	// IMP=0x00000001000cc148
- (id)updateIntervalOptionValues;	// IMP=0x00000001000cc12c
- (id)updateIntervalOptionArray:(_Bool)arg1 defaultValue:(long long)arg2;	// IMP=0x00000001000cbf64
- (id)stringForUpdateInterval:(long long)arg1 short:(_Bool)arg2 defaultValue:(long long)arg3;	// IMP=0x00000001000cbcc8
- (id)optionsForDownloadEpisodes;	// IMP=0x00000001000cb804
- (id)deletePlayedText:(long long)arg1;	// IMP=0x00000001000cb75c
- (id)optionsForDeletePlayedEpisodes;	// IMP=0x00000001000cb3b0
- (id)optionsForLimitSetting;	// IMP=0x00000001000caec8
- (id)optionsForRefreshInterval;	// IMP=0x00000001000cadcc
- (id)headerForOnThisDevice;	// IMP=0x00000001000cad5c
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000001000cad50
- (id)footerTextForDefaultGloablSettings;	// IMP=0x00000001000cabd4
- (id)footerTextForShowType:(long long)arg1;	// IMP=0x00000001000caa84
- (void)refreshSettings;	// IMP=0x00000001000c9f00
- (id)settingsForCustomGroup;	// IMP=0x00000001000c9dd8
- (id)settingsForEpisodesGroup;	// IMP=0x00000001000c9d3c
- (id)settingsForShowGroup;	// IMP=0x00000001000c9ca0
- (void)setupView;	// IMP=0x00000001000c82c4
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000001000c81a0
- (void)viewDidLoad;	// IMP=0x00000001000c8150
- (void)dealloc;	// IMP=0x00000001000c80d0
- (id)initWithPodcastUuid:(id)arg1 delegate:(id)arg2;	// IMP=0x00000001000c8024
- (id)initWithPodcastUuid:(id)arg1;	// IMP=0x00000001000c8014
- (id)init;	// IMP=0x00000001000c7fd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

