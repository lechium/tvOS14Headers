//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTBaseProcessor.h"

@interface MTUPPSyncProcessor : MTBaseProcessor
{
}

- (void)playerPaused;	// IMP=0x0000000100148100
- (_Bool)shouldSync:(id)arg1;	// IMP=0x0000000100147fc4
- (void)processResults;	// IMP=0x0000000100147e20
- (void)resultsChangedWithDeletedIds:(id)arg1 andInsertIds:(id)arg2;	// IMP=0x0000000100147e14
- (void)updatePredicate;	// IMP=0x0000000100147d84
- (id)predicate;	// IMP=0x0000000100147ce8
- (id)entityName;	// IMP=0x0000000100147cd8

@end
