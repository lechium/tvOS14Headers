//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class TVNPNowPlayingProgressView, UIImage, UIImageView, UIView;

@interface TVNPNowPlayingSliderView : UIControl
{
    double _maxBarWidth;	// 8 = 0x8
    _Bool _continuous;	// 16 = 0x10
    float _value;	// 20 = 0x14
    float _minimumValue;	// 24 = 0x18
    float _maximumValue;	// 28 = 0x1c
    UIImage *_minimumValueImage;	// 32 = 0x20
    UIImage *_maximumValueImage;	// 40 = 0x28
    TVNPNowPlayingProgressView *_progressBarView;	// 48 = 0x30
    UIImageView *_minValueIconView;	// 56 = 0x38
    UIImageView *_maxValueIconView;	// 64 = 0x40
    UIView *_thumbView;	// 72 = 0x48
    struct CGPoint _lastThumbLocation;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000022224
@property(readonly, nonatomic) struct CGPoint lastThumbLocation; // @synthesize lastThumbLocation=_lastThumbLocation;
@property(readonly, nonatomic) UIView *thumbView; // @synthesize thumbView=_thumbView;
@property(readonly, nonatomic) UIImageView *maxValueIconView; // @synthesize maxValueIconView=_maxValueIconView;
@property(readonly, nonatomic) UIImageView *minValueIconView; // @synthesize minValueIconView=_minValueIconView;
@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
@property(readonly, nonatomic) TVNPNowPlayingProgressView *progressBarView; // @synthesize progressBarView=_progressBarView;
@property(retain, nonatomic) UIImage *maximumValueImage; // @synthesize maximumValueImage=_maximumValueImage;
@property(retain, nonatomic) UIImage *minimumValueImage; // @synthesize minimumValueImage=_minimumValueImage;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) float value; // @synthesize value=_value;
- (id)_unfocusedProgressColor;	// IMP=0x00000000000220c4
- (id)_focusedProgressColor;	// IMP=0x0000000000022040
- (void)_rightPressed:(id)arg1;	// IMP=0x0000000000021fdc
- (void)_leftPressed:(id)arg1;	// IMP=0x0000000000021f78
- (void)_panUpdated:(id)arg1;	// IMP=0x0000000000021d10
- (void)_menuPressed;	// IMP=0x0000000000021d0c
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000021d08
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000021d00
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000021cf8
- (_Bool)shouldTrack;	// IMP=0x0000000000021cf0
- (double)maxBarWidth;	// IMP=0x0000000000021ce0
- (void)setMaxBarWidth:(double)arg1;	// IMP=0x0000000000021cb8
- (void)setValue:(float)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000021a80
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000021a58
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000021a44
- (void)layoutSubviews;	// IMP=0x00000000000217b0
- (_Bool)canBecomeFocused;	// IMP=0x00000000000217a8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000021200

@end
