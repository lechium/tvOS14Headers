//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SRStarkGatekeeperHeaderView, SRStarkMessagesContactContainerView, UIButton, UIFocusContainerGuide, UITapGestureRecognizer;
@protocol SRStarkViewDelegate, UIFocusItem;

@interface SRStarkView : UIView
{
    UIView *_snippetView;	// 8 = 0x8
    SRStarkMessagesContactContainerView *_messagesContactContainerView;	// 16 = 0x10
    SRStarkGatekeeperHeaderView *_gatekeeperHeader;	// 24 = 0x18
    id <SRStarkViewDelegate> _delegate;	// 32 = 0x20
    UIView *_dismisserView;	// 40 = 0x28
    UIButton *_selectButton;	// 48 = 0x30
    UIFocusContainerGuide *_selectButtonFocusContainerGuide;	// 56 = 0x38
    id <UIFocusItem> _userFocusedItem;	// 64 = 0x40
    UITapGestureRecognizer *_backButtonTapGestureRecognizer;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000001000452f4
@property(retain, nonatomic) UITapGestureRecognizer *backButtonTapGestureRecognizer; // @synthesize backButtonTapGestureRecognizer=_backButtonTapGestureRecognizer;
@property(retain, nonatomic) id <UIFocusItem> userFocusedItem; // @synthesize userFocusedItem=_userFocusedItem;
@property(retain, nonatomic) UIFocusContainerGuide *selectButtonFocusContainerGuide; // @synthesize selectButtonFocusContainerGuide=_selectButtonFocusContainerGuide;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(readonly, nonatomic, getter=_dismisserView) UIView *dismisserView; // @synthesize dismisserView=_dismisserView;
@property(nonatomic) __weak id <SRStarkViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SRStarkGatekeeperHeaderView *gatekeeperHeader; // @synthesize gatekeeperHeader=_gatekeeperHeader;
@property(retain, nonatomic) SRStarkMessagesContactContainerView *messagesContactContainerView; // @synthesize messagesContactContainerView=_messagesContactContainerView;
@property(retain, nonatomic) UIView *snippetView; // @synthesize snippetView=_snippetView;
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000001000451e8
- (void)layoutSubviews;	// IMP=0x0000000100044c90
- (void)_updateUserFocusedItem:(id)arg1 fromView:(id)arg2 toView:(id)arg3;	// IMP=0x0000000100044a04
- (_Bool)canBecomeFocused;	// IMP=0x00000001000449c4
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100044678
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000100044568
- (id)preferredFocusEnvironments;	// IMP=0x0000000100044364
- (void)_setSnippetView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100043c44
- (void)setSnippetView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100043c38
- (void)_dismissalTapped:(id)arg1;	// IMP=0x00000001000437dc
- (void)_selectButtonTapped:(id)arg1;	// IMP=0x0000000100043794
- (void)_handleBackButtonTapGestureRecognizer:(id)arg1;	// IMP=0x0000000100043724
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000010004344c

@end

