//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIImageView;

@interface TVCRDViewController : UIViewController
{
    UIImageView *_backgroundImageView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000023fc
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void)_updateBackgroundImage;	// IMP=0x0000000100002354
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010000229c
- (void)dealloc;	// IMP=0x0000000100002214
- (void)loadView;	// IMP=0x00000001000020fc
- (id)init;	// IMP=0x0000000100002068

@end

