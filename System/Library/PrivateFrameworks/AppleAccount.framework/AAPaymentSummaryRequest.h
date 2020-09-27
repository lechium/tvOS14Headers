/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAAppleIDSettingsRequest.h>

@class NSString;

@interface AAPaymentSummaryRequest : AAAppleIDSettingsRequest {

	NSString* _secondaryAuthToken;
	NSString* _heartbeatToken;

}

@property (nonatomic,copy) NSString * secondaryAuthToken;              //@synthesize secondaryAuthToken=_secondaryAuthToken - In the implementation block
@property (nonatomic,copy) NSString * heartbeatToken;                  //@synthesize heartbeatToken=_heartbeatToken - In the implementation block
+(Class)responseClass;
-(id)urlString;
-(NSString *)heartbeatToken;
-(void)setHeartbeatToken:(NSString *)arg1 ;
-(id)urlRequest;
-(BOOL)forceGSToken;
-(NSString *)secondaryAuthToken;
-(void)setSecondaryAuthToken:(NSString *)arg1 ;
@end
