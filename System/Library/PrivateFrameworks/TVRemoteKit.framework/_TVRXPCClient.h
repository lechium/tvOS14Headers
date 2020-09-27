/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:36 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteKit.framework/TVRemoteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteKit/TVRXPCResponseProtocol.h>
#import <TVRemoteKit/TVRXPCRequestProtocol.h>

@protocol _TVRXPCClientDelegate;
@class NSXPCConnection, NSString;

@interface _TVRXPCClient : NSObject <TVRXPCResponseProtocol, TVRXPCRequestProtocol> {

	id<_TVRXPCClientDelegate> _delegate;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                        //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRXPCClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<_TVRXPCClientDelegate>)delegate;
-(void)setDelegate:(id<_TVRXPCClientDelegate>)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)broadcastEventToInterestedDevices:(id)arg1 ;
-(void)getCurrentEventsWithCompletion:(/*^block*/id)arg1 ;
-(void)receivedEventFromInterestedDevice:(id)arg1 ;
@end
