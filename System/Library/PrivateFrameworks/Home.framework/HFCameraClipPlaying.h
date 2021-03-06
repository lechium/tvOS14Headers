/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVQueuePlayer, HMCameraProfile, NSArray, HFCameraClipPosition, NSError;


@protocol HFCameraClipPlaying <NSObject>
@property (nonatomic,readonly) AVQueuePlayer * player; 
@property (nonatomic,readonly) HMCameraProfile * cameraProfile; 
@property (nonatomic,retain) NSArray * clips; 
@property (assign,nonatomic,__weak) id<HFCameraClipPlayerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<HFCameraClipScrubbing> scrubber; 
@property (nonatomic,copy) HFCameraClipPosition * currentPosition; 
@property (assign,nonatomic) double currentTime; 
@property (nonatomic,readonly) long long timeControlStatus; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) BOOL hasFatalError; 
@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing; 
@required
-(id<HFCameraClipPlayerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSError *)error;
-(void)pause;
-(AVQueuePlayer *)player;
-(void)play;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1;
-(HFCameraClipPosition *)currentPosition;
-(void)setCurrentPosition:(id)arg1;
-(void)removeTimeObserver:(id)arg1;
-(long long)timeControlStatus;
-(id)addPeriodicTimeObserverForInterval:(double)arg1 usingBlock:(/*^block*/id)arg2;
-(void)setClips:(id)arg1;
-(BOOL)isScrubbing;
-(void)setScrubbing:(BOOL)arg1;
-(HMCameraProfile *)cameraProfile;
-(NSArray *)clips;
-(BOOL)hasFatalError;
-(id<HFCameraClipScrubbing>)scrubber;
-(void)endScrubbingWithOffset:(double)arg1;
-(void)setScrubber:(id)arg1;

@end

