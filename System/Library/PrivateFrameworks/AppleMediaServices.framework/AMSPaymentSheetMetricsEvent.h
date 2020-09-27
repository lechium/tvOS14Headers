/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSMetricsEvent.h>

@interface AMSPaymentSheetMetricsEvent : AMSMetricsEvent
+(id)_timestamp;
+(id)dictionaryForBiometricMatchState:(long long)arg1 didBiometricsLockout:(BOOL)arg2 ;
+(id)dictionaryForCancellationEvent:(unsigned long long)arg1 didBiometricsLockout:(BOOL)arg2 ;
+(id)dictionaryForUserAction:(long long)arg1 didBiometricsLockout:(BOOL)arg2 ;
-(void)addBiometricMatchStateFinal:(long long)arg1 ;
-(void)addClientMetadataForPurchaseInfo:(id)arg1 metricsDictionary:(id)arg2 ;
-(void)addDualActionSuccess:(BOOL)arg1 ;
-(void)addUserActions:(id)arg1 ;
@end
