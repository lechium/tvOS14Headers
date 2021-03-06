//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, SATVLoginView, TVSKActivityIndicatorViewController, TVSStateMachine, UISystemInputViewController;

@interface SATVCloudLoginViewController : UIViewController
{
    NSString *_organizationName;	// 8 = 0x8
    NSString *_username;	// 16 = 0x10
    NSString *_password;	// 24 = 0x18
    NSString *_customPrompt;	// 32 = 0x20
    TVSStateMachine *_loginStateMachine;	// 40 = 0x28
    UISystemInputViewController *_systemInputViewController;	// 48 = 0x30
    SATVLoginView *_loginView;	// 56 = 0x38
    TVSKActivityIndicatorViewController *_activityIndicatorViewController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010007f8cc
@property(retain, nonatomic) TVSKActivityIndicatorViewController *activityIndicatorViewController; // @synthesize activityIndicatorViewController=_activityIndicatorViewController;
@property(retain, nonatomic) SATVLoginView *loginView; // @synthesize loginView=_loginView;
@property(retain, nonatomic) UISystemInputViewController *systemInputViewController; // @synthesize systemInputViewController=_systemInputViewController;
@property(retain, nonatomic) TVSStateMachine *loginStateMachine; // @synthesize loginStateMachine=_loginStateMachine;
@property(retain, nonatomic) NSString *customPrompt; // @synthesize customPrompt=_customPrompt;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
- (void)_authenticateWithUsername:(id)arg1 password:(id)arg2;	// IMP=0x000000010007f760
- (void)_crossFadeLoginViewWithChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000010007f584
- (void)_setUsernamePlaceholder;	// IMP=0x000000010007f4a4
- (void)_setPasswordPlaceholder;	// IMP=0x000000010007f3c4
- (void)_showPasswordScreen;	// IMP=0x000000010007efdc
- (void)_showUsernameScreen;	// IMP=0x000000010007ead4
- (void)_reloadForStateChange;	// IMP=0x000000010007e970
- (void)_setTextFieldText:(id)arg1;	// IMP=0x000000010007e8e0
- (void)_clearTextField;	// IMP=0x000000010007e878
- (id)_textFieldText;	// IMP=0x000000010007e7e4
- (void)_hideLoginView;	// IMP=0x000000010007e730
- (void)_hideActivityIndicator;	// IMP=0x000000010007e5ac
- (void)_showActivityIndicator;	// IMP=0x000000010007e498
- (void)_updatePreferredFocusedViewForGridLayoutGuide;	// IMP=0x000000010007e2dc
- (void)_textDidChange;	// IMP=0x000000010007e1d4
- (void)_menuSelected;	// IMP=0x000000010007e18c
- (void)_continueButtonSelected;	// IMP=0x000000010007e144
- (void)_setControlTargets;	// IMP=0x000000010007e0c8
- (void)_setViewsForInitialState;	// IMP=0x000000010007db68
- (void)_registerStateMachineEvents;	// IMP=0x000000010007d6b8
- (void)_setupSystemInputViewController;	// IMP=0x000000010007d504
- (void)_doneButtonPressed:(id)arg1;	// IMP=0x000000010007d454
- (_Bool)_enableAutomaticKeyboardPressDone;	// IMP=0x000000010007d44c
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x000000010007d444
- (id)preferredFocusEnvironments;	// IMP=0x000000010007d3d0
- (void)viewDidLayoutSubviews;	// IMP=0x000000010007d2d8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010007d224
- (void)viewDidLoad;	// IMP=0x000000010007d04c
- (void)loadView;	// IMP=0x000000010007cea4
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x000000010007ce14
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000010007cd18

@end

