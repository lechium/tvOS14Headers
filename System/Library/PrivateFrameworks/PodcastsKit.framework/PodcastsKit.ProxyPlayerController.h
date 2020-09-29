/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:47 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/MPRequestResponseControllerDelegate.h>
#import <libobjc.A.dylib/PKPlayerController.h>

@class PKEpisode, PKDurationSnapshot;

@interface PodcastsKit.ProxyPlayerController : NSObject <MPRequestResponseControllerDelegate, PKPlayerController> {

	 currentEpisode;
	 playerResponseHandler;
	 contextExpirationTime;
	 contextTuple;
	 _currentContentItemIdentifier;
	 requestResponseController;

}

@property (retain,nonatomic) PKEpisode * currentEpisode; 
@property (readonly,nonatomic) PKDurationSnapshot * durationSnapshot; 
@property (readonly,nonatomic) double forwardJumpDuration; 
@property (readonly,nonatomic) double backwardJumpDuration; 
@property (copy,nonatomic) id playerResponseHandler; 
-(void)controller:(id)arg1 defersResponseReplacement:(/*^block*/id)arg2 ;
-(id)init;
-(void)pauseWithCompletion:(/*^block*/id)arg1 ;
-(PKEpisode *)currentEpisode;
-(void)startPlayback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)playWithCompletion:(/*^block*/id)arg1 ;
-(PKDurationSnapshot *)durationSnapshot;
-(void)seekToPositionWithElapsedTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)jumpForwardsWithCompletion:(/*^block*/id)arg1 ;
-(void)jumpBackwardsWithCompletion:(/*^block*/id)arg1 ;
-(double)forwardJumpDuration;
-(double)backwardJumpDuration;
-(id)playerResponseHandler;
-(void)setPlayerResponseHandler:(id)arg1 ;
-(void)setManifest:(id)arg1 startPlayback:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCurrentEpisode:(PKEpisode *)arg1 ;
@end

