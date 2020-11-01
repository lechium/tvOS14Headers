//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface RateLimiter : NSObject <NSSecureCoding>
{
    NSDictionary *_config;	// 8 = 0x8
    NSString *_assetType;	// 16 = 0x10
    NSArray *_groups;	// 24 = 0x18
    NSDate *_lastJudgment;	// 32 = 0x20
    NSDate *_overloadUntil;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010007c86c
- (void).cxx_destruct;	// IMP=0x000000010007c704
@property(retain, nonatomic) NSDate *overloadUntil; // @synthesize overloadUntil=_overloadUntil;
@property(retain, nonatomic) NSDate *lastJudgment; // @synthesize lastJudgment=_lastJudgment;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010007c5e8
- (id)getPropertyValue:(id)arg1 object:(id)arg2;	// IMP=0x000000010007c3fc
- (id)diagnostics;	// IMP=0x000000010007c284
@property(readonly, nonatomic) unsigned long long stateSize;
- (void)trim:(id)arg1;	// IMP=0x000000010007bbd0
- (void)reset;	// IMP=0x000000010007ba20
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010007b670
- (id)consumeTokenFromBucket:(id)arg1 config:(id)arg2 name:(id)arg3 at:(id)arg4;	// IMP=0x000000010007b438
- (long long)judge:(id)arg1 at:(id)arg2 limitTime:(id *)arg3;	// IMP=0x000000010007abe4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010007a930
- (id)initWithConfig:(id)arg1;	// IMP=0x000000010007a89c

@end
