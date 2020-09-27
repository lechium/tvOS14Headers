/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:01 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IOGPU/IOGPU-Structs.h>
@interface IOGPUMTLEvent : NSObject {

	_IOGPUDevice* _deviceRef;
	unsigned _eventName;
	unsigned long long _globalTraceObjectID;

}
-(void)dealloc;
-(id)initWithDevice:(_IOGPUDevice*)arg1 ;
-(unsigned)_encodeIOGPUKernelSignalEventCommandArgs:(IOGPUKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 ;
-(unsigned)_encodeIOGPUKernelWaitEventCommandArgs:(IOGPUKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3 ;
@end
