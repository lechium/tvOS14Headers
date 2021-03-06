//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTHeaderCollectionReusableView.h"

@class IMTVVibrantLabel, UILabel;

@interface MTTVCollectionViewSectionHeader : MTHeaderCollectionReusableView
{
    _Bool _avoiding;	// 8 = 0x8
    IMTVVibrantLabel *_vibrantLabel;	// 16 = 0x10
    UILabel *_headerLabel;	// 24 = 0x18
}

+ (id)titleFont;	// IMP=0x0000000100075c54
+ (struct CGSize)estimatedSize:(struct CGSize)arg1;	// IMP=0x0000000100075bdc
- (void).cxx_destruct;	// IMP=0x00000001000761f8
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) _Bool avoiding; // @synthesize avoiding=_avoiding;
@property(retain, nonatomic) IMTVVibrantLabel *vibrantLabel; // @synthesize vibrantLabel=_vibrantLabel;
- (void)prepareForReuse;	// IMP=0x000000010007616c
- (void)layoutSubviews;	// IMP=0x0000000100075fa4
- (id)titleView;	// IMP=0x0000000100075ef4
- (id)title;	// IMP=0x0000000100075ea0
- (void)setTitle:(id)arg1;	// IMP=0x0000000100075e34
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100075c74

@end

