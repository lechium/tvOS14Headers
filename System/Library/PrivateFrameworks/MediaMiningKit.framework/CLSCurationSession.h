/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:18 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CLSCurationSession : NSObject {

	NSMutableDictionary* _curationModelBySpecification;

}
+(double)legacyAestheticScoreThresholdToBeAwesome;
+(double)legacyAestheticScoreThresholdToBeAestheticallyPrettyGood;
+(double)legacyAestheticScoreThresholdToNotBeJunk;
+(id)scoringContextWithAssets:(id)arg1 ;
+(void)addAudioClassifications:(short)arg1 toAudioClassificationCounts:(id)arg2 ;
+(short)audioClassificationsToEmphasizeWithAudioClassificationCounts:(id)arg1 threshold:(double)arg2 ;
+(void)enumerateSignalsFromAsset:(id)arg1 fullHierarchyName:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)init;
-(id)latestCurationModelForTesting;
-(id)curationModelForAsset:(id)arg1 ;
-(void)prepareAssets:(id)arg1 ;
-(unsigned long long)_latestCurationModelVersionApplicableForCurationModelSpecification:(id)arg1 ;
-(id)_curationModelWithSpecification:(id)arg1 ;
-(id)curationModelWithSpecification:(id)arg1 ;
-(id)curationModelForItemInfo:(id)arg1 options:(id)arg2 ;
-(id)curationModelWithCurationModelVersion:(unsigned long long)arg1 forAsset:(id)arg2 ;
@end
