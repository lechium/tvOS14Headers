//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"
#import "PBSDisplayStateObserver-Protocol.h"
#import "PBSystemOverlayControllerDelegate-Protocol.h"
#import "PBSystemOverlayUIProvider-Protocol.h"
#import "PBSystemUIManaging-Protocol.h"

@class NSString, PBSystemOverlayController;

@interface PBHotBlackManager : NSObject <PBSystemOverlayUIProvider, PBSystemOverlayControllerDelegate, PBSDisplayStateObserver, PBSystemUIManaging, PBInstanceDependable>
{
    PBSystemOverlayController *_overlayController;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000b1798
+ (id)dependencyDescription;	// IMP=0x00000001000b15b8
- (void).cxx_destruct;	// IMP=0x00000001000b2158
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (void)displayState:(id)arg1 didChangeWithConnection:(long long)arg2;	// IMP=0x00000001000b1fbc
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b1ed8
- (_Bool)dismiss;	// IMP=0x00000001000b1da0
- (void)present;	// IMP=0x00000001000b1c80
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (void)dealloc;	// IMP=0x00000001000b1bac
- (id)init;	// IMP=0x00000001000b1898

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

