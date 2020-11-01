//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class PDURLSessionProxyResponse, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyGetAuthHeaders : PBCodable <NSCopying>
{
    PDURLSessionProxyResponse *_response;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000c1e0
@property(retain, nonatomic) PDURLSessionProxyResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000c0fc
- (unsigned long long)hash;	// IMP=0x000000010000c0a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000bfcc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000bf1c
- (void)copyTo:(id)arg1;	// IMP=0x000000010000beb0
- (void)writeTo:(id)arg1;	// IMP=0x000000010000be4c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000bc14
- (id)dictionaryRepresentation;	// IMP=0x000000010000bb34
- (id)description;	// IMP=0x000000010000ba80
@property(readonly, nonatomic) _Bool hasResponse;
@property(readonly, nonatomic) _Bool hasTask;

@end

