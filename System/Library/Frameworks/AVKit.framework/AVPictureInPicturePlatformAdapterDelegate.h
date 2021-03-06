/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVPictureInPicturePlatformAdapterDelegate <NSObject>
@required
-(void)pictureInPicturePlatformAdapter:(id)arg1 failedToStartError:(id)arg2;
-(void)pictureInPicturePlatformAdapter:(id)arg1 prepareToStopForRestoringUserInterface:(/*^block*/id)arg2;
-(void)pictureInPicturePlatformAdapterPrepareToStopForDismissal:(id)arg1;
-(void)pictureInPicturePlatformAdapter:(id)arg1 stopPictureInPictureAndRestoreUserInterface:(BOOL)arg2;
-(void)pictureInPicturePlatformAdapter:(id)arg1 handlePlaybackCommand:(long long)arg2;
-(void)pictureInPicturePlatformAdapter:(id)arg1 statusDidChange:(long long)arg2 fromStatus:(long long)arg3;
-(void)pictureInPicturePlatformAdapterBeginReducingResourcesForEligibleOffScreenState;
-(void)pictureInPicturePlatformAdapterEndReducingResourcesForEligibleOffScreenState;

@end

