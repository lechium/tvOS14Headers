//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"
#import "PBSystemOverlayControllerDelegate-Protocol.h"
#import "PBSystemOverlayUIProvider-Protocol.h"
#import "PBSystemUIManaging-Protocol.h"

@class NSString, PBSystemOverlayController;

@interface PBEventMaskingManager : NSObject <PBSystemOverlayUIProvider, PBSystemOverlayControllerDelegate, PBSystemUIManaging, PBInstanceDependable>
{
    PBSystemOverlayController *_overlayController;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000100116544
+ (id)dependencyDescription;	// IMP=0x000000010011639c
- (void).cxx_destruct;	// IMP=0x0000000100116c48
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100116b44
- (void)dismiss;	// IMP=0x0000000100116a30
- (void)present;	// IMP=0x0000000100116910
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (id)init;	// IMP=0x0000000100116644

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
