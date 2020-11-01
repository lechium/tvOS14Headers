//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface _DASBudget : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char _allocationType;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
    double _capacity;	// 24 = 0x18
    double _balance;	// 32 = 0x20
    CDUnknownBlockType _callback;	// 40 = 0x28
    double _maxBudgetValue;	// 48 = 0x30
    double _minBudgetValue;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000052b8
+ (id)budgetWithName:(id)arg1 capacity:(double)arg2 allocationType:(unsigned char)arg3;	// IMP=0x0000000100004d8c
+ (id)budgetWithName:(id)arg1 capacity:(double)arg2 balance:(double)arg3 allocationType:(unsigned char)arg4;	// IMP=0x0000000100004d10
- (void).cxx_destruct;	// IMP=0x00000001000054f8
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(nonatomic) double minBudgetValue; // @synthesize minBudgetValue=_minBudgetValue;
@property(nonatomic) double maxBudgetValue; // @synthesize maxBudgetValue=_maxBudgetValue;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) double balance; // @synthesize balance=_balance;
@property(readonly, nonatomic) unsigned char allocationType; // @synthesize allocationType=_allocationType;
@property(readonly, nonatomic) double capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100005490
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100005368
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000052c0
- (id)description;	// IMP=0x000000010000526c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000051c0
- (unsigned long long)hash;	// IMP=0x00000001000051b0
- (void)setCapacity:(double)arg1;	// IMP=0x0000000100005140
- (void)setBalance:(double)arg1;	// IMP=0x00000001000050b8
- (void)incrementBy:(double)arg1;	// IMP=0x00000001000050a8
- (void)decrementBy:(double)arg1;	// IMP=0x0000000100005024
- (_Bool)unlockedDecrementBy:(double)arg1;	// IMP=0x0000000100004fec
- (_Bool)isPositive;	// IMP=0x0000000100004fdc
- (void)registerSignificantBudgetChangeCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004fac
- (id)dictionaryRepresentation;	// IMP=0x0000000100004e04
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100004af4
- (id)initWithName:(id)arg1 capacity:(double)arg2 balance:(double)arg3 allocationType:(unsigned char)arg4;	// IMP=0x0000000100004a44

@end

