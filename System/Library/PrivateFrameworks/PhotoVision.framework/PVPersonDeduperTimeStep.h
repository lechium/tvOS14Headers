/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:45 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotoVision/PVPersonDeduperStep.h>

@interface PVPersonDeduperTimeStep : PVPersonDeduperStep
-(id)name;
-(id)metricsKey;
-(BOOL)isPersonSimilar:(id)arg1 withOtherPerson:(id)arg2 withDistance:(float)arg3 minAgeType:(unsigned short)arg4 ;
-(void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(/*^block*/id)arg3 resultBlock:(/*^block*/id)arg4 ;
@end

