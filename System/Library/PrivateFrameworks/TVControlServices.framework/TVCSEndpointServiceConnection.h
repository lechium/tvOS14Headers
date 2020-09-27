/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:13 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVControlServices.framework/TVControlServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVControlServices/TVCSEndpointServiceClientProtocol.h>

@protocol TVCSEndpointServiceConnectionDelegate;
@class NSXPCConnection, NSString;

@interface TVCSEndpointServiceConnection : NSObject <TVCSEndpointServiceClientProtocol> {

	id<TVCSEndpointServiceConnectionDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                                         //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<TVCSEndpointServiceConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<TVCSEndpointServiceConnectionDelegate>)delegate;
-(void)setDelegate:(id<TVCSEndpointServiceConnectionDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(id)serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)serviceProxy;
-(void)_handleConnectionInvalidation;
-(void)_handleConnectionInterruption;
-(void)pairedEndpointsDidChange:(id)arg1 ;
-(void)pairableEndpointsDidChange:(id)arg1 ;
@end
