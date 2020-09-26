//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SRTranscriptContentView, UICollectionView;
@protocol SRTranscriptViewDelegate;

@interface SRTranscriptView : UIView
{
    SRTranscriptContentView *_contentView;	// 8 = 0x8
    _Bool _contentSizeIsSet;	// 16 = 0x10
    UIView *_fullScreenEffectContainerView;	// 24 = 0x18
    id <SRTranscriptViewDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000298ec
@property(nonatomic) __weak id <SRTranscriptViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setBottomKeylineHidden:(_Bool)arg1;	// IMP=0x00000001000298a0
- (void)setTopKeylineHidden:(_Bool)arg1;	// IMP=0x0000000100029888
@property(nonatomic) double bottomMargin;
@property(nonatomic) double topMargin;
@property(retain, nonatomic) UIView *suggestionsView;
@property(readonly, nonatomic) UICollectionView *collectionView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100029654
- (void)showFullScreenEffect:(id)arg1;	// IMP=0x0000000100029394
- (void)layoutSubviews;	// IMP=0x00000001000292f4
- (void)dealloc;	// IMP=0x0000000100029244
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100029230
- (id)initWithFrame:(struct CGRect)arg1 collectionView:(id)arg2 delegate:(id)arg3;	// IMP=0x00000001000290bc

@end

