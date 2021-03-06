/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PKPaymentTransactionDetailAmountLineItemGenerator : NSObject
-(id)lineItemsForInstallmentPlan:(id)arg1 ;
-(id)_lineItemsForPeerPaymentTransaction:(id)arg1 transactionSource:(id)arg2 ;
-(id)_lineItemsForPurchaseTransaction:(id)arg1 transactionSource:(id)arg2 associatedReceipt:(id)arg3 ;
-(id)_lineItemsForWithdrawalTransaction:(id)arg1 transactionSource:(id)arg2 ;
-(id)_rewardsLineItemsForRewards:(id)arg1 currencyCode:(id)arg2 ;
-(id)_totalTransferredItemForTransaction:(id)arg1 ;
-(id)_feeLineItemsForFees:(id)arg1 ;
-(id)_totalPaidLineItemForTransaction:(id)arg1 isUnqualified:(BOOL)arg2 ;
-(id)_foreignExchangeLineItemsForExchangeInfo:(id)arg1 ;
-(id)_primaryFundingSourceLineItemForTransaction:(id)arg1 transactionSource:(id)arg2 ;
-(id)_secondaryFundingSourceLineItemForTransaction:(id)arg1 ;
-(id)_totalSentLineItemForTransaction:(id)arg1 ;
-(id)_totalReceivedLineItemForTransaction:(id)arg1 ;
-(id)_subtotalLineItemForTransaction:(id)arg1 ;
-(id)lineItemsForTransaction:(id)arg1 transactionSource:(id)arg2 associatedTransaction:(id)arg3 associatedReceipt:(id)arg4 ;
@end

