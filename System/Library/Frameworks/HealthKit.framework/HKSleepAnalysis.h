/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface HKSleepAnalysis : NSObject {

	NSArray* _sleepDays;
	long long _numberOfAsleepSamples;
	double _averageTimeInBed;
	double _averageTimeAsleep;

}

@property (nonatomic,copy,readonly) NSArray * sleepDays;                     //@synthesize sleepDays=_sleepDays - In the implementation block
@property (nonatomic,readonly) long long numberOfAsleepSamples;              //@synthesize numberOfAsleepSamples=_numberOfAsleepSamples - In the implementation block
@property (nonatomic,readonly) double averageTimeInBed;                      //@synthesize averageTimeInBed=_averageTimeInBed - In the implementation block
@property (nonatomic,readonly) double averageTimeAsleep;                     //@synthesize averageTimeAsleep=_averageTimeAsleep - In the implementation block
+(id)emptyAnalysis;
-(id)initWithSleepDays:(id)arg1 numberOfAsleepSamples:(long long)arg2 averageTimeInBed:(double)arg3 averageTimeAlseep:(double)arg4 ;
-(NSArray *)sleepDays;
-(long long)numberOfAsleepSamples;
-(double)averageTimeInBed;
-(double)averageTimeAsleep;
@end

