/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:33 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDate, NSSet;

@interface PPDecayedFeedbackCounts : NSObject <MLFeatureProvider> {

	double _engagedExplicitly;
	double _engagedImplicitly;
	double _rejectedExplicitly;
	double _rejectedImplicitly;
	NSDate* _latestDate;

}

@property (nonatomic,readonly) double engagedExplicitly;               //@synthesize engagedExplicitly=_engagedExplicitly - In the implementation block
@property (nonatomic,readonly) double engagedImplicitly;               //@synthesize engagedImplicitly=_engagedImplicitly - In the implementation block
@property (nonatomic,readonly) double rejectedExplicitly;              //@synthesize rejectedExplicitly=_rejectedExplicitly - In the implementation block
@property (nonatomic,readonly) double rejectedImplicitly;              //@synthesize rejectedImplicitly=_rejectedImplicitly - In the implementation block
@property (nonatomic,readonly) NSDate * latestDate;                    //@synthesize latestDate=_latestDate - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)toDictionary;
-(NSDate *)latestDate;
-(id)initWithLatestDate:(id)arg1 engagedExplicitly:(double)arg2 engagedImplicitly:(double)arg3 rejectedExplicitly:(double)arg4 rejectedImplicitly:(double)arg5 ;
-(double)engagedExplicitly;
-(double)engagedImplicitly;
-(double)rejectedExplicitly;
-(double)rejectedImplicitly;
@end

