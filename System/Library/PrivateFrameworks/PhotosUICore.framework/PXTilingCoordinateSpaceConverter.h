/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:03 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXTilingCoordinateSpaceConverter : NSObject {

	BOOL _shouldCache;

}

@property (assign,nonatomic) BOOL shouldCache;              //@synthesize shouldCache=_shouldCache - In the implementation block
+(id)defaultConverter;
+(BOOL)canConvertBetweenCoordinateSpaceIdentifier:(void*)arg1 andCoordinateSpaceIdentifier:(void*)arg2 ;
+(BOOL)_canConvertBetweenCoordinateSpace:(id)arg1 andCoordinateSpace:(id)arg2 ;
-(void)invalidateCache;
-(BOOL)shouldCache;
-(void)setShouldCache:(BOOL)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpaceIdentifier:(void*)arg2 toCoordinateSpaceIdentifier:(void*)arg3 ;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpaceIdentifier:(void*)arg2 toCoordinateSpaceIdentifier:(void*)arg3 ;
-(PXTileGeometry*)convertTileGeometry:(PXTileGeometry*)arg1 toCoordinateSpaceIdentifier:(void*)arg2 ;
-(CGAffineTransform)_transformOfCoordinateSpaceIdentifier:(void*)arg1 relativeToCoordinateSpaceIdentifier:(void*)arg2 ;
-(CGAffineTransform)_transformOfCoordinateSpace:(id)arg1 relativeToCoordinateSpace:(id)arg2 ;
@end

