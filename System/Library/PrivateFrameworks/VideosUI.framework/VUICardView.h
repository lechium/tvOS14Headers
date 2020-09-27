/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUICardViewLayoutFactory, _TVImageView, NSArray, UIView, VUIButton, NSString;

@interface VUICardView : UIView {

	VUICardViewLayoutFactory* _layoutFactory;
	/*^block*/id _imageSize;
	_TVImageView* _imageView;
	_TVImageView* _appImageView;
	NSArray* _labelViews;
	UIView* _overlayView;
	VUIButton* _button;
	NSString* _debugString;

}

@property (nonatomic,readonly) VUICardViewLayoutFactory * layoutFactory;              //@synthesize layoutFactory=_layoutFactory - In the implementation block
@property (nonatomic,copy) id imageSize;                                              //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) _TVImageView * appImageView;                             //@synthesize appImageView=_appImageView - In the implementation block
@property (nonatomic,copy) NSArray * labelViews;                                      //@synthesize labelViews=_labelViews - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                    //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) VUIButton * button;                                      //@synthesize button=_button - In the implementation block
@property (nonatomic,copy) NSString * debugString;                                    //@synthesize debugString=_debugString - In the implementation block
-(void)dealloc;
-(VUIButton *)button;
-(void)setButton:(VUIButton *)arg1 ;
-(id)imageSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)debugString;
-(void)setDebugString:(NSString *)arg1 ;
-(_TVImageView *)imageView;
-(void)layoutSubviews;
-(void)setImageSize:(id)arg1 ;
-(void)setImageView:(_TVImageView *)arg1 ;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(NSArray *)labelViews;
-(void)setLabelViews:(NSArray *)arg1 ;
-(void)prepareForCellReuse;
-(VUICardViewLayoutFactory *)layoutFactory;
-(void)_mainImageLoaded;
-(double)_maxTextWidthForImagePosition:(long long)arg1 width:(double)arg2 appImageLayout:(id)arg3 textLayout:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 layoutFactory:(id)arg2 ;
-(void)setAppImageView:(_TVImageView *)arg1 ;
-(_TVImageView *)appImageView;
@end
