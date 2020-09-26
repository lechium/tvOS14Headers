//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MPAVItem, MPCPlaybackEngine, MPPlaybackContext, NSArray, NSError, NSString;

@protocol MPCPlaybackEngineEventObserving <NSObject>

@optional
- (void)engineDidResetMediaServices:(MPCPlaybackEngine *)arg1;
- (void)engineDidLoseMediaServices:(MPCPlaybackEngine *)arg1;
- (void)engineDidEndStateRestoration:(MPCPlaybackEngine *)arg1;
- (void)engineWillBeginStateRestoration:(MPCPlaybackEngine *)arg1;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeAccounts:(NSArray *)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeActionAtQueueEnd:(long long)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeRepeatType:(long long)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeShuffleType:(long long)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didReachEndOfQueueWithReason:(NSString *)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeQueueWithReason:(NSString *)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didResetQueueWithPlaybackContext:(MPPlaybackContext *)arg2 error:(NSError *)arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeItemElapsedTime:(double)arg2 rate:(float)arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 didEndPlaybackOfItem:(MPAVItem *)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didAchieveLikelyToKeepUpWithItem:(MPAVItem *)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeToItem:(MPAVItem *)arg2;
- (void)engine:(MPCPlaybackEngine *)arg1 willChangeToItem:(MPAVItem *)arg2 fromItem:(MPAVItem *)arg3;
- (void)engine:(MPCPlaybackEngine *)arg1 didChangeToState:(unsigned long long)arg2;
@end

