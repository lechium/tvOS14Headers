/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentAuthorizationControllerPrivateDelegate <NSObject>
@optional
-(void)paymentAuthorizationController:(id)arg1 willFinishWithError:(id)arg2;
-(void)paymentAuthorizationController:(id)arg1 didRequestMerchantSession:(/*^block*/id)arg2;
-(void)paymentAuthorizationController:(id)arg1 didAuthorizeContextWithHandler:(/*^block*/id)arg2;
-(void)paymentAuthorizationController:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didAuthorizeDisbursementVoucher:(id)arg2 handler:(/*^block*/id)arg3;
-(void)paymentAuthorizationController:(id)arg1 didEncounterAuthorizationEvent:(unsigned long long)arg2;

@end
