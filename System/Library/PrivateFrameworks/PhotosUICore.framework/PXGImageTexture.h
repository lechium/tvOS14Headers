/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:51 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGBaseTexture.h>

@interface PXGImageTexture : PXGBaseTexture {

	CGImageRef _sourceCGImage;
	CVBufferRef _sourceCVPixelBuffer;

}

@property (assign,nonatomic) CGImageRef sourceCGImage; 
@property (assign,nonatomic) CVBufferRef sourceCVPixelBuffer; 
@property (nonatomic,readonly)  orientationTransform; 
+(id)_sharedCIContext;
-(id)init;
-(void)dealloc;
-(CGImageRef)imageRepresentation;
-(void)setSourceCGImage:(CGImageRef)arg1 ;
-(CGImageRef)sourceCGImage;
-(void)setSourceCVPixelBuffer:(CVBufferRef)arg1 ;
-(CVBufferRef)sourceCVPixelBuffer;
-()orientationTransform;
-(void)getTextureInfos:({?=}*)arg1 forSpriteIndexes:(unsigned*)arg2 geometries:(const SCD_Struct_PX11*)arg3 spriteStyles:(const SCD_Struct_PX14*)arg4 spriteInfos:(const SCD_Struct_PX15*)arg5 screenScale:(double)arg6 count:(unsigned)arg7 ;
@end

