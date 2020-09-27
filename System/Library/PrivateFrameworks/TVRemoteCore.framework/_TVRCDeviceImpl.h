/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _TVRCDeviceImpl <NSObject>
@optional
-(BOOL)isPaired;
-(void)sendEvent:(id)arg1 options:(id)arg2 response:(/*^block*/id)arg3;

@required
-(id)name;
-(id)identifier;
-(void)disconnect;
-(void)setDevice:(id)arg1;
-(void)connect;
-(id)model;
-(long long)connectionType;
-(void)sendButtonEvent:(id)arg1;
-(void)sendGameControllerEvent:(id)arg1;
-(BOOL)supportsTouchEvents;
-(id)alternateIdentifiers;
-(id)supportedButtons;
-(unsigned long long)pairingCapability;
-(id)keyboardController;
-(id)voiceRecorder;
-(void)setAuthenticationSupported:(BOOL)arg1;
-(void)sendTouchEvent:(id)arg1;

@end
