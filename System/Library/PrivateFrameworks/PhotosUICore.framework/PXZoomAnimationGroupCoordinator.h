/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:52 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXZoomAnimationCoordinator.h>

@class NSArray;

@interface PXZoomAnimationGroupCoordinator : PXZoomAnimationCoordinator {

	NSArray* _zoomAnimationCoordinators;

}

@property (nonatomic,copy,readonly) NSArray * zoomAnimationCoordinators;              //@synthesize zoomAnimationCoordinators=_zoomAnimationCoordinators - In the implementation block
-(id)init;
-(void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2 ;
-(void)animateContentForEndPointType:(long long)arg1 inView:(id)arg2 withLayerType:(long long)arg3 zoomAnimationContext:(id)arg4 ;
-(id)initWithZoomAnimationCoordinators:(id)arg1 ;
-(NSArray *)zoomAnimationCoordinators;
@end

