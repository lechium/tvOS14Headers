//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface LTSStatsManager : NSObject
{
    NSDictionary *_prevStatsSinceBoot;	// 8 = 0x8
    struct __CFDictionary *_subscribedChannels;	// 16 = 0x10
    struct __IOReportSubscriptionCF *_subscription;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)sharedLTSStatsManager;	// IMP=0x0000000100004894
- (void).cxx_destruct;	// IMP=0x0000000100005784
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) struct __IOReportSubscriptionCF *subscription; // @synthesize subscription=_subscription;
@property(nonatomic) struct __CFDictionary *subscribedChannels; // @synthesize subscribedChannels=_subscribedChannels;
@property(retain, nonatomic) NSDictionary *prevStatsSinceBoot; // @synthesize prevStatsSinceBoot=_prevStatsSinceBoot;
- (id)getLifetimeStats;	// IMP=0x0000000100005458
- (void)updateLifetimeStats;	// IMP=0x00000001000053f0
- (void)updateLifetimeStatsGated;	// IMP=0x00000001000051fc
- (int)updateLifetimeStatsForChannel:(struct __CFDictionary *)arg1;	// IMP=0x0000000100004de0
- (id)getStatsSinceBoot;	// IMP=0x0000000100004d30
- (void)dealloc;	// IMP=0x0000000100004c98
- (id)init;	// IMP=0x0000000100004938

@end

