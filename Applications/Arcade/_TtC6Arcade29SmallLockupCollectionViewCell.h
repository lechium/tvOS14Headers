//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC6Arcade22BaseCollectionViewCell.h"

@class MISSING_TYPE, _TtC6Arcade16DynamicTypeLabel;

@interface _TtC6Arcade29SmallLockupCollectionViewCell : _TtC6Arcade22BaseCollectionViewCell
{
    MISSING_TYPE *ordinalLabel;	// 176 = 0xb0
    MISSING_TYPE *titleLabel;	// 184 = 0xb8
    MISSING_TYPE *subtitleLabel;	// 192 = 0xc0
    MISSING_TYPE *priceLabel;	// 200 = 0xc8
    MISSING_TYPE *metrics;	// 208 = 0xd0
    MISSING_TYPE *isShowingSeeAll;	// 704 = 0x2c0
    MISSING_TYPE *artworkView;	// 712 = 0x2c8
    MISSING_TYPE *artworkBorderLayer;	// 720 = 0x2d0
}

- (void).cxx_destruct;	// IMP=0x000000010009f394
@property(nonatomic, readonly) _TtC6Arcade16DynamicTypeLabel *accessibilityPriceLabel;
@property(nonatomic, readonly) _TtC6Arcade16DynamicTypeLabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) _TtC6Arcade16DynamicTypeLabel *accessibilityTitleLabel;
@property(nonatomic, readonly) _TtC6Arcade16DynamicTypeLabel *accessibilityOrdinalLabel;
- (void)prepareForReuse;	// IMP=0x000000010009f278
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010009f05c
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x000000010009ef78
- (void)layoutSubviews;	// IMP=0x000000010009ebc4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010009e748

@end

