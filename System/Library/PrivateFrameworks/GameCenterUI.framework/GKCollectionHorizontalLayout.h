/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionFocusingLayout.h>

@class NSDictionary;

@interface GKCollectionHorizontalLayout : GKCollectionFocusingLayout {

	BOOL _centersItemsInExcessSpace;
	BOOL _alignItemsToTop;
	double _extraSectionHeaderToCellSpace;
	NSDictionary* _itemAttributes;
	NSDictionary* _headerAttributes;
	double _scrollStepIntegral;

}

@property (nonatomic,retain) NSDictionary * itemAttributes;                     //@synthesize itemAttributes=_itemAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * headerAttributes;                   //@synthesize headerAttributes=_headerAttributes - In the implementation block
@property (assign,nonatomic) double scrollStepIntegral;                         //@synthesize scrollStepIntegral=_scrollStepIntegral - In the implementation block
@property (assign,nonatomic) BOOL centersItemsInExcessSpace;                    //@synthesize centersItemsInExcessSpace=_centersItemsInExcessSpace - In the implementation block
@property (assign,nonatomic) BOOL alignItemsToTop;                              //@synthesize alignItemsToTop=_alignItemsToTop - In the implementation block
@property (assign,nonatomic) double extraSectionHeaderToCellSpace;              //@synthesize extraSectionHeaderToCellSpace=_extraSectionHeaderToCellSpace - In the implementation block
-(void)dealloc;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)setHeaderAttributes:(NSDictionary *)arg1 ;
-(void)setItemAttributes:(NSDictionary *)arg1 ;
-(long long)lastValidSection;
-(void)applyDefaults;
-(BOOL)centersItemsInExcessSpace;
-(void)setCentersItemsInExcessSpace:(BOOL)arg1 ;
-(double)extraSectionHeaderToCellSpace;
-(void)setExtraSectionHeaderToCellSpace:(double)arg1 ;
-(NSDictionary *)itemAttributes;
-(NSDictionary *)headerAttributes;
-(void)setAlignItemsToTop:(BOOL)arg1 ;
-(double)maxHeaderHeight;
-(long long)firstValidSection;
-(BOOL)alignItemsToTop;
-(double)scrollStepIntegral;
-(void)setScrollStepIntegral:(double)arg1 ;
@end

