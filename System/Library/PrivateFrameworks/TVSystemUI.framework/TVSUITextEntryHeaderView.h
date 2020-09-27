/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:40 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, NSAttributedString, UILabel;

@interface TVSUITextEntryHeaderView : UIView {

	UIImageView* _imageView;
	NSAttributedString* _title;
	NSAttributedString* _message;
	UILabel* _titleView;
	UILabel* _messageView;

}

@property (nonatomic,retain) UILabel * titleView;                       //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UILabel * messageView;                     //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSAttributedString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSAttributedString * message;              //@synthesize message=_message - In the implementation block
-(NSAttributedString *)title;
-(void)setTitle:(NSAttributedString *)arg1 ;
-(NSAttributedString *)message;
-(void)setMessage:(NSAttributedString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setTitleView:(UILabel *)arg1 ;
-(UILabel *)titleView;
-(UILabel *)messageView;
-(CGRect)_titleViewFrameWithBounds:(CGRect)arg1 ;
-(CGRect)_imageViewFrameWithBounds:(CGRect)arg1 ;
-(CGRect)_messageViewFrameWithBounds:(CGRect)arg1 ;
-(void)setMessageView:(UILabel *)arg1 ;
@end
