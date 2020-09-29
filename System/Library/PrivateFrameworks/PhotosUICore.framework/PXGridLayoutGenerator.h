/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutGenerator.h>

@class NSIndexSet, PXGridLayoutMetrics;

@interface PXGridLayoutGenerator : PXLayoutGenerator {

	long long _numberOfItemsWide;
	NSIndexSet* _geometrySet;

}

@property (nonatomic,copy) PXGridLayoutMetrics * metrics; 
-(CGSize)size;
-(id)initWithMetrics:(id)arg1 ;
-(CGSize)estimatedSize;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(id)geometryKinds;
-(unsigned long long)numberOfGeometriesWithKind:(long long)arg1 ;
-(void)_getContentGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 ;
-(void)_getHeaderGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 ;
-(void)_getAdditionalGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 ;
-(void)getGeometry:(PXLayoutGeometry*)arg1 forItemAtIndex:(unsigned long long)arg2 ;
@end

