//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVPOneupView.h"

@class UIView;

@interface TVPSharedPSOneupView : TVPOneupView
{
    UIView *_commentsBubbleView;	// 8 = 0x8
    UIView *_itemContainerView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010003f1b4
@property(retain, nonatomic) UIView *itemContainerView; // @synthesize itemContainerView=_itemContainerView;
@property(retain, nonatomic) UIView *commentsBubbleView; // @synthesize commentsBubbleView=_commentsBubbleView;
- (id)_getSecondaryCommentsViewFromParentView;	// IMP=0x000000010003f020
- (void)_setFrameForSecondaryView:(id)arg1 itemViewFrame:(struct CGRect)arg2;	// IMP=0x000000010003ef50
- (void)_performPushTransitionToView:(id)arg1 atNewIndex:(long long)arg2;	// IMP=0x000000010003eb44
- (void)_addAllSubviews;	// IMP=0x000000010003ea00
- (void)_menuAction:(id)arg1;	// IMP=0x000000010003e988
- (void)_transitionToItemAtIndex:(long long)arg1;	// IMP=0x000000010003e74c
- (void)_configureSupplementaryView;	// IMP=0x000000010003e5fc
- (void)_configureItemView:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000010003e474
- (void)_transitionToFullScreenMode;	// IMP=0x000000010003e254
- (void)_transitionToCaptionMode;	// IMP=0x000000010003ddd8
- (void)_longPressAction:(id)arg1;	// IMP=0x000000010003dba0
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000010003db98
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000010003da34
- (id)preferredFocusEnvironments;	// IMP=0x000000010003d87c
- (_Bool)canBecomeFocused;	// IMP=0x000000010003d874
- (void)switchToOneupCaptionView;	// IMP=0x000000010003d868

@end

