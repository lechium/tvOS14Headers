//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SATVHeaderView, TVSKPlatterlessNonScalingButton, UIButton, UILabel, _SATVChoiceButtonContainerView;
@protocol SATVChoiceViewDataSource, SATVChoiceViewDelegate;

@interface SATVChoiceView : UIView
{
    SATVHeaderView *_headerView;	// 8 = 0x8
    id <SATVChoiceViewDataSource> _dataSource;	// 16 = 0x10
    id <SATVChoiceViewDelegate> _delegate;	// 24 = 0x18
    long long _choiceViewStyle;	// 32 = 0x20
    unsigned long long _choiceButtonLayout;	// 40 = 0x28
    TVSKPlatterlessNonScalingButton *_choiceHeaderButton;	// 48 = 0x30
    UIView *_footerButton;	// 56 = 0x38
    UILabel *_footnoteLabel;	// 64 = 0x40
    UIView *_auxiliaryButton;	// 72 = 0x48
    _SATVChoiceButtonContainerView *_choiceButtonContainer;	// 80 = 0x50
    UIButton *_firstChoiceButton;	// 88 = 0x58
    UIButton *_secondChoiceButton;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000010006d070
@property(retain, nonatomic) UIButton *secondChoiceButton; // @synthesize secondChoiceButton=_secondChoiceButton;
@property(retain, nonatomic) UIButton *firstChoiceButton; // @synthesize firstChoiceButton=_firstChoiceButton;
@property(retain, nonatomic) _SATVChoiceButtonContainerView *choiceButtonContainer; // @synthesize choiceButtonContainer=_choiceButtonContainer;
@property(retain, nonatomic) UIView *auxiliaryButton; // @synthesize auxiliaryButton=_auxiliaryButton;
@property(retain, nonatomic) UILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain, nonatomic) UIView *footerButton; // @synthesize footerButton=_footerButton;
@property(retain, nonatomic) TVSKPlatterlessNonScalingButton *choiceHeaderButton; // @synthesize choiceHeaderButton=_choiceHeaderButton;
@property(nonatomic) unsigned long long choiceButtonLayout; // @synthesize choiceButtonLayout=_choiceButtonLayout;
@property(readonly, nonatomic) long long choiceViewStyle; // @synthesize choiceViewStyle=_choiceViewStyle;
@property(nonatomic) __weak id <SATVChoiceViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SATVChoiceViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SATVHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)_setUpUI;	// IMP=0x000000010006caa0
- (void)_didSelectAuxiliaryButton;	// IMP=0x000000010006ca4c
- (void)_didSelectFooterButton;	// IMP=0x000000010006c9f8
- (void)_didSelectButton:(id)arg1;	// IMP=0x000000010006c934
- (_Bool)_hasAuxiliaryButton;	// IMP=0x000000010006c824
- (_Bool)_hasFooterButton;	// IMP=0x000000010006c714
- (id)_newFooterButton;	// IMP=0x000000010006c668
- (id)_newDefaultButton;	// IMP=0x000000010006c3d0
- (id)_choiceHeaderButton;	// IMP=0x000000010006c398
- (void)_populateView;	// IMP=0x000000010006ba88
- (struct CGSize)_computeFramesForBounds:(struct CGRect)arg1 forCalculationOnly:(_Bool)arg2;	// IMP=0x000000010006ae10
- (void)setChoice:(unsigned long long)arg1 enabled:(_Bool)arg2;	// IMP=0x000000010006acd8
- (void)reloadData;	// IMP=0x000000010006accc
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010006aaf0
- (_Bool)canBecomeFocused;	// IMP=0x000000010006aa6c
- (id)preferredFocusEnvironments;	// IMP=0x000000010006a91c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010006a8f8
- (void)layoutSubviews;	// IMP=0x000000010006a894
@property(readonly, nonatomic) UIView *buttonContainerView;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010006a830
- (id)initWithChoiceViewStyle:(long long)arg1 frame:(struct CGRect)arg2;	// IMP=0x000000010006a7c8

@end

