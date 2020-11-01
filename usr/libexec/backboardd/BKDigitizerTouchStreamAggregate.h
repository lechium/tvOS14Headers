//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface BKDigitizerTouchStreamAggregate : NSObject
{
    NSString *_displayUUID;	// 8 = 0x8
    NSMutableArray *_clients;	// 16 = 0x10
}

@property(readonly, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
@property(copy, nonatomic) NSString *displayUUID; // @synthesize displayUUID=_displayUUID;
- (_Bool)getAmbiguityRecommendation:(unsigned char *)arg1 dispatchMode:(unsigned char *)arg2;	// IMP=0x000000010004e2ac
- (void)removeClient:(id)arg1;	// IMP=0x000000010004e29c
- (void)addClient:(id)arg1;	// IMP=0x000000010004e240
- (void)enumerateClients:(CDUnknownBlockType)arg1;	// IMP=0x000000010004e13c
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x000000010004e12c
- (id)description;	// IMP=0x000000010004e0ac
- (void)invalidate;	// IMP=0x000000010004df98
- (void)dealloc;	// IMP=0x000000010004df48

@end

