/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASCLockupRequest, ASCLockup, NSError;

@interface _ASCLockupResponse : NSObject {

	ASCLockupRequest* _request;
	ASCLockup* _lockup;
	NSError* _error;

}

@property (nonatomic,copy,readonly) ASCLockupRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) ASCLockup * lockup;                      //@synthesize lockup=_lockup - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                         //@synthesize error=_error - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSError *)error;
-(ASCLockupRequest *)request;
-(ASCLockup *)lockup;
-(id)initWithRequest:(id)arg1 lockup:(id)arg2 error:(id)arg3 ;
@end

