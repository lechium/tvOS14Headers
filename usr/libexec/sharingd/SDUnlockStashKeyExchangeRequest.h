//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SDUnlockStashKeyExchangeRequest : PBRequest <NSCopying>
{
    NSData *_key;	// 8 = 0x8
    unsigned int _sessionID;	// 16 = 0x10
    unsigned int _version;	// 20 = 0x14
    CDStruct_6358cc24 _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000b5ec4
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000b5de4
- (unsigned long long)hash;	// IMP=0x00000001000b5d60
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000b5c60
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000b5b94
- (void)copyTo:(id)arg1;	// IMP=0x00000001000b5af8
- (void)writeTo:(id)arg1;	// IMP=0x00000001000b5a60
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000b5a58
- (id)dictionaryRepresentation;	// IMP=0x00000001000b5624
- (id)description;	// IMP=0x00000001000b5570
@property(readonly, nonatomic) _Bool hasKey;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end
