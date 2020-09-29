/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:42 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSourceNode.h>

@protocol OS_dispatch_group, OS_dispatch_queue, BWDetectedFacesFilterDelegate;
@class BWFigVideoCaptureDevice, BWFigVideoCaptureStream, BWFigCaptureStream, NSArray, BWDeferredMetadataCache, NSObject, BWNodeOutput, BWMultiStreamCameraSourceNodeConfiguration, NSString, BWMotionDataPreserver, NSMutableDictionary, NSDictionary, BWFigCaptureISPProcessingSession, BWDetectedFacesRingBuffer, BWDetectedObjectsInfoRingBuffer, BWStats;

@interface BWMultiStreamCameraSourceNode : BWSourceNode {

	BWFigVideoCaptureDevice* _captureDevice;
	BWFigVideoCaptureStream* _captureStream;
	BWFigCaptureStream* _stream;
	NSArray* _supportedFormats;
	BOOL _supportsDecouplingPrimaryScalerOnly;
	float _pixelsPerMicron;
	float _telePixelsPerMicron;
	unsigned _bravoShiftCorrectionFlags;
	BOOL _deferMetadataCreation;
	BWDeferredMetadataCache* _deferredMetadataCache;
	NSObject*<OS_dispatch_group> _streamEventNotificationGroup;
	NSObject*<OS_dispatch_queue> _streamEventDispatchQueue;
	BOOL _isInfraredSourceNode;
	BWNodeOutput* _previewOutput;
	BWNodeOutput* _videoCaptureOutput;
	BWNodeOutput* _stillImageOutput;
	BWNodeOutput* _detectedObjectsOutput;
	BWNodeOutput* _depthOutput;
	BWNodeOutput* _pointCloudOutput;
	BWMultiStreamCameraSourceNodeConfiguration* _configuration;
	int _resolvedFormatIndex;
	int _colorSpaceProperties;
	opaqueCMFormatDescriptionRef _depthOutputFormatDescription;
	NSString* _depthEnginePrimaryOutputID;
	BOOL _hardwareDepthFilteringSupported;
	opaqueCMFormatDescriptionRef _focusPixelDataFormatDescription;
	BOOL _shareStreamingBufferPools;
	BWStreamOutputStorage* _outputsStorage[9];
	SCD_Struct_BW105 _cameraData;
	BOOL _usePinholeCameraFocalLengthInIntrinsicMatrixCalculation;
	SCD_Struct_BW107 _sphereShiftState;
	BWMotionDataPreserver* _motionDataPreserver;
	NSMutableDictionary* _dutyCycleMetadataCache;
	float _overscanReservedInISPZoom;
	NSString* _previewStreamOutputID;
	CGSize _previewOutputOverscan;
	NSString* _videoCaptureStreamOutputID;
	NSDictionary* _videoCaptureOutputColorInfoOverride;
	BOOL _videoCaptureOutputPixelBufferAttachmentModificationAllowed;
	NSString* _stillImageStreamOutputID;
	int _firmwareStillImageOutputRetainedBufferCountOverride;
	int _currentFirmwareStillImageOutputRetainedBufferCount;
	SCD_Struct_BW41 _firmwareStillImageDimensionsAfterOverscanCropping;
	CGSize _onDemandStillOverscan;
	BOOL _stillImageOutputSushiRawAttachmentOptionEnabled;
	BWFigCaptureISPProcessingSession* _bayerProcessingSession;
	OpaqueFigSampleBufferProcessorRef _qrmSampleBufferProcessor;
	opaqueCMFormatDescriptionRef _quadraStillOutputFormatDescription;
	opaqueCMSimpleQueueRef _quadraYUVBufferQueue;
	BOOL _deferBayerProcessingSessionMetadataCreation;
	BWDetectedFacesRingBuffer* _detectedFacesRingBuffer;
	BWDetectedObjectsInfoRingBuffer* _detectedObjectsInfoRingBuffer;
	id<BWDetectedFacesFilterDelegate> _detectedFacesFilterDelegate;
	OpaqueVTPixelTransferSessionRef _stillReflectionTransferSession;
	opaqueCMFormatDescriptionRef _stillReflectionFormatDescription;
	OpaqueVTPixelTransferSessionRef _stillReflectionSecondaryTransferSession;
	opaqueCMFormatDescriptionRef _stillReflectionSecondaryFormatDescription;
	unsigned long long _infraredProjectorUptimeInUsForLowPowerSparse;
	unsigned long long _infraredProjectorUptimeInUsForHighPowerSparse;
	int _previousInfraredCaptureID;
	CGPoint _previewShift;
	float _previewScaleFactor;
	os_unfair_lock_s _previewShiftLock;
	BOOL _keepISPStreamingWhenStopping;
	BWStats* _ioSurfaceCompressionRatioStatsForRaw;
	unsigned long long _totalCompressedDataSizeForRaw;
	unsigned long long _totalUncompressedDataSizeForRaw;
	unsigned _bufferHeightForRaw;
	BOOL _rawCompressionEnabled;
	opaqueCMFormatDescriptionRef _visionDataFormatDescription;
	BOOL _discardOutputSampleBuffers;
	BOOL _streamingOutputsEnabled;

}

@property (assign,nonatomic) BOOL keepISPStreamingWhenStopping;                                                //@synthesize keepISPStreamingWhenStopping=_keepISPStreamingWhenStopping - In the implementation block
@property (readonly) BWMultiStreamCameraSourceNodeConfiguration * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSDictionary * videoCaptureOutputColorInfoOverride;                                 //@synthesize videoCaptureOutputColorInfoOverride=_videoCaptureOutputColorInfoOverride - In the implementation block
@property (assign,nonatomic) BOOL videoCaptureOutputPixelBufferAttachmentModificationAllowed;                  //@synthesize videoCaptureOutputPixelBufferAttachmentModificationAllowed=_videoCaptureOutputPixelBufferAttachmentModificationAllowed - In the implementation block
@property (readonly) BWFigVideoCaptureStream * captureStream;                                                  //@synthesize captureStream=_captureStream - In the implementation block
@property (readonly) BWNodeOutput * previewOutput;                                                             //@synthesize previewOutput=_previewOutput - In the implementation block
@property (readonly) BWNodeOutput * videoCaptureOutput;                                                        //@synthesize videoCaptureOutput=_videoCaptureOutput - In the implementation block
@property (readonly) BWNodeOutput * stillImageOutput;                                                          //@synthesize stillImageOutput=_stillImageOutput - In the implementation block
@property (readonly) BWNodeOutput * detectedObjectsOutput;                                                     //@synthesize detectedObjectsOutput=_detectedObjectsOutput - In the implementation block
@property (readonly) BWNodeOutput * depthOutput;                                                               //@synthesize depthOutput=_depthOutput - In the implementation block
@property (readonly) BWNodeOutput * pointCloudOutput;                                                          //@synthesize pointCloudOutput=_pointCloudOutput - In the implementation block
@property (nonatomic,readonly) BOOL previewOutputEnabled; 
@property (nonatomic,readonly) BOOL videoCaptureOutputEnabled; 
@property (nonatomic,readonly) BOOL stillImageOutputEnabled; 
@property (nonatomic,readonly) BOOL depthOutputEnabled; 
@property (nonatomic,readonly) BOOL hardwareDepthFilteringEnabled; 
@property (nonatomic,readonly) BOOL pointCloudOutputEnabled; 
@property (nonatomic,readonly) BOOL detectedObjectsOutputEnabled; 
@property (nonatomic,readonly) BOOL usesFirmwareStillImageOutput; 
@property (nonatomic,readonly) SCD_Struct_BW41 preferredPreviewDimensions; 
@property (nonatomic,readonly) unsigned long long infraredProjectorUptimeInUsForLowPowerSparse;                //@synthesize infraredProjectorUptimeInUsForLowPowerSparse=_infraredProjectorUptimeInUsForLowPowerSparse - In the implementation block
@property (nonatomic,readonly) unsigned long long infraredProjectorUptimeInUsForHighPowerSparse;               //@synthesize infraredProjectorUptimeInUsForHighPowerSparse=_infraredProjectorUptimeInUsForHighPowerSparse - In the implementation block
@property (nonatomic,readonly) int colorSpaceProperties;                                                       //@synthesize colorSpaceProperties=_colorSpaceProperties - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW41 firmwareStillImageDimensionsAfterOverscanCropping;              //@synthesize firmwareStillImageDimensionsAfterOverscanCropping=_firmwareStillImageDimensionsAfterOverscanCropping - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW41 videoCaptureDimensionsWithoutOverscan; 
@property (assign,nonatomic) id<BWDetectedFacesFilterDelegate> detectedFacesFilterDelegate;                    //@synthesize detectedFacesFilterDelegate=_detectedFacesFilterDelegate - In the implementation block
+(void)initialize;
-(void)dealloc;
-(BWMultiStreamCameraSourceNodeConfiguration *)configuration;
-(int)configure:(id)arg1 ;
-(OpaqueCMClockRef)clock;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(int)colorSpaceProperties;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(id)nodeSubType;
-(int)_updateOutputRequirements;
-(void)didSelectFormat:(id)arg1 forOutput:(id)arg2 ;
-(BWFigVideoCaptureStream *)captureStream;
-(BWNodeOutput *)videoCaptureOutput;
-(id)colorInfoForOutput:(id)arg1 ;
-(BWNodeOutput *)pointCloudOutput;
-(unsigned long long)infraredProjectorUptimeInUsForLowPowerSparse;
-(unsigned long long)infraredProjectorUptimeInUsForHighPowerSparse;
-(BWNodeOutput *)previewOutput;
-(int)allocateOrReuseBufferPoolsFromSourceNode:(id)arg1 ;
-(void)setDetectedFacesFilterDelegate:(id<BWDetectedFacesFilterDelegate>)arg1 ;
-(id<BWDetectedFacesFilterDelegate>)detectedFacesFilterDelegate;
-(int)prepareForStillImageCaptureWithFirmwareStillImageOutputRetainedBufferCountOverride:(int)arg1 clientBracketCount:(int)arg2 enableSushiRawAttachmentOption:(BOOL)arg3 ;
-(BOOL)pointCloudOutputEnabled;
-(BOOL)stillImageOutputEnabled;
-(BOOL)usesFirmwareStillImageOutput;
-(void)setKeepISPStreamingWhenStopping:(BOOL)arg1 ;
-(BOOL)keepISPStreamingWhenStopping;
-(void)setPreviewShift:(CGPoint)arg1 previewScaleFactor:(float)arg2 ;
-(id)initWithCaptureDevice:(id)arg1 captureStream:(id)arg2 ;
-(BOOL)previewOutputEnabled;
-(BOOL)videoCaptureOutputEnabled;
-(BOOL)detectedObjectsOutputEnabled;
-(BWNodeOutput *)detectedObjectsOutput;
-(BWNodeOutput *)stillImageOutput;
-(BOOL)hardwareDepthFilteringEnabled;
-(void)updateFormatRequirementsFromSourceNode:(id)arg1 ;
-(BWNodeOutput *)depthOutput;
-(BOOL)depthOutputEnabled;
-(SCD_Struct_BW41)preferredPreviewDimensions;
-(SCD_Struct_BW41)videoCaptureDimensionsWithoutOverscan;
-(SCD_Struct_BW41)firmwareStillImageDimensionsAfterOverscanCropping;
-(void)setVideoCaptureOutputPixelBufferAttachmentModificationAllowed:(BOOL)arg1 ;
-(void)setVideoCaptureOutputColorInfoOverride:(NSDictionary *)arg1 ;
-(void)_registerStreamOutputHandlers;
-(void)_updateBufferPoolSharingProperties;
-(void)_updateObjectDetectionMetadataRegistration;
-(void)_updateDepthSettings;
-(void)_retrieveCameraCharacterizationDataForCameraIntrinsicMatrixDelivery;
-(int)_updateGDCStrengthAndBaseZoomFactorAfterGDC;
-(int)_firmwareStillImageOutputRetainedBufferCountForClientBracketCount:(int)arg1 ;
-(BOOL)_scalerChainingEnabled;
-(int)_updateFormatIndex;
-(int)_updateOutputIDs;
-(int)_updateOutputsStorage;
-(void)_updateVideoCaptureOutputFlags;
-(void)_updateColorSpaceProperties;
-(id)_outputConfigurationForStreamingOutputID:(id)arg1 nodeOutput:(id)arg2 ;
-(id)_videoFormatRequirementsForOutputID:(id)arg1 configuration:(id)arg2 ;
-(id)_videoFormatRequirementsForDepthOutput;
-(id)_outputConfigurationForStillImageOutputID:(id)arg1 ;
-(id)_videoFormatRequirementsForStillImageQuadraOutputConfiguration:(id)arg1 videoFormatRequirements:(id)arg2 ;
-(int)_stillImageColorSpaceProperties;
-(id)_videoFormatRequirementsForPointCloudOutput;
-(int)_colorSpacePropertiesForOuputID:(id)arg1 ;
-(id)colorInfoForNonColorManagedDevicesForOutputID:(id)arg1 ;
-(SCD_Struct_BW41)videoCaptureDimensionsForColorspace;
-(id)_nodeOutputsMadeLiveByStreamOutputIndex:(int)arg1 ;
-(void)_tallyCompressedIOSurfaceStatsForSBuf:(opaqueCMSampleBufferRef)arg1 outputStorage:(BWStreamOutputStorage*)arg2 ;
-(void)_registerForStreamNotifications;
-(void)_asynchronouslyPreallocateBufferPools;
-(int)_setStreamOutputsEnabled:(BOOL)arg1 streamingOutputs:(BOOL)arg2 onDemandStillOutputs:(BOOL)arg3 ;
-(int)_setupBayerProcessingSessionForQuadraStillImageCaptures;
-(void)makeOutputsLiveIfNeeded;
-(void)_flushOutRemainingBuffers;
-(void)_unregisterStreamOutputHandlers;
-(void)_unregisterFromStreamNotifications;
-(void)_markEndOfLiveOnAllOutputs;
-(void)_reportIOSurfaceCompressionCoreAnalyticsData:(BWStreamOutputStorage*)arg1 ;
-(void)_reportIOSurfaceCompressionCoreAnalyticsDataForRaw;
-(int)_setupQRMSampleBufferProcessor;
-(CGSize)_overscanWithFOVSacrifice;
-(SCD_Struct_BW41)_calculateVideoCaptureDimensionsWithOverscan;
-(SCD_Struct_BW41)_outputDimensionsForOutputID:(id)arg1 outputConfiguration:(id)arg2 ;
-(int)_bytesPerOutputBufferForOutputConfiguration:(id)arg1 outputID:(CFStringRef)arg2 ;
-(SCD_Struct_BW41)_calculatePreviewDimensionsForBravoShiftMitigation;
-(BOOL)_shouldEnableStreamCaptureOutputForNodeOutput:(id*)arg1 ;
-(BOOL)_primaryScalerIsAvailable;
-(BOOL)_secondaryScalerIsAvailable;
-(BOOL)_secondaryScalerSupportsVideoCaptureDimensions;
-(BOOL)_preferIntermediateTapOverSecondaryScalerForPreviewOutputBasedOnBandwidth;
-(BOOL)_videoCaptureOutputRequiresScaling;
-(BOOL)_preferPrimaryScalerOverIntermediateTapForVideoOutputBasedOnBandwidth;
-(void)_updateMetadataConfigurations;
-(int)_updateDepthConfiguration;
-(int)_updateOutputConfigurations;
-(void)_updateOverscanReservedInISPZoom;
-(int)_verifyColorSpacePropertiesForAllOutputs;
-(void)_updateDutyCycleMetadataCacheForActiveFormatIndex:(long long)arg1 ;
-(int)_updateOutputIDMappingsForStreamingOutputs;
-(id)_streamOutputIDForOnDemandStills;
-(unsigned)_sensorInterfaceRawPixelFormatForSensorPixelFormat:(unsigned)arg1 compandingEnabled:(BOOL)arg2 ;
-(void)_updateStreamingOutputStorageForOutputID:(id)arg1 isVideoCaptureOutput:(BOOL)arg2 nodeOutput:(id)arg3 ;
-(id)_outputConfigurationsForAllOutputs;
-(int)_updateGDCStrengthForOutputConfigurations:(id)arg1 updatedOutputConfigurations:(id*)arg2 ;
-(int)_updateBaseZoomFactorAfterGDCFromOutputConfigurations:(id)arg1 ;
-(CGSize)_totalAvailableOverscan;
-(id)_supportedPixelFormatsForOutputID:(id)arg1 ;
-(BOOL)_shouldEnableStillImageOutput;
-(int)_markPrimaryStreamingOutput;
-(int)_bringStreamUpToDate;
-(void)_computeRetainedBufferCountForOutputStorage:(BWStreamOutputStorage*)arg1 ;
-(void)_propagatePixelBufferAttachment:(CVBufferRef)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 attachedMediaKey:(id)arg3 removeAttachmentKey:(CFStringRef)arg4 ;
-(BOOL)_serviceZoomForPTS:(SCD_Struct_BW36)arg1 ;
-(float)_ispAppliedZoomFactorFromSampleBufferMetadataDictionary:(id)arg1 outputIndex:(int)arg2 ;
-(void)_applyPreviewShiftToCropRect:(CGRect*)arg1 ;
-(CGPoint)_bravoShiftMitigationCropOffset:(opaqueCMSampleBufferRef)arg1 totalZoom:(float)arg2 ;
-(SCD_Struct_BW41)_finalPreviewOutputDimensions;
-(int)_verifyColorSpacePropertiesForOutputID:(id)arg1 matchVideoOutputsColorInfo:(id)arg2 ;
-(BOOL)_requiresOneStreamingOutputForMetadata;
-(void)_addCaptureStreamAttachmentsToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_reflectStillSampleBufferOnStreamingOutputs:(opaqueCMSampleBufferRef)arg1 captureType:(int)arg2 ;
-(void)_preserveMotionDataForSoonToBeDroppedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_prependPreservedMotionDataToSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_attachCameraIntrinsicMatrixToSampleBuffer:(opaqueCMSampleBufferRef)arg1 scaledToVideoBuffer:(BOOL)arg2 ;
-(opaqueCMSampleBufferRef)_createDepthDataSampleBufferFromVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)_createFocusPixelDataSampleBufferFromVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_propagatePixelBufferAttachmentFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 attachmentKey:(CFStringRef)arg2 usingAttachedMediaKey:(id)arg3 ;
-(void)_updateValidBufferRectForOutputIndex:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)requestedZoomFactorChanged:(float)arg1 ;
-(CGRect)_updateZoomForOutputIndex:(int)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)_tallyCompressedIOSurfaceStatsForRawForSBuf:(opaqueCMSampleBufferRef)arg1 ;
-(NSDictionary *)videoCaptureOutputColorInfoOverride;
-(BOOL)videoCaptureOutputPixelBufferAttachmentModificationAllowed;
@end

