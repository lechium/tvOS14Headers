//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface MTTVAudioPlaybackProgressBarView : UIView
{
    double _progress;	// 8 = 0x8
    UIView *_completedView;	// 16 = 0x10
    UIView *_remainingView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000d1be4
@property(retain, nonatomic) UIView *remainingView; // @synthesize remainingView=_remainingView;
@property(retain, nonatomic) UIView *completedView; // @synthesize completedView=_completedView;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)layoutSubviews;	// IMP=0x00000001000d1abc
- (struct CGRect)_remainingFrame;	// IMP=0x00000001000d1a50
- (struct CGRect)_completedFrame;	// IMP=0x00000001000d19e0
- (void)setProgress:(double)arg1 withAnimationDuration:(double)arg2;	// IMP=0x00000001000d1900
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000d16d0

@end

