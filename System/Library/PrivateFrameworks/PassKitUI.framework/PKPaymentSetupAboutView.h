/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIScrollView;

@interface PKPaymentSetupAboutView : UIView {

	UILabel* _aboutTextLabel;
	UIScrollView* _scrollView;

}

@property (nonatomic,readonly) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(UIScrollView *)scrollView;
-(id)initWithBodyText:(id)arg1 detailButtonText:(id)arg2 ;
-(id)initWithBodyText:(id)arg1 ;
@end

