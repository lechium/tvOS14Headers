//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPageViewController.h>

#import "UIPageViewControllerDataSource-Protocol.h"

@class MISSING_TYPE;

@interface _TtC8AppStore32ScreenshotsGalleryViewController : UIPageViewController <UIPageViewControllerDataSource>
{
    MISSING_TYPE *screenshots;	// 8 = 0x8
    MISSING_TYPE *placeholderImages;	// 16 = 0x10
    MISSING_TYPE *fullScreenshotFetcher;	// 24 = 0x18
    MISSING_TYPE *artworkLoader;	// 32 = 0x20
    MISSING_TYPE *galleryViewControllers;	// 40 = 0x28
    MISSING_TYPE *initialSelectedIndex;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010009afb4
- (id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3;	// IMP=0x000000010009b01c
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;	// IMP=0x000000010009aef4
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;	// IMP=0x000000010009aee8
- (long long)presentationIndexForPageViewController:(id)arg1;	// IMP=0x000000010009aed8
- (long long)presentationCountForPageViewController:(id)arg1;	// IMP=0x000000010009ae40
- (void)viewDidLoad;	// IMP=0x000000010009ae14
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010009a8c4

@end
