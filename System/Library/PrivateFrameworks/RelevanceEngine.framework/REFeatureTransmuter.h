/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:12 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REFeatureSet, NSArray, REFeatureMapGenerator, REFeatureMap, NSMutableOrderedSet, NSLock;

@interface REFeatureTransmuter : NSObject {

	REFeatureSet* _inputSet;
	REFeatureSet* _outputSet;
	NSArray* _orderedFeatures;
	REFeatureMapGenerator* _orderedFeatureMapGenerator;
	REFeatureMap* _scratchValues;
	unsigned long long* _scratchTaggedValues;
	REFeatureMapGenerator* _outputFeatureMapGenerator;
	NSMutableOrderedSet* _featureValuesCache;
	NSLock* _featureValuesCacheLock;

}

@property (nonatomic,readonly) REFeatureSet * inputFeatures; 
@property (nonatomic,readonly) REFeatureSet * outputFeatures; 
-(void)dealloc;
-(REFeatureSet *)outputFeatures;
-(id)transformFeatureMaps:(id)arg1 ;
-(id)_buildGraph;
-(BOOL)_supportedFeature:(id)arg1 ;
-(id)initWithInputFeatures:(id)arg1 outputFeatures:(id)arg2 outputFeatureMapGenerator:(id)arg3 ;
-(REFeatureSet *)inputFeatures;
@end

