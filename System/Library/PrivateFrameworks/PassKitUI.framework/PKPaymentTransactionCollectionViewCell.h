/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>
#import <libobjc.A.dylib/PKPaymentTransactionCellResponder.h>

@class NSString, PKPaymentTransactionView;

@interface PKPaymentTransactionCollectionViewCell : PKDashboardCollectionViewCell <PKPaymentTransactionCellResponder> {

	NSString* _identifier;
	PKPaymentTransactionView* _transactionView;

}

@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) PKPaymentTransactionView * transactionView;              //@synthesize transactionView=_transactionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(PKPaymentTransactionView *)transactionView;
-(double)maxWidthForTransactionCellInWidth:(double)arg1 ;
@end

