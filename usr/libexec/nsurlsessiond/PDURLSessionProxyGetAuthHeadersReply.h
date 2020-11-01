//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class NSData, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyGetAuthHeadersReply : PBCodable <NSCopying>
{
    NSData *_headerData;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
    _Bool _continueLoad;	// 24 = 0x18
    struct {
        unsigned int continueLoad:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000001000305cc
@property(nonatomic) _Bool continueLoad; // @synthesize continueLoad=_continueLoad;
@property(retain, nonatomic) NSData *headerData; // @synthesize headerData=_headerData;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000304c4
- (unsigned long long)hash;	// IMP=0x0000000100030434
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100030324
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100030248
- (void)copyTo:(id)arg1;	// IMP=0x00000001000301b0
- (void)writeTo:(id)arg1;	// IMP=0x0000000100030124
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010002fe48
- (id)dictionaryRepresentation;	// IMP=0x000000010002fd34
- (id)description;	// IMP=0x000000010002fc80
@property(nonatomic) _Bool hasContinueLoad;
@property(readonly, nonatomic) _Bool hasHeaderData;
@property(readonly, nonatomic) _Bool hasTask;

@end
