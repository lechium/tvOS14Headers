/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface SSRemoteNotificationClient : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	int _notifyToken;

}
+(id)sharedClient;
-(id)init;
-(void)dealloc;
-(id)popQueuedNotifications;
-(void)registerForRemoteNotifications;
-(void)unregisterForRemoteNotifications;
@end

