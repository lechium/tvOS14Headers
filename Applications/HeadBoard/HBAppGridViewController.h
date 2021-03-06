//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HBAppGridViewDataSource-Protocol.h"
#import "HBAppGridViewDelegate-Protocol.h"
#import "HBFolderObserver-Protocol.h"
#import "HBUILaunchAnimationEnvironment-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class HBAppDeleteHintView, HBAppGridView, HBFolder, HBFolderViewControllerTransitioningDelegate, HBRootItem, HBSingleCellHostView, HBUninstallConfirmationController, NSArray, NSMutableArray, NSString, TVSStateMachine, UIAlertController, UITapGestureRecognizer, UIView;
@protocol HBAppGridViewControllerDelegate, HBRootFolderProvider;

@interface HBAppGridViewController : UIViewController <HBAppGridViewDataSource, HBAppGridViewDelegate, HBFolderObserver, UIGestureRecognizerDelegate, HBUILaunchAnimationEnvironment>
{
    struct {
        unsigned int delegateDidUpdateFocusInContextWithAnimationCoordinator:1;
        unsigned int delegateDidFocusOnItemInDock:1;
        unsigned int delegateWillUnfocusOnItemInDock:1;
        unsigned int delegateItemMoveIntoDock:1;
        unsigned int delegateItemMoveOutOfDockReplaceWithItem:1;
        unsigned int delegateItemsBecameReady:1;
        unsigned int delegateEditingStateChanged:1;
        unsigned int delegateDidEndDecelerating:1;
        unsigned int delegateDidScrollCloseEnoughToTop:1;
    } _flags;	// 8 = 0x8
    _Bool _dockMode;	// 12 = 0xc
    double _touchHintDisplayStartTime;	// 16 = 0x10
    _Bool _updatePending;	// 24 = 0x18
    _Bool _needsUpdateForAnimatorCompletion;	// 25 = 0x19
    _Bool _shouldIgnoreFolderChanges;	// 26 = 0x1a
    _Bool _shouldCaptureFocusForFolderResign;	// 27 = 0x1b
    _Bool _stableEditingState;	// 28 = 0x1c
    id <HBAppGridViewControllerDelegate> _delegate;	// 32 = 0x20
    HBRootItem *_focusedItem;	// 40 = 0x28
    id <HBRootFolderProvider> _rootFolderProvider;	// 48 = 0x30
    long long _topShelfContentStyle;	// 56 = 0x38
    HBSingleCellHostView *_editingSnapshotTransitionView;	// 64 = 0x40
    UITapGestureRecognizer *_editingMenuGesture;	// 72 = 0x48
    UITapGestureRecognizer *_editingTVButtonGesture;	// 80 = 0x50
    UITapGestureRecognizer *_editingSelectGesture;	// 88 = 0x58
    UITapGestureRecognizer *_editingPlayPauseGesture;	// 96 = 0x60
    HBFolderViewControllerTransitioningDelegate *_strongTransitioningDelegate;	// 104 = 0x68
    HBUninstallConfirmationController *_uninstallConfirmationController;	// 112 = 0x70
    UIAlertController *_editingAlertController;	// 120 = 0x78
    TVSStateMachine *_editingHintStateMachine;	// 128 = 0x80
    HBAppDeleteHintView *_hintView;	// 136 = 0x88
    HBAppGridView *_appGridView;	// 144 = 0x90
    HBFolder *_folder;	// 152 = 0x98
    NSMutableArray *_items;	// 160 = 0xa0
}

+ (id)_subItemsFromItems:(id)arg1 aroundIndex:(unsigned long long)arg2 amount:(unsigned long long)arg3;	// IMP=0x00000001000979b0
+ (_Bool)_canRemoveApp:(id)arg1;	// IMP=0x0000000100096aa4
- (void).cxx_destruct;	// IMP=0x000000010009b1d0
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) HBFolder *folder; // @synthesize folder=_folder;
@property(retain, nonatomic) HBAppGridView *appGridView; // @synthesize appGridView=_appGridView;
@property(nonatomic) _Bool stableEditingState; // @synthesize stableEditingState=_stableEditingState;
@property(retain, nonatomic) HBAppDeleteHintView *hintView; // @synthesize hintView=_hintView;
@property(retain, nonatomic) TVSStateMachine *editingHintStateMachine; // @synthesize editingHintStateMachine=_editingHintStateMachine;
@property(nonatomic) _Bool shouldCaptureFocusForFolderResign; // @synthesize shouldCaptureFocusForFolderResign=_shouldCaptureFocusForFolderResign;
@property(nonatomic) _Bool shouldIgnoreFolderChanges; // @synthesize shouldIgnoreFolderChanges=_shouldIgnoreFolderChanges;
@property(nonatomic) _Bool needsUpdateForAnimatorCompletion; // @synthesize needsUpdateForAnimatorCompletion=_needsUpdateForAnimatorCompletion;
@property(nonatomic, getter=isUpdatePending) _Bool updatePending; // @synthesize updatePending=_updatePending;
@property(retain, nonatomic) UIAlertController *editingAlertController; // @synthesize editingAlertController=_editingAlertController;
@property(retain, nonatomic) HBUninstallConfirmationController *uninstallConfirmationController; // @synthesize uninstallConfirmationController=_uninstallConfirmationController;
@property(retain, nonatomic) HBFolderViewControllerTransitioningDelegate *strongTransitioningDelegate; // @synthesize strongTransitioningDelegate=_strongTransitioningDelegate;
@property(retain, nonatomic) UITapGestureRecognizer *editingPlayPauseGesture; // @synthesize editingPlayPauseGesture=_editingPlayPauseGesture;
@property(retain, nonatomic) UITapGestureRecognizer *editingSelectGesture; // @synthesize editingSelectGesture=_editingSelectGesture;
@property(retain, nonatomic) UITapGestureRecognizer *editingTVButtonGesture; // @synthesize editingTVButtonGesture=_editingTVButtonGesture;
@property(retain, nonatomic) UITapGestureRecognizer *editingMenuGesture; // @synthesize editingMenuGesture=_editingMenuGesture;
@property(retain, nonatomic) HBSingleCellHostView *editingSnapshotTransitionView; // @synthesize editingSnapshotTransitionView=_editingSnapshotTransitionView;
@property(nonatomic) long long topShelfContentStyle; // @synthesize topShelfContentStyle=_topShelfContentStyle;
@property(nonatomic) __weak id <HBRootFolderProvider> rootFolderProvider; // @synthesize rootFolderProvider=_rootFolderProvider;
@property(retain, nonatomic) HBRootItem *focusedItem; // @synthesize focusedItem=_focusedItem;
@property(nonatomic) __weak id <HBAppGridViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)nextLaunchAnimationEnvironments;	// IMP=0x000000010009ae94
- (id)launchAnimationsWithContext:(id)arg1;	// IMP=0x000000010009a7a8
- (void)didFinishLaunchAnimationWithContext:(id)arg1;	// IMP=0x000000010009a764
- (id)_newEditingHintStateMachine;	// IMP=0x0000000100099e14
- (void)_handleTouchEndWhileWaitingForHintTimerExpireEvent;	// IMP=0x0000000100099df0
- (void)_handleMinimumShowHintOnTouchEndEvent;	// IMP=0x0000000100099d28
- (void)_handleShowHintEventForTouchEvent;	// IMP=0x0000000100099cec
- (void)_handleTouchBeginWhileStableEvent;	// IMP=0x0000000100099c90
- (void)_handleBeginStableEditingEvent;	// IMP=0x0000000100099c74
- (void)_handleEndStableEditingEvent;	// IMP=0x0000000100099c50
- (void)_postHintEndEventForTimer;	// IMP=0x0000000100099c08
- (void)_handleShowHintEvent:(double)arg1;	// IMP=0x00000001000999bc
- (void)_postWaitingToHintTimerExpireEvent;	// IMP=0x0000000100099974
- (void)_handleHintBeginEvent;	// IMP=0x0000000100099958
- (void)_handleHintDismissalForEvent;	// IMP=0x00000001000997e0
- (void)setNeedsUpdate;	// IMP=0x00000001000996b4
- (void)_profileListChanged:(id)arg1;	// IMP=0x00000001000995c4
- (void)_enterIdleMode:(id)arg1;	// IMP=0x00000001000995b0
- (void)_applicationWillResignActive:(id)arg1;	// IMP=0x000000010009959c
- (void)_completeTransitionFromApp:(id)arg1 toIndex:(unsigned long long)arg2 transitionView:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100098ecc
- (void)_zoomResignItemTransitionAnimationCompleteWithApp:(id)arg1 fromFolder:(id)arg2 transitionView:(id)arg3 resignTransitionToLeft:(_Bool)arg4;	// IMP=0x000000010009887c
- (void)_resignApp:(id)arg1 toFolder:(id)arg2 resignTransitionToLeft:(_Bool)arg3;	// IMP=0x000000010009856c
- (void)_zoomLaunchItemTransitionAnimationCompleteWithApp:(id)arg1 transitionView:(id)arg2;	// IMP=0x00000001000983b0
- (void)_startTransitionFromApp:(id)arg1 toFolder:(id)arg2;	// IMP=0x0000000100097f14
- (id)_makeMultiUserEditAlertControllerActionForApplication:(id)arg1;	// IMP=0x0000000100097b40
- (id)_snapshotOfFocusedCell;	// IMP=0x0000000100097900
- (void)_openFolder:(id)arg1;	// IMP=0x00000001000975c4
- (id)_proposedFolderNameForTargetApp:(id)arg1 editedApp:(id)arg2;	// IMP=0x00000001000974a0
- (id)_possibleDestinationFoldersForApp:(id)arg1;	// IMP=0x000000010009734c
- (void)_attemptToRemoveApp:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0000000100096b00
- (id)_appGridViewSafeItemAtIndexPath:(id)arg1;	// IMP=0x00000001000969a4
- (id)_appGridViewItemAtIndexPath:(id)arg1;	// IMP=0x000000010009690c
- (id)_indexPathOfItem:(id)arg1;	// IMP=0x0000000100096860
- (void)_handlePlayPauseGestureWhileEditing:(id)arg1;	// IMP=0x0000000100095e44
- (void)_handleGestureToEndEditing:(id)arg1;	// IMP=0x0000000100095ddc
- (void)_commitItemsToFolder:(id)arg1;	// IMP=0x0000000100095d08
- (void)_handleEditingStateChange;	// IMP=0x0000000100095860
- (void)_attemptToEndEditingWithReason:(long long)arg1 shouldSave:(_Bool)arg2;	// IMP=0x0000000100095674
- (void)_startEditingWithSnapshotView:(id)arg1;	// IMP=0x00000001000955d4
- (void)_startEditing;	// IMP=0x0000000100095548
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
@property(readonly, nonatomic, getter=isEditingAllowed) _Bool editingAllowed;
- (void)appGridViewDidEndStableEditing:(id)arg1;	// IMP=0x00000001000952c0
- (void)appGridViewDidBeginStableEditing:(id)arg1;	// IMP=0x0000000100095260
- (void)appGridViewDidStableTouchEndWhileEditing:(id)arg1;	// IMP=0x0000000100095218
- (void)appGridViewDidStableTouchBeginWhileEditing:(id)arg1;	// IMP=0x00000001000951d0
- (void)appGridViewDidScrollCloseEnoughToTop:(id)arg1;	// IMP=0x0000000100095168
- (void)appGridViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000100095104
- (void)appGridView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000100094c6c
- (void)appGridView:(id)arg1 didLongPressItemAtIndexPath:(id)arg2;	// IMP=0x0000000100094c28
- (void)appGridView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001000948f4
- (void)prioritizeAppInstallIfApplicable:(id)arg1;	// IMP=0x00000001000946a8
- (id)preferredFocusIndexPathInAppGridView:(id)arg1;	// IMP=0x0000000100094648
- (void)appGridView:(id)arg1 droppedItemAtIndexPathOutOfBounds:(id)arg2 isLeft:(_Bool)arg3;	// IMP=0x0000000100094524
- (void)_moveApp:(id)arg1 toFolder:(id)arg2;	// IMP=0x0000000100093f98
- (void)_createFolderWithApp:(id)arg1;	// IMP=0x0000000100093a6c
- (void)_createFolderWithTargetApp:(id)arg1 editedApp:(id)arg2;	// IMP=0x000000010009353c
- (void)appGridView:(id)arg1 droppedItemAtIndexPath:(id)arg2 onItemAtIndexPath:(id)arg3;	// IMP=0x0000000100093200
- (void)appGridView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x0000000100092e4c
- (_Bool)appGridView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;	// IMP=0x0000000100092e44
- (id)appGridView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100092d34
- (void)appGridView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000100092d30
- (void)appGridView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000100092d2c
- (unsigned long long)numberOfApplicationsInAppGridView:(id)arg1;	// IMP=0x0000000100092ce0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100092cac
- (void)loadView;	// IMP=0x0000000100092b88
@property(readonly, nonatomic) NSArray *dockItems;
@property(readonly, nonatomic, getter=isFirstCellFocused) _Bool firstCellFocused;
@property(readonly, nonatomic, getter=isDecelerating) _Bool decelerating;
- (void)_ensureFirstCellIsFocused;	// IMP=0x0000000100092898
- (void)moveFocusToFirstDockItem;	// IMP=0x0000000100092844
- (void)scrollToTop:(CDUnknownBlockType)arg1;	// IMP=0x00000001000927a0
- (void)scrollToTop;	// IMP=0x0000000100092790
- (_Bool)isItemInDock:(id)arg1;	// IMP=0x0000000100092718
@property(retain, nonatomic) UIView *headerView;
@property(readonly, nonatomic) unsigned long long maxNumberOfItemsInDock;
- (void)_updateItems;	// IMP=0x0000000100091c70
- (void)_updatePresentedFolderWithNewItem;	// IMP=0x0000000100091a24
- (id)_compareOldItems:(id)arg1 toNewItems:(id)arg2;	// IMP=0x00000001000918f8
- (void)itemsDidChange:(id)arg1;	// IMP=0x00000001000918b4
@property(nonatomic) struct UIEdgeInsets editingClampInsets;
- (id)preferredFocusEnvironments;	// IMP=0x0000000100091694
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000100091638
- (void)dealloc;	// IMP=0x0000000100091604
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000100091458
- (id)initWithFolder:(id)arg1 dockMode:(_Bool)arg2;	// IMP=0x00000001000910dc
- (id)initWithFolder:(id)arg1;	// IMP=0x00000001000910cc
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000910bc
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000910ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

