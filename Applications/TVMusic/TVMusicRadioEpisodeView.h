//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIFloatingContentView.h>

#import "TVAuxiliaryViewSelecting-Protocol.h"

@class NSString, TVImageProxy, TVViewElement, UIImageView, UILabel, UIView;

@interface TVMusicRadioEpisodeView : _UIFloatingContentView <TVAuxiliaryViewSelecting>
{
    UIImageView *_imageView;	// 8 = 0x8
    UIImageView *_backgroundImageView;	// 16 = 0x10
    TVImageProxy *_imageProxy;	// 24 = 0x18
    TVViewElement *_element;	// 32 = 0x20
    UIView *_overlayView;	// 40 = 0x28
    UILabel *_captionLabel;	// 48 = 0x30
    UILabel *_calloutLabel;	// 56 = 0x38
    UILabel *_descriptionLabel;	// 64 = 0x40
}

+ (id)radioEpisodeWithElement:(id)arg1 existingView:(id)arg2;	// IMP=0x000000010009cc6c
+ (void)registerElements;	// IMP=0x000000010009cbf8
- (void).cxx_destruct;	// IMP=0x000000010009f344
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *calloutLabel; // @synthesize calloutLabel=_calloutLabel;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) TVViewElement *element; // @synthesize element=_element;
@property(retain, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x000000010009f13c
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010009ef38
- (void)_handleFocusDidUpdateNotification:(id)arg1;	// IMP=0x000000010009e184
- (void)didMoveToWindow;	// IMP=0x000000010009e018
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010009cd28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

