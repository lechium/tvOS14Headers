/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UIGestureRecognizerTarget : NSObject {

	id _target;
	SEL _action;

}

@property (nonatomic,__weak,readonly) id target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                    //@synthesize action=_action - In the implementation block
+(id)gestureTargetWithTarget:(id)arg1 action:(SEL)arg2 ;
-(id)description;
-(id)target;
-(SEL)action;
-(BOOL)isEqualToTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_sendActionWithGestureRecognizer:(id)arg1 ;
@end

