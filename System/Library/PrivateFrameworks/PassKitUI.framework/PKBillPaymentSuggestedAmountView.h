/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CABackdropLayer, PKBillPaymentSuggestedAmount;

@interface PKBillPaymentSuggestedAmountView : UIView {

	CABackdropLayer* _background;
	PKBillPaymentSuggestedAmount* _suggestedAmount;

}

@property (nonatomic,readonly) PKBillPaymentSuggestedAmount * suggestedAmount;              //@synthesize suggestedAmount=_suggestedAmount - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithSuggestedAmount:(id)arg1 ;
-(PKBillPaymentSuggestedAmount *)suggestedAmount;
@end

