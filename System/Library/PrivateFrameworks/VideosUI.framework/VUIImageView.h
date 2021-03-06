/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImageView.h>

@class UIImage;

@interface VUIImageView : UIImageView {

	BOOL _selected;
	UIImage* _flatImage;
	UIImage* _highlightOrSelectedImage;

}

@property (nonatomic,retain) UIImage * highlightOrSelectedImage;              //@synthesize highlightOrSelectedImage=_highlightOrSelectedImage - In the implementation block
+(id)imageWithImage:(id)arg1 existingImageView:(id)arg2 ;
-(void)setImage:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateImage;
-(UIImage *)highlightOrSelectedImage;
-(void)setHighlightOrSelectedImage:(UIImage *)arg1 ;
@end

