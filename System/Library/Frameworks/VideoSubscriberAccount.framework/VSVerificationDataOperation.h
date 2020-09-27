/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSOptional, AKAnisetteProvisioningController;

@interface VSVerificationDataOperation : VSAsyncOperation {

	VSOptional* _result;
	AKAnisetteProvisioningController* _provisioningController;

}

@property (retain) VSOptional * result;                                                              //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) AKAnisetteProvisioningController * provisioningController;              //@synthesize provisioningController=_provisioningController - In the implementation block
-(id)init;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)_finishWithError:(id)arg1 ;
-(void)_finishWithData:(id)arg1 ;
-(void)executionDidBegin;
-(AKAnisetteProvisioningController *)provisioningController;
-(void)_finishWithResult:(int)arg1 bytes:(char*)arg2 length:(unsigned)arg3 ;
-(void)setProvisioningController:(AKAnisetteProvisioningController *)arg1 ;
@end
