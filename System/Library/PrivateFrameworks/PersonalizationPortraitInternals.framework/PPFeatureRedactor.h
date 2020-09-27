/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:33 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASLock, PPTrialWrapper;

@interface PPFeatureRedactor : NSObject {

	_PASLock* _lock;
	PPTrialWrapper* _trialWrapper;

}
-(id)initWithTrialWrapper:(id)arg1 namespaceName:(id)arg2 ;
-(void)_loadAssetsWithNamespaceName:(id)arg1 ;
-(void)_loadWithAssetData:(id)arg1 ;
-(void)transformFeaturesInPlace:(id)arg1 ;
@end
