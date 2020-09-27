/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class Protocol, NSDictionary;

@interface RTEntitlementProvider : NSObject {

	Protocol* _protocol;
	NSDictionary* _entitlementsDictionary;

}

@property (nonatomic,retain) NSDictionary * entitlementsDictionary;              //@synthesize entitlementsDictionary=_entitlementsDictionary - In the implementation block
@property (nonatomic,readonly) Protocol * protocol;                              //@synthesize protocol=_protocol - In the implementation block
+(id)daemonProtocolEntitlementProvider;
+(id)internalDaemonProtocolEntitlementProvider;
+(id)selectorsForProtocol:(id)arg1 ;
+(id)helperServiceProtocolEntitlementProvider;
-(id)init;
-(Protocol *)protocol;
-(BOOL)clientConnection:(id)arg1 satisfiesEntitlementRequirementsForInvocation:(id)arg2 ;
-(id)initWithProtocol:(id)arg1 entitlementsDictionary:(id)arg2 ;
-(BOOL)clientConnection:(id)arg1 hasEntitlement:(id)arg2 ;
-(NSDictionary *)entitlementsDictionary;
-(void)setEntitlementsDictionary:(NSDictionary *)arg1 ;
@end
