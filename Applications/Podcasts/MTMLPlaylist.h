//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaPlaylist, NSMutableArray, NSNumber, NSString;

@interface MTMLPlaylist : NSObject
{
    NSMutableArray *_children;	// 8 = 0x8
    _Bool _cachedEmpty;	// 16 = 0x10
    _Bool _empty;	// 17 = 0x11
    _Bool _isFolder;	// 18 = 0x12
    _Bool _isGenius;	// 19 = 0x13
    _Bool _isOnTheGo;	// 20 = 0x14
    _Bool _isSmart;	// 21 = 0x15
    _Bool _isHidden;	// 22 = 0x16
    MPMediaPlaylist *_playlist;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSNumber *_mediaLibraryId;	// 40 = 0x28
    NSNumber *_parentMediaLibraryId;	// 48 = 0x30
}

+ (id)playlistWithMPPlaylist:(id)arg1;	// IMP=0x000000010009a9dc
- (void).cxx_destruct;	// IMP=0x000000010009b058
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) _Bool isSmart; // @synthesize isSmart=_isSmart;
@property(nonatomic) _Bool isOnTheGo; // @synthesize isOnTheGo=_isOnTheGo;
@property(nonatomic) _Bool isGenius; // @synthesize isGenius=_isGenius;
@property(nonatomic) _Bool isFolder; // @synthesize isFolder=_isFolder;
@property(retain, nonatomic) NSNumber *parentMediaLibraryId; // @synthesize parentMediaLibraryId=_parentMediaLibraryId;
@property(retain, nonatomic) NSNumber *mediaLibraryId; // @synthesize mediaLibraryId=_mediaLibraryId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain) MPMediaPlaylist *playlist; // @synthesize playlist=_playlist;
- (id)description;	// IMP=0x000000010009aec8
- (_Bool)isEmpty;	// IMP=0x000000010009ad2c
- (id)children;	// IMP=0x000000010009ad24
- (void)addChild:(id)arg1;	// IMP=0x000000010009acb0

@end

