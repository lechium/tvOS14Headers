//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class PBScreenSaverContentPresentingViewController;

@interface PBScreenSaverDismissalTransaction : BSTransaction
{
    _Bool _animated;	// 8 = 0x8
    _Bool _shouldUpdateWallpaper;	// 9 = 0x9
    _Bool _shouldApplyStartValues;	// 10 = 0xa
    PBScreenSaverContentPresentingViewController *_screenSaverViewController;	// 16 = 0x10
    CDStruct_090c3085 _context;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100148f7c
@property(readonly, nonatomic) CDStruct_090c3085 context; // @synthesize context=_context;
@property(readonly, nonatomic) _Bool shouldApplyStartValues; // @synthesize shouldApplyStartValues=_shouldApplyStartValues;
@property(readonly, nonatomic) _Bool shouldUpdateWallpaper; // @synthesize shouldUpdateWallpaper=_shouldUpdateWallpaper;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) PBScreenSaverContentPresentingViewController *screenSaverViewController; // @synthesize screenSaverViewController=_screenSaverViewController;
- (void)_prepareKioskAnimationInTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001487d8
- (id)_defaultAppAnimationTransaction;	// IMP=0x0000000100148618
- (void)_begin;	// IMP=0x0000000100147f38
- (_Bool)_canBeInterrupted;	// IMP=0x0000000100147f18
- (id)initWithScreenSaverViewController:(id)arg1 animated:(_Bool)arg2 updateWallpaper:(_Bool)arg3 applyStartValues:(_Bool)arg4;	// IMP=0x0000000100147d8c

@end

