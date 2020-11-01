//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKCacheObject.h"

@class GKTurnBasedExchangeCacheObject, NSData, NSDate;

@interface GKTurnBasedExchangeReplyCacheObject : GKCacheObject
{
}

+ (id)entityName;	// IMP=0x0000000100054944
- (id)internalRepresentation;	// IMP=0x0000000100054b8c
- (void)updateWithServerRepresentation:(id)arg1;	// IMP=0x0000000100054950

// Remaining properties
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) GKTurnBasedExchangeCacheObject *exchange; // @dynamic exchange;
@property(retain, nonatomic) NSData *localizableMessage; // @dynamic localizableMessage;
@property(nonatomic) int recipientIndex; // @dynamic recipientIndex;
@property(retain, nonatomic) NSDate *replyDate; // @dynamic replyDate;

@end

