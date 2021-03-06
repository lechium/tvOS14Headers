//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyCredential, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDidReceiveChallengeReply : PBCodable <NSCopying>
{
    PDURLSessionProxyCredential *_credential;	// 8 = 0x8
    int _disposition;	// 16 = 0x10
    PDURLSessionProxyTaskMessage *_task;	// 24 = 0x18
    CDStruct_cc6d6311 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100006bd4
@property(retain, nonatomic) PDURLSessionProxyCredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100006ac4
- (unsigned long long)hash;	// IMP=0x0000000100006a38
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000692c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100006850
- (void)copyTo:(id)arg1;	// IMP=0x00000001000067b8
- (void)writeTo:(id)arg1;	// IMP=0x000000010000672c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000643c
- (id)dictionaryRepresentation;	// IMP=0x00000001000062a0
- (id)description;	// IMP=0x00000001000061ec
@property(readonly, nonatomic) _Bool hasCredential;
- (int)StringAsDisposition:(id)arg1;	// IMP=0x0000000100006114
- (id)dispositionAsString:(int)arg1;	// IMP=0x0000000100006084
@property(nonatomic) _Bool hasDisposition;
@property(nonatomic) int disposition; // @synthesize disposition=_disposition;
@property(readonly, nonatomic) _Bool hasTask;

@end

