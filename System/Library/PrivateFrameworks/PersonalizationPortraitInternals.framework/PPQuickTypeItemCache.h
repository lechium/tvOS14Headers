/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet, NSMutableDictionary;

@interface PPQuickTypeItemCache : NSObject {

	NSMutableOrderedSet* _keys;
	NSMutableDictionary* _entries;

}
-(id)init;
-(void)clear;
-(id)entryWithKey:(id)arg1 ;
-(void)setEntry:(id)arg1 key:(id)arg2 ;
@end
