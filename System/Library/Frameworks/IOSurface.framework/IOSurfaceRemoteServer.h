/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/IOSurface.framework/IOSurface
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface IOSurfaceRemoteServer : NSObject {

	NSObject*<OS_xpc_object> _listener;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _clients;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> listener;               //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableArray * clients;                        //@synthesize clients=_clients - In the implementation block
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_xpc_object>)listener;
-(void)setListener:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setClients:(NSMutableArray *)arg1 ;
-(void)_handleClientConnection:(id)arg1 ;
-(NSMutableArray *)clients;
-(void)_handleClientDisconnected:(id)arg1 ;
-(id)initWithListener:(id)arg1 options:(id)arg2 ;
-(void)shutdown;
@end

