//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyCancelTask : PBCodable <NSCopying>
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100041e58
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000100041dd0
- (unsigned long long)hash;	// IMP=0x0000000100041db8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100041d18
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100041c9c
- (void)copyTo:(id)arg1;	// IMP=0x0000000100041c74
- (void)writeTo:(id)arg1;	// IMP=0x0000000100041c54
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000100041a6c
- (id)dictionaryRepresentation;	// IMP=0x00000001000419e0
- (id)description;	// IMP=0x000000010004192c
@property(readonly, nonatomic) _Bool hasTask;

@end
