//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface TVMusicSocialBadge : UIView
{
    NSMutableArray *_unloadedImageViews;	// 8 = 0x8
    NSArray *_imageViews;	// 16 = 0x10
    double _minimumInteritemSpacing;	// 24 = 0x18
}

+ (id)socialBadgeFromElement:(id)arg1 existingView:(id)arg2;	// IMP=0x00000001000b276c
- (void).cxx_destruct;	// IMP=0x00000001000b3cfc
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(copy, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
- (void)_checkReadyToDisplay;	// IMP=0x00000001000b3b98
- (void)_didLoadImageForImageView:(id)arg1;	// IMP=0x00000001000b3ae0
- (void)layoutSubviews;	// IMP=0x00000001000b37b0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000b35b0
- (void)dealloc;	// IMP=0x00000001000b3228
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000b31cc

@end
