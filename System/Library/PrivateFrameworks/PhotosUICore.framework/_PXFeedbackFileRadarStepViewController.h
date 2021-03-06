/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <UIKitCore/UIViewController.h>

@class NSString;

@interface _PXFeedbackFileRadarStepViewController : UIViewController {

	NSString* _messageTitle;
	NSString* _message;
	NSString* _buttonTitle;
	/*^block*/id _buttonActionHandler;

}

@property (nonatomic,copy) NSString * messageTitle;              //@synthesize messageTitle=_messageTitle - In the implementation block
@property (nonatomic,copy) NSString * message;                   //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * buttonTitle;               //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy) id buttonActionHandler;               //@synthesize buttonActionHandler=_buttonActionHandler - In the implementation block
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)viewDidLoad;
-(NSString *)buttonTitle;
-(void)setButtonTitle:(NSString *)arg1 ;
-(void)setMessageTitle:(NSString *)arg1 ;
-(NSString *)messageTitle;
-(id)buttonActionHandler;
-(void)setButtonActionHandler:(id)arg1 ;
@end

