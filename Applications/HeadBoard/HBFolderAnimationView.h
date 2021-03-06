//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, _UIStackedImageConfiguration;

@interface HBFolderAnimationView : UIView
{
    NSArray *_images;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    NSArray *_imageViews;	// 24 = 0x18
    unsigned long long _numberOfColumns;	// 32 = 0x20
    double _verticalSpacing;	// 40 = 0x28
    _UIStackedImageConfiguration *_configuration;	// 48 = 0x30
    struct UIEdgeInsets _edgeInsets;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000001000577a4
@property(retain, nonatomic) _UIStackedImageConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) double verticalSpacing; // @synthesize verticalSpacing=_verticalSpacing;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(retain, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
- (void)_updateWithCurrentStyle;	// IMP=0x00000001000573a4
- (void)_updateImageViews;	// IMP=0x00000001000570a8
@property(readonly, nonatomic) struct CGSize imageSize;
- (void)layoutSubviews;	// IMP=0x0000000100056bf4
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000100056a3c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000569d4

@end

