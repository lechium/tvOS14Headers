/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:39 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class BWFigCaptureDevice, NSArray, BWFigCaptureStream, NSDictionary, NSString;

@interface FigCaptureSourceStreamsContainer : NSObject {

	int _deviceType;
	int _stillImageDepthDataType;
	BWFigCaptureDevice* _device;
	NSArray* _streams;
	BWFigCaptureStream* _primaryStream;
	NSDictionary* _streamsByPortType;
	NSDictionary* _baseZoomFactorsByPortType;

}

@property (nonatomic,readonly) int deviceType;                                                           //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) int stillImageDepthDataType;                                              //@synthesize stillImageDepthDataType=_stillImageDepthDataType - In the implementation block
@property (nonatomic,readonly) BWFigCaptureStream * primaryStream;                                       //@synthesize primaryStream=_primaryStream - In the implementation block
@property (nonatomic,readonly) NSDictionary * streamsByPortType;                                         //@synthesize streamsByPortType=_streamsByPortType - In the implementation block
@property (nonatomic,readonly) NSString * portTypeSupportingDepth; 
@property (nonatomic,readonly) float minZoomFactorForDepth; 
@property (nonatomic,readonly) BWFigCaptureStream * streamProvidingSDOFRenderingParameters; 
@property (nonatomic,readonly) NSArray * switchOverZoomFactors; 
-(void)dealloc;
-(int)deviceType;
-(int)_populateStreamsFromDeviceVendorForPosition:(int)arg1 baseZoomFactorOverrides:(id)arg2 ;
-(NSString *)portTypeSupportingDepth;
-(id)initWithDeviceType:(int)arg1 position:(int)arg2 stillImageDepthDataType:(int)arg3 device:(id)arg4 baseZoomFactorOverrides:(id)arg5 ;
-(float)minZoomFactorForDepth;
-(BWFigCaptureStream *)streamProvidingSDOFRenderingParameters;
-(NSArray *)switchOverZoomFactors;
-(int)stillImageDepthDataType;
-(BWFigCaptureStream *)primaryStream;
-(NSDictionary *)streamsByPortType;
@end

