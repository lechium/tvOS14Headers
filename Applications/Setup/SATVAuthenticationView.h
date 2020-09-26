//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIFocusGuide, UILabel, UIStackView, UITextField;

@interface SATVAuthenticationView : UIView
{
    _Bool _touchInputEnabled;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subtitleLabel;	// 24 = 0x18
    UITextField *_textField;	// 32 = 0x20
    UIButton *_continueButton;	// 40 = 0x28
    UIButton *_skipButton;	// 48 = 0x30
    UIButton *_useSeparateIDsButton;	// 56 = 0x38
    UIView *_systemInputView;	// 64 = 0x40
    UIFocusGuide *_gridFocusGuide;	// 72 = 0x48
    UIView *_systemInputContainerView;	// 80 = 0x50
    UIStackView *_parentStackView;	// 88 = 0x58
    UIStackView *_dialogueColumnStackView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000001000640b8
@property(retain, nonatomic) UIStackView *dialogueColumnStackView; // @synthesize dialogueColumnStackView=_dialogueColumnStackView;
@property(retain, nonatomic) UIStackView *parentStackView; // @synthesize parentStackView=_parentStackView;
@property(retain, nonatomic) UIView *systemInputContainerView; // @synthesize systemInputContainerView=_systemInputContainerView;
@property(retain, nonatomic) UIFocusGuide *gridFocusGuide; // @synthesize gridFocusGuide=_gridFocusGuide;
@property(nonatomic) _Bool touchInputEnabled; // @synthesize touchInputEnabled=_touchInputEnabled;
@property(readonly, nonatomic) UIView *systemInputView; // @synthesize systemInputView=_systemInputView;
@property(readonly, nonatomic) UIButton *useSeparateIDsButton; // @synthesize useSeparateIDsButton=_useSeparateIDsButton;
@property(readonly, nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(readonly, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_setSystemInputView:(id)arg1;	// IMP=0x0000000100063eac
- (id)_createButtonStackView;	// IMP=0x0000000100063de4
- (id)_buildDialogueColumnStackView;	// IMP=0x0000000100063bc4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100063a70
- (void)setPreferredFocusedEnvironmentForGridLayoutGuide:(id)arg1;	// IMP=0x0000000100063978
- (void)setSystemInputView:(id)arg1 touchInputEnabled:(_Bool)arg2;	// IMP=0x00000001000634c0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100062e10

@end

