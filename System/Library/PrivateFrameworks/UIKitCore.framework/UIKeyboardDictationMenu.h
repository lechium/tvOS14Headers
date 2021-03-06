/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardMenuView.h>

@interface UIKeyboardDictationMenu : UIKeyboardMenuView
+(id)sharedInstance;
+(id)activeInstance;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)preferredSize;
-(void)hide;
-(void)fade;
-(void)fadeWithDelay:(double)arg1 ;
-(BOOL)usesTable;
-(void)cleanupForFadeOrHide;
-(BOOL)centerPopUpOverKey;
-(void)performShowAnimation;
-(void)willShow;
-(BOOL)usesDimmingView;
@end

