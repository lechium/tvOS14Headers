/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:44:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ENExposureDetectionDaemonSessionStatistics, ENExposureDetectionSummary, ENRegion, ENRegionServerExposureClassificationCriteria, ENExposureClassification;

@interface ENExposureDetectionDaemonSessionResult : NSObject {

	ENExposureDetectionDaemonSessionStatistics* _statistics;
	ENExposureDetectionSummary* _summary;
	ENRegion* _region;
	ENRegionServerExposureClassificationCriteria* _classificationCriteria;
	ENExposureClassification* _exposureClassification;
	long long _exposureClassificationStatus;

}

@property (nonatomic,copy) ENExposureDetectionDaemonSessionStatistics * statistics;                              //@synthesize statistics=_statistics - In the implementation block
@property (nonatomic,retain) ENExposureDetectionSummary * summary;                                               //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy) ENRegion * region;                                                                    //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) ENRegionServerExposureClassificationCriteria * classificationCriteria;              //@synthesize classificationCriteria=_classificationCriteria - In the implementation block
@property (nonatomic,retain) ENExposureClassification * exposureClassification;                                  //@synthesize exposureClassification=_exposureClassification - In the implementation block
@property (assign,nonatomic) long long exposureClassificationStatus;                                             //@synthesize exposureClassificationStatus=_exposureClassificationStatus - In the implementation block
-(ENRegion *)region;
-(void)setRegion:(ENRegion *)arg1 ;
-(ENExposureDetectionSummary *)summary;
-(ENExposureDetectionDaemonSessionStatistics *)statistics;
-(void)setSummary:(ENExposureDetectionSummary *)arg1 ;
-(void)setStatistics:(ENExposureDetectionDaemonSessionStatistics *)arg1 ;
-(ENRegionServerExposureClassificationCriteria *)classificationCriteria;
-(ENExposureClassification *)exposureClassification;
-(void)setClassificationCriteria:(ENRegionServerExposureClassificationCriteria *)arg1 ;
-(void)setExposureClassification:(ENExposureClassification *)arg1 ;
-(void)setExposureClassificationStatus:(long long)arg1 ;
-(long long)exposureClassificationStatus;
@end

