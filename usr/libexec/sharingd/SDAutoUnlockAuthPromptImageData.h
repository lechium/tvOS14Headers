//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SDAutoUnlockAuthPromptImageData : PBCodable <NSCopying>
{
    NSData *_imageData;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    _Bool _finalMessage;	// 20 = 0x14
    struct {
        unsigned int version:1;
        unsigned int finalMessage:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000afc3c
@property(nonatomic) _Bool finalMessage; // @synthesize finalMessage=_finalMessage;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000afb54
- (unsigned long long)hash;	// IMP=0x00000001000afac0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000af9ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000af8d8
- (void)copyTo:(id)arg1;	// IMP=0x00000001000af834
- (void)writeTo:(id)arg1;	// IMP=0x00000001000af79c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000af794
- (id)dictionaryRepresentation;	// IMP=0x00000001000af358
- (id)description;	// IMP=0x00000001000af2a4
@property(nonatomic) _Bool hasFinalMessage;
@property(readonly, nonatomic) _Bool hasImageData;
@property(nonatomic) _Bool hasVersion;

@end

