/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWAttachedMediaSplitNode.h>

@class BWNodeOutput;

@interface BWOverCaptureAttachedMediaSplitNode : BWAttachedMediaSplitNode {

	BWNodeOutput* _primaryFrameOutput;
	BWNodeOutput* _synchronizedSlaveFrameOutput;

}

@property (nonatomic,readonly) BWNodeOutput * primaryFrameOutput;                        //@synthesize primaryFrameOutput=_primaryFrameOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * synchronizedSlaveFrameOutput;              //@synthesize synchronizedSlaveFrameOutput=_synchronizedSlaveFrameOutput - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)initWithBackPressureExtraRetainBufferCount:(int)arg1 ;
-(void)_updateSynchronizedSlaveFrameEnabledWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleIrisMovieRequestForInput:(id)arg1 sbuf:(opaqueCMSampleBufferRef)arg2 ;
-(BWNodeOutput *)primaryFrameOutput;
-(BWNodeOutput *)synchronizedSlaveFrameOutput;
@end

