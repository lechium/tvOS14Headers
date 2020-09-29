/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:53 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGSublayoutComposition.h>

@class PXLayoutGenerator;

@interface PXGGeneratedSublayoutComposition : PXGSublayoutComposition {

	PXLayoutGenerator* _layoutGenerator;
	PXLayoutGeometry* _layoutGeometries;
	long long _layoutGeometriesCapacity;

}

@property (nonatomic,readonly) PXLayoutGenerator * configuredLayoutGenerator; 
-(void)dealloc;
-(CGRect)contentBounds;
-(void)invalidateLayout;
-(void)referenceSizeDidChange;
-(void)updateEstimatedSublayoutGeometries;
-(void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(/*^block*/id)arg2 ;
-(PXLayoutGenerator *)configuredLayoutGenerator;
@end

