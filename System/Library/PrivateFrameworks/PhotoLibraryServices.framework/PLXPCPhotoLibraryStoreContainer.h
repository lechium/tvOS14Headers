/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCStoreServer, NSXPCListener, NSXPCListenerEndpoint;

@interface PLXPCPhotoLibraryStoreContainer : NSObject {

	NSXPCStoreServer* _server;
	NSXPCListener* _listener;

}

@property (readonly) NSXPCStoreServer * server;                             //@synthesize server=_server - In the implementation block
@property (readonly) NSXPCListenerEndpoint * listenerEndpoint; 
+(id)newContainerWithPathManager:(id)arg1 connectionAuthorization:(id)arg2 ;
-(NSXPCStoreServer *)server;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(id)initWithServer:(id)arg1 listener:(id)arg2 ;
@end
