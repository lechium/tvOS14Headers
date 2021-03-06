//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVPPhotoCell.h"

@class NSLayoutConstraint, NSString, TVPAnimatedLabel, UIImage, UIImageView;

@interface TVPPhotoCollectionGridViewCell : TVPPhotoCell
{
    _Bool _shouldTitleExpand;	// 8 = 0x8
    _Bool _shouldTitleAnimate;	// 9 = 0x9
    TVPAnimatedLabel *_titleLabel;	// 16 = 0x10
    UIImageView *_badgeImageView;	// 24 = 0x18
    double _unfocusedMargin;	// 32 = 0x20
    double _focusedMargin;	// 40 = 0x28
    NSLayoutConstraint *_titleLeftConstraint;	// 48 = 0x30
    NSLayoutConstraint *_titleTopConstraint;	// 56 = 0x38
    NSLayoutConstraint *_titleRightConstraint;	// 64 = 0x40
    NSLayoutConstraint *_badgeImageLeftConstraint;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000010000c628
@property(retain, nonatomic) NSLayoutConstraint *badgeImageLeftConstraint; // @synthesize badgeImageLeftConstraint=_badgeImageLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleRightConstraint; // @synthesize titleRightConstraint=_titleRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleTopConstraint; // @synthesize titleTopConstraint=_titleTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLeftConstraint; // @synthesize titleLeftConstraint=_titleLeftConstraint;
@property(nonatomic) double focusedMargin; // @synthesize focusedMargin=_focusedMargin;
@property(nonatomic) double unfocusedMargin; // @synthesize unfocusedMargin=_unfocusedMargin;
@property(nonatomic) _Bool shouldTitleAnimate; // @synthesize shouldTitleAnimate=_shouldTitleAnimate;
@property(nonatomic) _Bool shouldTitleExpand; // @synthesize shouldTitleExpand=_shouldTitleExpand;
@property(retain, nonatomic) UIImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(retain, nonatomic) TVPAnimatedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)_updateLayoutProperties;	// IMP=0x000000010000c174
- (double)_focusedGrowthMagnitude;	// IMP=0x000000010000c100
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010000bd1c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010000bc1c
@property(readonly, nonatomic) struct CGSize imageSize;
@property(retain, nonatomic) UIImage *badgeImage;
@property(copy, nonatomic) NSString *title;
- (double)cellCornerRadius;	// IMP=0x000000010000bae4
- (void)prepareForReuse;	// IMP=0x000000010000ba88
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010000b440

@end

