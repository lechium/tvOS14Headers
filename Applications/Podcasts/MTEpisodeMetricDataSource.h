//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMMetricsDataSource-Protocol.h"

@class MTEpisodeIdentifier, NSString;

@interface MTEpisodeMetricDataSource : NSObject <IMMetricsDataSource>
{
    MTEpisodeIdentifier *_episodeIdentifier;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    unsigned long long _mediaType;	// 24 = 0x18
    unsigned long long _itemType;	// 32 = 0x20
    unsigned long long _podcastState;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000001000316d4
@property(nonatomic) unsigned long long podcastState; // @synthesize podcastState=_podcastState;
@property(nonatomic) unsigned long long itemType; // @synthesize itemType=_itemType;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) MTEpisodeIdentifier *episodeIdentifier; // @synthesize episodeIdentifier=_episodeIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000314bc
- (id)metricsAdditionalData;	// IMP=0x0000000100031280
- (id)metricsContentIdentifier;	// IMP=0x0000000100031274
- (id)_duration;	// IMP=0x000000010003123c
- (id)_podcastState;	// IMP=0x00000001000311f8
- (id)_itemType;	// IMP=0x00000001000311b4
- (id)_mediaType;	// IMP=0x0000000100031160
- (id)_providerId;	// IMP=0x0000000100031154
- (id)_podcastFeedURL;	// IMP=0x00000001000310e0
- (id)_podcastId;	// IMP=0x0000000100031044
- (id)_contentGUID;	// IMP=0x0000000100030fd0
- (id)_contentId;	// IMP=0x0000000100030f34
- (unsigned long long)_podcastStateForPlayerItem:(id)arg1;	// IMP=0x0000000100030ed8
- (unsigned long long)_itemTypeForPlayerItem:(id)arg1;	// IMP=0x0000000100030e98
- (unsigned long long)_mediaTypeForPlayerItem:(id)arg1;	// IMP=0x0000000100030e58
- (unsigned long long)_podcastStateForEpisode:(id)arg1;	// IMP=0x0000000100030ce0
- (unsigned long long)_itemTypeForEpisode:(id)arg1;	// IMP=0x0000000100030b90
- (unsigned long long)_mediaTypeForEpisode:(id)arg1;	// IMP=0x0000000100030a18
- (id)initWithEpisode:(id)arg1;	// IMP=0x00000001000307bc
- (id)initWithPlayerItem:(id)arg1;	// IMP=0x00000001000306e8
- (id)initWithEpisodeIdentifier:(id)arg1;	// IMP=0x0000000100030670

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

