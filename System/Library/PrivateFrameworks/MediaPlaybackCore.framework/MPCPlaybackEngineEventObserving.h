/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPCPlaybackEngineEventObserving <NSObject>
@optional
-(void)engine:(id)arg1 didResetQueueWithPlaybackContext:(id)arg2 error:(id)arg3;
-(void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;
-(void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;
-(void)engine:(id)arg1 didChangeShuffleType:(long long)arg2;
-(void)engine:(id)arg1 didChangeActionAtQueueEnd:(long long)arg2;
-(void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
-(void)engine:(id)arg1 didChangeToItem:(id)arg2;
-(void)engine:(id)arg1 didChangeItemElapsedTime:(double)arg2 rate:(float)arg3;
-(void)engine:(id)arg1 didEndPlaybackOfItem:(id)arg2;
-(void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;
-(void)engine:(id)arg1 didAchieveLikelyToKeepUpWithItem:(id)arg2;
-(void)engine:(id)arg1 didReachEndOfQueueWithReason:(id)arg2;
-(void)engineDidLoseMediaServices:(id)arg1;
-(void)engineDidResetMediaServices:(id)arg1;
-(void)engine:(id)arg1 didChangeAccounts:(id)arg2;
-(void)engineWillBeginStateRestoration:(id)arg1;
-(void)engineDidEndStateRestoration:(id)arg1;

@end
