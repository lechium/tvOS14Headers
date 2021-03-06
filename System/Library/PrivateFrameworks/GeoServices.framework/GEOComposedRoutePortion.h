/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol GEOComposedRoutePortion <NSObject>
@property (nonatomic,readonly) NSRange pointRange; 
@property (nonatomic,readonly) NSRange stepRange; 
@property (nonatomic,readonly) unsigned startPointIndex; 
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) unsigned long long startStepIndex; 
@property (nonatomic,readonly) unsigned long long endStepIndex; 
@property (nonatomic,readonly) unsigned long long stepCount; 
@property (nonatomic,readonly) NSArray * steps; 
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) double expectedTime; 
@required
-(double)distance;
-(unsigned)pointCount;
-(NSArray *)steps;
-(double)expectedTime;
-(unsigned)endPointIndex;
-(NSRange)stepRange;
-(unsigned long long)endStepIndex;
-(unsigned)startPointIndex;
-(NSRange)pointRange;
-(unsigned long long)startStepIndex;
-(unsigned long long)stepCount;

@end

