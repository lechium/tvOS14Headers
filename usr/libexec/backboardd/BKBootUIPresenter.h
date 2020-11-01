//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKFirstBootObserver-Protocol.h"

@class BKBootUIOverlayVendor, BKDisplayRenderOverlay, BKDisplayRenderOverlayManager, BKFirstBootDetector, BKSystemAppSentinel, NSString;
@protocol OS_dispatch_queue;

@interface BKBootUIPresenter : NSObject <BKFirstBootObserver>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    BKBootUIOverlayVendor *_bootUIOverlayVendor;	// 16 = 0x10
    BKSystemAppSentinel *_systemAppSentinel;	// 24 = 0x18
    BKFirstBootDetector *_firstBootDetector;	// 32 = 0x20
    BKDisplayRenderOverlayManager *_renderOverlayManager;	// 40 = 0x28
    BKDisplayRenderOverlay *_underlay;	// 48 = 0x30
    BKDisplayRenderOverlay *_overlay;	// 56 = 0x38
    int _screenOwnerPID;	// 64 = 0x40
    NSString *_screenOwnerBundleIdentifier;	// 72 = 0x48
    _Bool _isOverlaySustained;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x000000010005bc8c
- (void).cxx_destruct;	// IMP=0x000000010005b3e0
- (void)_queue_removeUnderlay;	// IMP=0x000000010005b340
- (void)_queue_addUnderlay;	// IMP=0x000000010005b1b8
- (void)_queue_addOverlayForReason:(id)arg1;	// IMP=0x000000010005af88
- (void)_queue_removeOverlayWithAnimationSettings:(id)arg1;	// IMP=0x000000010005aec8
- (void)_queue_updateOverlayForReason:(id)arg1;	// IMP=0x000000010005a8b8
- (void)_queue_setScreenOwnerPID:(int)arg1;	// IMP=0x000000010005a6a0
- (void)_sync;	// IMP=0x000000010005a690
- (void)_systemAppExited:(id)arg1;	// IMP=0x000000010005a60c
- (void)_systemAppChanged:(id)arg1;	// IMP=0x000000010005a588
- (void)_systemAppFinishedLaunching:(id)arg1;	// IMP=0x000000010005a504
- (void)firstBootDetectorDidFinishFirstBoot:(id)arg1;	// IMP=0x000000010005a480
- (void)sustainOverlayForReason:(id)arg1;	// IMP=0x000000010005a400
- (void)dismissOverlayWithAnimationSettings:(id)arg1 requstedByPID:(int)arg2;	// IMP=0x000000010005a370
@property(readonly, nonatomic, getter=isShowingBootUI) _Bool showingBootUI;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000010005a0e8
- (id)initWithSystemAppSentinel:(id)arg1 alternateSystemAppManager:(id)arg2 firstBootDetector:(id)arg3 bootUIOverlayVendor:(id)arg4 renderOverlayManager:(id)arg5;	// IMP=0x0000000100059df4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
