/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSDate, VUIMediaController, VUIVideoAdvisoryLogoImageDownloader, UIImage;

@interface VUINowPlayingViewModel : NSObject {

	BOOL _includesProductPageButton;
	BOOL _livePlayback;
	BOOL _currentMediaATVShow;
	NSDictionary* _metadata;
	NSString* _currentMediaType;
	NSString* _canonicalID;
	NSString* _showCanonicalID;
	unsigned long long _autoPlayedEpisodesCount;
	NSDate* _initialPlaybackStartDate;
	VUIMediaController* _mediaController;
	VUIVideoAdvisoryLogoImageDownloader* _logoImageDownloader;
	UIImage* _ratingImage;

}

@property (assign,getter=isLivePlayback,nonatomic) BOOL livePlayback;                                //@synthesize livePlayback=_livePlayback - In the implementation block
@property (nonatomic,retain) VUIMediaController * mediaController;                                   //@synthesize mediaController=_mediaController - In the implementation block
@property (nonatomic,copy) NSString * canonicalID;                                                   //@synthesize canonicalID=_canonicalID - In the implementation block
@property (nonatomic,copy) NSString * currentMediaType;                                              //@synthesize currentMediaType=_currentMediaType - In the implementation block
@property (nonatomic,copy) NSString * showCanonicalID;                                               //@synthesize showCanonicalID=_showCanonicalID - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                                //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) VUIVideoAdvisoryLogoImageDownloader * logoImageDownloader;              //@synthesize logoImageDownloader=_logoImageDownloader - In the implementation block
@property (nonatomic,retain) UIImage * ratingImage;                                                  //@synthesize ratingImage=_ratingImage - In the implementation block
@property (assign,getter=isCurrentMediaATVShow,nonatomic) BOOL currentMediaATVShow;                  //@synthesize currentMediaATVShow=_currentMediaATVShow - In the implementation block
@property (nonatomic,readonly) NSString * currentMediaTitle; 
@property (getter=canAutoPlay,nonatomic,readonly) BOOL autoPlay; 
@property (assign,nonatomic) BOOL includesProductPageButton;                                         //@synthesize includesProductPageButton=_includesProductPageButton - In the implementation block
@property (assign,nonatomic) unsigned long long autoPlayedEpisodesCount;                             //@synthesize autoPlayedEpisodesCount=_autoPlayedEpisodesCount - In the implementation block
@property (nonatomic,retain) NSDate * initialPlaybackStartDate;                                      //@synthesize initialPlaybackStartDate=_initialPlaybackStartDate - In the implementation block
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(VUIMediaController *)mediaController;
-(BOOL)canAutoPlay;
-(void)setMediaController:(VUIMediaController *)arg1 ;
-(NSString *)canonicalID;
-(id)initWithMediaController:(id)arg1 ;
-(void)setCanonicalID:(NSString *)arg1 ;
-(NSString *)showCanonicalID;
-(NSString *)currentMediaType;
-(BOOL)includesProductPageButton;
-(void)setIncludesProductPageButton:(BOOL)arg1 ;
-(NSString *)currentMediaTitle;
-(NSDate *)initialPlaybackStartDate;
-(void)setInitialPlaybackStartDate:(NSDate *)arg1 ;
-(unsigned long long)autoPlayedEpisodesCount;
-(void)setAutoPlayedEpisodesCount:(unsigned long long)arg1 ;
-(void)_registerPlayerObserver;
-(void)_registerPlaybackNotifications;
-(void)_updateMetadataForCurrentMediaItem;
-(void)_unregisterPlayerObserver;
-(void)_unregisterPlaybackNotifications;
-(BOOL)isCurrentMediaATVShow;
-(void)_handleMediaItemDidChangeNotification:(id)arg1 ;
-(void)_handleMetadataDidChangeNotification:(id)arg1 ;
-(id)_metaDataInfoFromMediaItem:(id)arg1 ;
-(void)setCurrentMediaType:(NSString *)arg1 ;
-(void)setShowCanonicalID:(NSString *)arg1 ;
-(void)setCurrentMediaATVShow:(BOOL)arg1 ;
-(BOOL)isLivePlayback;
-(void)setLivePlayback:(BOOL)arg1 ;
-(VUIVideoAdvisoryLogoImageDownloader *)logoImageDownloader;
-(void)setLogoImageDownloader:(VUIVideoAdvisoryLogoImageDownloader *)arg1 ;
-(UIImage *)ratingImage;
-(void)setRatingImage:(UIImage *)arg1 ;
@end
