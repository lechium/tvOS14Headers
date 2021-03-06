/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:42 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSString, NSDictionary;

@interface BWNoiseReductionAndSharpeningParameters : NSObject {

	NSString* _portType;
	NSDictionary* _noiseReductionAndSharpeningConfiguration;

}
-(id)description;
-(void)dealloc;
-(id)portType;
-(id)noiseReductionAndSharpeningConfigurationForType:(int)arg1 gain:(float)arg2 ;
-(id)initWithPortType:(id)arg1 sensorIDDictionary:(id)arg2 ;
-(id)_noiseReductionAndSharpeningParametersForType:(int)arg1 ;
@end

