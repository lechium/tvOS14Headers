//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImage, UIImageView;

@interface MTVibrantImageView : UIView
{
    UIImage *_image;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UIView *_vibrancyView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100132b48
@property(retain, nonatomic) UIView *vibrancyView; // @synthesize vibrancyView=_vibrancyView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIColor *vibrancyColor;
@property(nonatomic) id compositingFilter;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001001327f4

@end

