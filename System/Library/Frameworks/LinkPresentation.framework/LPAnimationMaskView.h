/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIImage, UIView;

@interface LPAnimationMaskView : UIView {

	UIImage* _image;
	long long _animationOrigin;
	UIView* _imageView;

}

@property (nonatomic,retain) UIImage * image;                          //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long animationOrigin;                //@synthesize animationOrigin=_animationOrigin - In the implementation block
@property (nonatomic,retain,readonly) UIView * imageView; 
-(id)init;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UIView *)imageView;
-(void)layoutSubviews;
-(void)setAnimationOrigin:(long long)arg1 ;
-(long long)animationOrigin;
@end
