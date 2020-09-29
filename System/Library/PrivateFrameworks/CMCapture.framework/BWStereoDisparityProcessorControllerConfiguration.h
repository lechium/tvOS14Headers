/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorConfiguration.h>

@interface BWStereoDisparityProcessorControllerConfiguration : BWStillImageProcessorConfiguration {

	SCD_Struct_BW41 _inputDimensions;
	SCD_Struct_BW41 _disparityOutputDimensions;
	BOOL _shouldComputeDisparityWhenCalibrationFails;

}

@property (assign,nonatomic) SCD_Struct_BW41 inputDimensions;                              //@synthesize inputDimensions=_inputDimensions - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW41 disparityOutputDimensions;                    //@synthesize disparityOutputDimensions=_disparityOutputDimensions - In the implementation block
@property (assign,nonatomic) BOOL shouldComputeDisparityWhenCalibrationFails;              //@synthesize shouldComputeDisparityWhenCalibrationFails=_shouldComputeDisparityWhenCalibrationFails - In the implementation block
-(void)setDisparityOutputDimensions:(SCD_Struct_BW41)arg1 ;
-(void)setShouldComputeDisparityWhenCalibrationFails:(BOOL)arg1 ;
-(SCD_Struct_BW41)disparityOutputDimensions;
-(void)setInputDimensions:(SCD_Struct_BW41)arg1 ;
-(SCD_Struct_BW41)inputDimensions;
-(BOOL)shouldComputeDisparityWhenCalibrationFails;
@end

