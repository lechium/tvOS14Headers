//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface MTURLCommandRequest : NSObject <NSCopying>
{
    NSString *_urlString;	// 8 = 0x8
    unsigned long long _commandType;	// 16 = 0x10
    unsigned long long _playQueueType;	// 24 = 0x18
    unsigned long long _playReason;	// 32 = 0x20
    long long _playbackOrder;	// 40 = 0x28
    long long _playContext;	// 48 = 0x30
    long long _playContextSortType;	// 56 = 0x38
    NSString *_podcastUuid;	// 64 = 0x40
    NSString *_podcastFeedUrl;	// 72 = 0x48
    NSString *_episodeUuid;	// 80 = 0x50
    NSString *_podcastAdamId;	// 88 = 0x58
    NSString *_episodeAdamId;	// 96 = 0x60
    NSString *_stationUuid;	// 104 = 0x68
    NSString *_requesterDsid;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000001000b3a64
@property(readonly, nonatomic) NSString *requesterDsid; // @synthesize requesterDsid=_requesterDsid;
@property(readonly, nonatomic) NSString *stationUuid; // @synthesize stationUuid=_stationUuid;
@property(readonly, nonatomic) NSString *episodeAdamId; // @synthesize episodeAdamId=_episodeAdamId;
@property(readonly, nonatomic) NSString *podcastAdamId; // @synthesize podcastAdamId=_podcastAdamId;
@property(readonly, nonatomic) NSString *episodeUuid; // @synthesize episodeUuid=_episodeUuid;
@property(readonly, nonatomic) NSString *podcastFeedUrl; // @synthesize podcastFeedUrl=_podcastFeedUrl;
@property(readonly, nonatomic) NSString *podcastUuid; // @synthesize podcastUuid=_podcastUuid;
@property(readonly, nonatomic) long long playContextSortType; // @synthesize playContextSortType=_playContextSortType;
@property(readonly, nonatomic) long long playContext; // @synthesize playContext=_playContext;
@property(readonly, nonatomic) long long playbackOrder; // @synthesize playbackOrder=_playbackOrder;
@property(readonly, nonatomic) unsigned long long playReason; // @synthesize playReason=_playReason;
@property(readonly, nonatomic) unsigned long long playQueueType; // @synthesize playQueueType=_playQueueType;
@property(readonly, nonatomic) unsigned long long commandType; // @synthesize commandType=_commandType;
@property(readonly, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (void)_lookupEpisodeUuidIfNecessaryFromURLString:(id)arg1;	// IMP=0x00000001000b3798
- (void)_lookupPodcastUuidIfNecessaryFromURLString:(id)arg1;	// IMP=0x00000001000b353c
- (void)_loadQueryParameterValuesFromString:(id)arg1;	// IMP=0x00000001000b2ffc
- (id)copyWithPlayReason:(unsigned long long)arg1;	// IMP=0x00000001000b2fd0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000b2e84
- (id)initWithURLString:(id)arg1;	// IMP=0x00000001000b2df8

@end

