/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:12 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL, NSData, NSString;

@interface TVCKPushNotificationTypeOperation : NSOperation {

	NSURL* _url;
	NSData* _body;
	NSString* _debugStr;

}

@property (nonatomic,copy,readonly) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSData * body;                    //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * debugStr;              //@synthesize debugStr=_debugStr - In the implementation block
-(NSURL *)url;
-(void)main;
-(NSData *)body;
-(id)initWithURL:(id)arg1 body:(id)arg2 debugStr:(id)arg3 ;
-(NSString *)debugStr;
@end

