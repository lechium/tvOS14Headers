//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIBezierPath, UIColor;

@interface SRCarPlayFocusView : UIView
{
    unsigned long long _style;	// 8 = 0x8
    CAShapeLayer *_maskPathShapeLayer;	// 16 = 0x10
    UIBezierPath *_maskingPath;	// 24 = 0x18
    UIColor *_focusedContentColor;	// 32 = 0x20
}

+ (id)systemView;	// IMP=0x0000000100002f58
+ (id)vibrantView;	// IMP=0x0000000100002f2c
- (void).cxx_destruct;	// IMP=0x0000000100003664
@property(retain, nonatomic) UIColor *focusedContentColor; // @synthesize focusedContentColor=_focusedContentColor;
@property(retain, nonatomic) UIBezierPath *maskingPath; // @synthesize maskingPath=_maskingPath;
- (id)_dynamicFocusContentColorFromStyle:(unsigned long long)arg1;	// IMP=0x00000001000034dc
- (id)_inverseTraitCollectionForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000001000034bc
- (void)_updateViewFromUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000100003450
- (id)_vibrancyCompositingFilterFromUserInterfaceStyle:(long long)arg1;	// IMP=0x0000000100003418
- (id)_focusColor;	// IMP=0x00000001000033c4
@property(readonly, nonatomic) double focusedContentAlpha;
- (double)maximumAlphaFromUserInterfaceStyle:(long long)arg1;	// IMP=0x000000010000339c
- (void)layoutSubviews;	// IMP=0x0000000100003230
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000001000031ac
- (id)_initWithStyle:(unsigned long long)arg1;	// IMP=0x0000000100002f84

@end

