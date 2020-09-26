//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"
#import "PBPresentationElementFocusCoordinatorObserver-Protocol.h"
#import "PBSceneLayoutViewControllerDisplayPublisherDelegate-Protocol.h"
#import "PBSystemUIPresenting-Protocol.h"

@class BSMutableIntegerMap, NSMutableDictionary, NSString, PBPresentationElementFocusCoordinator, PBSceneLayoutDebugWindow, PBUIDebugWindow, UIWindow;

@interface PBWindowManager : NSObject <PBPresentationElementFocusCoordinatorObserver, PBSceneLayoutViewControllerDisplayPublisherDelegate, PBInstanceDependable, PBSystemUIPresenting>
{
    PBPresentationElementFocusCoordinator *_focusCoordinator;	// 8 = 0x8
    long long _activeLayoutLevel;	// 16 = 0x10
    BSMutableIntegerMap *_layoutLevelToWindow;	// 24 = 0x18
    BSMutableIntegerMap *_layoutLevelToPresentationElement;	// 32 = 0x20
    NSMutableDictionary *_identifierToDisplayElementAssertions;	// 40 = 0x28
    NSMutableDictionary *_identifierToDisplayTransitionAssertions;	// 48 = 0x30
    PBUIDebugWindow *_uiDebugWindow;	// 56 = 0x38
    PBSceneLayoutDebugWindow *_uiLayoutDebugWindow;	// 64 = 0x40
}

+ (id)sharedInstance;	// IMP=0x0000000100097640
+ (id)dependencyDescription;	// IMP=0x0000000100097588
- (void).cxx_destruct;	// IMP=0x000000010009d0d0
@property(readonly, nonatomic) PBSceneLayoutDebugWindow *uiLayoutDebugWindow; // @synthesize uiLayoutDebugWindow=_uiLayoutDebugWindow;
@property(readonly, nonatomic) PBUIDebugWindow *uiDebugWindow; // @synthesize uiDebugWindow=_uiDebugWindow;
@property(retain, nonatomic) NSMutableDictionary *identifierToDisplayTransitionAssertions; // @synthesize identifierToDisplayTransitionAssertions=_identifierToDisplayTransitionAssertions;
@property(retain, nonatomic) NSMutableDictionary *identifierToDisplayElementAssertions; // @synthesize identifierToDisplayElementAssertions=_identifierToDisplayElementAssertions;
@property(retain, nonatomic) BSMutableIntegerMap *layoutLevelToPresentationElement; // @synthesize layoutLevelToPresentationElement=_layoutLevelToPresentationElement;
@property(retain, nonatomic) BSMutableIntegerMap *layoutLevelToWindow; // @synthesize layoutLevelToWindow=_layoutLevelToWindow;
@property(nonatomic) long long activeLayoutLevel; // @synthesize activeLayoutLevel=_activeLayoutLevel;
@property(readonly, nonatomic) PBPresentationElementFocusCoordinator *focusCoordinator; // @synthesize focusCoordinator=_focusCoordinator;
- (void)_updateUILayoutDebugWindow;	// IMP=0x000000010009cda8
- (void)_updateUIDebugWindow;	// IMP=0x000000010009cba4
- (void)prepareDebugWindows;	// IMP=0x000000010009c374
- (id)_windowForLayoutLevel:(long long)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x000000010009b1f0
- (void)_handleDisplayElementUpdate;	// IMP=0x000000010009ac24
- (void)_removeDisplayLayoutElementWithIdentifier:(id)arg1;	// IMP=0x000000010009ab5c
- (void)_addDisplayLayoutElement:(id)arg1;	// IMP=0x000000010009a89c
- (id)_displayLayoutElementForOverlayLevel:(long long)arg1;	// IMP=0x000000010009a740
- (id)_displayLayoutElementForSceneLayoutElement:(id)arg1;	// IMP=0x000000010009a528
- (void)invalidateSystemUIAtLevel:(long long)arg1;	// IMP=0x000000010009a144
- (void)unhideSystemUIAtLevel:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100099c04
- (void)hideSystemUIAtLevel:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100099500
- (void)dismissSystemUIAtLevel:(long long)arg1 animated:(_Bool)arg2 transitionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100098ba8
- (void)presentSystemUI:(id)arg1 withContext:(id)arg2 animated:(_Bool)arg3 transitionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001000983f0
- (void)sceneLayoutViewController:(id)arg1 didEndTransitionForTransitionElement:(id)arg2 forReason:(id)arg3;	// IMP=0x00000001000982cc
- (void)sceneLayoutViewController:(id)arg1 didStartTransitionForTransitionElement:(id)arg2 forReason:(id)arg3;	// IMP=0x0000000100098068
- (void)sceneLayoutViewController:(id)arg1 didRemoveTransitionElement:(id)arg2;	// IMP=0x0000000100097e6c
- (void)sceneLayoutViewController:(id)arg1 didAddTransitionElement:(id)arg2;	// IMP=0x0000000100097d98
- (void)presentationElementFocusCoordinator:(id)arg1 didUpdateToActiveLayoutLevel:(long long)arg2 fromLevel:(long long)arg3;	// IMP=0x0000000100097cb0
@property(readonly, nonatomic, getter=isShowingWallpaperOnly) _Bool showingWallpaperOnly;
@property(readonly, nonatomic, getter=isShowingBaseUIOnly) _Bool showingBaseUIOnly;
- (id)windowForLayoutLevel:(long long)arg1;	// IMP=0x0000000100097b18
- (void)presentSceneLayoutWindow;	// IMP=0x00000001000979f4
@property(readonly, nonatomic) UIWindow *activeWindow;
- (_Bool)shouldForwardSystemAppEvent;	// IMP=0x0000000100097890
- (id)init;	// IMP=0x0000000100097710

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
