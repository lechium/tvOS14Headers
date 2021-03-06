/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GCControllerDirectionPad;


@protocol DigitizerValueChangedDelegate <NSObject>
@property (readonly) GCControllerDirectionPad * dpad; 
@required
-(GCControllerDirectionPad *)dpad;
-(void)digitizerTouchEvent:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(BOOL)arg5;
-(void)digitizerTouchUp:(id)arg1 timestamp:(unsigned long long)arg2 forceSkipDpadRotation:(BOOL)arg3;

@end

