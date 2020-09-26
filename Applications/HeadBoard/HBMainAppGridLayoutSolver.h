//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HBMainAppGridState-Protocol.h"

@class HBMainAppGridState, NSString;

@interface HBMainAppGridLayoutSolver : NSObject <HBMainAppGridState>
{
    HBMainAppGridState *_currentState;	// 8 = 0x8
    struct CGRect _topShelfContentFrame;	// 16 = 0x10
    struct CGRect _dockBackgroundFrame;	// 48 = 0x30
    struct CGAffineTransform _dockTransform;	// 80 = 0x50
    struct CGAffineTransform _gridTransform;	// 128 = 0x80
}

+ (struct CGRect)_dockFrameWithBounds:(struct CGRect)arg1 focusState:(unsigned long long)arg2;	// IMP=0x000000010008ebdc
- (void).cxx_destruct;	// IMP=0x000000010008ed00
@property(readonly, nonatomic) HBMainAppGridState *currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) struct CGAffineTransform gridTransform; // @synthesize gridTransform=_gridTransform;
@property(readonly, nonatomic) struct CGAffineTransform dockTransform; // @synthesize dockTransform=_dockTransform;
@property(readonly, nonatomic) struct CGRect dockBackgroundFrame; // @synthesize dockBackgroundFrame=_dockBackgroundFrame;
@property(readonly, nonatomic) struct CGRect topShelfContentFrame; // @synthesize topShelfContentFrame=_topShelfContentFrame;
- (unsigned long long)_updateWithChanges:(unsigned long long)arg1 nextState:(id)arg2;	// IMP=0x000000010008e880
- (unsigned long long)updateState:(CDUnknownBlockType)arg1;	// IMP=0x000000010008e7a0
@property(readonly, nonatomic) unsigned long long editingFocusState;
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
@property(readonly, nonatomic, getter=isAppGridHidden) _Bool appGridHidden;
@property(readonly, nonatomic) unsigned long long focusState;
@property(readonly, nonatomic) struct CGRect bounds;
- (id)init;	// IMP=0x000000010008e700
- (id)initWithState:(id)arg1;	// IMP=0x000000010008e640

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

