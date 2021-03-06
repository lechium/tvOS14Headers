/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults, MPMusicPlayerControllerNowPlaying, MPMusicPlayerQueueDescriptor;

@interface MPMusicPlayerControllerSystemCache : NSObject {

	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) MPMusicPlayerControllerNowPlaying * nowPlaying; 
@property (nonatomic,retain) MPMusicPlayerQueueDescriptor * queueDescriptor; 
@property (nonatomic,readonly) BOOL hasCachedData; 
+(id)sharedCache;
-(id)_init;
-(void)clearCache;
-(MPMusicPlayerControllerNowPlaying *)nowPlaying;
-(void)setNowPlaying:(MPMusicPlayerControllerNowPlaying *)arg1 ;
-(MPMusicPlayerQueueDescriptor *)queueDescriptor;
-(void)setQueueDescriptor:(MPMusicPlayerQueueDescriptor *)arg1 ;
-(BOOL)hasCachedData;
-(id)_objectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(void)_saveObject:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
@end

