//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTNowPlayingIndicatorView, MTVibrantImageView, UIImage;

@interface MTArtworkNowPlayingIndicatorOverlayView : UIView
{
    UIImage *_artworkImage;	// 8 = 0x8
    MTVibrantImageView *_vibrantImageView;	// 16 = 0x10
    MTNowPlayingIndicatorView *_barsView;	// 24 = 0x18
    UIView *_dimmingView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000f0618
@property(readonly, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) MTNowPlayingIndicatorView *barsView; // @synthesize barsView=_barsView;
@property(readonly, nonatomic) MTVibrantImageView *vibrantImageView; // @synthesize vibrantImageView=_vibrantImageView;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
- (void)_updateBarMetricsForArtworkSize:(struct CGSize)arg1;	// IMP=0x00000001000f036c
- (id)_blurredArtworkForArtwork:(id)arg1;	// IMP=0x00000001000f0278
- (_Bool)canBecomeFocused;	// IMP=0x00000001000f0270
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000f0258
- (void)layoutSubviews;	// IMP=0x00000001000f0190
@property(readonly, nonatomic) _Bool playing;
@property(nonatomic) long long playbackState;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000efe48

@end

