/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPeerPaymentTargetDeviceDelegate
@required
-(void)registerDeviceWithRegistrationURL:(id)arg1 pushToken:(id)arg2 forceReregister:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)downloadPassIfNecessaryWithCompletion:(/*^block*/id)arg1;

@end
