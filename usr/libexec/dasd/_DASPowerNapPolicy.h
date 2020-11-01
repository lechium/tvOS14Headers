//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASActivityPolicy-Protocol.h"

@class NSArray, NSString;

@interface _DASPowerNapPolicy : NSObject <_DASActivityPolicy>
{
    NSString *_policyName;	// 8 = 0x8
    NSArray *_triggers;	// 16 = 0x10
}

+ (id)policyInstance;	// IMP=0x000000010002b0f8
- (void).cxx_destruct;	// IMP=0x000000010002b5cc
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(copy, nonatomic) NSString *policyName; // @synthesize policyName=_policyName;
- (id)responseForActivity:(id)arg1 withState:(id)arg2;	// IMP=0x000000010002b1ac
- (double)weightForActivity:(id)arg1;	// IMP=0x000000010002b1a4
- (_Bool)appliesToActivity:(id)arg1;	// IMP=0x000000010002b19c
- (_Bool)shouldIgnoreTrigger:(id)arg1 withState:(id)arg2;	// IMP=0x000000010002b194
- (id)init;	// IMP=0x000000010002b09c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

