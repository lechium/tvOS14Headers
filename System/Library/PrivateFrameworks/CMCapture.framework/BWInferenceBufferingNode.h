/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:41 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWInferenceNode.h>

@class BWInferenceResultRingBuffers;

@interface BWInferenceBufferingNode : BWInferenceNode {

	BWInferenceResultRingBuffers* _ringBuffers;

}

@property (nonatomic,retain,readonly) BWInferenceResultRingBuffers * ringBuffers;              //@synthesize ringBuffers=_ringBuffers - In the implementation block
-(void)dealloc;
-(BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1 ;
-(id)initWithCaptureDevice:(id)arg1 scheduler:(id)arg2 priority:(unsigned)arg3 ;
-(void)willEmitSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(int)addInferenceOfType:(int)arg1 version:(SCD_Struct_BW50)arg2 configuration:(id)arg3 ringBufferCapacity:(int)arg4 ;
-(BWInferenceResultRingBuffers *)ringBuffers;
@end

