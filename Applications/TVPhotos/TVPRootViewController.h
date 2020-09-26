//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVPSignInLandingViewDelegate-Protocol.h"

@class NSString, TVPErrorView, TVPPhotoLibraryOptInOfferViewController, TVPSignInLandingView, TVSiCloudAccountManager, UIView;

@interface TVPRootViewController : UIViewController <TVPSignInLandingViewDelegate>
{
    _Bool _didPerformLoginAction;	// 8 = 0x8
    _Bool _isAuthenticationInProgress;	// 9 = 0x9
    TVSiCloudAccountManager *_accountManager;	// 16 = 0x10
    TVPSignInLandingView *_landingView;	// 24 = 0x18
    TVPSignInLandingView *_iCloudPromptView;	// 32 = 0x20
    TVPErrorView *_errorView;	// 40 = 0x28
    UIView *_loadingView;	// 48 = 0x30
    TVPPhotoLibraryOptInOfferViewController *_photoLibraryOptInOfferViewController;	// 56 = 0x38
}

+ (id)photoLibraryTabController;	// IMP=0x0000000100015414
- (void).cxx_destruct;	// IMP=0x0000000100018120
@property(retain) TVPPhotoLibraryOptInOfferViewController *photoLibraryOptInOfferViewController; // @synthesize photoLibraryOptInOfferViewController=_photoLibraryOptInOfferViewController;
@property(nonatomic) _Bool isAuthenticationInProgress; // @synthesize isAuthenticationInProgress=_isAuthenticationInProgress;
@property(nonatomic) _Bool didPerformLoginAction; // @synthesize didPerformLoginAction=_didPerformLoginAction;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TVPErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) TVPSignInLandingView *iCloudPromptView; // @synthesize iCloudPromptView=_iCloudPromptView;
@property(retain, nonatomic) TVPSignInLandingView *landingView; // @synthesize landingView=_landingView;
@property(retain, nonatomic) TVSiCloudAccountManager *accountManager; // @synthesize accountManager=_accountManager;
- (void)_enableAuthenticatedSettingWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100017a60
- (void)_enableICloudPhotoSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100017274
- (void)_launchAppViewPostAuthenticationWithController:(id)arg1;	// IMP=0x0000000100017054
- (void)_resetFlags;	// IMP=0x0000000100017038
- (void)_checkPhotoSettingsAndUpdateUI;	// IMP=0x0000000100016d00
- (_Bool)_shouldDisplayICloudPhotoLibraryOptInOfferView;	// IMP=0x0000000100016c18
- (void)_displayICloudPhotoLibraryOptInOfferView;	// IMP=0x0000000100016770
- (void)_displayiCloudPromptView;	// IMP=0x0000000100016484
- (void)_displayNoNetworkAlert;	// IMP=0x0000000100016284
- (void)_displaySignInLandingView;	// IMP=0x0000000100016038
- (void)_displayActivityIndicatorView;	// IMP=0x0000000100015f24
- (_Bool)isiCloudPhotoLibraryEnabled;	// IMP=0x0000000100015e70
- (_Bool)isSharedPhotoStreamSettingEnabled;	// IMP=0x0000000100015de4
- (_Bool)isMyPhotoStreamSettingEnabled;	// IMP=0x0000000100015d58
- (_Bool)_isEnrolledDemoDevice;	// IMP=0x0000000100015d04
- (_Bool)_isInDemoMode;	// IMP=0x0000000100015cf0
- (_Bool)_isUserLoggedIn;	// IMP=0x0000000100015c74
- (void)_removeAllViews;	// IMP=0x0000000100015b34
- (void)authenticateUserOnSelectSignIn;	// IMP=0x0000000100015774
- (void)viewDidLoad;	// IMP=0x00000001000156cc
- (void)updateAuthenticationStatus;	// IMP=0x000000010001538c
- (id)init;	// IMP=0x0000000100015320

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

