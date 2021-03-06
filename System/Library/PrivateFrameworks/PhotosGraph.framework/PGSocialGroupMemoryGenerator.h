/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:45 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSSet;

@interface PGSocialGroupMemoryGenerator : PGFeaturedMemoryGenerator {

	long long _socialGroupID;
	long long _year;
	NSSet* _extraFeatures;

}

@property (assign,nonatomic) long long socialGroupID;              //@synthesize socialGroupID=_socialGroupID - In the implementation block
@property (assign,nonatomic) long long year;                       //@synthesize year=_year - In the implementation block
@property (assign,nonatomic) NSSet * extraFeatures;                //@synthesize extraFeatures=_extraFeatures - In the implementation block
-(void)setYear:(long long)arg1 ;
-(long long)year;
-(void)_enumeratePotentialMemoriesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)durationForCuration;
-(unsigned long long)durationForExtendedCuration;
-(BOOL)semanticalDedupingEnabledForExtendedCuration;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(id)_potentialMemoriesForDryTesting;
-(BOOL)canFallbackToDejunkAndDedupeForShowMore;
-(NSSet *)extraFeatures;
-(void)setExtraFeatures:(NSSet *)arg1 ;
-(void)_potentialMemoriesWithSocialGroupNode:(id)arg1 inYear:(long long)arg2 result:(/*^block*/id)arg3 ;
-(long long)socialGroupID;
-(void)setSocialGroupID:(long long)arg1 ;
@end

