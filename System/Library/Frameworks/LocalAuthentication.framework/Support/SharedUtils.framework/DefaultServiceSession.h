/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ServiceSession.h>

@protocol Service;
@class NSUUID, NSString;

@interface DefaultServiceSession : NSObject <ServiceSession> {

	id<Service> _service;
	NSString* _serviceType;
	NSString* _clientID;
	NSUUID* _sessionID;

}

@property (nonatomic,readonly) NSUUID * sessionID;                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSString * serviceType;              //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) id<Service> service;                 //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSString * clientID;                 //@synthesize clientID=_clientID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)serviceType;
-(NSUUID *)sessionID;
-(id<Service>)service;
-(NSString *)clientID;
-(id)initWithService:(id)arg1 serviceType:(id)arg2 client:(id)arg3 ;
@end

