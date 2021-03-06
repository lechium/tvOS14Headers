/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOClientRankingModelFeatureFunction.h>

@interface GEOClientRankingModelFeatureFunctionLinear : GEOClientRankingModelFeatureFunction {

	float _weight;
	float _maxRelativeValue;
	float _meanValue;

}

@property (nonatomic,readonly) float weight;                        //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) float maxRelativeValue;              //@synthesize maxRelativeValue=_maxRelativeValue - In the implementation block
@property (nonatomic,readonly) float meanValue;                     //@synthesize meanValue=_meanValue - In the implementation block
-(id)init;
-(float)weight;
-(long long)functionType;
-(id)initWithWeight:(float)arg1 maxRelativeValue:(float)arg2 meanValue:(float)arg3 ;
-(float)maxRelativeValue;
-(float)meanValue;
@end

