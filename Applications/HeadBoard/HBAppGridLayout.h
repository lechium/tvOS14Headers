//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCompositionalLayout.h>

@class HBMainAppGridLayoutSolver, NSArray, NSIndexPath, NSIndexSet;

@interface HBAppGridLayout : UICollectionViewCompositionalLayout
{
    _Bool _dockMode;	// 8 = 0x8
    _Bool _appGridHidden;	// 9 = 0x9
    long long _topShelfContentStyle;	// 16 = 0x10
    NSIndexPath *_appGridEditingIndexPath;	// 24 = 0x18
    HBMainAppGridLayoutSolver *_mainLayoutSolver;	// 32 = 0x20
    NSIndexSet *_updatingItemIndexes;	// 40 = 0x28
}

+ (id)layoutAttributesNearPosition:(struct CGPoint)arg1 inLayoutAttributes:(id)arg2;	// IMP=0x000000010009df70
+ (Class)layoutAttributesClass;	// IMP=0x000000010009bb94
+ (id)makeFolderLayout;	// IMP=0x000000010009b6b8
+ (id)makeMainLayout;	// IMP=0x000000010009b320
- (void).cxx_destruct;	// IMP=0x000000010009f2d0
@property(copy, nonatomic) NSIndexSet *updatingItemIndexes; // @synthesize updatingItemIndexes=_updatingItemIndexes;
@property(readonly, nonatomic) HBMainAppGridLayoutSolver *mainLayoutSolver; // @synthesize mainLayoutSolver=_mainLayoutSolver;
@property(copy, nonatomic) NSIndexPath *appGridEditingIndexPath; // @synthesize appGridEditingIndexPath=_appGridEditingIndexPath;
@property(nonatomic, getter=isAppGridHidden) _Bool appGridHidden; // @synthesize appGridHidden=_appGridHidden;
@property(nonatomic) long long topShelfContentStyle; // @synthesize topShelfContentStyle=_topShelfContentStyle;
@property(readonly, nonatomic) _Bool dockMode; // @synthesize dockMode=_dockMode;
- (id)_delegateRespondingToHoverOverlayRect;	// IMP=0x000000010009f1e8
@property(readonly, nonatomic) unsigned long long indexOfLastRow;
@property(readonly, nonatomic) unsigned long long numberOfRows;
- (unsigned long long)colFromIndexPath:(id)arg1;	// IMP=0x000000010009f078
- (unsigned long long)rowFromIndexPath:(id)arg1;	// IMP=0x000000010009f034
- (id)_layoutAttributesForCellsInRowNearPosition:(struct CGPoint)arg1 positionContainedInRow:(_Bool *)arg2 constrainToHoverRect:(_Bool)arg3;	// IMP=0x000000010009ebe8
- (struct CGRect)_searchRectForConstrainToHoverRect:(_Bool)arg1;	// IMP=0x000000010009eaec
- (id)_layoutAttributesForCellsInRect:(struct CGRect)arg1;	// IMP=0x000000010009e930
- (id)indexPathInRowNearestPosition:(struct CGPoint)arg1 constrainToHoverRect:(_Bool)arg2;	// IMP=0x000000010009e884
- (id)indexPathInRowNearestPosition:(struct CGPoint)arg1;	// IMP=0x000000010009e874
- (id)indexPathNearPosition:(struct CGPoint)arg1 constrainToHoverRect:(_Bool)arg2;	// IMP=0x000000010009e660
- (id)indexPathNearPosition:(struct CGPoint)arg1;	// IMP=0x000000010009e650
- (id)indexPathAdjacentToItemsNearPosition:(struct CGPoint)arg1 fromIndexPath:(id)arg2 constrainToHoverRect:(_Bool)arg3;	// IMP=0x000000010009e158
- (id)indexPathAdjacentToItemsNearPosition:(struct CGPoint)arg1 fromIndexPath:(id)arg2;	// IMP=0x000000010009e148
- (id)indexPathInDirection:(long long)arg1 fromIndexPath:(id)arg2;	// IMP=0x000000010009ddb8
- (_Bool)isIndexPathInDock:(id)arg1;	// IMP=0x000000010009dd30
@property(readonly, nonatomic) NSIndexPath *firstIndexPathOutOfDock;
@property(readonly, nonatomic) NSArray *indexPathsInDock;
@property(readonly, nonatomic) unsigned long long numberOfColumns;
- (void)_updateSceneSettingsForAppGridHidden:(_Bool)arg1;	// IMP=0x000000010009da3c
- (id)_dockBackgroundLayoutAttributes;	// IMP=0x000000010009d8f8
- (id)_topShelfContentLayoutAttributes;	// IMP=0x000000010009d81c
- (id)_commonAccessoryViewIndexPath;	// IMP=0x000000010009d800
- (void)_updateInvalidationContext:(id)arg1 forLayoutChanges:(unsigned long long)arg2;	// IMP=0x000000010009d65c
- (_Bool)_invalidateLayoutForLayoutChanges:(unsigned long long)arg1;	// IMP=0x000000010009d5bc
- (unsigned long long)_focusStateForIndexPath:(id)arg1;	// IMP=0x000000010009d4a0
@property(nonatomic, getter=isAppGridEditing) _Bool appGridEditing;
- (void)setAppGridHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000010009cfb0
- (void)invalidateLayoutWithNextFocusedIndexPath:(id)arg1 animationCoordinator:(id)arg2;	// IMP=0x000000010009cdbc
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000010009cba0
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000010009cae0
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000010009c998
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000010009c52c
- (void)prepareLayout;	// IMP=0x000000010009c408
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000010009c2e0
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000010009c268
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;	// IMP=0x000000010009c18c
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;	// IMP=0x000000010009c0b0
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000010009c004
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000010009bf58
- (void)finalizeCollectionViewUpdates;	// IMP=0x000000010009bf04
- (void)prepareForCollectionViewUpdates:(id)arg1;	// IMP=0x000000010009bcbc
- (struct CGSize)collectionViewContentSize;	// IMP=0x000000010009bba0
- (_Bool)_shouldAdjustTargetContentOffsetToValidateContentExtents;	// IMP=0x000000010009bb8c

@end

