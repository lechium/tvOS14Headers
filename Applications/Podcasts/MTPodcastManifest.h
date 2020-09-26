//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTPredicateManifest.h"

@class NSString;

@interface MTPodcastManifest : MTPredicateManifest
{
    NSString *_podcastUuid;	// 8 = 0x8
    unsigned long long _sectionType;	// 16 = 0x10
}

+ (id)activityTypeSuffix;	// IMP=0x00000001001377b4
+ (void)createManifestForActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001375e4
- (void).cxx_destruct;	// IMP=0x0000000100137a3c
@property(nonatomic) unsigned long long sectionType; // @synthesize sectionType=_sectionType;
@property(retain, nonatomic) NSString *podcastUuid; // @synthesize podcastUuid=_podcastUuid;
- (void)_propertyDidChange;	// IMP=0x00000001001377c0
- (id)activity;	// IMP=0x0000000100137530
- (id)initWithInitialEpisodeUuid:(id)arg1 sectionType:(unsigned long long)arg2;	// IMP=0x0000000100137054

@end

