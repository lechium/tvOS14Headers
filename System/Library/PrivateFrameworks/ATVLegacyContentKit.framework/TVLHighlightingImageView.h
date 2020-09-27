/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIImage;

@interface TVLHighlightingImageView : UIView {

	UIImageView* _imageView;
	UIImageView* _highlightedImageView;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * highlightedImage; 
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlightedImage:(UIImage *)arg1 ;
-(void)setHighlightProgress:(double)arg1 ;
-(UIImage *)highlightedImage;
@end
