/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>
#import <libobjc.A.dylib/BWRendererResourceProvider.h>

@protocol BWRendererResourceProvider, OS_dispatch_queue, MTLCommandQueue;
@class BWRenderList, BWRenderListProcessor, CIContext, BWStillImageMetalSDOFRenderer, BWStillImageMetalBlurMapRenderer, BWMetalColorCubeRenderer, BWColorLookupCache, BWVideoFormat, NSDictionary, BWPixelBufferPool, NSObject, NSString;

@interface BWStillImageFilterNode : BWNode <BWRendererResourceProvider> {

	BWRenderList* _renderList;
	BWRenderListProcessor* _renderListProcessor;
	id<BWRendererResourceProvider> _rendererProvider;
	CIContext* _cachedCIContext;
	BWStillImageMetalSDOFRenderer* _metalSDOFRenderer;
	BWStillImageMetalBlurMapRenderer* _metalBlurMapRenderer;
	BWMetalColorCubeRenderer* _metalFilterRenderer;
	BWColorLookupCache* _colorLookupCache;
	BWVideoFormat* _outputFormat;
	SCD_Struct_BW41 _outputDimensions;
	SCD_Struct_BW41 _maskDimensions;
	BOOL _depthDataDeliveryEnabled;
	SCD_Struct_BW41 _depthDataMapDimensions;
	NSDictionary* _sensorIDDictionary;
	int _portraitRenderQuality;
	OpaqueVTPixelTransferSessionRef _portraitDownsamplingTransferSession;
	BWPixelBufferPool* _processingBufferPool;
	NSObject*<OS_dispatch_queue> _emitQueue;
	id<MTLCommandQueue> _mtlCommandQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(id)sensorIDDictionary;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)handleStillImagePrewarmWithSettings:(id)arg1 forInput:(id)arg2 ;
-(id)provideStreamingCVAFilterRenderer;
-(id)provideCoreImageFilterRenderer;
-(id)provideStillImageMetalSDOFRenderer;
-(id)provideStillImageMetalBlurMapRenderer;
-(id)provideMetalFilterRenderer;
-(id)provideColorLookupCache;
-(id)initWithNodeConfiguration:(id)arg1 depthDataDeliveryEnabled:(BOOL)arg2 personSegmentationEnabled:(BOOL)arg3 refinedDepthEnabled:(BOOL)arg4 portraitRenderQuality:(int)arg5 ;
-(void)setSensorIDDictionary:(id)arg1 ;
-(id)_initWithNodeConfiguration:(id)arg1 depthDataDeliveryEnabled:(BOOL)arg2 personSegmentationEnabled:(BOOL)arg3 refinedDepthEnabled:(BOOL)arg4 portraitRenderQuality:(int)arg5 renderResourceProvider:(id)arg6 ;
-(int)_allocateOutputBufferPoolWithVideoFormat:(id)arg1 ;
-(void)_prepareStillImageFilterRenderersForOriginalFilters:(id)arg1 processedFilters:(id)arg2 ;
-(int)_downsampleImageForSampleBuffer:(opaqueCMSampleBufferRef)arg1 outputSampleBuffer:(opaqueCMSampleBuffer*)arg2 dimensions:(SCD_Struct_BW41)arg3 ;
-(void)_emitSampleBufferAsync:(opaqueCMSampleBufferRef)arg1 ;
-(int)_downsampleAttachedMediaForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_emitNodeErrorForErrorStatus:(int)arg1 numberOfNodeErrors:(int)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 ;
-(int)_downsamplePixelBuffer:(CVBufferRef)arg1 outputPixelBuffer:(_CVBuffer*)arg2 dimensions:(SCD_Struct_BW41)arg3 ;
-(id)_debugStringForBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end
