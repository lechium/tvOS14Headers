/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSUIDAirplaneModeInquiryDelegate;
@interface AMSUIDAirplaneModeInquiry : NSObject {

	id<AMSUIDAirplaneModeInquiryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AMSUIDAirplaneModeInquiryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isEnabled; 
+(id)settingsURL;
-(id<AMSUIDAirplaneModeInquiryDelegate>)delegate;
-(void)setDelegate:(id<AMSUIDAirplaneModeInquiryDelegate>)arg1 ;
-(BOOL)isEnabled;
@end
