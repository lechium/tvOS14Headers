//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NRBabelInstance, NRBabelPrefix;
@protocol OS_dispatch_source;

@interface NRBabelSource : NSObject
{
    unsigned short _seqno;	// 8 = 0x8
    unsigned short _metric;	// 10 = 0xa
    NRBabelPrefix *_bPrefix;	// 16 = 0x10
    unsigned long long _routerID;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_gcTimer;	// 32 = 0x20
    NRBabelInstance *_instance;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100075664
@property(nonatomic) __weak NRBabelInstance *instance; // @synthesize instance=_instance;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *gcTimer; // @synthesize gcTimer=_gcTimer;
@property(nonatomic) unsigned short metric; // @synthesize metric=_metric;
@property(nonatomic) unsigned short seqno; // @synthesize seqno=_seqno;
@property(nonatomic) unsigned long long routerID; // @synthesize routerID=_routerID;
@property(retain, nonatomic) NRBabelPrefix *bPrefix; // @synthesize bPrefix=_bPrefix;
- (void)resetGCTimer;	// IMP=0x00000001000755a4
- (void)setupGCTimer;	// IMP=0x0000000100075460
- (void)updateFeasabilityDistanceWithSeqno:(unsigned short)arg1 metric:(unsigned short)arg2;	// IMP=0x00000001000753e0
- (_Bool)isNewDistanceUnfeasibleWithSeqno:(unsigned short)arg1 metric:(unsigned short)arg2;	// IMP=0x00000001000752f4
- (_Bool)isDeepEqual:(id)arg1;	// IMP=0x0000000100075250
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010007517c
- (id)descriptionWithoutMetric;	// IMP=0x0000000100075080
- (id)description;	// IMP=0x0000000100074f80
- (_Bool)matchesPrefix:(id)arg1 routerID:(unsigned long long)arg2;	// IMP=0x0000000100074f54
- (void)dealloc;	// IMP=0x0000000100074f08
- (id)initWithPrefix:(id)arg1 routerID:(unsigned long long)arg2 seqno:(unsigned short)arg3 metric:(unsigned short)arg4 instance:(id)arg5;	// IMP=0x0000000100074d24

@end

