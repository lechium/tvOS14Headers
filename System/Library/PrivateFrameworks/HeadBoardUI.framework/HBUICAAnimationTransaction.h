/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:52 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSTransaction.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class CALayer, CAAnimation, NSString;

@interface HBUICAAnimationTransaction : BSTransaction <CAAnimationDelegate> {

	CALayer* _layer;
	CAAnimation* _animation;
	NSString* _key;

}

@property (nonatomic,readonly) CALayer * layer;                      //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) CAAnimation * animation;              //@synthesize animation=_animation - In the implementation block
@property (nonatomic,readonly) NSString * key;                       //@synthesize key=_key - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)key;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(CAAnimation *)animation;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(CALayer *)layer;
-(id)initWithLayer:(id)arg1 animation:(id)arg2 ;
@end
