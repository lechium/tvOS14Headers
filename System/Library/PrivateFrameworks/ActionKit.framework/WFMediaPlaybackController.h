/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFMediaPlaybackController : NSObject
+(id)songPropertySet;
+(id)bundleIdentifierForMediaPlaybackApplication:(unsigned long long)arg1 ;
-(id)init;
-(void)getLocalPlaybackCapabilityWithCompletion:(/*^block*/id)arg1 ;
-(void)getCurrentlyPlayingMediaWithCompletion:(/*^block*/id)arg1 ;
-(void)getPreferredPlaybackOriginWithCompletion:(/*^block*/id)arg1 ;
-(void)queueMediaItems:(id)arg1 inAdditionMode:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)queueiTunesStoreItems:(id)arg1 inAdditionMode:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)queueItemsWithIdentifierSets:(id)arg1 inAdditionMode:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearQueueWithCompletion:(/*^block*/id)arg1 ;
-(void)getActivePlayerPathWithCompletion:(/*^block*/id)arg1 ;
@end
