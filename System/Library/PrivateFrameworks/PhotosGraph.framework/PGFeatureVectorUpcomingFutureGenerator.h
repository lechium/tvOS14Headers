/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:52 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeatureVectorGenerator.h>

@class CLSHolidayCalendarEventService;

@interface PGFeatureVectorUpcomingFutureGenerator : PGFeatureVectorGenerator {

	CLSHolidayCalendarEventService* _holidayService;

}

@property (nonatomic,retain) CLSHolidayCalendarEventService * holidayService;              //@synthesize holidayService=_holidayService - In the implementation block
-(void)enumerateFeatureVectorsByTypeUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)probabilityPassWithThreshold:(double)arg1 ;
-(CLSHolidayCalendarEventService *)holidayService;
-(BOOL)_enumerateHolidayFeatureVectorsFromLocalDate:(id)arg1 toLocalDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)_enumeratePeopleEventFeatureVectorFromLocalDate:(id)arg1 toLocalDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)_enumerateCalendarEventFeatureVectorFromLocalDate:(id)arg1 toLocalDate:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setHolidayService:(CLSHolidayCalendarEventService *)arg1 ;
@end
