/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:56 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSmartScaleView.h>

@protocol PXPerson;
@class UIImageView;

@interface PXPeopleScalableAvatarView : PXSmartScaleView {

	double _imageViewCornerRadius;
	BOOL _useCornerRadius;
	BOOL _useRoundAvatar;
	UIImageView* _imageView;
	id<PXPerson> _person;

}

@property (retain) UIImageView * imageView;                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) id<PXPerson> person;               //@synthesize person=_person - In the implementation block
@property (assign,nonatomic) BOOL useCornerRadius;              //@synthesize useCornerRadius=_useCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL useRoundAvatar;               //@synthesize useRoundAvatar=_useRoundAvatar - In the implementation block
-(id<PXPerson>)person;
-(void)setPerson:(id<PXPerson>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setPersonAndWaitForImage:(id)arg1 ;
-(void)setUseCornerRadius:(BOOL)arg1 ;
-(void)setUseRoundAvatar:(BOOL)arg1 ;
-(void)_updateImageViewCornerWithRadius:(double)arg1 ;
-(void)viewScaleDidChange;
-(void)updateImage;
-(void)_updateImageAndWait:(BOOL)arg1 ;
-(BOOL)useCornerRadius;
-(BOOL)useRoundAvatar;
@end

