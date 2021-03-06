//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBPIPContainerViewControllerAnimationDelegate-Protocol.h"
#import "PBPIPControlsDelegate-Protocol.h"

@class NSArray, NSDictionary, NSLayoutConstraint, NSMutableSet, NSString, TVSStateMachine, UILayoutGuide, _PBPIPSwapContext;
@protocol PBPIPRootViewControllerDelegate;

@interface PBPIPRootViewController : UIViewController <PBPIPContainerViewControllerAnimationDelegate, PBPIPControlsDelegate>
{
    _Bool _shouldShowControlsHintOnActivation;	// 8 = 0x8
    _Bool _swapping;	// 9 = 0x9
    id <PBPIPRootViewControllerDelegate> _delegate;	// 16 = 0x10
    long long _currentQuadrant;	// 24 = 0x18
    UILayoutGuide *_pipInsetLayoutGuide;	// 32 = 0x20
    unsigned long long _presentationState;	// 40 = 0x28
    NSMutableSet *_containerViewControllerLayouts;	// 48 = 0x30
    NSDictionary *_pipInsets;	// 56 = 0x38
    NSLayoutConstraint *_pipInsetLayoutGuideTopConstraint;	// 64 = 0x40
    NSLayoutConstraint *_pipInsetLayoutGuideBottomConstraint;	// 72 = 0x48
    NSLayoutConstraint *_pipInsetLayoutGuideLeadingConstraint;	// 80 = 0x50
    NSLayoutConstraint *_pipInsetLayoutGuideTrailingConstraint;	// 88 = 0x58
    TVSStateMachine *_stateMachine;	// 96 = 0x60
    _PBPIPSwapContext *_swapContext;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000001001ac9a0
@property(retain, nonatomic) _PBPIPSwapContext *swapContext; // @synthesize swapContext=_swapContext;
@property(readonly, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSLayoutConstraint *pipInsetLayoutGuideTrailingConstraint; // @synthesize pipInsetLayoutGuideTrailingConstraint=_pipInsetLayoutGuideTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *pipInsetLayoutGuideLeadingConstraint; // @synthesize pipInsetLayoutGuideLeadingConstraint=_pipInsetLayoutGuideLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *pipInsetLayoutGuideBottomConstraint; // @synthesize pipInsetLayoutGuideBottomConstraint=_pipInsetLayoutGuideBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *pipInsetLayoutGuideTopConstraint; // @synthesize pipInsetLayoutGuideTopConstraint=_pipInsetLayoutGuideTopConstraint;
@property(retain, nonatomic) NSDictionary *pipInsets; // @synthesize pipInsets=_pipInsets;
@property(readonly, nonatomic) NSMutableSet *containerViewControllerLayouts; // @synthesize containerViewControllerLayouts=_containerViewControllerLayouts;
@property(readonly, nonatomic) unsigned long long presentationState; // @synthesize presentationState=_presentationState;
@property(nonatomic, getter=isSwapping) _Bool swapping; // @synthesize swapping=_swapping;
@property(retain, nonatomic) UILayoutGuide *pipInsetLayoutGuide; // @synthesize pipInsetLayoutGuide=_pipInsetLayoutGuide;
@property(nonatomic) _Bool shouldShowControlsHintOnActivation; // @synthesize shouldShowControlsHintOnActivation=_shouldShowControlsHintOnActivation;
@property(nonatomic) long long currentQuadrant; // @synthesize currentQuadrant=_currentQuadrant;
@property(nonatomic) __weak id <PBPIPRootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_animatorFromAnimationSettings:(id)arg1;	// IMP=0x00000001001ac240
- (id)_layoutForContainerViewControllerState:(long long)arg1;	// IMP=0x00000001001ac060
- (id)_layoutForContainerViewController:(id)arg1;	// IMP=0x00000001001abe20
- (void)movePictureInPicture;	// IMP=0x00000001001abdec
- (void)cancelPictureInPicture;	// IMP=0x00000001001abd30
- (void)stopPictureInPicture;	// IMP=0x00000001001abc74
- (void)controlsDidSelectTogglePlayPause:(id)arg1;	// IMP=0x00000001001abbec
- (void)controlsDidSelectDismissControls:(id)arg1;	// IMP=0x00000001001abb60
- (void)controlsDidSelectCancelPictureInPicture:(id)arg1;	// IMP=0x00000001001aba68
- (void)controlsDidSelectStopPictureInPicture:(id)arg1;	// IMP=0x00000001001ab97c
- (long long)controlsDidSelectMovePictureInPictureToNextQuadrant:(id)arg1;	// IMP=0x00000001001ab90c
- (void)containerViewController:(id)arg1 playbackSourceDidUpdateRoutingVideoToHostedWindow:(_Bool)arg2;	// IMP=0x00000001001ab6a0
- (void)containerViewController:(id)arg1 performStopAnimationWithFinalLayerFrame:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001ab3ec
- (void)containerViewController:(id)arg1 prepareStopAnimationWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001ab1bc
- (void)containerViewController:(id)arg1 performStartAnimationWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001aaf8c
- (void)containerViewController:(id)arg1 prepareStartAnimationWithInitialLayerFrame:(struct CGRect)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001aacd8
- (void)setPresentationState:(unsigned long long)arg1;	// IMP=0x00000001001aac40
- (void)_handlePrepareStopRequestWithUserInfo:(id)arg1;	// IMP=0x00000001001aa99c
- (void)_handlePrepareStartRequestWithLayout:(id)arg1 userInfo:(id)arg2;	// IMP=0x00000001001aa6ec
- (id)_createStateMachine;	// IMP=0x00000001001a80cc
- (void)hideControlsHint;	// IMP=0x00000001001a8050
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001a7ce4
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000001001a7c84
@property(nonatomic, getter=isHidden) _Bool hidden;
- (long long)moveToNextQuadrant;	// IMP=0x00000001001a7ad0
- (void)adjustPositionForFocusedFrame:(struct CGRect)arg1;	// IMP=0x00000001001a7a40
- (void)updateInsetLayoutGuide;	// IMP=0x00000001001a7948
- (struct UIEdgeInsets)cumulativePIPInsets;	// IMP=0x00000001001a76e4
- (void)updateAvoidanceInsets:(id)arg1 withAnimationSettings:(id)arg2 usingAnimationFence:(id)arg3;	// IMP=0x00000001001a7320
- (void)moveContainerWithLayout:(id)arg1 toQuadrant:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x00000001001a6f38
- (void)_handleBackgroundViewWhenEditing:(_Bool)arg1 animationStyle:(long long)arg2;	// IMP=0x00000001001a6ae4
- (void)setEditing:(_Bool)arg1 animationStyle:(long long)arg2;	// IMP=0x00000001001a693c
- (_Bool)isEditing;	// IMP=0x00000001001a68ac
- (struct CGRect)currentContainerFrame;	// IMP=0x00000001001a66f8
- (void)removeContainerViewController:(id)arg1;	// IMP=0x00000001001a65a8
- (void)addContainerViewController:(id)arg1;	// IMP=0x00000001001a633c
@property(readonly, nonatomic) NSArray *containerViewControllers;
- (id)preferredFocusEnvironments;	// IMP=0x00000001001a5f60
- (void)viewDidLoad;	// IMP=0x00000001001a5a60
- (id)fullscreenLayout;	// IMP=0x00000001001a58ec
- (id)pictureInPictureLayout;	// IMP=0x00000001001a58b0
- (_Bool)isPictureInPictureActive;	// IMP=0x00000001001a5858
- (id)initWithInitialQuadrant:(long long)arg1 avoidanceInsets:(id)arg2;	// IMP=0x00000001001a5688

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

