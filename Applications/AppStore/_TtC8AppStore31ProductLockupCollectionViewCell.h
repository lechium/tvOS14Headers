//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC8AppStore22BaseCollectionViewCell.h"

@class MISSING_TYPE, NSArray, _TtC8AppStore11ArtworkView, _TtC8AppStore11OfferButton, _TtC8AppStore16DynamicTypeLabel, _TtC8AppStore17CollapsedTextView;

@interface _TtC8AppStore31ProductLockupCollectionViewCell : _TtC8AppStore22BaseCollectionViewCell
{
    MISSING_TYPE *contentContainerView;	// 176 = 0xb0
    MISSING_TYPE *headerContainerView;	// 184 = 0xb8
    MISSING_TYPE *titleLabel;	// 192 = 0xc0
    MISSING_TYPE *headerTitleLabel;	// 200 = 0xc8
    MISSING_TYPE *headerLogoView;	// 208 = 0xd0
    MISSING_TYPE *logoView;	// 216 = 0xd8
    MISSING_TYPE *titleStyle;	// 224 = 0xe0
    MISSING_TYPE *iconView;	// 272 = 0x110
    MISSING_TYPE *descriptionHeaderLabel;	// 280 = 0x118
    MISSING_TYPE *descriptionTextView;	// 288 = 0x120
    MISSING_TYPE *offerButton;	// 296 = 0x128
    MISSING_TYPE *offerButtonSubtitleLabel;	// 304 = 0x130
    MISSING_TYPE *wordmarkView;	// 312 = 0x138
    MISSING_TYPE *offerButtonTopLabel;	// 320 = 0x140
    MISSING_TYPE *standardBadges;	// 328 = 0x148
    MISSING_TYPE *textualBadges;	// 336 = 0x150
    MISSING_TYPE *offersArcade;	// 344 = 0x158
    MISSING_TYPE *layoutMetrics;	// 352 = 0x160
    MISSING_TYPE *delegate;	// 1176 = 0x498
}

- (void).cxx_destruct;	// IMP=0x0000000100086588
@property(nonatomic, readonly) NSArray *accessibilityStandardBadges;
@property(nonatomic, readonly) NSArray *accessibilityTextualBadges;
@property(nonatomic, readonly) _TtC8AppStore17CollapsedTextView *accessibilityDescriptionTextView;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityDescriptionHeaderLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityOfferTopLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityOfferSubtitleLabel;
@property(nonatomic, readonly) _TtC8AppStore11OfferButton *accessibilityOfferButton;
@property(nonatomic, readonly) _TtC8AppStore11ArtworkView *accessibilityArtworkView;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilitytTitleLabel;
- (void)prepareForReuse;	// IMP=0x0000000100085f3c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100085d34
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000100085afc
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) _Bool canBecomeFocused;
- (void)layoutSubviews;	// IMP=0x0000000100085804
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100084d20

@end

