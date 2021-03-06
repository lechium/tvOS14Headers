/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class BWInferenceDataRequirement, BWInferenceRequirement;

@interface BWInferenceDataDependency : NSObject {

	BWInferenceDataRequirement* _dataRequirement;
	BWInferenceRequirement* _inferenceRequirement;

}

@property (nonatomic,readonly) BWInferenceDataRequirement * dataRequirement;               //@synthesize dataRequirement=_dataRequirement - In the implementation block
@property (nonatomic,readonly) BWInferenceRequirement * inferenceRequirement;              //@synthesize inferenceRequirement=_inferenceRequirement - In the implementation block
-(void)dealloc;
-(BWInferenceRequirement *)inferenceRequirement;
-(BWInferenceDataRequirement *)dataRequirement;
-(id)initWithInferenceRequirement:(id)arg1 dependentOnDataRequirement:(id)arg2 ;
@end

