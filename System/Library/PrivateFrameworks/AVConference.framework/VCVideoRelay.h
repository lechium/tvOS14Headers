/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, NSObject;

@interface VCVideoRelay : NSObject {

	NSMutableArray* _videoCaptureSinks;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)enqueueFrame:(CVBufferRef)arg1 atTime:(SCD_Struct_AV88)arg2 cameraStatusBits:(unsigned char)arg3 ;
-(BOOL)registerForVideoFrames:(id)arg1 ;
-(BOOL)deregisterForVideoFrames:(id)arg1 ;
@end

