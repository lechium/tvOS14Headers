/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CDInteractionRanking
@property (assign,nonatomic) unsigned long long rankAggregationMethod; 
@required
-(id)rankInteraction:(id)arg1;
-(BOOL)contactIsAllowed:(id)arg1;
-(BOOL)canRankContacts;
-(double)rankContact:(id)arg1;
-(unsigned long long)rankAggregationMethod;
-(void)setRankAggregationMethod:(unsigned long long)arg1;

@end
