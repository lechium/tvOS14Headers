/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:37 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureRemoteQueueSinkPipeline.h>

@class BWFigVideoCaptureStream, NSString;

@interface FigCaptureVisionDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {

	BWFigVideoCaptureStream* _captureStream;
	NSString* _sourceID;
	int _sourceDeviceType;

}

@property (nonatomic,readonly) NSString * sourceID;               //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) int sourceDeviceType;              //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
+(void)initialize;
-(void)dealloc;
-(NSString *)sourceID;
-(int)sourceDeviceType;
-(int)_buildVisionDataSinkPipeline:(id)arg1 videoDataConnectionConfiguration:(id)arg2 graph:(id)arg3 visionCaptureOutput:(id)arg4 clientAuditToken:(SCD_Struct_Fi43)arg5 delegate:(id)arg6 ;
-(void)triggerVisionDataBurst;
-(id)initWithVisionDataConnectionConfiguration:(id)arg1 videoDataConnectionConfiguration:(id)arg2 graph:(id)arg3 name:(id)arg4 visionCaptureOutput:(id)arg5 captureDevice:(id)arg6 clientAuditToken:(SCD_Struct_Fi43)arg7 delegate:(id)arg8 ;
-(void)setKeypointDetectionThreshold:(float)arg1 ;
@end

