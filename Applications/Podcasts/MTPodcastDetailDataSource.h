//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTPodcastDetailEpisodeSectionDelegate-Protocol.h"

@class NSArray, NSString;
@protocol MTPodcastDetailDataSourceDelegate;

@interface MTPodcastDetailDataSource : NSObject <MTPodcastDetailEpisodeSectionDelegate>
{
    NSString *_podcastUuid;	// 8 = 0x8
    id <MTPodcastDetailDataSourceDelegate> _delegate;	// 16 = 0x10
    unsigned long long _selectedTab;	// 24 = 0x18
    NSArray *_sections;	// 32 = 0x20
}

+ (id)predicateForPodcast:(id)arg1 sectionType:(unsigned long long)arg2;	// IMP=0x0000000100084254
+ (id)predicateForPlayingPodcast:(id)arg1 sectionType:(unsigned long long)arg2;	// IMP=0x0000000100084120
+ (id)sortDescriptorsForPodcastUuid:(id)arg1;	// IMP=0x0000000100083304
- (void).cxx_destruct;	// IMP=0x0000000100084660
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) unsigned long long selectedTab; // @synthesize selectedTab=_selectedTab;
@property(nonatomic) __weak id <MTPodcastDetailDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *podcastUuid; // @synthesize podcastUuid=_podcastUuid;
- (id)createSectionForFeed;	// IMP=0x0000000100083f50
- (id)createSectionForSaved;	// IMP=0x0000000100083d94
- (id)createSectionForIsFromiTunesSync;	// IMP=0x0000000100083b68
- (id)createSectionForPlayedToBeDeleted;	// IMP=0x000000010008393c
- (id)createSectionForDarkPlacard;	// IMP=0x00000001000838a4
- (id)createSectionForEmptyOverlay;	// IMP=0x000000010008380c
- (id)createSectionForOtherEpisodes;	// IMP=0x00000001000835dc
- (id)createSectionForLimitedUnplayed;	// IMP=0x00000001000833e0
- (void)episodeSection:(id)arg1 didChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4 newIndex:(unsigned long long)arg5;	// IMP=0x000000010008315c
- (void)sectionDidChangeContent:(id)arg1;	// IMP=0x00000001000830f0
- (void)sectionWillChangeContent:(id)arg1;	// IMP=0x0000000100083084
- (unsigned long long)indexForSection:(id)arg1;	// IMP=0x000000010008300c
- (id)savedSections;	// IMP=0x0000000100082f3c
- (id)feedSections;	// IMP=0x0000000100082e44
- (id)unplayedSections;	// IMP=0x0000000100082cf4
- (id)podcast;	// IMP=0x0000000100082c58
- (void)reloadData;	// IMP=0x0000000100082bfc
- (id)initWithPodcastUuid:(id)arg1;	// IMP=0x0000000100082b5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

