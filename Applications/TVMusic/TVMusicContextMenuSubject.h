//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPModelGenericObject, NSData, NSString;

@interface TVMusicContextMenuSubject : NSObject
{
    _Bool _libraryAdded;	// 8 = 0x8
    _Bool _storefrontSupportsLyrics;	// 9 = 0x9
    long long _origin;	// 16 = 0x10
    MPModelGenericObject *_mpObject;	// 24 = 0x18
    MPModelGenericObject *_container;	// 32 = 0x20
    NSString *_featureName;	// 40 = 0x28
    NSData *_recommendationData;	// 48 = 0x30
    NSString *_playlistVersionHash;	// 56 = 0x38
    NSString *_title;	// 64 = 0x40
    long long _playlistIndex;	// 72 = 0x48
}

+ (void)subjectWithSongInPlayQueue:(id)arg1 container:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010008421c
+ (void)subjectWithLibraryObject:(id)arg1 container:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100084024
+ (void)subjectWithObject:(id)arg1 playbackReportingDictionary:(id)arg2 container:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100083e08
- (void).cxx_destruct;	// IMP=0x0000000100084b10
@property(nonatomic) _Bool storefrontSupportsLyrics; // @synthesize storefrontSupportsLyrics=_storefrontSupportsLyrics;
@property(nonatomic) _Bool libraryAdded; // @synthesize libraryAdded=_libraryAdded;
@property(nonatomic) long long playlistIndex; // @synthesize playlistIndex=_playlistIndex;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *playlistVersionHash; // @synthesize playlistVersionHash=_playlistVersionHash;
@property(retain, nonatomic) NSData *recommendationData; // @synthesize recommendationData=_recommendationData;
@property(retain, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(retain, nonatomic) MPModelGenericObject *container; // @synthesize container=_container;
@property(retain, nonatomic) MPModelGenericObject *mpObject; // @synthesize mpObject=_mpObject;
@property(nonatomic) long long origin; // @synthesize origin=_origin;
- (id)initWithLibraryObject:(id)arg1 container:(id)arg2;	// IMP=0x000000010008495c
- (id)initWithObject:(id)arg1 playbackReportingDictionary:(id)arg2 container:(id)arg3;	// IMP=0x00000001000847e0

@end

