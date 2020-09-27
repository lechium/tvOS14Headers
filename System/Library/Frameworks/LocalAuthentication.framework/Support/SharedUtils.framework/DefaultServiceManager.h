/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SharedUtils/BaseManagedService.h>
#import <libobjc.A.dylib/ServiceManager.h>
#import <libobjc.A.dylib/ServiceProvider.h>

@class NSMutableDictionary, NSString;

@interface DefaultServiceManager : BaseManagedService <ServiceManager, ServiceProvider> {

	NSMutableDictionary* _sessions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
-(id)init;
-(void)bootstrapSessionServiceType:(id)arg1 serviceClientID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)bootstrapSessionServiceType:(id)arg1 serviceClientID:(id)arg2 serviceClientConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)shutdownSessionsWithServiceClientID:(id)arg1 ;
-(BOOL)allowsMultipleClientsForServiceType:(id)arg1 ;
-(void)_shutdownSessionsWithServiceType:(id)arg1 ;
-(void)bootstrapServiceWithType:(id)arg1 serviceClientConnection:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
