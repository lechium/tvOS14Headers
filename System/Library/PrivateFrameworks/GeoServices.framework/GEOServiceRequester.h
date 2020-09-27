/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSMapTable;

@interface GEOServiceRequester : NSObject {

	NSMapTable* _pendingRequests;
	os_unfair_lock_s _pendingRequestsLock;

}
-(id)init;
-(void)_startWithRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 config:(id)arg4 throttleToken:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_cancelRequest:(id)arg1 ;
-(id)_validateResponse:(id)arg1 ;
@end
