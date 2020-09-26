//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HBAppGridLayoutDelegatePrivate-Protocol.h"
#import "HBRootCellDelegate-Protocol.h"
#import "HBUILaunchAnimationEnvironment-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDataSourcePrefetching-Protocol.h"
#import "UICollectionViewDelegate_Private-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "_HBTouchablePanGestureRecognizerDelegate-Protocol.h"

@class HBAppGridLayout, HBSingleCellHostView, HBUIMainAppGridTopShelfContainerView, NSIndexPath, NSObservation, NSString, TVSStateMachine, UICollectionView, UIFocusGuide, UIScrollView, UITapGestureRecognizer, _HBTouchablePanGestureRecognizer;
@protocol BSInvalidatable, HBAppGridViewDataSource, HBAppGridViewDelegate;

@interface HBAppGridView : UIView <UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegate_Private, UIScrollViewDelegate, HBRootCellDelegate, _HBTouchablePanGestureRecognizerDelegate, HBAppGridLayoutDelegatePrivate, HBUILaunchAnimationEnvironment>
{
    HBUIMainAppGridTopShelfContainerView *_backgroundTopShelfContainerView;	// 8 = 0x8
    struct {
        unsigned int delegatePreferredFocusIndexPath:1;
        unsigned int delegateDidSelectItemAtIndexPath:1;
        unsigned int delegateShowPressCompleteForItemIndexPath:1;
        unsigned int delegateDidLongPressItemAtIndexPath:1;
        unsigned int delegateDidEndDecelerating:1;
        unsigned int delegateDidScrollCloseEnoughToTop:1;
        unsigned int delegateDidStableTouchBeginWhileEditing:1;
        unsigned int delegateDidStableTouchEndWhileEditing:1;
        unsigned int delegateDidDidBeginStableEditing:1;
        unsigned int delegateDidDidEndStableEditing:1;
        unsigned int dataSourceNumberOfApplicationsInGridView:1;
        unsigned int dataSourceCanMoveItemAtIndexPath:1;
        unsigned int dataSourceMoveItemAtIndexPathToIndexPath:1;
        unsigned int dataSourceDroppedItemAtIndexPathOnItemAtIndexPath:1;
        unsigned int dataSourceDroppedItemAtIndexPathOutOfBounds:1;
    } _flags;	// 16 = 0x10
    _Bool _dockMode;	// 20 = 0x14
    _Bool _isEndEditingFocusUpdate;	// 21 = 0x15
    _Bool _editing;	// 22 = 0x16
    _Bool _shouldFocusTopShelf;	// 23 = 0x17
    _Bool _scrollingToTop;	// 24 = 0x18
    _Bool _executingPerformUpdateBlock;	// 25 = 0x19
    _Bool _didScrollForTimer;	// 26 = 0x1a
    id <HBAppGridViewDelegate> _delegate;	// 32 = 0x20
    id <HBAppGridViewDataSource> _dataSource;	// 40 = 0x28
    UIView *_headerView;	// 48 = 0x30
    NSIndexPath *_editingIndexPath;	// 56 = 0x38
    UICollectionView *_gridView;	// 64 = 0x40
    HBAppGridLayout *_layout;	// 72 = 0x48
    UIFocusGuide *_headerViewEnterGuide;	// 80 = 0x50
    UIFocusGuide *_headerViewExitGuide;	// 88 = 0x58
    CDUnknownBlockType _scrollCompletionBlock;	// 96 = 0x60
    TVSStateMachine *_editStateMachine;	// 104 = 0x68
    NSObservation *_editingIndexPathObserver;	// 112 = 0x70
    NSIndexPath *_dropTargetIndexPath;	// 120 = 0x78
    UIScrollView *_editingScrollView;	// 128 = 0x80
    UIView *_editingCellProxyContainer;	// 136 = 0x88
    HBSingleCellHostView *_editingCellProxy;	// 144 = 0x90
    _HBTouchablePanGestureRecognizer *_editPanGesture;	// 152 = 0x98
    UITapGestureRecognizer *_editUpGesture;	// 160 = 0xa0
    UITapGestureRecognizer *_editDownGesture;	// 168 = 0xa8
    UITapGestureRecognizer *_editLeftGesture;	// 176 = 0xb0
    UITapGestureRecognizer *_editRightGesture;	// 184 = 0xb8
    UITapGestureRecognizer *_exitModernTopShelfGestureRecognizer;	// 192 = 0xc0
    id <BSInvalidatable> _scrollToTopUserInteractionDisabledAssertion;	// 200 = 0xc8
    struct CGPoint _lastVelocity;	// 208 = 0xd0
    struct UIEdgeInsets _editingClampInsets;	// 224 = 0xe0
}

+ (void)_removeJiggleFromView:(id)arg1;	// IMP=0x0000000100088b54
+ (void)_applyJiggleToView:(id)arg1;	// IMP=0x0000000100088a4c
+ (id)_jiggleTransformAnimation;	// IMP=0x0000000100082eb8
+ (id)_jigglePositionAnimation;	// IMP=0x0000000100082d0c
+ (void)_shouldSetSelected:(_Bool)arg1 onCell:(id)arg2 withFocusAnimationCoordinator:(id)arg3;	// IMP=0x0000000100081484
- (void).cxx_destruct;	// IMP=0x000000010008ca90
@property(retain, nonatomic) id <BSInvalidatable> scrollToTopUserInteractionDisabledAssertion; // @synthesize scrollToTopUserInteractionDisabledAssertion=_scrollToTopUserInteractionDisabledAssertion;
@property(readonly, nonatomic, getter=_exitModernTopShelfGestureRecognizer) UITapGestureRecognizer *exitModernTopShelfGestureRecognizer; // @synthesize exitModernTopShelfGestureRecognizer=_exitModernTopShelfGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *editRightGesture; // @synthesize editRightGesture=_editRightGesture;
@property(retain, nonatomic) UITapGestureRecognizer *editLeftGesture; // @synthesize editLeftGesture=_editLeftGesture;
@property(retain, nonatomic) UITapGestureRecognizer *editDownGesture; // @synthesize editDownGesture=_editDownGesture;
@property(retain, nonatomic) UITapGestureRecognizer *editUpGesture; // @synthesize editUpGesture=_editUpGesture;
@property(retain, nonatomic) _HBTouchablePanGestureRecognizer *editPanGesture; // @synthesize editPanGesture=_editPanGesture;
@property(nonatomic) _Bool didScrollForTimer; // @synthesize didScrollForTimer=_didScrollForTimer;
@property(retain, nonatomic) HBSingleCellHostView *editingCellProxy; // @synthesize editingCellProxy=_editingCellProxy;
@property(retain, nonatomic) UIView *editingCellProxyContainer; // @synthesize editingCellProxyContainer=_editingCellProxyContainer;
@property(retain, nonatomic) UIScrollView *editingScrollView; // @synthesize editingScrollView=_editingScrollView;
@property(nonatomic) struct CGPoint lastVelocity; // @synthesize lastVelocity=_lastVelocity;
@property(retain, nonatomic) NSIndexPath *dropTargetIndexPath; // @synthesize dropTargetIndexPath=_dropTargetIndexPath;
@property(readonly, nonatomic) NSObservation *editingIndexPathObserver; // @synthesize editingIndexPathObserver=_editingIndexPathObserver;
@property(retain, nonatomic) TVSStateMachine *editStateMachine; // @synthesize editStateMachine=_editStateMachine;
@property(nonatomic, getter=isExecutingPerformUpdateBlock) _Bool executingPerformUpdateBlock; // @synthesize executingPerformUpdateBlock=_executingPerformUpdateBlock;
@property(copy, nonatomic) CDUnknownBlockType scrollCompletionBlock; // @synthesize scrollCompletionBlock=_scrollCompletionBlock;
@property(nonatomic, getter=isScrollingToTop) _Bool scrollingToTop; // @synthesize scrollingToTop=_scrollingToTop;
@property(retain, nonatomic) UIFocusGuide *headerViewExitGuide; // @synthesize headerViewExitGuide=_headerViewExitGuide;
@property(retain, nonatomic) UIFocusGuide *headerViewEnterGuide; // @synthesize headerViewEnterGuide=_headerViewEnterGuide;
@property(retain, nonatomic) HBAppGridLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *gridView; // @synthesize gridView=_gridView;
@property(nonatomic) _Bool shouldFocusTopShelf; // @synthesize shouldFocusTopShelf=_shouldFocusTopShelf;
@property(nonatomic) struct UIEdgeInsets editingClampInsets; // @synthesize editingClampInsets=_editingClampInsets;
@property(retain, nonatomic) NSIndexPath *editingIndexPath; // @synthesize editingIndexPath=_editingIndexPath;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <HBAppGridViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <HBAppGridViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFinishLaunchAnimationWithContext:(id)arg1;	// IMP=0x000000010008c620
- (void)willBeginLaunchAnimationWithContext:(id)arg1;	// IMP=0x000000010008c57c
- (id)launchAnimationsWithContext:(id)arg1;	// IMP=0x000000010008c374
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000010008c2cc
- (void)_configureEditStateMachine;	// IMP=0x000000010008a93c
- (struct CGRect)_editingAreaRect;	// IMP=0x000000010008a734
- (struct CGRect)_hoverRect;	// IMP=0x000000010008a6ec
- (struct CGRect)_visibleContentRect;	// IMP=0x000000010008a63c
- (id)_scrollRegionIndexPathForCurrentEditingPosition;	// IMP=0x000000010008a518
- (double)_ratioIntoScrollRegion;	// IMP=0x000000010008a2fc
- (long long)_regionForCurrentEditingPosition;	// IMP=0x000000010008a21c
- (void)_editingMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2;	// IMP=0x0000000100089fcc
- (_Bool)_changeExceedsMovementThreshold:(struct CGPoint)arg1;	// IMP=0x0000000100089f98
- (_Bool)_canDropEditingCellOnProposedIndexPath:(id)arg1;	// IMP=0x0000000100089d80
- (_Bool)_isEditingCellDroppable;	// IMP=0x0000000100089d0c
- (void)_restartScrollTimer;	// IMP=0x0000000100089bc4
- (void)_cancelScrollTimer;	// IMP=0x0000000100089b78
- (void)_restartHoverTimer;	// IMP=0x0000000100089b30
- (void)_cancelHoverTimer;	// IMP=0x0000000100089b0c
- (void)_handleEditRightGesture:(id)arg1;	// IMP=0x0000000100089a98
- (void)_handleEditLeftGesture:(id)arg1;	// IMP=0x0000000100089a24
- (void)_handleEditDownGesture:(id)arg1;	// IMP=0x00000001000899b0
- (void)_handleEditUpGesture:(id)arg1;	// IMP=0x000000010008993c
- (void)_handleTouchEndWhileStable;	// IMP=0x00000001000898d8
- (void)_handleTouchBeginWhileStable;	// IMP=0x0000000100089874
- (_Bool)_handlePanChangeForConfirmFolderEvent;	// IMP=0x00000001000897e8
- (void)_scrollTimerExpired;	// IMP=0x000000010008978c
- (void)_hoverTimerExpired;	// IMP=0x0000000100089744
- (void)_handlePanChangedEvent;	// IMP=0x00000001000895a8
- (void)_handlePanBeginEvent;	// IMP=0x0000000100089540
- (struct CGPoint)_genericHandlePanChange;	// IMP=0x00000001000890c4
- (void)_handlePanAnimationEndEvent;	// IMP=0x00000001000890c0
- (void)_editPanGesture:(id)arg1;	// IMP=0x0000000100088fe4
- (void)gestureRecognizer:(id)arg1 touchesCanceled:(id)arg2 withEvent:(id)arg3;	// IMP=0x0000000100088f9c
- (void)gestureRecognizer:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;	// IMP=0x0000000100088f54
- (void)gestureRecognizer:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;	// IMP=0x0000000100088f0c
- (void)_notifyDelegateDidDidEndStableEditing;	// IMP=0x0000000100088ea4
- (void)_notifyDelegateDidDidBeginStableEditing;	// IMP=0x0000000100088e3c
- (_Bool)_isPositionOutOfFolder:(struct CGPoint)arg1;	// IMP=0x0000000100088d5c
- (void)enableScrolling:(_Bool)arg1;	// IMP=0x0000000100088a34
- (void)stopJiggle;	// IMP=0x0000000100088990
- (void)startJiggle;	// IMP=0x00000001000888ec
- (void)_scrollToIndexPath:(id)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x00000001000882dc
- (void)_moveEditItemToIndexPath:(id)arg1;	// IMP=0x0000000100088200
- (_Bool)_handleTouchDuringAnimationEvent;	// IMP=0x0000000100088020
- (_Bool)_handleTapDuringAnimationInDirection:(long long)arg1;	// IMP=0x0000000100087f1c
- (void)_handleTapInDirection:(long long)arg1;	// IMP=0x0000000100087dc4
- (void)_clearConfirmTransforms;	// IMP=0x0000000100087bcc
- (void)_applyConfirmTransforms;	// IMP=0x00000001000879e0
- (void)_cancelFolderCreateTimer;	// IMP=0x0000000100087974
- (void)_handleCreateFolderEvent;	// IMP=0x0000000100087768
- (void)_confirmFolderCreateTimerExpired;	// IMP=0x0000000100087720
- (void)_handleAlmostCreateFolderEvent;	// IMP=0x0000000100087714
- (void)_confirmFolderCreateTimerAlmostExpired;	// IMP=0x00000001000876cc
- (void)_beginConfirmFolderCreateTimer;	// IMP=0x0000000100087688
- (_Bool)_handleHoverEvent;	// IMP=0x00000001000872a4
- (void)updateScrollEventEditingPosition:(struct CGPoint)arg1;	// IMP=0x000000010008721c
- (void)_handleScrollEvent;	// IMP=0x000000010008707c
- (void)_handleEndMovementEvent;	// IMP=0x0000000100086688
- (void)_handleSnapshotSafeEvent;	// IMP=0x0000000100086540
- (void)_endGlobalEditingMode;	// IMP=0x0000000100086290
- (_Bool)_attemptToEndEditingModeWithReason:(long long)arg1;	// IMP=0x00000001000861bc
- (id)_handleEditEndWithReasonEvent:(long long)arg1;	// IMP=0x0000000100086188
- (_Bool)_beginGlobalEditingMode;	// IMP=0x0000000100085c14
- (id)indexPathNearPosition:(struct CGPoint)arg1;	// IMP=0x0000000100085ba8
- (void)endEditingWithReason:(long long)arg1;	// IMP=0x0000000100085a28
- (void)startEditingWithSnapshotView:(id)arg1;	// IMP=0x00000001000858d8
- (void)startEditing;	// IMP=0x0000000100085844
- (void)_startEditing;	// IMP=0x0000000100085774
- (struct CGPoint)targetContentOffsetForIntendedContentOffset:(struct CGPoint)arg1 forIndexPath:(id)arg2;	// IMP=0x00000001000856f0
- (id)_appGridLayout;	// IMP=0x00000001000856d8
- (void)_exitModernTopShelf:(id)arg1;	// IMP=0x0000000100085654
- (void)_showPressCompleteNotification:(id)arg1;	// IMP=0x0000000100085538
- (void)_cellPressDidClearNotification:(id)arg1;	// IMP=0x0000000100085434
- (void)_setEditedCellCenter:(struct CGPoint)arg1;	// IMP=0x0000000100085398
- (void)_clearEditedPositionAnimations;	// IMP=0x00000001000852c4
- (id)_editingCell;	// IMP=0x0000000100085238
- (void)_configureStyleForCell:(id)arg1;	// IMP=0x000000010008505c
- (void)didLongPressCell:(id)arg1;	// IMP=0x0000000100084f44
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0000000100084de4
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0000000100084d44
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0000000100084c98
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000100084c28
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;	// IMP=0x0000000100084bb8
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000100084b48
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000100084b40
- (struct CGRect)_collectionViewHoverOverlayRect:(id)arg1 layout:(id)arg2;	// IMP=0x0000000100084b34
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x00000001000848f4
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000001000848d4
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000100084240
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000001000841b0
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000010008411c
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000001000840b8
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x0000000100083fa8
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0000000100083cc0
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000100083c28
- (id)preferredFocusEnvironments;	// IMP=0x0000000100083ac4
@property(readonly, nonatomic, getter=isDecelerating) _Bool decelerating;
- (void)moveToTop;	// IMP=0x0000000100083a30
- (double)offsetToBottom;	// IMP=0x00000001000837e8
- (double)offsetToTop;	// IMP=0x00000001000837e0
- (void)scrollToBottom:(CDUnknownBlockType)arg1;	// IMP=0x0000000100083488
- (void)scrollToBottom;	// IMP=0x0000000100083478
- (void)scrollToTop:(CDUnknownBlockType)arg1;	// IMP=0x000000010008328c
- (void)scrollToTop;	// IMP=0x000000010008327c
- (id)snapshotOfCellAtIndexPath:(id)arg1;	// IMP=0x00000001000830a8
@property(nonatomic) long long topShelfContentStyle;
- (void)afterScrollToIndexPathWithCell:(id)arg1;	// IMP=0x0000000100082ad4
- (void)_updateEditingSnapshotWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100082970
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;	// IMP=0x00000001000827bc
- (void)reloadItemsAtIndexPaths:(id)arg1;	// IMP=0x00000001000826d8
- (void)deleteItemsAtIndexPaths:(id)arg1;	// IMP=0x00000001000825f4
- (void)insertItemsAtIndexPaths:(id)arg1;	// IMP=0x0000000100082510
- (void)performUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000822b8
- (void)updateWithChanges:(id)arg1;	// IMP=0x0000000100082248
- (void)reloadData;	// IMP=0x0000000100082208
- (id)visibleCells;	// IMP=0x00000001000821b4
- (id)cellForItemAtIndexPath:(id)arg1;	// IMP=0x0000000100082108
- (id)dequeueFolderCellForIndexPath:(id)arg1;	// IMP=0x0000000100082080
- (id)dequeueAppCellForIndexPath:(id)arg1;	// IMP=0x0000000100081ff8
- (id)indexPathForCell:(id)arg1;	// IMP=0x0000000100081f4c
- (_Bool)isIndexPathInDock:(id)arg1;	// IMP=0x0000000100081ed4
- (void)updateHeaderViewContainerPlacement;	// IMP=0x0000000100081c68
- (void)updateBackgroundTopShelfContainerViewAttributes;	// IMP=0x0000000100081b8c
@property(readonly, nonatomic) HBUIMainAppGridTopShelfContainerView *backgroundTopShelfContainerView;
@property(readonly, nonatomic) HBUIMainAppGridTopShelfContainerView *embeddedTopShelfContainerView;
@property(readonly, nonatomic) unsigned long long maxNumberOfItemsInDock;
- (void)layoutSubviews;	// IMP=0x0000000100081554
- (void)dealloc;	// IMP=0x00000001000813f0
- (id)initWithFrame:(struct CGRect)arg1 dockMode:(_Bool)arg2;	// IMP=0x0000000100080ce0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100080cd0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

