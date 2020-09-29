/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSString;

@interface BWFigCaptureDeviceClient : NSObject {

	int _clientID;
	int _pid;
	NSString* _clientDescription;
	int _stealingBehavior;
	BOOL _deviceSharingWithOtherClientsAllowed;
	/*^block*/id _deviceAvailabilityChangedHandler;

}

@property (nonatomic,readonly) int clientID;                                           //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) int pid;                                                //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSString * clientDescription;                           //@synthesize clientDescription=_clientDescription - In the implementation block
@property (nonatomic,readonly) int stealingBehavior;                                   //@synthesize stealingBehavior=_stealingBehavior - In the implementation block
@property (nonatomic,readonly) BOOL deviceSharingWithOtherClientsAllowed;              //@synthesize deviceSharingWithOtherClientsAllowed=_deviceSharingWithOtherClientsAllowed - In the implementation block
@property (nonatomic,copy) id deviceAvailabilityChangedHandler;                        //@synthesize deviceAvailabilityChangedHandler=_deviceAvailabilityChangedHandler - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(void)dealloc;
-(int)pid;
-(int)clientID;
-(NSString *)clientDescription;
-(id)initWithPID:(int)arg1 clientDescription:(id)arg2 stealingBehavior:(int)arg3 deviceSharingWithOtherClientsAllowed:(BOOL)arg4 deviceAvailabilityChangedHandler:(/*^block*/id)arg5 ;
-(BOOL)canShareDeviceWithClientPID:(int)arg1 deviceAvailabilityChangedHandler:(/*^block*/id)arg2 ;
-(int)stealingBehavior;
-(BOOL)deviceSharingWithOtherClientsAllowed;
-(id)deviceAvailabilityChangedHandler;
-(void)setDeviceAvailabilityChangedHandler:(id)arg1 ;
@end

