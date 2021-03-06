//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCompositionalLayout.h>

@class NSIndexPath;

@interface TVNPRoutingRoutesCollectionViewLayout : UICollectionViewCompositionalLayout
{
    double _topGradientHeight;	// 8 = 0x8
    double _bottomGradientHeight;	// 16 = 0x10
    NSIndexPath *_volumeSliderIndexPath;	// 24 = 0x18
}

+ (Class)layoutAttributesClass;	// IMP=0x00000001000188f0
- (void).cxx_destruct;	// IMP=0x0000000100018d04
@property(retain, nonatomic) NSIndexPath *volumeSliderIndexPath; // @synthesize volumeSliderIndexPath=_volumeSliderIndexPath;
@property(nonatomic) double bottomGradientHeight; // @synthesize bottomGradientHeight=_bottomGradientHeight;
@property(nonatomic) double topGradientHeight; // @synthesize topGradientHeight=_topGradientHeight;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100018bdc
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000100018a44
- (void)prepareLayout;	// IMP=0x00000001000188fc

@end

