/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:53 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UIAlertController.h>

@class _PXAlertContentViewController, UIActivityIndicatorView, UIProgressView, UIView;

@interface PXAlertController : UIAlertController {

	_PXAlertContentViewController* _contentViewController;
	UIActivityIndicatorView* _activityIndicatorView;
	UIProgressView* _progressView;
	UIView* _contentView;

}

@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
+(id)activityAlertControllerWithTitle:(id)arg1 cancelHandler:(/*^block*/id)arg2 ;
+(id)progressAlertControllerWithMessage:(id)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
@end

