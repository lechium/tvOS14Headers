//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PodcastsFoundation/MTPodcast.h>

#import "IMMetricsDataSource-Protocol.h"

@class NSString;

@interface MTPodcast (Library) <IMMetricsDataSource>
+ (long long)storeCollectionIdForRedirectURL:(id)arg1;	// IMP=0x000000010001d9b8
+ (id)redirectURLForStoreCollectionId:(long long)arg1;	// IMP=0x000000010001d89c
+ (_Bool)isRedirectURL:(id)arg1;	// IMP=0x000000010001d7dc
+ (void)setRemovePlayedEpisodesSetting:(long long)arg1 forPodcastUuid:(id)arg2;	// IMP=0x000000010001ce48
+ (id)productURLForStoreCollectionId:(long long)arg1 storeTrackId:(long long)arg2;	// IMP=0x000000010001cb64
+ (unsigned long long)totalUnplayedCount;	// IMP=0x000000010001c458
+ (void)prepareForPlatform:(id)arg1;	// IMP=0x000000010001c454
+ (id)insertNewPodcastInManagedObjectContext:(id)arg1 subscribed:(_Bool)arg2 feedUrl:(id)arg3 showType:(long long)arg4 title:(id)arg5 author:(id)arg6 provider:(id)arg7 imageUrl:(id)arg8 description:(id)arg9;	// IMP=0x000000010001c06c
+ (id)insertNewPodcastInManagedObjectContext:(id)arg1 subscribed:(_Bool)arg2 feedUrl:(id)arg3 showType:(long long)arg4 title:(id)arg5 author:(id)arg6 provider:(id)arg7 imageUrl:(id)arg8 description:(id)arg9 adamId:(long long)arg10;	// IMP=0x000000010001bf08
+ (id)latestEpisodeUuidForPodcastUuid:(id)arg1 ctx:(id)arg2;	// IMP=0x00000001000659c0
+ (id)podcastUuidForEpisodeUuid:(id)arg1 ctx:(id)arg2;	// IMP=0x000000010006570c
+ (id)podcastUuidForFeedUrl:(id)arg1 ctx:(id)arg2;	// IMP=0x000000010006566c
+ (id)podcastUuidForFeedUrlString:(id)arg1 ctx:(id)arg2;	// IMP=0x000000010006549c
+ (id)sortDescriptorsForNewestToOldest:(_Bool)arg1;	// IMP=0x0000000100064cf4
+ (id)sortDescriptorsForNewestOnTop;	// IMP=0x0000000100064b50
+ (id)sortDescriptorsForOldestOnTop;	// IMP=0x00000001000649ec
+ (id)allPossibleEpisodeListSortOrderProperties;	// IMP=0x0000000100064464
+ (id)_imageFetchQueue;	// IMP=0x000000010009d9a4
+ (void)_downloadArtworkForPodcastUuid:(id)arg1;	// IMP=0x000000010009d928
+ (id)_defaultPlaceholderArtworkWithSize:(struct CGSize)arg1;	// IMP=0x000000010009d8a8
+ (void)fetchArtworkForPodcastUuid:(id)arg1 size:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010009d434
+ (id)artworkForPodcastUuid:(id)arg1 size:(struct CGSize)arg2 triggerDownload:(_Bool)arg3;	// IMP=0x000000010009d344
+ (id)artworkForPodcastUuid:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x000000010009d334
+ (id)predicateForPodcastWithPodcastPID:(long long)arg1;	// IMP=0x000000010012c144
+ (id)predicateForPodcastStoreId:(long long)arg1;	// IMP=0x000000010012c048
+ (id)predicateForPodcastUUID:(id)arg1;	// IMP=0x000000010012c004
+ (id)predicateForPodcastUuids:(id)arg1;	// IMP=0x000000010012bfc0
+ (id)predicateForPodcastWithTitle:(id)arg1;	// IMP=0x000000010012bf2c
+ (id)predicateForPodcastWithFeedUrl:(id)arg1;	// IMP=0x000000010012bd84
+ (id)predicateForUpdateInterval:(long long)arg1;	// IMP=0x000000010012bc78
+ (id)predicateForUpdatablePodcasts;	// IMP=0x000000010012bae0
+ (id)predicateForAutoDownloadType:(int)arg1;	// IMP=0x000000010012ba9c
+ (id)predicateForAutoDownloadEnabled;	// IMP=0x000000010012b96c
+ (id)predicateForHasBeenSynced:(_Bool)arg1;	// IMP=0x000000010012b918
+ (id)predicateForSyncablePodcasts;	// IMP=0x000000010012b888
+ (id)predicateForOrphanedFromCloud:(_Bool)arg1;	// IMP=0x000000010012b7f8
+ (id)predicateForSubscribedAndNotHidden:(_Bool)arg1;	// IMP=0x000000010012b758
+ (id)predicateForSubscribed:(_Bool)arg1;	// IMP=0x000000010012b6c8
+ (id)predicateForAllPodcasts;	// IMP=0x000000010012b684
+ (id)userDefaultPropertiesAffectingPredicates;	// IMP=0x000000010012b5cc
+ (id)sortDescriptorsForTitle;	// IMP=0x000000010013336c
+ (id)sortDescriptorsForDateAdded;	// IMP=0x0000000100133270
+ (id)sortDescriptorsForRecentlyUpdated;	// IMP=0x0000000100133174
+ (id)sortDescriptorsForLastDatePlayed;	// IMP=0x00000001001330c0
+ (id)sortDescriptorsForAllPodcasts;	// IMP=0x0000000100133064
+ (id)sortDescriptorsForManualOrder;	// IMP=0x0000000100132fb0
- (unsigned long long)countOfMyEpisodes;	// IMP=0x000000010001dab4
- (id)bestFeedURLExcludingRedirectURL:(_Bool)arg1;	// IMP=0x000000010001d3d8
- (id)redirectURL;	// IMP=0x000000010001d39c
- (id)countOfUnplayedEpisodes;	// IMP=0x000000010001d2ec
- (id)countOfNewEpisodes;	// IMP=0x000000010001d23c
- (void)updateLastTouchDate;	// IMP=0x000000010001d200
- (void)resetGoDark;	// IMP=0x000000010001d178
@property(nonatomic, getter=isAuthenticatedDark) _Bool authenticatedDark;
@property(readonly, nonatomic, getter=isPastAutodownloadDark) _Bool autodownloadDark;
@property(readonly, nonatomic, getter=isPastFeedDark) _Bool feedDark;
@property(readonly, nonatomic, getter=isDark) _Bool dark;
- (void)setOrphanedFromCloud:(_Bool)arg1;	// IMP=0x000000010001cfdc
- (id)twitterShareURL;	// IMP=0x000000010001cd9c
- (id)shareURL;	// IMP=0x000000010001cd30
- (id)bestAvailableStoreCleanURL;	// IMP=0x000000010001c978
- (_Bool)isShareable;	// IMP=0x000000010001c93c
- (void)updateEpisodesMetadataIdentifiers;	// IMP=0x000000010001c820
- (void)setSubscribed:(_Bool)arg1;	// IMP=0x000000010001c770
- (void)setUpdatedFeedURL:(id)arg1;	// IMP=0x000000010001c6c4
- (void)setTitle:(id)arg1;	// IMP=0x000000010001c5d4
- (id)bestDescription;	// IMP=0x000000010006970c
- (id)episodesInSeasonNumber:(long long)arg1 oldestEpisodesFirst:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 episodeTypeFilter:(long long)arg6 limit:(unsigned long long)arg7;	// IMP=0x0000000100069298
- (id)episodesInSeasonNumber:(long long)arg1 oldestEpisodesFirst:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 limit:(unsigned long long)arg5;	// IMP=0x0000000100069268
- (id)episodesInSeasonNumber:(long long)arg1 oldestEpisodesFirst:(_Bool)arg2;	// IMP=0x0000000100069250
- (id)episodesInSeasonNumber:(long long)arg1;	// IMP=0x00000001000690dc
- (id)episodesInLatestSeason;	// IMP=0x0000000100068f70
- (long long)latestSeasonNumber;	// IMP=0x0000000100068cbc
- (id)seasonNumbers;	// IMP=0x0000000100068ab8
- (_Bool)hasMultipleSeasons;	// IMP=0x0000000100068a68
- (_Bool)hasAtLeastOneSeason;	// IMP=0x00000001000688c8
- (id)_fetchRequestForDistinctSeasons;	// IMP=0x00000001000686ec
- (id)smartPlayEpisode;	// IMP=0x00000001000685e8
- (id)oldestEpisodeInLatestSeasonOrShowExcludingPlayed:(_Bool)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3 episodeTypeFilter:(long long)arg4;	// IMP=0x00000001000683d0
- (id)_latestOrOldestEpisode:(_Bool)arg1 restrictToUserEpisodes:(_Bool)arg2 playStateFilter:(long long)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 excludingEpisodeUuid:(id)arg6 episodeTypeFilter:(long long)arg7;	// IMP=0x0000000100067d68
- (id)_latestOrOldestEpisode:(_Bool)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 excludingEpisodeUuid:(id)arg6 episodeTypeFilter:(long long)arg7;	// IMP=0x0000000100067d50
- (id)_latestOrOldestEpisode:(_Bool)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 excludingEpisodeUuid:(id)arg5 episodeTypeFilter:(long long)arg6;	// IMP=0x0000000100067d1c
- (id)_latestOrOldestEpisode:(_Bool)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 episodeTypeFilter:(long long)arg5;	// IMP=0x0000000100067d08
- (id)_latestOrOldestEpisode:(_Bool)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 excludingEpisodeUuid:(id)arg6;	// IMP=0x0000000100067ce0
- (id)_latestOrOldestEpisode:(_Bool)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 excludingEpisodeUuid:(id)arg5;	// IMP=0x0000000100067ccc
- (id)_latestOrOldestEpisode:(_Bool)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5;	// IMP=0x0000000100067cbc
- (id)_latestOrOldestEpisode:(_Bool)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4;	// IMP=0x0000000100067cac
- (id)_latestOrOldestEpisode:(_Bool)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3;	// IMP=0x0000000100067c9c
- (id)newestEpisodeUuid;	// IMP=0x0000000100067c04
- (id)oldestUserEpisodeNotPlayedExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2;	// IMP=0x0000000100067be4
- (id)oldestUserEpisodeNotPlayedExcludingExplicit:(long long)arg1;	// IMP=0x0000000100067bd4
- (id)oldestUserEpisodeExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2;	// IMP=0x0000000100067bb4
- (id)oldestUserEpisodeExcludingExplicit:(long long)arg1;	// IMP=0x0000000100067ba4
- (id)oldestUserEpisode;	// IMP=0x0000000100067b94
- (id)oldestEpisodeNotPlayedExcludingExplicit:(long long)arg1 excludingStreaming:(long long)arg2 episodeTypeFilter:(long long)arg3;	// IMP=0x0000000100067b54
- (id)oldestEpisodeNotPlayedExcludingExplicit:(long long)arg1;	// IMP=0x0000000100067b40
- (id)oldestEpisodeNotPlayed;	// IMP=0x0000000100067b30
- (id)oldestFullEpisode;	// IMP=0x0000000100067b10
- (id)oldestEpisodeRestrictToUserEpisodes:(_Bool)arg1 excludePlayed:(_Bool)arg2 excludingExplicit:(long long)arg3 excludeStreaming:(long long)arg4 episodeTypeFilter:(long long)arg5;	// IMP=0x0000000100067acc
- (id)oldestEpisodeExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2 episodeTypeFilter:(long long)arg3;	// IMP=0x0000000100067a8c
- (id)oldestEpisodeExcludingExplicit:(long long)arg1;	// IMP=0x0000000100067a78
- (id)oldestEpisode;	// IMP=0x0000000100067a68
- (id)newestUserEpisodeNotPlayedExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2;	// IMP=0x0000000100067a48
- (id)newestUserEpisodeExcludingExplicit:(long long)arg1;	// IMP=0x0000000100067a2c
- (id)nextEpisodeNotPlayedExcludingExplicit:(long long)arg1 excludeStreaming:(long long)arg2 episodeTypeFilter:(long long)arg3;	// IMP=0x00000001000679ec
- (id)newestFullEpisode;	// IMP=0x00000001000679cc
- (id)newestEpisode;	// IMP=0x00000001000679b8
- (id)newestEpisodeRestrictToUserEpisodes:(_Bool)arg1 playStateFilter:(long long)arg2 excludingExplicit:(long long)arg3 excludeStreaming:(long long)arg4 episodeTypeFilter:(long long)arg5;	// IMP=0x0000000100067974
- (id)newestEpisodeExcludingUuid:(id)arg1 excludeExplicit:(long long)arg2 excludeStreaming:(long long)arg3;	// IMP=0x0000000100067950
- (id)newestEpisodeExcludingUuid:(id)arg1 excludeExplicit:(long long)arg2;	// IMP=0x0000000100067940
- (id)firstUserEpisodeNotPlayed;	// IMP=0x0000000100067540
- (id)_episodesNextTo:(double)arg1 after:(_Bool)arg2 usePlayOrder:(_Bool)arg3 sortAsc:(_Bool)arg4 restrictToUserEpisodes:(_Bool)arg5 excludePlayed:(_Bool)arg6 excludeExplicit:(long long)arg7 excludeStreaming:(long long)arg8 episodeTypeFilter:(long long)arg9 limit:(long long)arg10;	// IMP=0x0000000100066e94
- (id)_episodesNextToEpisode:(id)arg1 after:(_Bool)arg2 usePlayOrder:(_Bool)arg3 restrictToUserEpisodes:(_Bool)arg4 excludePlayed:(_Bool)arg5 excludeExplicit:(long long)arg6 excludeStreaming:(long long)arg7 episodeTypeFilter:(long long)arg8 limit:(long long)arg9;	// IMP=0x0000000100066e00
- (id)_episodesNextToEpisode:(id)arg1 after:(_Bool)arg2 usePlayOrder:(_Bool)arg3 restrictToUserEpisodes:(_Bool)arg4 excludePlayed:(_Bool)arg5 excludeExplicit:(long long)arg6 episodeTypeFilter:(long long)arg7 limit:(long long)arg8;	// IMP=0x0000000100066dd0
- (id)_episodeNextToEpisode:(id)arg1 after:(_Bool)arg2 usePlayOrder:(_Bool)arg3 restrictToUserEpisodes:(_Bool)arg4 excludePlayed:(_Bool)arg5 excludeExplicit:(long long)arg6 excludeStreaming:(long long)arg7 episodeTypeFilter:(long long)arg8;	// IMP=0x0000000100066d64
- (id)_episodeNextToEpisode:(id)arg1 after:(_Bool)arg2 usePlayOrder:(_Bool)arg3 restrictToUserEpisodes:(_Bool)arg4 excludePlayed:(_Bool)arg5 excludeExplicit:(long long)arg6 episodeTypeFilter:(long long)arg7;	// IMP=0x0000000100066d38
- (id)_episodeBeforeEpisode:(id)arg1 usePlayOrder:(_Bool)arg2 restrictToUserEpisodes:(_Bool)arg3 excludePlayed:(_Bool)arg4;	// IMP=0x0000000100066cfc
- (id)_episodeAfterEpisode:(id)arg1 usePlayOrder:(_Bool)arg2 restrictToUserEpisodes:(_Bool)arg3 excludePlayed:(_Bool)arg4 excludeExplicit:(long long)arg5 excludeStreaming:(long long)arg6 episodeTypeFilter:(long long)arg7;	// IMP=0x0000000100066cb8
- (id)_episodeAfterEpisode:(id)arg1 usePlayOrder:(_Bool)arg2 restrictToUserEpisodes:(_Bool)arg3 excludePlayed:(_Bool)arg4;	// IMP=0x0000000100066c88
- (id)episodeAfterEpisode:(id)arg1;	// IMP=0x0000000100066c70
- (id)episodesPublishedAfter:(double)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 episodeTypeFilter:(long long)arg6 limit:(long long)arg7 sortAsc:(_Bool)arg8;	// IMP=0x0000000100066c20
- (id)episodePublishedAfter:(double)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 episodeTypeFilter:(long long)arg6;	// IMP=0x0000000100066b98
- (id)episodePublishedBefore:(double)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 episodeTypeFilter:(long long)arg6;	// IMP=0x0000000100066b10
- (id)episodeOlderThanEpisode:(id)arg1;	// IMP=0x0000000100066af8
- (id)episodeNewerThanEpisode:(id)arg1 restrictToUserEpisodes:(_Bool)arg2 excludePlayed:(_Bool)arg3 excludeExplicit:(long long)arg4 excludeStreaming:(long long)arg5 episodeTypeFilter:(long long)arg6;	// IMP=0x0000000100066ab8
- (id)episodesAfterEpisode:(id)arg1 restrictToUserEpisodes:(_Bool)arg2;	// IMP=0x0000000100066a7c
- (id)userEpisodesAfterEpisode:(id)arg1;	// IMP=0x0000000100066a40
- (id)userEpisodeAfterEpisode:(id)arg1;	// IMP=0x0000000100066a28
- (id)mostRecentlyManuallyAddedEpisode;	// IMP=0x000000010006662c
- (id)mostRecentlyPlayedEpisodeExcludingEpisodeUuid:(id)arg1 restrictedToLibrary:(_Bool)arg2 excludeExplicit:(long long)arg3 excludeStreaming:(long long)arg4;	// IMP=0x0000000100065ef8
- (id)mostRecentlyPlayedEpisodeExcludingExplicit:(long long)arg1 excludingStreaming:(long long)arg2;	// IMP=0x0000000100065edc
- (id)mostRecentlyPlayedEpisode;	// IMP=0x0000000100065ec8
- (id)episodeToResume;	// IMP=0x0000000100065cd4
- (_Bool)updateCursorPosition:(_Bool)arg1;	// IMP=0x0000000100065004
@property(nonatomic) _Bool playbackNewestToOldest;
- (id)sortDescriptorsForPlayOrder;	// IMP=0x0000000100064cb4
- (id)sortDescriptorsForSortOrder;	// IMP=0x000000010006479c
@property(nonatomic) _Bool sortAscending;
@property(nonatomic) _Bool isExplicit;
- (void)setShowTypeSetting:(long long)arg1;	// IMP=0x00000001000641e4
- (_Bool)isSerialShowTypeInFeed;	// IMP=0x0000000100064184
- (long long)showTypeInFeedResolvedValue;	// IMP=0x0000000100064128
- (long long)showTypeResolvedValue;	// IMP=0x00000001000640f8
- (void)setWebpageURL:(id)arg1;	// IMP=0x0000000100064018
- (void)setShowTypeInFeed:(id)arg1;	// IMP=0x0000000100063f38
- (void)setImageURL:(id)arg1;	// IMP=0x0000000100063e58
- (void)setUpdateAvg:(double)arg1;	// IMP=0x0000000100063d80
- (void)setUpdateStdDev:(double)arg1;	// IMP=0x0000000100063ca8
- (void)setFeedChangedDate:(double)arg1;	// IMP=0x0000000100063bd0
- (void)setItemDescription:(id)arg1;	// IMP=0x0000000100063af0
- (void)setAuthor:(id)arg1;	// IMP=0x0000000100063a10
- (void)setFlags:(long long)arg1;	// IMP=0x0000000100063950
@property(nonatomic) _Bool needsArtworkUpdate;
- (void)setModifiedDate:(double)arg1;	// IMP=0x00000001000637b8
- (void)setLastDatePlayed:(double)arg1;	// IMP=0x00000001000636ec
@property(nonatomic) _Bool importing;
- (void)setDeletePlayedEpisodes:(long long)arg1;	// IMP=0x0000000100063624
@property(nonatomic) _Bool hasBeenSynced;
- (void)markPlaylistsForUpdate;	// IMP=0x00000001000633dc
- (id)currentFeedURL;	// IMP=0x00000001000632b4
- (void)fetchArtworkWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010009d814
- (id)artworkWithSize:(struct CGSize)arg1;	// IMP=0x000000010009d790
- (id)metricsAdditionalData;	// IMP=0x0000000100159fa0
- (id)metricsContentIdentifier;	// IMP=0x0000000100159e40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

