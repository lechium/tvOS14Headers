//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "JSExport-Protocol.h"

@class JSValue, NSArray, NSDictionary, NSString, TVMusicJSBag;

@protocol TVMusicJSObject <JSExport>
@property(readonly) _Bool isMusicLibraryInitialized;
@property(readonly, nonatomic) _Bool allowMotion;
@property(readonly, nonatomic) _Bool marketingOffersEnabled;
@property(readonly, nonatomic) _Bool allowVideo;
@property(readonly, nonatomic) TVMusicJSBag *bag;
@property(readonly) unsigned long long musicAppAPIVersion;
- (void)showPrivacyNotice;
- (void)showMarketingOffers:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)performMediaRequestWithPath:(NSString *)arg1:(NSDictionary *)arg2:(JSValue *)arg3;
- (void)performMediaRequestWithURL:(NSString *)arg1:(NSDictionary *)arg2:(JSValue *)arg3;
- (void)pageDidAppear:(NSString *)arg1;
- (void)musicLog:(NSString *)arg1:(JSValue *)arg2;
- (void)getBookmarkDataForItems:(NSArray *)arg1:(JSValue *)arg2;
- (void)presentContextMenuForItemWithOptions:(NSDictionary *)arg1:(NSDictionary *)arg2:(JSValue *)arg3;
- (void)presentContextMenuForItem:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)presentDetailView:(NSString *)arg1:(NSString *)arg2:(JSValue *)arg3;
- (void)presentExplicitRestrictionAlertIfNeededOfType:(NSString *)arg1:(JSValue *)arg2;
- (void)getCurrentIsPlayingState:(JSValue *)arg1;
- (void)getNowPlayingInfoWithOptions:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)getNowPlayingInfo:(JSValue *)arg1;
- (void)findItemInLibraryByCloudID:(NSString *)arg1:(NSString *)arg2:(NSDictionary *)arg3:(JSValue *)arg4;
- (void)querySongsForPlaylistWithPersistentID:(NSString *)arg1:(NSDictionary *)arg2:(struct _NSRange)arg3:(JSValue *)arg4;
- (void)querySongsForAlbumWithPersistentID:(NSString *)arg1:(NSDictionary *)arg2:(struct _NSRange)arg3:(JSValue *)arg4;
- (void)queryRecentlyAdded:(NSDictionary *)arg1:(struct _NSRange)arg2:(JSValue *)arg3;
- (_Bool)isStoreItemInLibrary:(NSDictionary *)arg1;
- (void)queryMediaLibraryWithStoreID:(NSString *)arg1:(NSString *)arg2:(NSDictionary *)arg3:(JSValue *)arg4;
- (void)queryMusicLibraryForSongsWithAdamIDs:(NSArray *)arg1:(JSValue *)arg2;
- (void)queryMediaLibrary:(NSArray *)arg1:(long long)arg2:(JSValue *)arg3:(NSDictionary *)arg4:(JSValue *)arg5;
- (void)removeItemFromMediaLibraryWithPersistentID:(NSString *)arg1:(NSString *)arg2:(JSValue *)arg3;
- (void)removeItemsFromMusicLibraryWithSagaIDs:(NSArray *)arg1:(JSValue *)arg2;
- (void)removePlaylistFromMusicLibraryWithGlobalID:(NSString *)arg1:(JSValue *)arg2;
- (void)addPlaylistToMusicLibraryWithGlobalID:(NSString *)arg1:(JSValue *)arg2;
- (void)addToMusicLibraryWithAdamID:(NSString *)arg1:(JSValue *)arg2;
- (void)queryMusicLibraryForPlaylistWithCloudGlobalID:(NSString *)arg1:(JSValue *)arg2;
- (void)getRecentRadioStations:(JSValue *)arg1;
- (void)playRadioStation:(NSDictionary *)arg1:(NSDictionary *)arg2:(JSValue *)arg3;
- (void)playItems:(NSArray *)arg1:(NSDictionary *)arg2:(JSValue *)arg3;
- (void)showSubscriptionRequiredForItemDictionary:(NSDictionary *)arg1;
@end
