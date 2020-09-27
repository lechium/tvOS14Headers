/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_os_log;
@class NSXPCConnection, BrightnessSystemClientExportedObj, NSMutableArray, NSCondition, NSObject;

@interface BrightnessSystemClientInternal : NSObject {

	NSXPCConnection* _connection;
	id _remote;
	BrightnessSystemClientExportedObj* exportedObj;
	NSMutableArray* _clientProperties;
	NSCondition* copyPropertyForKeyWaitCondition;
	BOOL copyPropertyForKeyCompleted;
	BOOL _useSynchronousRemote;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_os_log> _logHandle;

}
-(id)init;
-(void)dealloc;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)addKeyToClientProperties:(id)arg1 ;
-(void)removeKeyFromClientProperties:(id)arg1 ;
-(void)stopXpcService;
-(void)registerNotificationBlock:(/*^block*/id)arg1 forProperties:(id)arg2 ;
-(void)addPropertiesForNotification:(id)arg1 ;
-(void)removePropertiesFromNotification:(id)arg1 ;
-(void)addPropertyForNotification:(id)arg1 ;
-(void)removePropertyFromNotification:(id)arg1 ;
@end
