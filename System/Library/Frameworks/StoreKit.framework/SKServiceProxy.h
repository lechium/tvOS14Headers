/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSXPCConnection;

@interface SKServiceProxy : NSObject {

	NSLock* _serviceConnectionLock;
	NSXPCConnection* _serviceConnection;

}
+(id)serviceProxy;
+(id)inAppServiceInterface;
+(id)inAppClientInterface;
-(id)init;
-(id)objectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)serviceConnection;
-(void)_serviceConnectionInvalidated;
-(id)inAppServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)inAppService;
@end

