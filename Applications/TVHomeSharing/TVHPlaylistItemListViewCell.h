//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHListViewCell.h"

#import "TVHNowPlayingBarsListViewCell-Protocol.h"

@class NSNumber, NSString, TVHContentRatingView, TVHNowPlayingBarsView, TVImageProxy, UIImage, UIImageView, UILabel, _TVImageView;

@interface TVHPlaylistItemListViewCell : TVHListViewCell <TVHNowPlayingBarsListViewCell>
{
    _Bool _hasExplicitLyrics;	// 8 = 0x8
    _Bool _highDefinition;	// 9 = 0x9
    unsigned long long _nowPlayingBarsState;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSNumber *_durationInSeconds;	// 32 = 0x20
    _TVImageView *_thumbnailImageView;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UILabel *_subtitleLabel;	// 56 = 0x38
    TVHContentRatingView *_contentRatingView;	// 64 = 0x40
    UIImageView *_highDefinitionImageView;	// 72 = 0x48
    UILabel *_durationLabel;	// 80 = 0x50
    TVHNowPlayingBarsView *_nowPlayingBarsView;	// 88 = 0x58
}

+ (id)_durationLabelTextColorWithUserInterfaceStyle:(long long)arg1 andFocus:(_Bool)arg2;	// IMP=0x000000010001b1d8
+ (id)_subtitleLabelTextColorWithUserInterfaceStyle:(long long)arg1 andFocus:(_Bool)arg2;	// IMP=0x000000010001b0d0
+ (id)_titleLabelTextColorWithUserInterfaceStyle:(long long)arg1 andFocus:(_Bool)arg2;	// IMP=0x000000010001afc8
- (void).cxx_destruct;	// IMP=0x000000010001b5a0
@property(retain, nonatomic) TVHNowPlayingBarsView *nowPlayingBarsView; // @synthesize nowPlayingBarsView=_nowPlayingBarsView;
@property(readonly, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(readonly, nonatomic) UIImageView *highDefinitionImageView; // @synthesize highDefinitionImageView=_highDefinitionImageView;
@property(readonly, nonatomic) TVHContentRatingView *contentRatingView; // @synthesize contentRatingView=_contentRatingView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) _TVImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(nonatomic, getter=isHighDefinition) _Bool highDefinition; // @synthesize highDefinition=_highDefinition;
@property(copy, nonatomic) NSNumber *durationInSeconds; // @synthesize durationInSeconds=_durationInSeconds;
@property(readonly, nonatomic) _Bool hasExplicitLyrics; // @synthesize hasExplicitLyrics=_hasExplicitLyrics;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long nowPlayingBarsState; // @synthesize nowPlayingBarsState=_nowPlayingBarsState;
- (id)_floatingContentViewContentView;	// IMP=0x000000010001b478
- (void)_updateNowPlayingBars:(unsigned long long)arg1;	// IMP=0x000000010001b238
- (double)_floatingContentViewHeight;	// IMP=0x000000010001b1e4
- (void)_updateColors;	// IMP=0x000000010001adc4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000010001acf8
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000010001abd8
- (void)prepareForReuse;	// IMP=0x000000010001aaf0
- (void)layoutSubviews;	// IMP=0x000000010001a5c8
- (void)didMoveToSuperview;	// IMP=0x000000010001a578
- (void)_updateContentRatingView;	// IMP=0x000000010001a4d8
- (void)setContentRatingBadgeImage:(id)arg1 badgeText:(id)arg2;	// IMP=0x000000010001a2ec
@property(readonly, copy, nonatomic) NSString *contentRatingBadgeText;
@property(readonly, nonatomic) UIImage *contentRatingBadgeImage;
@property(copy, nonatomic) NSString *subtitle;
- (void)setTitle:(id)arg1 hasExplicitLyrics:(_Bool)arg2;	// IMP=0x000000010001a078
@property(retain, nonatomic) UIImage *placeholderImage;
@property(retain, nonatomic) TVImageProxy *imageProxy;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100019af4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

