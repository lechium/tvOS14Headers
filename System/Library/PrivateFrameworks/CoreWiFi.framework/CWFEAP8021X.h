/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreWiFi/CoreWiFi-Structs.h>
@class NSObject, NSString;

@interface CWFEAP8021X : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	SCDynamicStoreRef _storeRef;
	BOOL _isMonitoringEvents;
	NSString* _interfaceName;
	/*^block*/id _eventHandler;

}

@property (nonatomic,copy,readonly) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (copy) id eventHandler;                                          //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)interfaceName;
-(void)setEventHandler:(id)arg1 ;
-(id)eventHandler;
-(id)initWithInterfaceName:(id)arg1 ;
-(void)startEventMonitoring;
-(void)stopEventMonitoring;
-(BOOL)isMonitoringEvents;
-(id)supplicantState:(id*)arg1 ;
-(id)controlMode:(id*)arg1 ;
-(id)controlState:(id*)arg1 ;
-(id)clientStatus:(id*)arg1 ;
-(void)__startEventMonitoring;
@end

