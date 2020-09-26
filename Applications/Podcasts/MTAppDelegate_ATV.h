//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTAppDelegate_Shared.h"

#import "PBSystemServiceNowPlayingDelegate-Protocol.h"

@class MTTVApplicationController, NSDictionary, NSOperationQueue, NSString, NSURL, TVSUser, TVStoreApplicationSetupHelper;

@interface MTAppDelegate_ATV : MTAppDelegate_Shared <PBSystemServiceNowPlayingDelegate>
{
    NSOperationQueue *_updateQueue;	// 8 = 0x8
    _Bool _hasSetupAfterBecomingActive;	// 16 = 0x10
    NSURL *_urlToOpenWhenApplicationHasFinishedLaunching;	// 24 = 0x18
    TVStoreApplicationSetupHelper *_setupHelper;	// 32 = 0x20
    TVSUser *_currentActiveUser;	// 40 = 0x28
    NSDictionary *_launchOptions;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010004003c
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(retain, nonatomic) TVSUser *currentActiveUser; // @synthesize currentActiveUser=_currentActiveUser;
@property(nonatomic) _Bool hasSetupAfterBecomingActive; // @synthesize hasSetupAfterBecomingActive=_hasSetupAfterBecomingActive;
@property(retain, nonatomic) TVStoreApplicationSetupHelper *setupHelper; // @synthesize setupHelper=_setupHelper;
@property(retain, nonatomic) NSURL *urlToOpenWhenApplicationHasFinishedLaunching; // @synthesize urlToOpenWhenApplicationHasFinishedLaunching=_urlToOpenWhenApplicationHasFinishedLaunching;
- (void)_presetDialogWithError:(long long)arg1 appController:(id)arg2;	// IMP=0x000000010003fe6c
- (void)_loadWithBootURL:(id)arg1 withLaunchOptions:(id)arg2;	// IMP=0x000000010003fc48
- (void)subscriptionSyncCompleted;	// IMP=0x000000010003fbec
- (void)_showUserSwitchSpinnerUserSwitchState:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010003fb10
- (void)_handleAccountsChangedOnMainQueue;	// IMP=0x000000010003f7e4
- (void)didChangeStoreAccount:(id)arg1;	// IMP=0x000000010003f7e0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010003f698
- (id)createWindowWithScene:(id)arg1;	// IMP=0x000000010003f5bc
- (void)willConnectScene;	// IMP=0x000000010003f358
- (id)rootViewController;	// IMP=0x000000010003f304
- (void)setupAfterBecomingActive;	// IMP=0x000000010003f23c
- (id)updateQueue;	// IMP=0x000000010003f194
- (void)systemServicePresentNowPlayingUI;	// IMP=0x000000010003f134
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x000000010003f030
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x000000010003ef28
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010003ed08
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x000000010003ea3c
- (void)dealloc;	// IMP=0x000000010003e994

// Remaining properties
@property(retain, nonatomic) MTTVApplicationController *appController; // @dynamic appController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

