//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSKExpressTapToSetupItemProviderStep-Protocol.h"

@class NSString;
@protocol TVSKStepDelegate;

@interface SATVSiriAndDictationStep : NSObject <TVSKExpressTapToSetupItemProviderStep>
{
    id <TVSKStepDelegate> stepDelegate;	// 8 = 0x8
}

+ (id)expressTapToSetupItemWithTapToSetupDeviceInfo:(id)arg1;	// IMP=0x0000000100053aec
+ (id)stableIdentifier;	// IMP=0x0000000100053548
+ (void)initialize;	// IMP=0x00000001000534e4
- (void).cxx_destruct;	// IMP=0x0000000100054124
@property(nonatomic) __weak id <TVSKStepDelegate> stepDelegate; // @synthesize stepDelegate;
- (void)_completeStepWithConsentForSiri:(_Bool)arg1 andDictation:(_Bool)arg2;	// IMP=0x0000000100054064
- (id)_handleSiriConsent:(long long)arg1 andDictationConsent:(long long)arg2;	// IMP=0x0000000100053fd0
- (void)_showViewControllerBasedOnSiriAvailability:(_Bool)arg1;	// IMP=0x0000000100053d18
- (void)_reset;	// IMP=0x0000000100053cd0
- (void)autoAdvance;	// IMP=0x0000000100053a70
- (id)executeStepForContext:(id)arg1;	// IMP=0x0000000100053554

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

