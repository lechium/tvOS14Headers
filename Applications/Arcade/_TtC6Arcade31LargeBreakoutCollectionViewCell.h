//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_TtC6Arcade22BaseCollectionViewCell.h"

@class MISSING_TYPE, NSArray, UIColor;

@interface _TtC6Arcade31LargeBreakoutCollectionViewCell : _TtC6Arcade22BaseCollectionViewCell
{
    MISSING_TYPE *isFeatured;	// 176 = 0xb0
    MISSING_TYPE *videoContainer;	// 184 = 0xb8
    MISSING_TYPE *artworkView;	// 192 = 0xc0
    MISSING_TYPE *backgroundArtwork;	// 200 = 0xc8
    MISSING_TYPE *detailsView;	// 208 = 0xd0
    MISSING_TYPE *detailPosition;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x000000010004704c
- (void)prepareForReuse;	// IMP=0x0000000100046fa4
- (void)layoutSubviews;	// IMP=0x0000000100046e9c
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000100046c00
- (void)didMoveToWindow;	// IMP=0x0000000100046bd4
@property(nonatomic, readonly) _Bool canBecomeFocused;
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, retain) UIColor *backgroundColor;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100046868

@end

