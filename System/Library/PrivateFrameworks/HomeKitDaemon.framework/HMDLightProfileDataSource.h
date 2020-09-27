/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDLightProfileDataSource.h>
@class NSDate, NSTimeZone, NSDictionary;


@protocol HMDLightProfileDataSource <NSObject>
@property (copy,readonly) NSDate * date; 
@property (copy,readonly) NSTimeZone * localTimeZone; 
@property (readonly) NSDictionary * naturalLightingCurveResourceFileContent; 
@property (readonly) double naturalLightingCurveUpdateInterval; 
@property (readonly) double naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold; 
@property (readonly) long long naturalLightingEnabledMaxRetryCount; 
@property (readonly) double naturalLightingEnabledRetryInterval; 
@required
-(NSDate *)date;
-(NSTimeZone *)localTimeZone;
-(unsigned long long)millisecondsElapsedSinceStartOfDayWithDate:(id)arg1 timeZone:(id)arg2;
-(void)dispatchAfterTimeInterval:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3;
-(NSDictionary *)naturalLightingCurveResourceFileContent;
-(double)naturalLightingCurveUpdateInterval;
-(double)naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;
-(long long)naturalLightingEnabledMaxRetryCount;
-(double)naturalLightingEnabledRetryInterval;

@end


@class NSDate, NSTimeZone, NSDictionary, NSString;

@interface HMDLightProfileDataSource : HMFObject <HMDLightProfileDataSource>

@property (copy,readonly) NSDate * date; 
@property (copy,readonly) NSTimeZone * localTimeZone; 
@property (readonly) NSDictionary * naturalLightingCurveResourceFileContent; 
@property (readonly) double naturalLightingCurveUpdateInterval; 
@property (readonly) double naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold; 
@property (readonly) long long naturalLightingEnabledMaxRetryCount; 
@property (readonly) double naturalLightingEnabledRetryInterval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)date;
-(NSTimeZone *)localTimeZone;
-(unsigned long long)millisecondsElapsedSinceStartOfDayWithDate:(id)arg1 timeZone:(id)arg2 ;
-(void)dispatchAfterTimeInterval:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(NSDictionary *)naturalLightingCurveResourceFileContent;
-(double)naturalLightingCurveUpdateInterval;
-(double)naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;
-(long long)naturalLightingEnabledMaxRetryCount;
-(double)naturalLightingEnabledRetryInterval;
@end
