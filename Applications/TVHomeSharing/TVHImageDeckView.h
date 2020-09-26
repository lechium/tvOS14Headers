//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TVHPauseable-Protocol.h"

@class NSArray, NSString, UIImage, UIImageView;

@interface TVHImageDeckView : UIView <TVHPauseable>
{
    UIView *_pendingDisplayView;	// 8 = 0x8
    unsigned long long _pendingViewType;	// 16 = 0x10
    UIView *_displayView;	// 24 = 0x18
    unsigned long long _viewType;	// 32 = 0x20
    UIImageView *_placeholderImageView;	// 40 = 0x28
    double _imageLoadTimeout;	// 48 = 0x30
    _Bool _paused;	// 56 = 0x38
    unsigned long long _mode;	// 64 = 0x40
    UIImage *_placeholderImage;	// 72 = 0x48
    NSArray *_imageProxies;	// 80 = 0x50
    double _cycleInterval;	// 88 = 0x58
    double _transitionDuration;	// 96 = 0x60
    double _newDataTransitionDuration;	// 104 = 0x68
    struct NSDirectionalEdgeInsets _crossFadeImageViewMargin;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000100027e5c
@property(nonatomic) double newDataTransitionDuration; // @synthesize newDataTransitionDuration=_newDataTransitionDuration;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) double cycleInterval; // @synthesize cycleInterval=_cycleInterval;
@property(nonatomic) struct NSDirectionalEdgeInsets crossFadeImageViewMargin; // @synthesize crossFadeImageViewMargin=_crossFadeImageViewMargin;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
- (unsigned long long)_viewTypeForNumberOfImages:(unsigned long long)arg1;	// IMP=0x0000000100027d24
- (unsigned long long)_paradeThreshold;	// IMP=0x0000000100027d1c
- (void)_displayPlaceholderView;	// IMP=0x0000000100027a98
- (void)_fadeToBlack;	// IMP=0x00000001000279a0
- (void)_dissolveToPendingView;	// IMP=0x0000000100027538
- (struct CGRect)_crossFadeImageViewFrame;	// IMP=0x00000001000274bc
- (void)_handleScrollingParadeImageViewWillDisplayNotification:(id)arg1;	// IMP=0x00000001000273e4
- (void)__handleCrossfadeImageViewWillDisplayNotification:(id)arg1;	// IMP=0x0000000100027310
- (void)layoutSubviews;	// IMP=0x0000000100027284
- (void)dealloc;	// IMP=0x0000000100026f2c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100026db8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

