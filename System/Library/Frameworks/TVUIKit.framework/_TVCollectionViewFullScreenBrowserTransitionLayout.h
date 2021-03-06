/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSArray, NSMutableDictionary;

@interface _TVCollectionViewFullScreenBrowserTransitionLayout : UICollectionViewLayout {

	NSArray* _transitionLayoutAttributes;
	NSMutableDictionary* _layoutAttributesByIndexPath;
	NSArray* _fullscreenBrowserLayoutAttributes;

}

@property (nonatomic,readonly) NSMutableDictionary * layoutAttributesByIndexPath;              //@synthesize layoutAttributesByIndexPath=_layoutAttributesByIndexPath - In the implementation block
@property (nonatomic,copy) NSArray * fullscreenBrowserLayoutAttributes;                        //@synthesize fullscreenBrowserLayoutAttributes=_fullscreenBrowserLayoutAttributes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * transitionLayoutAttributes;                      //@synthesize transitionLayoutAttributes=_transitionLayoutAttributes - In the implementation block
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(NSMutableDictionary *)layoutAttributesByIndexPath;
-(NSArray *)transitionLayoutAttributes;
-(void)setFullscreenBrowserLayoutAttributes:(NSArray *)arg1 ;
-(NSArray *)fullscreenBrowserLayoutAttributes;
-(id)initWithTransitionLayoutAttributes:(id)arg1 ;
@end

