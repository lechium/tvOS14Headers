/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface AVCaptureDeviceControlRequestQueue : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _mutableArray;

}
-(id)init;
-(void)dealloc;
-(id)head;
-(id)dequeue;
-(void)enqueueRequest:(id)arg1 ;
@end

