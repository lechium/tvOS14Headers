//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PBVolumeSlider, PBVolumeSliderBackgroundView;

@interface PBVolumeSliderWrapperView : UIView
{
    UIView *_sliderWrapperView;	// 8 = 0x8
    PBVolumeSliderBackgroundView *_backgroundView;	// 16 = 0x10
    PBVolumeSlider *_sliderView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000a9b2c
@property(readonly, nonatomic) PBVolumeSlider *sliderView; // @synthesize sliderView=_sliderView;
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x00000001000a9a08
- (void)layoutSubviews;	// IMP=0x00000001000a98ec
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000a9008

@end

