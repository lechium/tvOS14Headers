//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxySuspendTask : PBCodable <NSCopying>
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010003d848
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010003d7c0
- (unsigned long long)hash;	// IMP=0x000000010003d7a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003d708
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010003d68c
- (void)copyTo:(id)arg1;	// IMP=0x000000010003d664
- (void)writeTo:(id)arg1;	// IMP=0x000000010003d644
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010003d45c
- (id)dictionaryRepresentation;	// IMP=0x000000010003d3d0
- (id)description;	// IMP=0x000000010003d31c
@property(readonly, nonatomic) _Bool hasTask;

@end

