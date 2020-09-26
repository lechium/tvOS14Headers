//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBAuxiliaryScenePresenting-Protocol.h"
#import "PBInstanceDependable-Protocol.h"
#import "PBOpenAppTransitionerObserver-Protocol.h"
#import "PBPictureInPictureManagerObserver_Internal-Protocol.h"
#import "PBSystemOverlayControllerDelegate-Protocol.h"
#import "PBSystemUIManaging-Protocol.h"

@class NSString, PBDialogHiddenAssertion, PBSceneHandle, PBSystemOverlayController;

@interface PBAirPlayManager : NSObject <PBOpenAppTransitionerObserver, PBSystemOverlayControllerDelegate, PBAuxiliaryScenePresenting, PBPictureInPictureManagerObserver_Internal, PBInstanceDependable, PBSystemUIManaging>
{
    PBSystemOverlayController *_overlayController;	// 8 = 0x8
    PBDialogHiddenAssertion *_hideDialogAssertion;	// 16 = 0x10
    PBSceneHandle *_sceneHandle;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000001000674bc
+ (id)dependencyDescription;	// IMP=0x000000010006727c
- (void).cxx_destruct;	// IMP=0x00000001000697c0
@property(readonly, nonatomic) PBSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
@property(readonly, nonatomic) PBDialogHiddenAssertion *hideDialogAssertion; // @synthesize hideDialogAssertion=_hideDialogAssertion;
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
- (void)pictureInPictureManager:(id)arg1 willEndSwapAnimationForStartingApplication:(id)arg2;	// IMP=0x0000000100069650
- (void)pictureInPictureManager:(id)arg1 didCancelPictureInPictureForApplication:(id)arg2;	// IMP=0x000000010006955c
- (void)pictureInPictureManager:(id)arg1 didStopPictureInPictureForApplication:(id)arg2;	// IMP=0x00000001000693d0
- (void)pictureInPictureManager:(id)arg1 didUpdateState:(id)arg2;	// IMP=0x000000010006927c
- (void)dismissAuxiliaryScene:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000691c4
- (void)presentAuxiliaryScene:(id)arg1;	// IMP=0x0000000100068f44
- (id)sceneIdentifierForActivity:(id)arg1 withProcess:(id)arg2;	// IMP=0x0000000100068e38
@property(readonly, nonatomic) long long presentingLayoutLevel;
- (void)appTransitioner:(id)arg1 willBeginAppTransition:(id)arg2;	// IMP=0x0000000100068bc4
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x0000000100068844
- (void)overlayController:(id)arg1 didPresentSession:(id)arg2;	// IMP=0x0000000100068728
- (void)overlayController:(id)arg1 willPresentSession:(id)arg2;	// IMP=0x0000000100068464
- (void)_dismissWithReason:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100068094
- (void)_updateAirPlayUIForActiveState:(_Bool)arg1;	// IMP=0x0000000100067ea8
- (_Bool)dismissAirPlay;	// IMP=0x0000000100067e34
- (void)presentUIProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100067bf8
- (_Bool)isActivePiP;	// IMP=0x0000000100067b54
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (void)dealloc;	// IMP=0x0000000100067a0c
- (id)init;	// IMP=0x00000001000675bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

