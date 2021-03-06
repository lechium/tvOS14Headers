//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TVHMediaEntityPreviewView-Protocol.h"

@class NSAttributedString, NSString, TVFocusableTextView, TVImageProxy, UIImage, _TVImageView;
@protocol TVHMediaEntityCollectionContentDescriptionPreviewViewDelegate;

@interface TVHMediaEntityCollectionContentDescriptionPreviewView : UIView <TVHMediaEntityPreviewView>
{
    id <TVHMediaEntityCollectionContentDescriptionPreviewViewDelegate> _delegate;	// 8 = 0x8
    _TVImageView *_imageView;	// 16 = 0x10
    TVFocusableTextView *_contentDescriptionTextView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100094b2c
@property(retain, nonatomic) TVFocusableTextView *contentDescriptionTextView; // @synthesize contentDescriptionTextView=_contentDescriptionTextView;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <TVHMediaEntityCollectionContentDescriptionPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didSelectContentDescriptionText;	// IMP=0x0000000100094a68
@property(readonly, nonatomic) struct CGSize preferredImageSize;
@property(retain, nonatomic) UIImage *placeholderImage;
@property(retain, nonatomic) TVImageProxy *imageProxy;
@property(copy, nonatomic) NSAttributedString *contentDescription;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100094164

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

