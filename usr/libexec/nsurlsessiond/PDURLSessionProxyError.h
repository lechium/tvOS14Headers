//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface PDURLSessionProxyError : PBCodable <NSCopying>
{
    unsigned long long _code;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    NSData *_userInfo;	// 24 = 0x18
    unsigned int _version;	// 32 = 0x20
    struct {
        unsigned int code:1;
        unsigned int version:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000100045424
@property(retain, nonatomic) NSData *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned long long code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000452f8
- (unsigned long long)hash;	// IMP=0x0000000100045240
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100045104
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100045004
- (void)copyTo:(id)arg1;	// IMP=0x0000000100044f40
- (void)writeTo:(id)arg1;	// IMP=0x0000000100044e8c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100044e84
- (id)dictionaryRepresentation;	// IMP=0x0000000100044d3c
- (id)description;	// IMP=0x0000000100044c88
@property(readonly, nonatomic) _Bool hasUserInfo;
@property(nonatomic) _Bool hasCode;
@property(readonly, nonatomic) _Bool hasDomain;
@property(nonatomic) _Bool hasVersion;

@end

