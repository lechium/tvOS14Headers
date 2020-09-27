/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:44:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CUSystemMonitor;

@interface ENDeviceIdentityUtility : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	CUSystemMonitor* _systemMonitor;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) CUSystemMonitor * systemMonitor;                       //@synthesize systemMonitor=_systemMonitor - In the implementation block
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CUSystemMonitor *)systemMonitor;
-(void)setSystemMonitor:(CUSystemMonitor *)arg1 ;
-(void)_signDataWithDeviceIdentity:(id)arg1 ignoreExistingKeys:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)signDataWithDeviceIdentity:(id)arg1 ignoreExistingKeys:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithSystemMonitor:(id)arg1 ;
@end
