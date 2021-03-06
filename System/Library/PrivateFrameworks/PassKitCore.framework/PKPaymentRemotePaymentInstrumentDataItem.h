/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKRemoteDevice, PKRemotePaymentInstrument, PKPaymentApplication, CNContact;

@interface PKPaymentRemotePaymentInstrumentDataItem : PKPaymentDataItem

@property (nonatomic,readonly) PKRemoteDevice * remoteDevice; 
@property (nonatomic,readonly) PKRemotePaymentInstrument * remotePaymentInstrument; 
@property (nonatomic,readonly) PKPaymentApplication * paymentApplication; 
@property (nonatomic,readonly) BOOL requiresBillingAddress; 
@property (nonatomic,readonly) CNContact * billingAddress; 
+(long long)dataType;
-(id)errors;
-(PKRemoteDevice *)remoteDevice;
-(BOOL)isValidWithError:(id*)arg1 ;
-(BOOL)hasAssociatedPeerPaymentAccount;
-(PKPaymentApplication *)paymentApplication;
-(unsigned long long)peerPaymentAccountState;
-(CNContact *)billingAddress;
-(id)paymentContactFormatErrors;
-(PKRemotePaymentInstrument *)remotePaymentInstrument;
-(BOOL)requiresBillingAddress;
-(id)peerPaymentAccountBalance;
@end

