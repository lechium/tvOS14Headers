/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIWebFormRotatingAccessoryPopover.h>
#import <UIKit/UIWebFormControl.h>

@class UIWebDateTimePopoverViewController;

@interface UIWebDefaultDateTimePopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl> {

	UIWebDateTimePopoverViewController* _webDateTimeViewController;

}

@property (nonatomic,retain) UIWebDateTimePopoverViewController * _webDateTimeViewController;              //@synthesize webDateTimeViewController=_webDateTimeViewController - In the implementation block
-(void)dealloc;
-(void)clear:(id)arg1 ;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2 ;
-(void)set_webDateTimeViewController:(UIWebDateTimePopoverViewController *)arg1 ;
-(UIWebDateTimePopoverViewController *)_webDateTimeViewController;
@end
