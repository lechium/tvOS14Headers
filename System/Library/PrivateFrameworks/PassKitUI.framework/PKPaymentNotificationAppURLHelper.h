/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PKPaymentNotificationAppURLHelper : NSObject
+(id)_appURLForNotificationOfType:(id)arg1 paymentPass:(id)arg2 serviceIdentifier:(id)arg3 appLaunchToken:(id)arg4 pathSuffix:(id)arg5 usingDeviceAccountNumber:(BOOL)arg6 ;
+(BOOL)applicationExistsToHandleNotificationsForPaymentPass:(id)arg1 ;
+(id)appURLForMessageNotification:(id)arg1 pass:(id)arg2 appLaunchToken:(id)arg3 ;
+(id)appURLForTransactionNotification:(id)arg1 pass:(id)arg2 appLaunchToken:(id)arg3 ;
+(id)appURLForTransactionNotification:(id)arg1 excludeTransactionIdentifier:(BOOL)arg2 pass:(id)arg3 pathSuffix:(id)arg4 appLaunchToken:(id)arg5 ;
@end

