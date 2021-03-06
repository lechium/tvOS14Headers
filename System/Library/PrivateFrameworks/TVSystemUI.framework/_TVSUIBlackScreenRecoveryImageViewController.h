/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:40 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIImageView, UILabel;

@interface _TVSUIBlackScreenRecoveryImageViewController : UIViewController {

	BOOL _iterateAvailableModes;
	double _timeout;
	UIImageView* _imageView;
	UILabel* _descriptionLabel;
	UILabel* _messageLabel;

}

@property (assign,nonatomic) double timeout;                          //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                  //@synthesize messageLabel=_messageLabel - In the implementation block
@property (assign,nonatomic) BOOL iterateAvailableModes;              //@synthesize iterateAvailableModes=_iterateAvailableModes - In the implementation block
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)viewDidLoad;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)setIterateAvailableModes:(BOOL)arg1 ;
-(BOOL)iterateAvailableModes;
-(id)_monospaceHeadlineFont;
-(void)_addConstraints;
@end

