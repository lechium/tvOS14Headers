/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:19 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RECondition.h>

@interface REComparisonCondition : RECondition
+(id)falseCondition;
+(id)trueCondition;
+(id)conditionForLeftFeature:(id)arg1 relation:(long long)arg2 rightFeature:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_inflectionFeatureValuePairs;
-(BOOL)_validForRanking;
@end

