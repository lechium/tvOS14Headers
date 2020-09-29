/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:41 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@protocol DepthProcessor;
@class NSDictionary, NSString, BWStillImageNodeConfiguration;

@interface BWDepthConverterNode : BWNode {

	NSDictionary* _sensorIDDictionary;
	NSDictionary* _cameraInfoByPortType;
	BOOL _forceCPath;
	SCD_Struct_BW41 _inputDepthDimensions;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	unsigned _outputFormat;
	SCD_Struct_BW41 _outputDimensions;
	SCD_Struct_BW47 _identityExtrinsicMatrix;
	SCD_Struct_BW47 _infraredCameraExtrinsicMatrix;
	int _depthAccuracy;
	BOOL _depthLensDistortionCorrectionPolynomialsAvailable;
	SCD_Struct_BW64 _depthLensDistortionCorrectionBasePolynomial;
	SCD_Struct_BW64 _depthLensDistortionCorrectionDynamicPolynomial;
	float _depthRelativePixelSizeInMicrons;
	float _infraredCameraPixelSizeInMicrons;
	int _baseRotationDegrees;
	int _rotationDegrees;
	BOOL _mirroringEnabled;
	BOOL _streamingFilteringEnabled;
	BOOL _stillFilteringEnabled;
	int _horizontalSensorBinningFactor;
	int _verticalSensorBinningFactor;
	BOOL _depthIsAlwaysHighQuality;
	BOOL _depthOriginatesFromNeuralNetwork;
	CVBufferRef _fixedPointScaledIntermediateBuffer;
	CVBufferRef _fixedPointRotatedIntermediateBuffer;
	CVBufferRef _filteringInputBuffer;
	CVBufferRef _streamingFilteringScaledDepthInputBuffer;
	CVBufferRef _streamingFilteringScaledDepthOutputBuffer;
	CVBufferRef _filteringScaledYUVBuffer;
	CVBufferRef _filteringOutputBuffer;
	BOOL _conversionAfterFilteringRequired;
	BOOL _depthFromInfrared;
	NSString* _depthProcessorClassName;
	FigPhotoScaleAndRotateSessionRef _scaler;
	id<DepthProcessor> _depthProcessor;
	int _depthBufferOriginalExifOrientation;
	int _depthBufferFinalExifOrientation;
	BOOL _workIntervalHintsEnabled;
	work_intervalRef _workInterval;
	BWStillImageNodeConfiguration* _nodeConfiguration;

}
+(void)initialize;
-(void)dealloc;
-(unsigned)outputFormat;
-(void)setOutputFormat:(unsigned)arg1 ;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(id)nodeType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeSubType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(int)rotationDegrees;
-(void)setRotationDegrees:(int)arg1 ;
-(void)_updateOutputRequirements;
-(int)horizontalSensorBinningFactor;
-(void)setHorizontalSensorBinningFactor:(int)arg1 ;
-(int)verticalSensorBinningFactor;
-(void)setVerticalSensorBinningFactor:(int)arg1 ;
-(void)setOutputDimensions:(SCD_Struct_BW41)arg1 ;
-(SCD_Struct_BW41)outputDimensions;
-(BOOL)mirroringEnabled;
-(id)initWithNodeConfiguration:(id)arg1 cameraInfoByPortType:(id)arg2 sensorIDDictionary:(id)arg3 rgbPersonSegmentationEnabled:(BOOL)arg4 depthIsAlwaysHighQuality:(BOOL)arg5 depthOriginatesFromNeuralNetwork:(BOOL)arg6 ;
-(void)setStillFilteringEnabled:(BOOL)arg1 ;
-(void)setBaseRotationDegrees:(int)arg1 ;
-(int)_parseCameraInfo;
-(int)_loadAndConfigureDepthProcessorClass:(id)arg1 ;
-(int)_computeConversionParametersFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 convertOptionsOut:(SCD_Struct_BW102*)arg2 ;
-(int)_convertDepthDisparityToFloat_NEON:(CVBufferRef)arg1 dst:(CVBufferRef)arg2 options:(SCD_Struct_BW102*)arg3 ;
-(int)_convertDepthDisparityToFloat_C:(CVBufferRef)arg1 dst:(CVBufferRef)arg2 options:(SCD_Struct_BW102*)arg3 ;
-(int)convertToFloatAndRotate:(opaqueCMSampleBufferRef)arg1 inputSampleBuffer:(opaqueCMSampleBufferRef)arg2 outputPixelBuffer:(CVBufferRef)arg3 ;
-(int)filterBuffer:(CVBufferRef)arg1 outputPixelBuffer:(CVBufferRef)arg2 imageSampleBuffer:(opaqueCMSampleBufferRef)arg3 depthSampleBuffer:(opaqueCMSampleBufferRef)arg4 ;
-(id)_depthMetadataDictionaryFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 orientation:(unsigned)arg2 stillFilteringRequested:(BOOL)arg3 ;
-(int)rotateAndScaleImagePixelBuffer:(CVBufferRef)arg1 depthPixelBuffer:(CVBufferRef)arg2 to:(CVBufferRef)arg3 rotationAngle:(int)arg4 flip:(BOOL)arg5 ;
-(int)baseRotationDegrees;
-(void)setStreamingFilteringEnabled:(BOOL)arg1 ;
-(BOOL)streamingFilteringEnabled;
-(BOOL)stillFilteringEnabled;
@end

