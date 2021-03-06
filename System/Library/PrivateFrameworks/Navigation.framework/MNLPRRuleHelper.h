/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MNLPRRuleHelper : NSObject
-(id)workQueue;
-(void)fetchRulesForWaypoints:(id)arg1 forceUpdateManifest:(BOOL)arg2 forceUpdateRules:(BOOL)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_loadRules:(id)arg1 asyncCompletion:(/*^block*/id)arg2 ;
-(void)_findTileKeysForRegions:(id)arg1 forceUpdate:(BOOL)arg2 asyncCompletion:(/*^block*/id)arg3 ;
-(void)_loadTileKeys:(id)arg1 forceUpdate:(BOOL)arg2 asyncCompletion:(/*^block*/id)arg3 ;
-(void)prefetchRulesForWaypoints:(id)arg1 ;
@end

