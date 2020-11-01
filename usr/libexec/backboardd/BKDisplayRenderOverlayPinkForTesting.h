//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKDisplayRenderOverlay.h"

@class CAContext, CALayer;

@interface BKDisplayRenderOverlayPinkForTesting : BKDisplayRenderOverlay
{
    CAContext *_context;	// 8 = 0x8
    CALayer *_layer;	// 16 = 0x10
}

+ (void)doItHide;	// IMP=0x0000000100040b18
+ (void)doItShow;	// IMP=0x0000000100040a40
+ (void)doItShowKernel;	// IMP=0x0000000100040918
+ (id)overlayWithLevel:(float)arg1 display:(id)arg2;	// IMP=0x0000000100040840
- (void).cxx_destruct;	// IMP=0x0000000100040800
- (_Bool)_applyProgressIndicatorPropertiesToKernelIfNecessary;	// IMP=0x00000001000404cc
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000001000403e0
- (void)_dismissWithAnimationSettings:(id)arg1;	// IMP=0x000000010004037c
- (void)_freeze;	// IMP=0x0000000100040378
- (_Bool)_presentWithAnimationSettings:(id)arg1;	// IMP=0x000000010003ff80
- (_Bool)disablesDisplayUpdates;	// IMP=0x000000010003ff78
- (void)dealloc;	// IMP=0x000000010003ff20
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;	// IMP=0x000000010003fec4

@end

