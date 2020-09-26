//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class PBScreenSaverContentPresentingViewController, UIViewPropertyAnimator;

@interface _PBScreenSaverReducedMotionPresentationAnimationTransaction : BSTransaction
{
    _Bool _animated;	// 8 = 0x8
    PBScreenSaverContentPresentingViewController *_screenSaverViewController;	// 16 = 0x10
    UIViewPropertyAnimator *_alphaAnimator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010018ba24
@property(readonly, nonatomic) UIViewPropertyAnimator *alphaAnimator; // @synthesize alphaAnimator=_alphaAnimator;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) PBScreenSaverContentPresentingViewController *screenSaverViewController; // @synthesize screenSaverViewController=_screenSaverViewController;
- (void)_didComplete;	// IMP=0x000000010018b7d4
- (void)_willInterruptWithReason:(id)arg1;	// IMP=0x000000010018b720
- (void)_begin;	// IMP=0x000000010018b060
- (_Bool)_canBeInterrupted;	// IMP=0x000000010018b040

@end

