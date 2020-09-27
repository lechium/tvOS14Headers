/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIResponder, UIWindow;


@protocol _UIResponderForwardable <NSObject>
@property (assign,setter=_setForwardablePhase:,nonatomic) long long _forwardablePhase; 
@property (setter=_setResponder:,nonatomic,retain) UIResponder * _responder; 
@property (nonatomic,readonly) UIWindow * window; 
@required
-(UIWindow *)window;
-(id)gestureRecognizers;
-(UIResponder *)_responder;
-(void)_setForwardablePhase:(long long)arg1;
-(long long)_responderForwardableType;
-(void)_setResponder:(id)arg1;
-(id)_forwardingRecord;
-(SEL)_responderSelectorForPhase:(long long)arg1;
-(BOOL)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
-(BOOL)_isAbandoningForwardingRecord;
-(void)_abandonForwardingRecord;
-(id)_mutableForwardingRecord;
-(long long)_forwardablePhase;

@end
