/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSArray;

@interface VNMPContext : NSObject {

	BOOL _useTimestampAdjustedDistances;
	BOOL _performClustersPostprocessing;
	BOOL _performSceneClassification;
	int _debugMode;
	int _timerMode;
	int _clusterSplitDistanceType;
	float _roiAreaThreshold;
	float _inliersRatioThreshold;
	int _numberOfKeypointsToConsider;
	float _naturalClusteringDistanceThreshold;
	NSArray* _qualityCriteriaList;

}

@property (assign) int debugMode;                                         //@synthesize debugMode=_debugMode - In the implementation block
@property (assign) int timerMode;                                         //@synthesize timerMode=_timerMode - In the implementation block
@property (assign) int clusterSplitDistanceType;                          //@synthesize clusterSplitDistanceType=_clusterSplitDistanceType - In the implementation block
@property (retain) NSArray * qualityCriteriaList;                         //@synthesize qualityCriteriaList=_qualityCriteriaList - In the implementation block
@property (assign) BOOL useTimestampAdjustedDistances;                    //@synthesize useTimestampAdjustedDistances=_useTimestampAdjustedDistances - In the implementation block
@property (assign) BOOL performClustersPostprocessing;                    //@synthesize performClustersPostprocessing=_performClustersPostprocessing - In the implementation block
@property (assign) BOOL performSceneClassification;                       //@synthesize performSceneClassification=_performSceneClassification - In the implementation block
@property (assign) float roiAreaThreshold;                                //@synthesize roiAreaThreshold=_roiAreaThreshold - In the implementation block
@property (assign) float inliersRatioThreshold;                           //@synthesize inliersRatioThreshold=_inliersRatioThreshold - In the implementation block
@property (assign) int numberOfKeypointsToConsider;                       //@synthesize numberOfKeypointsToConsider=_numberOfKeypointsToConsider - In the implementation block
@property (assign) float naturalClusteringDistanceThreshold;              //@synthesize naturalClusteringDistanceThreshold=_naturalClusteringDistanceThreshold - In the implementation block
-(int)debugMode;
-(void)setDebugMode:(int)arg1 ;
-(int)timerMode;
-(void)setTimerMode:(int)arg1 ;
-(int)clusterSplitDistanceType;
-(void)setClusterSplitDistanceType:(int)arg1 ;
-(NSArray *)qualityCriteriaList;
-(void)setQualityCriteriaList:(NSArray *)arg1 ;
-(BOOL)useTimestampAdjustedDistances;
-(void)setUseTimestampAdjustedDistances:(BOOL)arg1 ;
-(BOOL)performClustersPostprocessing;
-(void)setPerformClustersPostprocessing:(BOOL)arg1 ;
-(BOOL)performSceneClassification;
-(void)setPerformSceneClassification:(BOOL)arg1 ;
-(float)roiAreaThreshold;
-(void)setRoiAreaThreshold:(float)arg1 ;
-(float)inliersRatioThreshold;
-(void)setInliersRatioThreshold:(float)arg1 ;
-(int)numberOfKeypointsToConsider;
-(void)setNumberOfKeypointsToConsider:(int)arg1 ;
-(float)naturalClusteringDistanceThreshold;
-(void)setNaturalClusteringDistanceThreshold:(float)arg1 ;
@end

