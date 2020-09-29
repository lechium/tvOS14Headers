/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXUIViewBasicTile.h>
#import <libobjc.A.dylib/PXReusableObject.h>

@class PXImageUIView, PXImageRequester, PXImageViewSpec, NSString, UIView;

@interface PXUIImageTile : NSObject <PXChangeObserver, PXUIViewBasicTile, PXReusableObject> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	SCD_Struct_PX71 _needsUpdateFlags;
	PXImageUIView* _imageView;
	unsigned long long _animationFlags;
	PXImageRequester* _imageRequester;
	PXImageViewSpec* __spec;
	double __displayScale;
	long long __animationCount;
	CGSize __contentSize;
	CGRect __contentsRect;

}

@property (setter=_setSpec:,nonatomic,retain) PXImageViewSpec * _spec;                          //@synthesize _spec=__spec - In the implementation block
@property (assign,setter=_setContentSize:,nonatomic) CGSize _contentSize;                       //@synthesize _contentSize=__contentSize - In the implementation block
@property (assign,setter=_setDisplayScale:,nonatomic) double _displayScale;                     //@synthesize _displayScale=__displayScale - In the implementation block
@property (assign,setter=_setContentsRect:,nonatomic) CGRect _contentsRect;                     //@synthesize _contentsRect=__contentsRect - In the implementation block
@property (assign,setter=_setAnimationCount:,nonatomic) long long _animationCount;              //@synthesize _animationCount=__animationCount - In the implementation block
@property (nonatomic,retain) PXImageRequester * imageRequester;                                 //@synthesize imageRequester=_imageRequester - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
-(void)prepareForReuse;
-(CGRect)_contentsRect;
-(BOOL)_needsUpdate;
-(UIView *)view;
-(CGSize)_contentSize;
-(void)_updateIfNeeded;
-(PXImageViewSpec *)_spec;
-(void)_setSpec:(id)arg1 ;
-(void)_setNeedsUpdate;
-(void)_invalidateImage;
-(void)becomeReusable;
-(double)_displayScale;
-(void)willAnimateToGeometry:(PXTileGeometry*)arg1 toUserData:(id)arg2 withOptions:(id)arg3 ;
-(void)didAnimateToGeometry:(PXTileGeometry*)arg1 toUserData:(id)arg2 withOptions:(id)arg3 ;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)_setAnimationCount:(long long)arg1 ;
-(void)_setContentSize:(CGSize)arg1 ;
-(long long)_animationCount;
-(void)_updateImageIfNeeded;
-(void)_performChanges:(/*^block*/id)arg1 ;
-(void)_invalidateImageView;
-(void)_updateImageViewIfNeeded;
-(void)_invalidateImageRequester;
-(void)_updateImageRequesterIfNeeded;
-(void)_setContentsRect:(CGRect)arg1 ;
-(void)_setDisplayScale:(double)arg1 ;
@end

