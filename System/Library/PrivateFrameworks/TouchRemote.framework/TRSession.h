/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class TRConnection, TRNearbyDevice, NSMutableDictionary, TRAnisetteDataHandler, NSObject;

@interface TRSession : NSObject {

	TRConnection* _connection;
	TRNearbyDevice* _nearbyDevice;
	/*^block*/id _disconnectHandler;
	NSMutableDictionary* _messageHandlerMap;
	TRAnisetteDataHandler* _anisetteDataHandler;
	NSObject*<OS_dispatch_queue> _messageHandlerMapQ;
	NSObject*<OS_dispatch_queue> _connectionQ;
	NSObject*<OS_dispatch_source> _heartbeatRequestTimer;

}

@property (nonatomic,retain) TRNearbyDevice * nearbyDevice;                                //@synthesize nearbyDevice=_nearbyDevice - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * messageHandlerMap;                      //@synthesize messageHandlerMap=_messageHandlerMap - In the implementation block
@property (nonatomic,retain) TRAnisetteDataHandler * anisetteDataHandler;                  //@synthesize anisetteDataHandler=_anisetteDataHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> messageHandlerMapQ;              //@synthesize messageHandlerMapQ=_messageHandlerMapQ - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQ;                     //@synthesize connectionQ=_connectionQ - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> heartbeatRequestTimer;                    //@synthesize heartbeatRequestTimer=_heartbeatRequestTimer - In the implementation block
@property (retain) TRConnection * connection; 
@property (getter=isConnected,readonly) BOOL connected; 
@property (nonatomic,copy) id disconnectHandler;                                           //@synthesize disconnectHandler=_disconnectHandler - In the implementation block
-(id)init;
-(void)disconnect;
-(TRConnection *)connection;
-(void)setConnection:(TRConnection *)arg1 ;
-(BOOL)isConnected;
-(void)_handleEvent:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)sendRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(id)disconnectHandler;
-(void)setDisconnectHandler:(id)arg1 ;
-(void)setRequestHandler:(/*^block*/id)arg1 forRequestClass:(Class)arg2 ;
-(id)initWithNearbyDevice:(id)arg1 ;
-(void)setEventHandler:(/*^block*/id)arg1 forEventClass:(Class)arg2 ;
-(void)startHeartbeat;
-(TRNearbyDevice *)nearbyDevice;
-(void)setNearbyDevice:(TRNearbyDevice *)arg1 ;
-(void)_respondToRequest:(id)arg1 withError:(id)arg2 ;
-(void)sendHeartbeatWithResponseHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_source>)heartbeatRequestTimer;
-(void)setHeartbeatRequestTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_handleRequest:(id)arg1 ;
-(void)_sendResponse:(id)arg1 forRequest:(id)arg2 ;
-(/*^block*/id)_handlerForEventClass:(Class)arg1 ;
-(void)_handleHeartbeatWithResponseHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_handlerForRequestClass:(Class)arg1 ;
-(void)_setMessageHandler:(id)arg1 forMessageClass:(Class)arg2 ;
-(id)_messageHandlerForMessageClass:(Class)arg1 ;
-(void)_sendHeartbeats;
-(NSMutableDictionary *)messageHandlerMap;
-(void)setMessageHandlerMap:(NSMutableDictionary *)arg1 ;
-(TRAnisetteDataHandler *)anisetteDataHandler;
-(void)setAnisetteDataHandler:(TRAnisetteDataHandler *)arg1 ;
-(NSObject*<OS_dispatch_queue>)messageHandlerMapQ;
-(void)setMessageHandlerMapQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionQ;
-(void)setConnectionQ:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
