/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:37 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWFilterRenderer.h>

@protocol MTLCommandQueue;
@class NSString, NSDictionary, FigSDOFBlurMapRendering, BWPixelBufferPool;

@interface BWStillImageMetalBlurMapRenderer : NSObject <BWFilterRenderer> {

	NSDictionary* _sensorIDDictionary;
	FigSDOFBlurMapRendering* _sdofBlurMapRenderer;
	BWPixelBufferPool* _blurMapPixelBufferPool;
	int _portraitRenderQuality;
	SCD_Struct_BW41 _imageDimensions;
	SCD_Struct_BW41 _depthDataMapDimensions;
	id<MTLCommandQueue> _mtlCommandQueue;

}

@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) BOOL supportsAnimation; 
@property (nonatomic,readonly) BOOL adjustsMetadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(short)type;
-(NSString *)displayName;
-(id)bundleOptionsDictionary;
-(int)prepareForRenderingWithParameters:(id)arg1 inputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3 ;
-(void)renderUsingParameters:(id)arg1 inputPixelBuffer:(CVBufferRef)arg2 inputSampleBuffer:(opaqueCMSampleBufferRef)arg3 originalPixelBuffer:(CVBufferRef)arg4 processedPixelBuffer:(CVBufferRef)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)adjustMetadataOfSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)supportsAnimation;
-(BOOL)adjustsMetadata;
-(id)initWithSensorIDDictionary:(id)arg1 imageDimensions:(SCD_Struct_BW41)arg2 depthDataMapDimensions:(SCD_Struct_BW41)arg3 portraitRenderQuality:(int)arg4 metalCommandQueue:(id)arg5 ;
-(int)_loadAndConfigureSDOFBlurMapRenderer;
-(int)_allocateBlurMapPixelBufferPoolForBuffersOfWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
@end

