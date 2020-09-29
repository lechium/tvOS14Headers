/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:37 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSDictionary;

@interface BWInferenceConfiguration : NSObject {

	int _inferenceType;
	unsigned _priority;
	float _maximumFramesPerSecond;
	NSDictionary* _tuningParameters;

}

@property (nonatomic,readonly) int inferenceType;                        //@synthesize inferenceType=_inferenceType - In the implementation block
@property (assign,nonatomic) unsigned priority;                          //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) float maximumFramesPerSecond;               //@synthesize maximumFramesPerSecond=_maximumFramesPerSecond - In the implementation block
@property (nonatomic,copy) NSDictionary * tuningParameters;              //@synthesize tuningParameters=_tuningParameters - In the implementation block
-(void)dealloc;
-(unsigned)priority;
-(void)setPriority:(unsigned)arg1 ;
-(NSDictionary *)tuningParameters;
-(float)maximumFramesPerSecond;
-(id)initWithInferenceType:(int)arg1 ;
-(int)inferenceType;
-(void)setMaximumFramesPerSecond:(float)arg1 ;
-(void)setTuningParameters:(NSDictionary *)arg1 ;
@end

