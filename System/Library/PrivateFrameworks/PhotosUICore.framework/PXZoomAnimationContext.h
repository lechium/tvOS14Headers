/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:59 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class PXNonuniformTransform, PXRegionOfInterest;


@protocol PXZoomAnimationContext <NSObject>
@property (nonatomic,readonly) long long animationType; 
@property (nonatomic,readonly) double animationDuration; 
@property (nonatomic,readonly) double fromAlpha; 
@property (nonatomic,readonly) PXNonuniformTransform * fromTransform; 
@property (nonatomic,readonly) PXRegionOfInterest * fromRegionOfInterest; 
@property (nonatomic,readonly) double toAlpha; 
@property (nonatomic,readonly) PXNonuniformTransform * toTransform; 
@property (nonatomic,readonly) PXRegionOfInterest * toRegionOfInterest; 
@property (getter=isMatchingRegionsOfInterest,nonatomic,readonly) BOOL matchingRegionsOfInterest; 
@property (nonatomic,readonly) BOOL keepsSourceRegionOfInterestContent; 
@required
-(double)animationDuration;
-(long long)animationType;
-(BOOL)keepsSourceRegionOfInterestContent;
-(long long)willBeginAnimation;
-(void)didEndAnimation:(long long)arg1;
-(void)registerCleanupHandler:(/*^block*/id)arg1;
-(double)fromAlpha;
-(PXNonuniformTransform *)fromTransform;
-(PXRegionOfInterest *)fromRegionOfInterest;
-(double)toAlpha;
-(PXNonuniformTransform *)toTransform;
-(PXRegionOfInterest *)toRegionOfInterest;
-(BOOL)isMatchingRegionsOfInterest;

@end

