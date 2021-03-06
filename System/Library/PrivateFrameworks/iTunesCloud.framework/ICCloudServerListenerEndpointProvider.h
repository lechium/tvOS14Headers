/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICCloudServerListenerEndpointProviding.h>

@class NSXPCConnection, NSString;

@interface ICCloudServerListenerEndpointProvider : NSObject <ICCloudServerListenerEndpointProviding> {

	NSXPCConnection* _listenerEndpointProviderConnection;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)listenerEndpointForService:(long long)arg1 error:(id*)arg2 ;
-(id)_listenerEndpointProviderConnection;
@end

