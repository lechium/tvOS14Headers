/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _FBSDisplayLayoutService;

@interface _FBSDisplayLayoutEndpointServices : NSObject {

	_FBSDisplayLayoutService* _sharedLock_services[3];
	unsigned long long _sharedLock_servicesRefCnt[3];

}
+(id)_checkoutServiceWithEndpoint:(id)arg1 qos:(char)arg2 ;
+(void)_checkinService:(id)arg1 ;
@end
