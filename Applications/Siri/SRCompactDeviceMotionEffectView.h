//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface SRCompactDeviceMotionEffectView : UIView
{
    UIImageView *_effectImageView;	// 8 = 0x8
    _Bool _shouldUpdateOffsetRadians;	// 16 = 0x10
    double _initialOffsetRadians;	// 24 = 0x18
    long long _cachedInterfaceOrientation;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000870f4
- (long long)_currentInterfaceOrientation;	// IMP=0x0000000100087098
- (id)_currentWindowScene;	// IMP=0x0000000100086f18
- (void)_cleanUpIfNeeded;	// IMP=0x0000000100086f14
- (void)_configureDeviceMotionIfNeeded;	// IMP=0x0000000100086ce4
- (void)viewWillBeUpdated;	// IMP=0x0000000100086cd0
- (void)_updateViewsforTraitCollection:(id)arg1;	// IMP=0x0000000100086acc
- (_Bool)_supportsDeviceMotion;	// IMP=0x0000000100086aa4
- (void)layoutSubviews;	// IMP=0x0000000100086830
- (void)invalidate;	// IMP=0x0000000100086824
- (void)updateMaskingForView:(id)arg1;	// IMP=0x0000000100086654
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000100086574
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000864a8

@end

