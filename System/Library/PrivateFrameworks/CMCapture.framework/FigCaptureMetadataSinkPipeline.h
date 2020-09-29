/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:43 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureRemoteQueueSinkPipeline.h>

@class BWMRCNode, BWPreviewHistogramNode, BWFaceTrackingNode, BWFaceDetectionNode, NSString, NSArray;

@interface FigCaptureMetadataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {

	BWMRCNode* _mrcNode;
	BOOL _mrcSuspended;
	BOOL _mrcConnectionDisabled;
	BWPreviewHistogramNode* _previewHistogramNode;
	BWFaceTrackingNode* _faceTrackingNode;
	BWFaceDetectionNode* _faceDetectionNode;
	NSString* _sourceID;
	int _sourceDeviceType;

}

@property (nonatomic,readonly) NSString * sourceID;                                                  //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) int sourceDeviceType;                                                 //@synthesize sourceDeviceType=_sourceDeviceType - In the implementation block
@property (nonatomic,readonly) BOOL mrcLowPowerModeEnabled; 
@property (nonatomic,readonly) NSArray * detectedObjectBoxedMetadataOutputs; 
@property (nonatomic,readonly) id<BWQRCodeSceneObserver> qrCodeSceneObserver; 
@property (assign,nonatomic) BOOL discardsMRCSampleData; 
@property (assign,getter=isMRCSuspended,nonatomic) BOOL mrcSuspended;                                //@synthesize mrcSuspended=_mrcSuspended - In the implementation block
@property (assign,getter=isMRCConnectionDisabled,nonatomic) BOOL mrcConnectionDisabled;              //@synthesize mrcConnectionDisabled=_mrcConnectionDisabled - In the implementation block
@property (assign,nonatomic) BOOL discardsFaceDetectionSampleData; 
@property (assign,nonatomic) BOOL discardsFaceTrackingSampleData; 
+(void)initialize;
-(void)dealloc;
-(NSString *)sourceID;
-(int)sourceDeviceType;
-(void)setRectOfInterest:(CGRect)arg1 ;
-(id<BWQRCodeSceneObserver>)qrCodeSceneObserver;
-(void)setDiscardsMRCSampleData:(BOOL)arg1 ;
-(void)setDiscardsFaceDetectionSampleData:(BOOL)arg1 ;
-(void)setDiscardsFaceTrackingSampleData:(BOOL)arg1 ;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 name:(id)arg3 videoPreviewOutput:(id)arg4 offlineVISMotionDataSourceOutput:(id)arg5 objectDetectionSourceOutput:(id)arg6 faceTrackingSourceOutput:(id)arg7 captureDevice:(id)arg8 faceTrackingPipelineStage:(id)arg9 clientAuditToken:(SCD_Struct_Fi43)arg10 delegate:(id)arg11 ;
-(NSArray *)detectedObjectBoxedMetadataOutputs;
-(BOOL)mrcLowPowerModeEnabled;
-(void)setMrcSuspended:(BOOL)arg1 ;
-(int)_buildMetadataSinkPipeline:(id)arg1 graph:(id)arg2 videoPreviewOutput:(id)arg3 offlineVISMotionDataSourceOutput:(id)arg4 objectDetectionSourceOutput:(id)arg5 faceTrackingSourceOutput:(id)arg6 captureDevice:(id)arg7 faceTrackingPipelineStage:(id)arg8 clientAuditToken:(SCD_Struct_Fi43)arg9 delegate:(id)arg10 ;
-(int)_buildMRCSinkPipeline:(id)arg1 graph:(id)arg2 mrcSourceOutput:(id)arg3 captureDevice:(id)arg4 ;
-(int)_buildPreviewHistogramSinkPipeline:(id)arg1 graph:(id)arg2 videoPreviewHistogramOutput:(id)arg3 captureDevice:(id)arg4 ;
-(int)_buildFaceTrackingPipeline:(id)arg1 graph:(id)arg2 videoCaptureOutput:(id)arg3 pipelineStage:(id)arg4 captureDevice:(id)arg5 ;
-(int)_buildMetadataObjectRemoteQueueSinkPipeline:(id)arg1 graph:(id)arg2 metadataNodeOutputs:(id)arg3 videoPreviewEnabled:(BOOL)arg4 deferredPrepareEnabled:(BOOL)arg5 delegate:(id)arg6 clientAuditToken:(SCD_Struct_Fi43)arg7 ;
-(BOOL)discardsMRCSampleData;
-(void)setMRCSuspended:(BOOL)arg1 ;
-(BOOL)isMRCSsuspended;
-(void)setMRCConnectionDisabled:(BOOL)arg1 ;
-(BOOL)isMRCConnectionDisabled;
-(BOOL)discardsFaceDetectionSampleData;
-(BOOL)discardsFaceTrackingSampleData;
-(BOOL)isMRCSuspended;
-(void)setMrcConnectionDisabled:(BOOL)arg1 ;
@end

