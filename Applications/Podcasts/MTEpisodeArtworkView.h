//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MTNowPlayingIndicatorView, MTVibrantImageView, UIImage, UIImageView, UIView;

@interface MTEpisodeArtworkView : UIControl
{
    _Bool _currentPlayerItem;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UIView *_dimmingView;	// 24 = 0x18
    MTVibrantImageView *_vibrantImageView;	// 32 = 0x20
    MTNowPlayingIndicatorView *_barsView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010002f584
@property(retain, nonatomic) MTNowPlayingIndicatorView *barsView; // @synthesize barsView=_barsView;
@property(retain, nonatomic) MTVibrantImageView *vibrantImageView; // @synthesize vibrantImageView=_vibrantImageView;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic, getter=isCurrentPlayerItem) _Bool currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
- (_Bool)canBecomeFocused;	// IMP=0x000000010002f51c
- (void)_updateBarMetricsForArtworkSize:(struct CGSize)arg1;	// IMP=0x000000010002f2c4
- (id)_blurredArtworkForArtwork:(id)arg1;	// IMP=0x000000010002f1d0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000010002eec4
- (void)layoutSubviews;	// IMP=0x000000010002ed54
- (void)updatePlaybackState;	// IMP=0x000000010002ecc0
- (void)stopObservingPlaybackState;	// IMP=0x000000010002ec60
- (void)startObservingPlaybackState;	// IMP=0x000000010002ebf8
@property(retain, nonatomic) UIImage *artwork;
- (void)dealloc;	// IMP=0x000000010002e7c4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010002e730

@end

