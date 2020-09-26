//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBSUserProfileManagerObserver-Protocol.h"
#import "TVSAccountStoreObserverDelegate-Protocol.h"

@class ACAccount, ACAccountStore, BKSProcessAssertion, CDPTVUIController, NSString, PBSIgnoreUserProfileAccountNotificationsAssertion, PBSUserProfileManager, TVSAccountStoreObserver, TVSettingsUser, UMUserPersonaContext;

@interface TVSettingsUserProfileFacade : NSObject <PBSUserProfileManagerObserver, TVSAccountStoreObserverDelegate>
{
    _Bool _isRemovingUser;	// 8 = 0x8
    _Bool _userHasBeenRemoved;	// 9 = 0x9
    _Bool _iCloudPhotoLibraryEnabled;	// 10 = 0xa
    _Bool _iCloudSharedPhotosEnabled;	// 11 = 0xb
    _Bool _iCloudPhotoStreamEnabled;	// 12 = 0xc
    _Bool _iCloudPhotoStreamAvailable;	// 13 = 0xd
    _Bool _isSigningInOrOutInProgress;	// 14 = 0xe
    _Bool _needsAuthenticationToChangeiCloudPhotoOptions;	// 15 = 0xf
    TVSettingsUser *_user;	// 16 = 0x10
    PBSUserProfileManager *_profileManager;	// 24 = 0x18
    UMUserPersonaContext *_initialPersonaContext;	// 32 = 0x20
    CDPTVUIController *_cdpUIProvider;	// 40 = 0x28
    ACAccountStore *_accountStore;	// 48 = 0x30
    ACAccount *_iCloudAccount;	// 56 = 0x38
    PBSIgnoreUserProfileAccountNotificationsAssertion *_ignoreNotificationsAssertion;	// 64 = 0x40
    BKSProcessAssertion *_processAssertion;	// 72 = 0x48
    TVSAccountStoreObserver *_accountStoreObserver;	// 80 = 0x50
}

+ (id)keyPathsForValuesAffectingIsSigningInOrOutInProgress;	// IMP=0x00000001000cb754
- (void).cxx_destruct;	// IMP=0x00000001000cfc7c
@property(retain, nonatomic) TVSAccountStoreObserver *accountStoreObserver; // @synthesize accountStoreObserver=_accountStoreObserver;
@property(nonatomic) _Bool needsAuthenticationToChangeiCloudPhotoOptions; // @synthesize needsAuthenticationToChangeiCloudPhotoOptions=_needsAuthenticationToChangeiCloudPhotoOptions;
@property(retain, nonatomic) BKSProcessAssertion *processAssertion; // @synthesize processAssertion=_processAssertion;
@property(retain, nonatomic) PBSIgnoreUserProfileAccountNotificationsAssertion *ignoreNotificationsAssertion; // @synthesize ignoreNotificationsAssertion=_ignoreNotificationsAssertion;
@property(retain, nonatomic) ACAccount *iCloudAccount; // @synthesize iCloudAccount=_iCloudAccount;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) CDPTVUIController *cdpUIProvider; // @synthesize cdpUIProvider=_cdpUIProvider;
@property(retain, nonatomic) UMUserPersonaContext *initialPersonaContext; // @synthesize initialPersonaContext=_initialPersonaContext;
@property(nonatomic) _Bool isSigningInOrOutInProgress; // @synthesize isSigningInOrOutInProgress=_isSigningInOrOutInProgress;
@property(retain, nonatomic) PBSUserProfileManager *profileManager; // @synthesize profileManager=_profileManager;
@property(readonly, nonatomic) _Bool iCloudPhotoStreamAvailable; // @synthesize iCloudPhotoStreamAvailable=_iCloudPhotoStreamAvailable;
@property(readonly, nonatomic) _Bool iCloudPhotoStreamEnabled; // @synthesize iCloudPhotoStreamEnabled=_iCloudPhotoStreamEnabled;
@property(readonly, nonatomic) _Bool iCloudSharedPhotosEnabled; // @synthesize iCloudSharedPhotosEnabled=_iCloudSharedPhotosEnabled;
@property(readonly, nonatomic) _Bool iCloudPhotoLibraryEnabled; // @synthesize iCloudPhotoLibraryEnabled=_iCloudPhotoLibraryEnabled;
@property(nonatomic) _Bool userHasBeenRemoved; // @synthesize userHasBeenRemoved=_userHasBeenRemoved;
@property(nonatomic) _Bool isRemovingUser; // @synthesize isRemovingUser=_isRemovingUser;
@property(readonly, nonatomic) TVSettingsUser *user; // @synthesize user=_user;
- (void)_acquireIgnoringAccountNotificationsAssertionWithName:(id)arg1;	// IMP=0x00000001000cf9f0
- (void)_presentDialogWithError:(id)arg1 presentingViewController:(id)arg2;	// IMP=0x00000001000cf778
- (void)_cleanUpAfterSigningInOrOut;	// IMP=0x00000001000cf714
- (void)_restorePersona;	// IMP=0x00000001000cf614
- (_Bool)_adoptPersona;	// IMP=0x00000001000cf31c
- (void)_signInGameCenterWithPresentingViewController:(id)arg1;	// IMP=0x00000001000cec14
- (void)_signIniTunesWithPresentingViewController:(id)arg1;	// IMP=0x00000001000ce8c0
- (void)_signIniCloudWithPresentingViewController:(id)arg1;	// IMP=0x00000001000ce418
- (void)_authenticateForServiceType:(long long)arg1 presentingViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000ce074
- (void)_updateProfileWithServiceType:(long long)arg1 toAltDSID:(id)arg2;	// IMP=0x00000001000cdc30
- (void)_updateiCloudPhotoValues;	// IMP=0x00000001000cdaac
- (void)_updateiCloudPhotoSettingWithEnabled:(_Bool)arg1 dataclass:(id)arg2 presentingViewController:(id)arg3;	// IMP=0x00000001000cd498
- (void)accountStoreObserver:(id)arg1 didModifyPrimaryAppleAccount:(id)arg2;	// IMP=0x00000001000cd3b4
- (void)userProfileManagerDidUpdate:(id)arg1;	// IMP=0x00000001000cd26c
- (void)setiCloudPhotoStreamEnabled:(_Bool)arg1 presentingViewController:(id)arg2;	// IMP=0x00000001000cd250
- (void)setiCloudSharedPhotosEnabled:(_Bool)arg1 presentingViewController:(id)arg2;	// IMP=0x00000001000cd234
- (void)setiCloudPhotoLibraryEnabled:(_Bool)arg1 presentingViewController:(id)arg2;	// IMP=0x00000001000cd218
- (void)setAuthenticationNeededToChangeiCloudPhotoOptions;	// IMP=0x00000001000cd20c
@property(readonly, nonatomic) _Bool userSupportsiCloudPhotoOptions;
- (void)removeUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000cc2d4
- (_Bool)canSignOutOfServiceType:(long long)arg1;	// IMP=0x00000001000cc274
- (void)signOutOfServiceType:(long long)arg1;	// IMP=0x00000001000cbb88
- (void)signInServiceType:(long long)arg1 presentingViewController:(id)arg2;	// IMP=0x00000001000cb8ac
@property(readonly, nonatomic) _Bool userHasActiveiTunes;
- (void)dealloc;	// IMP=0x00000001000cb6cc
- (id)initWithUser:(id)arg1;	// IMP=0x00000001000cb4e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

