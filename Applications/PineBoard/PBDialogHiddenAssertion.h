//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSInvalidatable-Protocol.h"

@class BSSimpleAssertion, NSString;

@interface PBDialogHiddenAssertion : NSObject <BSInvalidatable>
{
    NSString *_reason;	// 8 = 0x8
    BSSimpleAssertion *_assertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010016d3cc
@property(readonly, nonatomic) BSSimpleAssertion *assertion; // @synthesize assertion=_assertion;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void)invalidate;	// IMP=0x000000010016d340
- (void)dealloc;	// IMP=0x000000010016d2d8
- (id)initWithReason:(id)arg1;	// IMP=0x000000010016d014

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

