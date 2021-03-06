//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface TVHNowPlayingBarsView : UIView
{
    _Bool _canAnimate;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    NSArray *_barViews;	// 24 = 0x18
    unsigned long long _internalState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010007fd84
@property(nonatomic) unsigned long long internalState; // @synthesize internalState=_internalState;
@property(nonatomic) _Bool canAnimate; // @synthesize canAnimate=_canAnimate;
@property(readonly, copy, nonatomic) NSArray *barViews; // @synthesize barViews=_barViews;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)_removeAnimations;	// IMP=0x000000010007fbdc
- (void)_addAnimationsWithRepeatCount:(float)arg1;	// IMP=0x000000010007f8e0
- (void)_setBarViewHeights:(double)arg1;	// IMP=0x000000010007f760
- (void)_setSubviewsHidden:(_Bool)arg1;	// IMP=0x000000010007f638
- (void)_setInternalState:(unsigned long long)arg1;	// IMP=0x000000010007f4ec
- (void)_updateInternalState;	// IMP=0x000000010007f4a0
- (void)tintColorDidChange;	// IMP=0x000000010007f330
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000010007f2c4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010007f0b4

@end

