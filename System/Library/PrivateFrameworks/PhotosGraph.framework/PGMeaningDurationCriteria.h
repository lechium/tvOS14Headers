/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGMeaningCriteria.h>

@class NSString;

@interface PGMeaningDurationCriteria : NSObject <PGMeaningCriteria> {

	BOOL _includeRoutineVisitsInDuration;
	unsigned long long _minimumDuration;

}

@property (assign,nonatomic) unsigned long long minimumDuration;               //@synthesize minimumDuration=_minimumDuration - In the implementation block
@property (assign,nonatomic) BOOL includeRoutineVisitsInDuration;              //@synthesize includeRoutineVisitsInDuration=_includeRoutineVisitsInDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg1 ;
-(NSString *)description;
-(BOOL)isValid;
-(unsigned long long)minimumDuration;
-(void)setMinimumDuration:(unsigned long long)arg1 ;
-(BOOL)passesForMomentNode:(id)arg1 ;
-(void)setIncludeRoutineVisitsInDuration:(BOOL)arg1 ;
-(BOOL)includeRoutineVisitsInDuration;
@end

