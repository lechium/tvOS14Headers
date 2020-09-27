/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <libobjc.A.dylib/MPNowPlayingPlaybackQueueDataSource.h>

@protocol TVPPlayback, TVPMPPlaybackQueueManagerDelegate;
@class NSObject, NSSet, NSMutableDictionary, NSString;

@interface TVPMPPlaybackQueueManager : NSObject <MPNowPlayingPlaybackQueueDataSource> {

	BOOL _isSoleUpdater;
	NSObject*<TVPPlayback> _player;
	id<TVPMPPlaybackQueueManagerDelegate> _delegate;
	NSSet* _oldNowPlayingKeys;
	NSMutableDictionary* _imageProxies;

}

@property (nonatomic,retain) NSSet * oldNowPlayingKeys;                                          //@synthesize oldNowPlayingKeys=_oldNowPlayingKeys - In the implementation block
@property (assign,nonatomic) BOOL isSoleUpdater;                                                 //@synthesize isSoleUpdater=_isSoleUpdater - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageProxies;                                 //@synthesize imageProxies=_imageProxies - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<TVPPlayback> player;                               //@synthesize player=_player - In the implementation block
@property (assign,nonatomic,__weak) id<TVPMPPlaybackQueueManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(unsigned long long)_mediaPlayerMediaTypeForMediaItemMediaType:(id)arg1 ;
+(BOOL)_mediaItemHasArtwork:(id)arg1 ;
+(id)_mediaItemMetadataProperties;
+(id)_mediaRemotePropertyForMediaItemProperty:(id)arg1 ;
+(int)_mediaRemoteRepeatModeWithPlaylist:(id)arg1 ;
+(int)_mediaRemoteShuffleModeWithPlaylist:(id)arg1 ;
+(id)_mediaItemPropertyToMediaRemotePropertyMapping;
-(void)dealloc;
-(id<TVPMPPlaybackQueueManagerDelegate>)delegate;
-(void)setDelegate:(id<TVPMPPlaybackQueueManagerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSObject*<TVPPlayback>)player;
-(void)setPlayer:(NSObject*<TVPPlayback>)arg1 ;
-(id)nowPlayingInfoCenter:(id)arg1 infoForContentItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2 ;
-(id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2 ;
-(NSMutableDictionary *)imageProxies;
-(void)setImageProxies:(NSMutableDictionary *)arg1 ;
-(void)_mediaItemMetadataDidChange:(id)arg1 ;
-(id)_mediaItemForContentItemID:(id)arg1 ;
-(void)_populateContentItem:(id)arg1 withMetadataFromMediaItem:(id)arg2 ;
-(id)_mediaItemForContentItem:(id)arg1 ;
-(id)_imageProxyForMediaItem:(id)arg1 ;
-(void)_populateNowPlayingInfoDictionaryForContentItem:(id)arg1 withMetadataFromMediaItem:(id)arg2 ;
-(void)setOldNowPlayingKeys:(NSSet *)arg1 ;
-(void)_forceCurrentContentItemToRepopulate;
-(NSSet *)oldNowPlayingKeys;
-(BOOL)isSoleUpdater;
-(void)setIsSoleUpdater:(BOOL)arg1 ;
@end
