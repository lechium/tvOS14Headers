/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BoardServices/BoardServices-Structs.h>
@class BSServiceDomainSpecification, BSXPCServiceConnectionListener, NSString, NSDictionary, NSMutableArray;

@interface BSServiceDomain : NSObject {

	BSServiceDomainSpecification* _specification;
	os_unfair_lock_s _lock;
	BSXPCServiceConnectionListener* _xpcListener;
	NSString* _listenerEndpointDescription;
	NSDictionary* _identifierToService;
	NSMutableArray* _lock_incomingConnections;

}
-(id)init;
@end

