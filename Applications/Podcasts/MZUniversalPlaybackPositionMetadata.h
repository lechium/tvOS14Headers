//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface MZUniversalPlaybackPositionMetadata : NSObject <NSCopying>
{
    _Bool _hasBeenPlayed;	// 8 = 0x8
    _Bool _isNew;	// 9 = 0x9
    NSString *_itemIdentifier;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
    double _bookmarkTime;	// 32 = 0x20
    unsigned long long _playCount;	// 40 = 0x28
}

+ (id)metadataWithValuesItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2;	// IMP=0x0000000100045e9c
+ (id)metadataWithValuesFromDataSourceItem:(id)arg1;	// IMP=0x0000000100045a08
+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;	// IMP=0x00000001000451c8
- (void).cxx_destruct;	// IMP=0x0000000100046948
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(nonatomic) unsigned long long playCount; // @synthesize playCount=_playCount;
@property(nonatomic) _Bool hasBeenPlayed; // @synthesize hasBeenPlayed=_hasBeenPlayed;
@property(nonatomic) double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (id)keyValueStorePayload;	// IMP=0x00000001000466e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000450f4
- (unsigned long long)hash;	// IMP=0x0000000100045034
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100044f3c
- (id)description;	// IMP=0x0000000100044d1c
- (id)init;	// IMP=0x0000000100044ce8

@end

