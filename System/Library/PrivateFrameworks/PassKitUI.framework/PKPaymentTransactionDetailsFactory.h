/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPaymentDataProvider;
@class PKPeerPaymentContactResolver, PKPeerPaymentWebService;

@interface PKPaymentTransactionDetailsFactory : NSObject {

	PKPeerPaymentContactResolver* _contactResolver;
	PKPeerPaymentWebService* _peerPaymentWebService;
	id<PKPaymentDataProvider> _paymentServiceDataProvider;
	long long _detailViewStyle;

}
-(id)_transactionFetcherWithTransactionSource:(id)arg1 transaction:(id)arg2 ;
-(id)initWithContactResolver:(id)arg1 peerPaymentWebService:(id)arg2 paymentServiceDataProvider:(id)arg3 detailViewStyle:(long long)arg4 ;
-(BOOL)canShowTransactionHistoryForTransaction:(id)arg1 transactionSource:(id)arg2 ;
-(id)detailViewControllerForTransaction:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 ;
-(id)historyViewControllerForTransaction:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 ;
-(void)historyViewControllerForTransaction:(id)arg1 transactionSource:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

