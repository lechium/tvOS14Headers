//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKStep-Protocol.h"

@class NSString;
@protocol TVSKStepDelegate;

@interface SATVSiriStoreFrontStep : NSObject <TVSKStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
}

+ (id)stableIdentifier;	// IMP=0x0000000100064210
+ (void)initialize;	// IMP=0x00000001000641ac
- (void).cxx_destruct;	// IMP=0x00000001000648f8
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_disableSiri:(_Bool)arg1;	// IMP=0x0000000100064880
- (void)_handleContinueWithoutSiri;	// IMP=0x00000001000647ec
- (void)_displaySiriStoreFrontViewController;	// IMP=0x0000000100064598
- (_Bool)_shouldExecuteStep;	// IMP=0x000000010006440c
- (void)autoAdvance;	// IMP=0x0000000100064398
- (id)executeStepForContext:(id)arg1;	// IMP=0x000000010006421c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

