//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TVHCatalogueDataSource, TVHKMediaEntitiesFetchRequest, TVHKMediaLibrary, TVHShowsInfoCenter;

@interface TVHShowsDataStore : NSObject
{
    TVHCatalogueDataSource *_catalogueDataSource;	// 8 = 0x8
    TVHKMediaLibrary *_mediaLibrary;	// 16 = 0x10
    unsigned long long _mode;	// 24 = 0x18
    NSArray *_fetchRequests;	// 32 = 0x20
    TVHShowsInfoCenter *_showsInfoCenter;	// 40 = 0x28
    NSString *_fetchControllerIdentifier;	// 48 = 0x30
    TVHKMediaEntitiesFetchRequest *_showsFetchRequest;	// 56 = 0x38
    TVHKMediaEntitiesFetchRequest *_showPlaylistsFetchRequest;	// 64 = 0x40
    unsigned long long _completedFetchCount;	// 72 = 0x48
}

+ (id)new;	// IMP=0x000000010002f9d8
- (void).cxx_destruct;	// IMP=0x000000010003051c
@property(nonatomic) unsigned long long completedFetchCount; // @synthesize completedFetchCount=_completedFetchCount;
@property(retain, nonatomic) TVHKMediaEntitiesFetchRequest *showPlaylistsFetchRequest; // @synthesize showPlaylistsFetchRequest=_showPlaylistsFetchRequest;
@property(retain, nonatomic) TVHKMediaEntitiesFetchRequest *showsFetchRequest; // @synthesize showsFetchRequest=_showsFetchRequest;
@property(readonly, copy, nonatomic) NSString *fetchControllerIdentifier; // @synthesize fetchControllerIdentifier=_fetchControllerIdentifier;
@property(readonly, nonatomic) TVHShowsInfoCenter *showsInfoCenter; // @synthesize showsInfoCenter=_showsInfoCenter;
@property(readonly, nonatomic) NSArray *fetchRequests; // @synthesize fetchRequests=_fetchRequests;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) TVHKMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (id)_allContentCatalogueDataSource;	// IMP=0x00000001000300b8
- (id)_showsFetchResponseFromFetchControllerResultSet:(id)arg1;	// IMP=0x0000000100030018
- (_Bool)_shouldUpdateCatalogueDataSource;	// IMP=0x000000010002fff4
- (void)updateWithMediaEntitiesFetchControllerResultSet:(id)arg1;	// IMP=0x000000010002fecc
@property(readonly, nonatomic) TVHCatalogueDataSource *catalogueDataSource; // @synthesize catalogueDataSource=_catalogueDataSource;
- (id)initWithMediaLibrary:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x000000010002fadc
- (id)init;	// IMP=0x000000010002fa54

@end

