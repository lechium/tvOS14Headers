/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WKKeyboardScrollableInternal;
#import <WebKit/WebKit-Structs.h>
@interface WKKeyboardScrollingAnimator : NSObject {

	id<WKKeyboardScrollableInternal> _scrollable;
	RetainPtr<CADisplayLink>* _displayLink;
	Optional<WebKit::KeyboardScroll> _currentScroll;
	BOOL _scrollTriggeringKeyIsPressed;
	FloatSize _velocity;
	FloatPoint _idealPosition;
	FloatPoint _currentPosition;
	FloatPoint _idealPositionForMinimumTravel;

}
-(id)init;
-(void)invalidate;
-(const KeyboardScrollParameters*)parameters;
-(void)displayLinkFired:(id)arg1 ;
-(void)stopAnimatedScroll;
-(void)stopDisplayLink;
-(Optional<WebKit::KeyboardScroll>)keyboardScrollForEvent:(id)arg1 ;
-(void)startDisplayLinkIfNeeded;
-(id)initWithScrollable:(id)arg1 ;
-(BOOL)beginWithEvent:(id)arg1 ;
-(void)handleKeyEvent:(id)arg1 ;
-(BOOL)scrollTriggeringKeyIsPressed;
-(void)willStartInteractiveScroll;
@end

