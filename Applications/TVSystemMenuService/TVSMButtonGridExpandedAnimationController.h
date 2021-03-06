//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIViewPropertyAnimator;

@interface TVSMButtonGridExpandedAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIViewPropertyAnimator *_animator;	// 8 = 0x8
    _Bool _presenting;	// 16 = 0x10
    struct CGRect _originatingFrame;	// 24 = 0x18
}

+ (id)_springTimingParameters;	// IMP=0x000000010000c218
+ (id)_cubicTimingParameters;	// IMP=0x000000010000c1bc
+ (id)_cubicTimingFunction;	// IMP=0x000000010000c198
+ (id)animationSettingsForOperation:(long long)arg1;	// IMP=0x000000010000c098
- (void).cxx_destruct;	// IMP=0x000000010000ccac
@property(nonatomic) struct CGRect originatingFrame; // @synthesize originatingFrame=_originatingFrame;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (struct CGAffineTransform)_transformFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2;	// IMP=0x000000010000cb38
- (void)animateTransition:(id)arg1;	// IMP=0x000000010000c268
- (double)transitionDuration:(id)arg1;	// IMP=0x000000010000c25c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

