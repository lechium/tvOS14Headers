/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVPlayer.h>

@class AVQueuePlayerInternal, AVPlayerMediaSelectionCriteria;

@interface AVQueuePlayer : AVPlayer {

	AVQueuePlayerInternal* _queuePlayer;

}

@property (nonatomic,retain) AVPlayerMediaSelectionCriteria * tvp_cachedAudioSelectionCriteria; 
+(void)initialize;
+(id)queuePlayerWithItems:(id)arg1 ;
-(void)setTvp_cachedAudioSelectionCriteria:(AVPlayerMediaSelectionCriteria *)arg1 ;
-(AVPlayerMediaSelectionCriteria *)tvp_cachedAudioSelectionCriteria;
-(id)init;
-(void)dealloc;
-(void)removeItem:(id)arg1 ;
-(void)removeAllItems;
-(id)items;
-(id)initWithItems:(id)arg1 ;
-(void)insertItem:(id)arg1 afterItem:(id)arg2 ;
-(void)advanceToNextItem;
-(void)setActionAtItemEnd:(long long)arg1 ;
-(long long)_defaultActionAtItemEnd;
-(BOOL)canInsertItem:(id)arg1 afterItem:(id)arg2 ;
-(BOOL)canOverlapPlaybackFromPlayerItem:(id)arg1 toPlayerItem:(id)arg2 ;
@end
