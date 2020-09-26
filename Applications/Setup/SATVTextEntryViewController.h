//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, SATVTextEntryView, UISystemInputViewController;
@protocol SATVTextEntryViewControllerDelegate;

@interface SATVTextEntryViewController : UIViewController
{
    _Bool _continueButtonEnabled;	// 8 = 0x8
    _Bool _secureTextEntry;	// 9 = 0x9
    NSString *_textFieldTitle;	// 16 = 0x10
    NSString *_textFieldSubtitle;	// 24 = 0x18
    NSString *_continueButtonText;	// 32 = 0x20
    long long _keyboardType;	// 40 = 0x28
    id <SATVTextEntryViewControllerDelegate> _delegate;	// 48 = 0x30
    SATVTextEntryView *_textEntryView;	// 56 = 0x38
    UISystemInputViewController *_systemInputViewController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010000419c
@property(retain, nonatomic) UISystemInputViewController *systemInputViewController; // @synthesize systemInputViewController=_systemInputViewController;
@property(retain, nonatomic) SATVTextEntryView *textEntryView; // @synthesize textEntryView=_textEntryView;
@property(nonatomic) __weak id <SATVTextEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @synthesize secureTextEntry=_secureTextEntry;
@property(nonatomic, getter=isContinueButtonEnabled) _Bool continueButtonEnabled; // @synthesize continueButtonEnabled=_continueButtonEnabled;
@property(copy, nonatomic) NSString *continueButtonText; // @synthesize continueButtonText=_continueButtonText;
@property(copy, nonatomic) NSString *textFieldSubtitle; // @synthesize textFieldSubtitle=_textFieldSubtitle;
@property(copy, nonatomic) NSString *textFieldTitle; // @synthesize textFieldTitle=_textFieldTitle;
- (void)_submitButtonAction:(id)arg1;	// IMP=0x0000000100003fec
- (void)_handleMenuButton:(id)arg1;	// IMP=0x0000000100003f88
- (void)_textChanged;	// IMP=0x0000000100003eb4
- (id)preferredFocusEnvironments;	// IMP=0x0000000100003e40
- (void)_doneButtonPressed:(id)arg1;	// IMP=0x00000001000039ec
- (_Bool)_enableAutomaticKeyboardPressDone;	// IMP=0x00000001000039e4
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x00000001000039dc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010000396c
- (void)loadView;	// IMP=0x00000001000034d4

@end

