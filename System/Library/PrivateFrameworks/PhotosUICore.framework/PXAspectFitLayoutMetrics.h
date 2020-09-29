/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:52 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXAspectFitLayoutMetrics : PXLayoutMetrics {

	double _interTileSpacing;
	long long _minTilesPerRow;
	long long _maxTilesPerRow;
	double _minRowAspectRatio;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) double interTileSpacing;                 //@synthesize interTileSpacing=_interTileSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) long long minTilesPerRow;                //@synthesize minTilesPerRow=_minTilesPerRow - In the implementation block
@property (assign,nonatomic) long long maxTilesPerRow;                //@synthesize maxTilesPerRow=_maxTilesPerRow - In the implementation block
@property (assign,nonatomic) double minRowAspectRatio;                //@synthesize minRowAspectRatio=_minRowAspectRatio - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(double)interTileSpacing;
-(void)setInterTileSpacing:(double)arg1 ;
-(long long)minTilesPerRow;
-(void)setMinTilesPerRow:(long long)arg1 ;
-(long long)maxTilesPerRow;
-(void)setMaxTilesPerRow:(long long)arg1 ;
-(double)minRowAspectRatio;
-(void)setMinRowAspectRatio:(double)arg1 ;
@end

