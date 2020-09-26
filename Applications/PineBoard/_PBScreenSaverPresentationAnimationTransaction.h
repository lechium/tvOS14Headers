//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class PBScreenSaverContentPresentingViewController, UIViewPropertyAnimator;

@interface _PBScreenSaverPresentationAnimationTransaction : BSTransaction
{
    _Bool _animated;	// 8 = 0x8
    PBScreenSaverContentPresentingViewController *_screenSaverViewController;	// 16 = 0x10
    UIViewPropertyAnimator *_springAnimator;	// 24 = 0x18
    UIViewPropertyAnimator *_alphaAnimator;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010018afc0
@property(readonly, nonatomic) UIViewPropertyAnimator *alphaAnimator; // @synthesize alphaAnimator=_alphaAnimator;
@property(readonly, nonatomic) UIViewPropertyAnimator *springAnimator; // @synthesize springAnimator=_springAnimator;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) PBScreenSaverContentPresentingViewController *screenSaverViewController; // @synthesize screenSaverViewController=_screenSaverViewController;
- (void)_didComplete;	// IMP=0x000000010018acfc
- (void)_willInterruptWithReason:(id)arg1;	// IMP=0x000000010018ac14
- (void)_begin;	// IMP=0x0000000100189eb0
- (_Bool)_canBeInterrupted;	// IMP=0x0000000100189e90

@end
