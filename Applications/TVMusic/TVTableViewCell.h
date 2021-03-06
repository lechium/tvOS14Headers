//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TVImageProxy, UIColor, UIImage;

@interface TVTableViewCell : UITableViewCell
{
    UIImage *_backingImage;	// 8 = 0x8
    _Bool _rendersImageAsTemplates;	// 16 = 0x10
    _Bool _allowsFocus;	// 17 = 0x11
    UIImage *_placeholderImage;	// 24 = 0x18
    TVImageProxy *_imageProxy;	// 32 = 0x20
    UIColor *__imageTintColor;	// 40 = 0x28
    double __imageViewWidth;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010007dbdc
@property(nonatomic, setter=_setImageViewWidth:) double _imageViewWidth; // @synthesize _imageViewWidth=__imageViewWidth;
@property(retain, nonatomic, setter=_setImageTintColor:) UIColor *_imageTintColor; // @synthesize _imageTintColor=__imageTintColor;
@property(nonatomic) _Bool allowsFocus; // @synthesize allowsFocus=_allowsFocus;
@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) _Bool rendersImageAsTemplates; // @synthesize rendersImageAsTemplates=_rendersImageAsTemplates;
- (double)_textLabelWidthWithXPosition:(double)arg1 currentWidth:(double)arg2;	// IMP=0x000000010007da68
- (void)_updateImage;	// IMP=0x000000010007d940
- (void)layoutSubviews;	// IMP=0x000000010007d4d4
- (void)setImageProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010007ce84
- (id)labelForMarquee;	// IMP=0x000000010007ce00
- (_Bool)canBecomeFocused;	// IMP=0x000000010007cd90
- (void)addSubview:(id)arg1;	// IMP=0x000000010007ccd4
- (void)prepareForReuse;	// IMP=0x000000010007cbf4
- (void)dealloc;	// IMP=0x000000010007cb88
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010007ca2c

@end

