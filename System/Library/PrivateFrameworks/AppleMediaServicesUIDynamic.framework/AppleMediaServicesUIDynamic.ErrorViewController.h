/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:36 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <AppleMediaServicesUI/AMSUICommonViewController.h>
#import <libobjc.A.dylib/AMSUIDAirplaneModeInquiryDelegate.h>

@interface AppleMediaServicesUIDynamic.ErrorViewController : AMSUICommonViewController <AMSUIDAirplaneModeInquiryDelegate> {

	 automaticRetry;
	 action;
	 button;
	 errorMessage;
	 errorTitle;
	 airplaneModeInquiry;
	 cellularDataInquiry;
	 networkInquiry;
	 networkObservation;
	 $__lazy_storage_$_contentUnavailableView;

}
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)airplaneModeInquiryDidObserveChange:(id)arg1 ;
@end

