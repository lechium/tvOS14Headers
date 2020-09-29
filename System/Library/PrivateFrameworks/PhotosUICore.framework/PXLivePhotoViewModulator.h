/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:00 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXMutableLivePhotoViewModulator.h>
#import <libobjc.A.dylib/ISBasePlayerUIViewChangeObserver.h>

@class ISLivePhotoUIView, PXImageLayerModulator, NSString;

@interface PXLivePhotoViewModulator : NSObject <PXMutableLivePhotoViewModulator, ISBasePlayerUIViewChangeObserver> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	SCD_Struct_PX37 _needsUpdateFlags;
	ISLivePhotoUIView* _livePhotoView;
	PXImageLayerModulator* _imageModulator;
	PXImageLayerModulator* _videoModulator;

}

@property (nonatomic,readonly) PXImageLayerModulator * imageModulator;              //@synthesize imageModulator=_imageModulator - In the implementation block
@property (nonatomic,readonly) PXImageLayerModulator * videoModulator;              //@synthesize videoModulator=_videoModulator - In the implementation block
@property (nonatomic,readonly) ISLivePhotoUIView * livePhotoView;                   //@synthesize livePhotoView=_livePhotoView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)prepareForReuse;
-(BOOL)_needsUpdate;
-(void)_updateIfNeeded;
-(void)_setNeedsUpdate;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)basePlayerUIView:(id)arg1 didChange:(unsigned long long)arg2 withAnimationDuration:(double)arg3 ;
-(ISLivePhotoUIView *)livePhotoView;
-(void)setLivePhotoView:(ISLivePhotoUIView *)arg1 ;
-(id)initWithImageModulator:(id)arg1 videoModulator:(id)arg2 ;
-(void)performChanges_Private:(/*^block*/id)arg1 ;
-(void)_invalidateInput;
-(void)_updateInput;
-(PXImageLayerModulator *)imageModulator;
-(PXImageLayerModulator *)videoModulator;
@end
