//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, TVHShelfLayoutHelper;

@interface TVHShelfViewLayout : UICollectionViewLayout
{
    double _minimumInteritemSpacing;	// 8 = 0x8
    TVHShelfLayoutHelper *_layoutHelper;	// 16 = 0x10
    NSArray *_shelfLayoutSections;	// 24 = 0x18
    struct CGSize _itemSize;	// 32 = 0x20
    struct NSDirectionalEdgeInsets _headerViewMargin;	// 48 = 0x30
}

+ (struct NSDirectionalEdgeInsets)defaultHeaderViewMargin;	// IMP=0x00000001000c2f40
- (void).cxx_destruct;	// IMP=0x00000001000c38f8
@property(retain, nonatomic) NSArray *shelfLayoutSections; // @synthesize shelfLayoutSections=_shelfLayoutSections;
@property(retain, nonatomic) TVHShelfLayoutHelper *layoutHelper; // @synthesize layoutHelper=_layoutHelper;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) struct NSDirectionalEdgeInsets headerViewMargin; // @synthesize headerViewMargin=_headerViewMargin;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x00000001000c36e0
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00000001000c3448
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x00000001000c33a4
- (struct CGSize)collectionViewContentSize;	// IMP=0x00000001000c32d4
- (void)prepareLayout;	// IMP=0x00000001000c2f64
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;	// IMP=0x00000001000c2f5c
- (long long)developmentLayoutDirection;	// IMP=0x00000001000c2f54
- (id)init;	// IMP=0x00000001000c2ea8

@end
