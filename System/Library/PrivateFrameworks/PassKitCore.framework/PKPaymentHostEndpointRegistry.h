/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PKPaymentHostEndpointRegistry : NSObject {

	NSObject*<OS_dispatch_queue> _registrySerialQueue;
	NSMutableDictionary* _hostIdentifierToEndpointMap;
	NSMutableDictionary* _processIdentifierToHostIdentifiersMap;

}
-(id)debugDescription;
-(id)init;
-(void)addListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 processIdentifier:(int)arg3 ;
-(id)takeListenerEndpointForHostIdentifier:(id)arg1 ;
-(void)removeListenerEndpointsForProcessIdentifier:(int)arg1 ;
@end
