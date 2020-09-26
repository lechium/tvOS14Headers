//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "MCProfileConnectionObserver-Protocol.h"
#import "PBLanguageChangeObserverDelegate-Protocol.h"
#import "PBMediaRemoteObserverDelegate-Protocol.h"
#import "PBPowerManagerObserver-Protocol.h"
#import "PBSceneManagerObserver-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "_UIApplicationInitializationContextFactory-Protocol.h"

@class NSString, PBAppInfoController, PBConstantAudioOutputController, PBLanguageChangeObserver, PBSafeAreaWindow, PBSerialNumberWindow, PBUserNotificationHandler, TVSBackgroundTask, UIWindow;

@interface PBAppDelegate : UIResponder <PBMediaRemoteObserverDelegate, PBLanguageChangeObserverDelegate, MCProfileConnectionObserver, _UIApplicationInitializationContextFactory, PBSceneManagerObserver, PBPowerManagerObserver, UIApplicationDelegate>
{
    PBUserNotificationHandler *_userNotificationHandler;	// 8 = 0x8
    PBSafeAreaWindow *_safeAreaWindow;	// 16 = 0x10
    PBSerialNumberWindow *_serialNumberWindow;	// 24 = 0x18
    _Bool _tooHot;	// 32 = 0x20
    double _homeLongPressStartTime;	// 40 = 0x28
    _Bool _appLaunchDisabled;	// 48 = 0x30
    _Bool _awaitingSiriOptInOfferResponse;	// 49 = 0x31
    _Bool __kioskRelaunchDisabled;	// 50 = 0x32
    TVSBackgroundTask *_programmingGuideBackgroundTask;	// 56 = 0x38
    id _buddyPrefsObservingToken;	// 64 = 0x40
    PBLanguageChangeObserver *_languageChangeObserver;	// 72 = 0x48
    PBAppInfoController *_appInfoController;	// 80 = 0x50
    PBConstantAudioOutputController *_constantAudioOutputController;	// 88 = 0x58
    NSString *_initialLaunchApplicationBundleID;	// 96 = 0x60
}

+ (id)_newApplicationInitializationContext;	// IMP=0x00000001001ec190
+ (id)_defaultSceneIdentity;	// IMP=0x00000001001ec0d4
+ (id)sharedApplicationDelegate;	// IMP=0x00000001001ec05c
- (void).cxx_destruct;	// IMP=0x0000000100200e84
@property(readonly, nonatomic) NSString *initialLaunchApplicationBundleID; // @synthesize initialLaunchApplicationBundleID=_initialLaunchApplicationBundleID;
@property(retain, nonatomic) PBConstantAudioOutputController *constantAudioOutputController; // @synthesize constantAudioOutputController=_constantAudioOutputController;
@property(readonly, nonatomic) PBAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(nonatomic) _Bool _kioskRelaunchDisabled; // @synthesize _kioskRelaunchDisabled=__kioskRelaunchDisabled;
@property(nonatomic) _Bool awaitingSiriOptInOfferResponse; // @synthesize awaitingSiriOptInOfferResponse=_awaitingSiriOptInOfferResponse;
@property(retain, nonatomic) PBLanguageChangeObserver *languageChangeObserver; // @synthesize languageChangeObserver=_languageChangeObserver;
@property(retain, nonatomic) id buddyPrefsObservingToken; // @synthesize buddyPrefsObservingToken=_buddyPrefsObservingToken;
@property(retain, nonatomic) TVSBackgroundTask *programmingGuideBackgroundTask; // @synthesize programmingGuideBackgroundTask=_programmingGuideBackgroundTask;
@property(nonatomic) _Bool appLaunchDisabled; // @synthesize appLaunchDisabled=_appLaunchDisabled;
- (_Bool)_applicationForPIDIsPlaying:(int)arg1;	// IMP=0x0000000100200a44
- (_Bool)_requestSleepForReason:(id)arg1;	// IMP=0x000000010020083c
- (_Bool)_requestWakeForReason:(id)arg1;	// IMP=0x0000000100200634
- (void)stopSiriWithContext:(id)arg1;	// IMP=0x00000001002003a8
- (void)startSiriWithContext:(id)arg1;	// IMP=0x00000001001ffeec
- (void)activateSiriWithContext:(id)arg1;	// IMP=0x00000001001ffa7c
- (void)_setLateNightModeEnabled:(_Bool)arg1;	// IMP=0x00000001001ff970
- (void)_handleDisableLateNightModeNotification:(id)arg1;	// IMP=0x00000001001ff904
- (void)_handleEnableLateNightModeNotification:(id)arg1;	// IMP=0x00000001001ff898
- (void)_performObliterationIfNeeded;	// IMP=0x00000001001ff00c
- (_Bool)_wakeDeviceForSiriInteractionWithContext:(id)arg1;	// IMP=0x00000001001fee44
- (void)powerManager:(id)arg1 willWakeSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001feda8
- (void)powerManager:(id)arg1 willSleepSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001fecc8
- (void)_updateEventMaskingWindow;	// IMP=0x00000001001febd4
- (_Bool)_keyboardFocusedInApp:(id)arg1;	// IMP=0x00000001001fea18
- (_Bool)_shouldShowSiri;	// IMP=0x00000001001fe370
- (void)_setupWebinspector;	// IMP=0x00000001001fe300
- (void)_startObservingPurpleBuddyPrefs;	// IMP=0x00000001001fe1e0
- (void)_resumeActivity;	// IMP=0x00000001001fe088
- (void)_stopAllActivity;	// IMP=0x00000001001fdcd0
- (void)_pausePlayback;	// IMP=0x00000001001fdc98
- (void)_handleThermalNotification;	// IMP=0x00000001001fd6fc
- (void)_registerForThermalNotifications;	// IMP=0x00000001001fd544
- (void)triggerThermalNotification;	// IMP=0x00000001001fd510
- (void)_presentSiriOptInDialogWithViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001fd204
- (_Bool)_shouldOfferEnableDataSharing;	// IMP=0x00000001001fd16c
- (_Bool)_suggestUserEnableDataSharing;	// IMP=0x00000001001fcca0
- (_Bool)_suggestUserEnableDictation;	// IMP=0x00000001001fc728
- (_Bool)_suggestUserEnableAssistantAndDictation;	// IMP=0x00000001001fc334
- (void)_launchAppSwitcher;	// IMP=0x00000001001fbde0
- (void)_launchTVSettingsWithOpenURL:(id)arg1;	// IMP=0x00000001001fbc9c
- (_Bool)_launchConferenceRoomDisplayAppWithReason:(unsigned long long)arg1;	// IMP=0x00000001001fbba4
- (_Bool)_isPurpleBuddyActiveScene;	// IMP=0x00000001001fbadc
- (void)_handlePurpleBuddyExit;	// IMP=0x00000001001fb984
- (void)_launchPurpleBuddyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001fb564
- (void)_launchPurpleBuddy;	// IMP=0x00000001001fb528
- (_Bool)_launchTVWatchList;	// IMP=0x00000001001fafe0
- (_Bool)_launchTVSearch;	// IMP=0x00000001001fadf4
- (void)_startSteadyStateServices;	// IMP=0x00000001001fabec
- (void)presentNowPlayingWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001faabc
- (void)presentSystemRoutingUIWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001fa904
- (void)launchPostSetupApp;	// IMP=0x00000001001fa214
- (void)launchPostWakeDefaultApp;	// IMP=0x00000001001fa1a8
- (void)_handleKioskAppLaunchFailure;	// IMP=0x00000001001fa124
- (void)openKioskApplicationWithReason:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001f97cc
- (void)enableKioskRelaunchForPPT;	// IMP=0x00000001001f979c
- (void)disableKioskRelaunchForPPT;	// IMP=0x00000001001f976c
- (void)_sendActionOrShowUnconfiguredAlertForAction:(long long)arg1;	// IMP=0x00000001001f9104
- (void)_createInitialAppScene;	// IMP=0x00000001001f8ac4
- (void)_startBulletinBoardServer;	// IMP=0x00000001001f8a44
- (void)_handleStoreAccountChangedNotification;	// IMP=0x00000001001f8924
- (void)_resetProgrammingGuideRefreshTaskWithTimeIntervalInSeconds:(double)arg1;	// IMP=0x00000001001f879c
- (void)_updateProgrammingGuide;	// IMP=0x00000001001f8540
- (void)_updateWhatsNewCheckTimeInterval;	// IMP=0x00000001001f8354
- (void)_startStoreURLBagMonitoring;	// IMP=0x00000001001f8160
- (void)_startSoftwareUpdateService;	// IMP=0x00000001001f8100
- (void)_handleStoreURLBagDidLoadNotification;	// IMP=0x00000001001f7ff8
- (void)observer:(id)arg1 didObserveLanguageChange:(_Bool)arg2 localeChange:(_Bool)arg3 source:(long long)arg4;	// IMP=0x00000001001f771c
- (void)_setupLanguageChangeObserving;	// IMP=0x00000001001f7624
- (void)mediaRemoteObserverNowPlayingInfoDidChange:(id)arg1 nowPlayingInfo:(id)arg2;	// IMP=0x00000001001f74f8
- (void)mediaRemoteObserverNowPlayingAppDidChange:(id)arg1;	// IMP=0x00000001001f7314
- (void)mediaRemoteObserverIsPlayingDidChange:(id)arg1;	// IMP=0x00000001001f7028
- (_Bool)mediaRemoteObserverShouldShowTrackChangeBulletin:(id)arg1;	// IMP=0x00000001001f6d0c
- (void)mediaRemoteObserverRemotePlaybackStateDidChange:(id)arg1;	// IMP=0x00000001001f6bc8
- (_Bool)_wouldExpectPlayPauseButtonUpShouldPause;	// IMP=0x00000001001f6b50
- (_Bool)_wouldExpectPlayPauseButtonDownShouldPause;	// IMP=0x00000001001f6ae0
- (_Bool)_wouldExpectPlayPauseButtonShouldPause:(_Bool *)arg1;	// IMP=0x00000001001f6798
- (void)handleDirectionalTapEvent:(id)arg1;	// IMP=0x00000001001f6588
- (void)handleExposeAllTapEvent;	// IMP=0x00000001001f6494
- (void)handleTVLongPressEvent:(id)arg1;	// IMP=0x00000001001f5f98
- (void)handleTVTripleTapEvent;	// IMP=0x00000001001f5de8
- (void)handleTVDoubleTapEvent;	// IMP=0x00000001001f56e8
- (void)handleTVTapEventAsThirdTapEventInAppSwitcher;	// IMP=0x00000001001f54c4
- (void)_handleTVTapEventWithHIDRef:(struct __IOHIDEvent *)arg1;	// IMP=0x00000001001f4618
- (void)handleTVTapEvent:(id)arg1;	// IMP=0x00000001001f4588
- (void)handlePowerOffTapEvent;	// IMP=0x00000001001f4488
- (void)handlePowerOnTapEvent;	// IMP=0x00000001001f4388
- (void)handlePowerToggleTapEvent;	// IMP=0x00000001001f41bc
- (void)handleVolumeDownLongPressEvent:(id)arg1;	// IMP=0x00000001001f3f1c
- (void)handleVolumeUpLongPressEvent:(id)arg1;	// IMP=0x00000001001f3c7c
- (void)handleFastForwardLongPressEvent:(id)arg1;	// IMP=0x00000001001f3b08
- (void)handleRewindLongPressEvent:(id)arg1;	// IMP=0x00000001001f3994
- (void)handleSkipBackwardsRepeatingPressEvent:(id)arg1;	// IMP=0x00000001001f3860
- (void)handleSkipForwardsRepeatingPressEvent:(id)arg1;	// IMP=0x00000001001f372c
- (void)_handleSkipGestureRecognizer:(id)arg1 withCommand:(unsigned int)arg2 interval:(double)arg3;	// IMP=0x00000001001f35f0
- (void)handlePreviousTrackTapEvent;	// IMP=0x00000001001f34f8
- (void)handleNextTrackTapEvent;	// IMP=0x00000001001f3400
- (void)handleFastForwardTapEvent;	// IMP=0x00000001001f32bc
- (void)handleRewindTapEvent;	// IMP=0x00000001001f3178
- (void)_changePlaybackRateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001f2ff4
- (void)handleStopTapEvent;	// IMP=0x00000001001f2efc
- (void)handlePauseTapEvent;	// IMP=0x00000001001f2e04
- (void)handlePlayTapEvent;	// IMP=0x00000001001f2d08
- (void)handlePlayPauseTapEvent;	// IMP=0x00000001001f2be8
- (_Bool)shouldTogglePlayPauseOnButtonUp;	// IMP=0x00000001001f2ab8
- (_Bool)shouldTogglePlayPauseOnButtonDown;	// IMP=0x00000001001f2988
- (void)_sendMediaRemoteCommand:(unsigned int)arg1;	// IMP=0x00000001001f2944
- (void)_sendMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2;	// IMP=0x00000001001f2594
- (_Bool)_shouldSendMediaRemoteCommand:(unsigned int)arg1;	// IMP=0x00000001001f2070
- (void)handleMicrophoneButtonDownEvent:(id)arg1;	// IMP=0x00000001001f1e38
- (void)handleMicrophoneLongPressEvent:(id)arg1;	// IMP=0x00000001001f1b40
- (void)handleMicrophoneTapEvent:(id)arg1;	// IMP=0x00000001001f1938
- (_Bool)handleUnhandledMenuEvent;	// IMP=0x00000001001f1410
- (void)_updateTripleTapMenu;	// IMP=0x00000001001f1294
- (void)handleQuadrupleMenuTapEvent;	// IMP=0x00000001001f1174
- (void)_handleMenuOrACHomeLongPressEventWithYesForMenuNoForACHome:(_Bool)arg1 recognizer:(id)arg2;	// IMP=0x00000001001f0dc0
- (_Bool)_cleanUpUIStackAndLaunchKioskAppWithReason:(id)arg1;	// IMP=0x00000001001f0710
- (void)handleACHomeLongPressEvent:(id)arg1;	// IMP=0x00000001001f05c8
- (void)handleMenuLongPressEvent:(id)arg1;	// IMP=0x00000001001f0480
- (void)handleACHomeSingleTapEvent:(id)arg1;	// IMP=0x00000001001f02b4
- (void)handleMenuSingleTapEvent:(id)arg1;	// IMP=0x00000001001f00ec
- (_Bool)_handleMenuOrACHomeSingleTapEventWithYesForMenuNoForACHome:(_Bool)arg1 recognizer:(id)arg2;	// IMP=0x00000001001ef4e0
- (void)handleACHomeDoubleTapEvent:(id)arg1;	// IMP=0x00000001001ef2f8
- (void)handleMenuDoubleTapEvent;	// IMP=0x00000001001ef218
- (void)handleMenuTripleTapEvent;	// IMP=0x00000001001eef80
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000001001eeeb0
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x00000001001eebd0
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001ee938
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000001001ec818
- (void)tvs_bindAccessibilityMenuOptionsBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x00000001001ec688
- (id)AccessibilityMenuOptionsBinding;	// IMP=0x00000001001ec5cc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001001ec4bc
- (void)dealloc;	// IMP=0x00000001001ec428

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

