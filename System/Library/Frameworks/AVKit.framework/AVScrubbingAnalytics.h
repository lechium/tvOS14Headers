/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVNowPlayingTransportBar, AVPlayerController;

@interface AVScrubbingAnalytics : NSObject {

	double _lastScrubDirection;
	double _previousTransportBarTime;
	AVNowPlayingTransportBar* _transportBar;
	AVPlayerController* _playerController;
	double _pauseTimeSinceReferenceDate;
	double _startTimeSinceReferenceDate;
	double _originalAssetTime;
	unsigned long long _numberOfDirectionalChanges;

}

@property (nonatomic,retain) AVNowPlayingTransportBar * transportBar;                      //@synthesize transportBar=_transportBar - In the implementation block
@property (nonatomic,retain) AVPlayerController * playerController;                        //@synthesize playerController=_playerController - In the implementation block
@property (nonatomic,readonly) BOOL hasStarted; 
@property (nonatomic,readonly) double pauseTimeSinceReferenceDate;                         //@synthesize pauseTimeSinceReferenceDate=_pauseTimeSinceReferenceDate - In the implementation block
@property (nonatomic,readonly) double startTimeSinceReferenceDate;                         //@synthesize startTimeSinceReferenceDate=_startTimeSinceReferenceDate - In the implementation block
@property (nonatomic,readonly) double originalAssetTime;                                   //@synthesize originalAssetTime=_originalAssetTime - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfDirectionalChanges;              //@synthesize numberOfDirectionalChanges=_numberOfDirectionalChanges - In the implementation block
-(BOOL)hasStarted;
-(void)reset;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(AVPlayerController *)playerController;
-(AVNowPlayingTransportBar *)transportBar;
-(void)didPause;
-(void)didStartMovement;
-(void)willResetToPausePoint;
-(void)willCommit;
-(void)willMoveWithTranslation:(double)arg1 velocity:(double)arg2 ;
-(void)didMoveWithTranslation:(double)arg1 velocity:(double)arg2 ;
-(void)setTransportBar:(AVNowPlayingTransportBar *)arg1 ;
-(double)pauseTimeSinceReferenceDate;
-(double)startTimeSinceReferenceDate;
-(double)originalAssetTime;
-(unsigned long long)numberOfDirectionalChanges;
@end
