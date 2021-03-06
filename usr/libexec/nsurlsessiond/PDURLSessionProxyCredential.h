//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface PDURLSessionProxyCredential : PBCodable <NSCopying>
{
    NSData *_archiveList;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    CDStruct_f20694ce _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000010003c2e4
@property(retain, nonatomic) NSData *archiveList; // @synthesize archiveList=_archiveList;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010003c238
- (unsigned long long)hash;	// IMP=0x000000010003c1d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003c0fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003c054
- (void)copyTo:(id)arg1;	// IMP=0x000000010003bfdc
- (void)writeTo:(id)arg1;	// IMP=0x000000010003bf6c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010003bf64
- (id)dictionaryRepresentation;	// IMP=0x000000010003be98
- (id)description;	// IMP=0x000000010003bde4
@property(readonly, nonatomic) _Bool hasArchiveList;
@property(nonatomic) _Bool hasVersion;

@end

