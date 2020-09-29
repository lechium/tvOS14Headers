/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXReusableObject.h>
#import <libobjc.A.dylib/PXAssetTile.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXAutoplayTile.h>

@class ISAnimatedImageView, PXImageRequester, PHAnimatedImage, NSString, UIView;

@interface PXAssetAnimatedImageUIViewTile : NSObject <PXReusableObject, PXAssetTile, PXUIViewBasicTile, PXAutoplayTile> {

	ISAnimatedImageView* _animatedImageView;
	long long _animatedImageRequestID;
	unsigned long long _requestCount;
	PXImageRequester* _imageRequester;
	double _cornerRadius;
	long long _desiredPlayState;
	PHAnimatedImage* __animatedImage;
	SCD_Struct_PX9 _bestPlaybackTimeRange;

}

@property (setter=_setAnimatedImage:,nonatomic,retain) PHAnimatedImage * _animatedImage;              //@synthesize _animatedImage=__animatedImage - In the implementation block
@property (nonatomic,retain) PXImageRequester * imageRequester;                                       //@synthesize imageRequester=_imageRequester - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                                     //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic) long long desiredPlayState;                                              //@synthesize desiredPlayState=_desiredPlayState - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX9 bestPlaybackTimeRange;                                    //@synthesize bestPlaybackTimeRange=_bestPlaybackTimeRange - In the implementation block
-(id)init;
-(void)prepareForReuse;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(UIView *)view;
-(PHAnimatedImage *)_animatedImage;
-(void)becomeReusable;
-(long long)desiredPlayState;
-(void)setDesiredPlayState:(long long)arg1 ;
-(SCD_Struct_PX9)bestPlaybackTimeRange;
-(void)setBestPlaybackTimeRange:(SCD_Struct_PX9)arg1 ;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(void)_updateAnimatedImageView;
-(void)_requestAnimatedImageIfNeeded;
-(void)_handleAnimatedImageResult:(id)arg1 info:(id)arg2 expectedRequestCount:(unsigned long long)arg3 ;
-(void)_setAnimatedImage:(id)arg1 ;
@end

