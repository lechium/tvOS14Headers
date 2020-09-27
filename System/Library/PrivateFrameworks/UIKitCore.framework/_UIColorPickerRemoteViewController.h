/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <UIKitCore/_UIColorPickerRemoteViewControllerHost.h>

@protocol _UIColorPickerRemoteViewControllerHost;
@class NSString;

@interface _UIColorPickerRemoteViewController : _UIRemoteViewController <_UIColorPickerRemoteViewControllerHost> {

	id<_UIColorPickerRemoteViewControllerHost> _delegate;

}

@property (assign,nonatomic,__weak) id<_UIColorPickerRemoteViewControllerHost> _delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<_UIColorPickerRemoteViewControllerHost>)_delegate;
-(BOOL)_canShowWhileLocked;
-(void)set_delegate:(id<_UIColorPickerRemoteViewControllerHost>)arg1 ;
-(void)_pickerDidSelectColor:(id)arg1 ;
-(void)_pickerDidSelectColor:(id)arg1 colorspace:(id)arg2 isVolatile:(BOOL)arg3 ;
-(void)_pickerDidShowEyedropper;
-(void)_pickerDidFloatEyedropper;
-(void)_pickerDidDismissEyedropper;
-(void)_colorPickerDidFinish;
@end
