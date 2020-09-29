/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:08 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OS_dispatch_queue;
@class UIView, CAShapeLayer, UIImageView, NSObject, _PXLivePhotoTrimScrubberLoupeViewImageRequest, AVAsset, AVVideoComposition;

@interface PXLivePhotoTrimScrubberLoupeView : UIView {

	UIView* _container;
	CAShapeLayer* _maskLayer;
	UIImageView* _imageView;
	BOOL _imageIsValid;
	NSObject*<OS_dispatch_queue> _workQueue;
	_PXLivePhotoTrimScrubberLoupeViewImageRequest* _currentImageRequest;
	SCD_Struct_PX8 _frameTime;
	CAShapeLayer* _borderLayer;
	BOOL _playheadIsValid;
	double _needleWidth;
	unsigned long long _playheadStyle;
	AVAsset* _asset;
	AVVideoComposition* _videoComposition;
	double _aspectRatio;
	UIView* _playerView;
	double _verticalInset;
	double _outerCornerRadius;
	double _innerCornerRadius;

}

@property (nonatomic,readonly) unsigned long long playheadStyle;                   //@synthesize playheadStyle=_playheadStyle - In the implementation block
@property (nonatomic,readonly) AVAsset * asset;                                    //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) AVVideoComposition * videoComposition;              //@synthesize videoComposition=_videoComposition - In the implementation block
@property (assign,nonatomic) double aspectRatio;                                   //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,retain) UIView * playerView;                                  //@synthesize playerView=_playerView - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX8 frameTime;                             //@synthesize frameTime=_frameTime - In the implementation block
@property (assign,nonatomic) double verticalInset;                                 //@synthesize verticalInset=_verticalInset - In the implementation block
@property (assign,nonatomic) double outerCornerRadius;                             //@synthesize outerCornerRadius=_outerCornerRadius - In the implementation block
@property (assign,nonatomic) double innerCornerRadius;                             //@synthesize innerCornerRadius=_innerCornerRadius - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(double)aspectRatio;
-(void)setAspectRatio:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(AVAsset *)asset;
-(void)layoutSubviews;
-(AVVideoComposition *)videoComposition;
-(void)_invalidateImage;
-(void)_updateImageIfNeeded;
-(void)_PXLivePhotoTrimScrubberLoupeView_commonInit;
-(BOOL)showPlayerView;
-(void)setShowPlayerView:(BOOL)arg1 ;
-(void)setShowNeedleWithWidth:(double)arg1 animate:(BOOL)arg2 ;
-(void)setShowLoupeThumbnailWithFrameTime:(SCD_Struct_PX8)arg1 animate:(BOOL)arg2 ;
-(void)setFrameTime:(SCD_Struct_PX8)arg1 ;
-(void)setShowLoupePlayerAnimate:(BOOL)arg1 ;
-(void)_setPlayheadStyle:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(void)setAsset:(id)arg1 videoComposition:(id)arg2 ;
-(CGRect)_loupeFrameWithBounds:(CGRect)arg1 ;
-(void)setPlayerView:(UIView *)arg1 ;
-(void)_extractImageFromImageRequest:(id)arg1 ;
-(void)_presentImage:(id)arg1 ;
-(id)_collapsedPathForBounds:(CGRect)arg1 ;
-(id)_expandedPathForBounds:(CGRect)arg1 needsCutout:(BOOL)arg2 ;
-(id)_transitionPathForBounds:(CGRect)arg1 needsCutout:(BOOL)arg2 ;
-(void)_invalidatePlayhead;
-(void)_updatePlayheadIfNeeded;
-(void)_updatePlayheadBorderAnimate:(BOOL)arg1 ;
-(unsigned long long)playheadStyle;
-(UIView *)playerView;
-(SCD_Struct_PX8)frameTime;
-(double)verticalInset;
-(void)setVerticalInset:(double)arg1 ;
-(double)outerCornerRadius;
-(void)setOuterCornerRadius:(double)arg1 ;
-(double)innerCornerRadius;
-(void)setInnerCornerRadius:(double)arg1 ;
@end

