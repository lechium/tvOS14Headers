/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
@class NSXPCConnection, NSObject, NSError;

@interface DIBaseXPCHandler : NSObject {

	BOOL _isPrivileged;
	id _remoteProxy;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	NSError* _xpcError;

}

@property (nonatomic,retain) id remoteProxy;                                          //@synthesize remoteProxy=_remoteProxy - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,retain) NSError * xpcError;                                      //@synthesize xpcError=_xpcError - In the implementation block
@property (assign,nonatomic) BOOL isPrivileged;                                       //@synthesize isPrivileged=_isPrivileged - In the implementation block
-(id)init;
-(void)dealloc;
-(id)serviceName;
-(id)remoteObjectInterface;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)closeConnection;
-(void)createConnection;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(BOOL)connectWithError:(id*)arg1 ;
-(BOOL)isPrivileged;
-(id)remoteProxy;
-(void)setRemoteProxy:(id)arg1 ;
-(void)setXpcError:(NSError *)arg1 ;
-(NSError *)xpcError;
-(BOOL)dupStderrWithError:(id*)arg1 ;
-(void)setIsPrivileged:(BOOL)arg1 ;
-(void)signalCommandCompletedWithXpcError:(id)arg1 ;
-(BOOL)completeCommandWithError:(id*)arg1 ;
@end

