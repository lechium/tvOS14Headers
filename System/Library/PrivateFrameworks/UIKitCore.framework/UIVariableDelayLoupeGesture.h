/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UILongPressGestureRecognizer.h>

@protocol UITextInput;
@class UIResponder;

@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer {

	UIResponder*<UITextInput> _textView;

}

@property (__weak) UIResponder*<UITextInput> textView;              //@synthesize textView=_textView - In the implementation block
-(void)invalidate;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(UIResponder*<UITextInput>)textView;
-(void)setTextView:(UIResponder*<UITextInput>)arg1 ;
-(void)startTimer;
-(BOOL)_isGestureType:(long long)arg1 ;
-(BOOL)_allowsForShortDelay;
-(BOOL)isCloseToCaret;
-(BOOL)isWithinRecentTap;
-(BOOL)shouldUseLegacyBehavior;
@end
