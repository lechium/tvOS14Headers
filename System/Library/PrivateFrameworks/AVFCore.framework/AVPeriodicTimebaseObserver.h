/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVTimebaseObserver.h>

@interface AVPeriodicTimebaseObserver : AVTimebaseObserver {

	SCD_Struct_AV6 _intervalRequested;
	SCD_Struct_AV6 _lastIntervalUsed;
	SCD_Struct_AV6 _lastPeriodicFireTime;
	SCD_Struct_AV6 _lastNonperiodicFireTime;
	SCD_Struct_AV6 _lastStopTime;
	unsigned _sequenceNum;
	/*^block*/id _block;

}
-(void)dealloc;
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 interval:(SCD_Struct_AV6)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_effectiveRateChanged;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(void)_fireBlockForTime:(SCD_Struct_AV6)arg1 ;
@end
