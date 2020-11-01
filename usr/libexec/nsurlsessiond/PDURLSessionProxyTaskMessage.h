//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxySessionMessage;

@interface PDURLSessionProxyTaskMessage : PBCodable <NSCopying>
{
    unsigned long long _taskIdentifier;	// 8 = 0x8
    PDURLSessionProxySessionMessage *_session;	// 16 = 0x10
    struct {
        unsigned int taskIdentifier:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010004241c
@property(nonatomic) unsigned long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(retain, nonatomic) PDURLSessionProxySessionMessage *session; // @synthesize session=_session;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100042358
- (unsigned long long)hash;	// IMP=0x00000001000422f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100042214
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010004216c
- (void)copyTo:(id)arg1;	// IMP=0x00000001000420f4
- (void)writeTo:(id)arg1;	// IMP=0x0000000100042084
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010004207c
- (id)dictionaryRepresentation;	// IMP=0x0000000100041f8c
- (id)description;	// IMP=0x0000000100041ed8
@property(nonatomic) _Bool hasTaskIdentifier;
@property(readonly, nonatomic) _Bool hasSession;

@end

