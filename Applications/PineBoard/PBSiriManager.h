//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"
#import "PBOpenAppTransitionerObserver-Protocol.h"
#import "PBPowerManagerObserver-Protocol.h"
#import "PBScreenSaverManagerObserver-Protocol.h"
#import "PBSiriScreenActionManagerDelegate-Protocol.h"
#import "PBSystemOverlayControllerDelegate-Protocol.h"
#import "PBSystemOverlayUIProvider-Protocol.h"
#import "PBSystemUIManaging-Protocol.h"
#import "SiriPresentationPineBoardMainScreenViewControllerDelegate-Protocol.h"

@class NSHashTable, NSString, PBSceneDeferralTargetAssertion, PBSiriContentPresentingViewController, PBSiriScreenActionContextProvider, PBSystemOverlayController, SiriPresentationPineBoardMainScreenViewController, SiriTVActivationSource, SiriTestingSource, UIApplicationSceneDeactivationAssertion;
@protocol SiriAssertion;

@interface PBSiriManager : NSObject <PBOpenAppTransitionerObserver, PBPowerManagerObserver, PBSiriScreenActionManagerDelegate, PBScreenSaverManagerObserver, PBSystemOverlayControllerDelegate, PBSystemOverlayUIProvider, SiriPresentationPineBoardMainScreenViewControllerDelegate, PBInstanceDependable, PBSystemUIManaging>
{
    _Bool _presenting;	// 8 = 0x8
    _Bool _siriEnabled;	// 9 = 0x9
    _Bool _shouldPreferDictation;	// 10 = 0xa
    long long _visibleState;	// 16 = 0x10
    SiriPresentationPineBoardMainScreenViewController *_mainScreenSiriPresentation;	// 24 = 0x18
    PBSiriScreenActionContextProvider *_onScreenActionContextProvider;	// 32 = 0x20
    PBSystemOverlayController *_overlayController;	// 40 = 0x28
    PBSiriContentPresentingViewController *_siriContainerViewController;	// 48 = 0x30
    NSString *_unhideBundleIdentifier;	// 56 = 0x38
    UIApplicationSceneDeactivationAssertion *_fullscreenSiriSceneDeactivationAssertion;	// 64 = 0x40
    SiriTVActivationSource *_siriActivationSource;	// 72 = 0x48
    id <SiriAssertion> _siriPreheatAssertion;	// 80 = 0x50
    id <SiriAssertion> _siriButtonDownAssertion;	// 88 = 0x58
    id <SiriAssertion> _siriActivationAssertion;	// 96 = 0x60
    SiriTestingSource *_testingSource;	// 104 = 0x68
    PBSceneDeferralTargetAssertion *_deferralTargetAssertion;	// 112 = 0x70
    NSHashTable *_observers;	// 120 = 0x78
}

+ (_Bool)_isSiriEnabled;	// IMP=0x000000010022e9e8
+ (id)sharedInstance;	// IMP=0x000000010022952c
+ (id)dependencyDescription;	// IMP=0x00000001002292ec
- (void).cxx_destruct;	// IMP=0x00000001002305a4
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) PBSceneDeferralTargetAssertion *deferralTargetAssertion; // @synthesize deferralTargetAssertion=_deferralTargetAssertion;
@property(retain, nonatomic) SiriTestingSource *testingSource; // @synthesize testingSource=_testingSource;
@property(retain, nonatomic) id <SiriAssertion> siriActivationAssertion; // @synthesize siriActivationAssertion=_siriActivationAssertion;
@property(retain, nonatomic) id <SiriAssertion> siriButtonDownAssertion; // @synthesize siriButtonDownAssertion=_siriButtonDownAssertion;
@property(retain, nonatomic) id <SiriAssertion> siriPreheatAssertion; // @synthesize siriPreheatAssertion=_siriPreheatAssertion;
@property(retain, nonatomic) SiriTVActivationSource *siriActivationSource; // @synthesize siriActivationSource=_siriActivationSource;
@property(retain, nonatomic) UIApplicationSceneDeactivationAssertion *fullscreenSiriSceneDeactivationAssertion; // @synthesize fullscreenSiriSceneDeactivationAssertion=_fullscreenSiriSceneDeactivationAssertion;
@property(retain, nonatomic) NSString *unhideBundleIdentifier; // @synthesize unhideBundleIdentifier=_unhideBundleIdentifier;
@property(readonly, nonatomic) PBSiriContentPresentingViewController *siriContainerViewController; // @synthesize siriContainerViewController=_siriContainerViewController;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(nonatomic) _Bool shouldPreferDictation; // @synthesize shouldPreferDictation=_shouldPreferDictation;
@property(retain, nonatomic) PBSiriScreenActionContextProvider *onScreenActionContextProvider; // @synthesize onScreenActionContextProvider=_onScreenActionContextProvider;
@property(retain, nonatomic) SiriPresentationPineBoardMainScreenViewController *mainScreenSiriPresentation; // @synthesize mainScreenSiriPresentation=_mainScreenSiriPresentation;
@property(nonatomic, getter=isSiriEnabled) _Bool siriEnabled; // @synthesize siriEnabled=_siriEnabled;
@property(nonatomic) long long visibleState; // @synthesize visibleState=_visibleState;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)_notifyObserversSiriWindowDidUnhide;	// IMP=0x000000010023002c
- (void)_notifyObserversSiriWindowDidHide;	// IMP=0x000000010022fe90
- (void)_notifyObserversVisibleStateDidChange:(long long)arg1;	// IMP=0x000000010022fcec
- (void)removeObserver:(id)arg1;	// IMP=0x000000010022fc84
- (void)addObserver:(id)arg1;	// IMP=0x000000010022fc1c
- (void)_launchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 launchOverSiri:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010022f248
- (void)_stopProvidingScreenActionContext;	// IMP=0x000000010022f188
- (void)_startProvidingScreenActionContext;	// IMP=0x000000010022ef14
- (void)_updateShouldPreferDictation;	// IMP=0x000000010022ec24
- (void)appTransitioner:(id)arg1 willStartAnimationForAppTransition:(id)arg2;	// IMP=0x000000010022e848
- (_Bool)siriScreenActionManagerIsSiriContentBeingDisplayed:(id)arg1;	// IMP=0x000000010022e7d4
- (void)powerManagerDidWakeSystem:(id)arg1;	// IMP=0x000000010022e76c
- (void)screenSaverManagerWillDismissScreenSaver:(id)arg1;	// IMP=0x000000010022e708
- (void)screenSaverManagerDidPresentScreenSaver:(id)arg1;	// IMP=0x000000010022e6a4
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010022e44c
- (void)_handleAssistantPreferencesDidChangeNotification:(id)arg1;	// IMP=0x000000010022e3b4
- (void)siriPresentationDidDeactivateScene:(id)arg1;	// IMP=0x000000010022e210
- (void)siriPresentation:(id)arg1 sceneDidActivateWithIdentifier:(id)arg2;	// IMP=0x000000010022dfa8
- (void)siriPresentation:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;	// IMP=0x000000010022ddf4
- (void)siriPresentation:(id)arg1 requestsPunchout:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010022d7dc
- (void)siriPresentation:(id)arg1 isEnabledDidChange:(_Bool)arg2;	// IMP=0x000000010022d6c8
- (void)siriPresentation:(id)arg1 requestsDismissalWithOptions:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010022d0b4
- (void)siriPresentation:(id)arg1 requestsPresentationWithOptions:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010022cd1c
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010022cc6c
- (_Bool)showAssistantIfNecessaryAfterApplication:(id)arg1;	// IMP=0x000000010022cba4
- (void)hideAssistantViewForApplication:(id)arg1;	// IMP=0x000000010022cb30
- (_Bool)_dismissAssistantViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010022c6e0
- (_Bool)dismissAssistant;	// IMP=0x000000010022c5fc
- (void)_unhideSiriWindow;	// IMP=0x000000010022c4d4
- (void)_hideSiriWindow;	// IMP=0x000000010022c27c
- (void)_presentAssistantViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010022c058
- (void)setNextAssistantRecognitionStrings:(id)arg1;	// IMP=0x000000010022bfec
- (void)setNextVoiceRecognitionAudioInputPaths:(id)arg1;	// IMP=0x000000010022bf80
@property(readonly, nonatomic, getter=isListening) _Bool listening;
- (_Bool)stopSiriWithContext:(id)arg1;	// IMP=0x000000010022b5e8
- (_Bool)startSiriWithContext:(id)arg1;	// IMP=0x000000010022ae54
- (void)_cancelSiriActivation;	// IMP=0x000000010022ad7c
- (void)_stopSiriActivation;	// IMP=0x000000010022ac90
- (void)_cancelPreheating;	// IMP=0x000000010022abb8
- (_Bool)prepareSiriWithContext:(id)arg1;	// IMP=0x000000010022a854
- (_Bool)activateSiriWithContext:(id)arg1;	// IMP=0x000000010022a2f8
- (void)preheatIfNecessary;	// IMP=0x000000010022a038
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
- (void)setup;	// IMP=0x0000000100229c2c
- (void)dealloc;	// IMP=0x0000000100229b24
- (id)_init;	// IMP=0x0000000100229694
- (id)init;	// IMP=0x000000010022963c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
