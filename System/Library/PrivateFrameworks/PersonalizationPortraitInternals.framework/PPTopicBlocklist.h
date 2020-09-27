/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:32 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASCFBurstTrie, PPTrialWrapper;

@interface PPTopicBlocklist : NSObject {

	_PASCFBurstTrie* _blocklistTrie;
	PPTrialWrapper* _trialWrapper;

}
+(id)sharedInstance;
-(id)initWithTrialWrapper:(id)arg1 ;
-(void)_loadAssetData;
-(BOOL)shouldBlock:(id)arg1 ;
-(id)indicesOfBlockedTopicsInRecordArray:(id)arg1 ;
-(id)indicesOfBlockedTopicsInScoredTopicArray:(id)arg1 ;
@end
