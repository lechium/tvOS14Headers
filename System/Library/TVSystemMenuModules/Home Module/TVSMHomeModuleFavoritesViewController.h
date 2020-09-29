//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HFHomeObserver-Protocol.h"
#import "HFItemManagerDelegate-Protocol.h"
#import "TVSMHomeFullScreenCameraViewControllerDelegate-Protocol.h"
#import "TVSMModuleContentViewControllerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, NSUUID, TVSMHomeCameraAnimationContext, TVSMHomeCameraViewController, TVSMHomeHeaderView, TVSMHomeModuleItemManager, UICollectionView, UICollectionViewDiffableDataSource;

@interface TVSMHomeModuleFavoritesViewController : UIViewController <HFItemManagerDelegate, HFHomeObserver, TVSMModuleContentViewControllerDelegate, UICollectionViewDelegate, UIScrollViewDelegate, UIViewControllerTransitioningDelegate, TVSMHomeFullScreenCameraViewControllerDelegate>
{
    _Bool _allowAnimatedUpdates;	// 8 = 0x8
    _Bool _externalUpdatesDisabled;	// 9 = 0x9
    _Bool _performedInitialReload;	// 10 = 0xa
    TVSMHomeModuleItemManager *_itemManager;	// 16 = 0x10
    NSMutableArray *_pendingSectionReloads;	// 24 = 0x18
    TVSMHomeHeaderView *_headerView;	// 32 = 0x20
    UICollectionView *_favoritesCollectionView;	// 40 = 0x28
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 48 = 0x30
    NSMutableDictionary *_homeItemsByID;	// 56 = 0x38
    NSMutableDictionary *_contentViewControllersByID;	// 64 = 0x40
    TVSMHomeCameraAnimationContext *_animationContext;	// 72 = 0x48
    TVSMHomeCameraViewController *_centeredCameraViewController;	// 80 = 0x50
    TVSMHomeCameraViewController *_selectedCameraViewController;	// 88 = 0x58
    TVSMHomeCameraViewController *_dismissedCameraViewController;	// 96 = 0x60
    NSArray *_orderedCameraItems;	// 104 = 0x68
    NSUUID *_focusedItemIdentifier;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000011614
@property(retain, nonatomic) NSUUID *focusedItemIdentifier; // @synthesize focusedItemIdentifier=_focusedItemIdentifier;
@property(retain, nonatomic) NSArray *orderedCameraItems; // @synthesize orderedCameraItems=_orderedCameraItems;
@property(retain, nonatomic) TVSMHomeCameraViewController *dismissedCameraViewController; // @synthesize dismissedCameraViewController=_dismissedCameraViewController;
@property(retain, nonatomic) TVSMHomeCameraViewController *selectedCameraViewController; // @synthesize selectedCameraViewController=_selectedCameraViewController;
@property(retain, nonatomic) TVSMHomeCameraViewController *centeredCameraViewController; // @synthesize centeredCameraViewController=_centeredCameraViewController;
@property(retain, nonatomic) TVSMHomeCameraAnimationContext *animationContext; // @synthesize animationContext=_animationContext;
@property(retain, nonatomic) NSMutableDictionary *contentViewControllersByID; // @synthesize contentViewControllersByID=_contentViewControllersByID;
@property(retain, nonatomic) NSMutableDictionary *homeItemsByID; // @synthesize homeItemsByID=_homeItemsByID;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) UICollectionView *favoritesCollectionView; // @synthesize favoritesCollectionView=_favoritesCollectionView;
@property(retain, nonatomic) TVSMHomeHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSMutableArray *pendingSectionReloads; // @synthesize pendingSectionReloads=_pendingSectionReloads;
@property(nonatomic) _Bool performedInitialReload; // @synthesize performedInitialReload=_performedInitialReload;
@property(nonatomic) _Bool externalUpdatesDisabled; // @synthesize externalUpdatesDisabled=_externalUpdatesDisabled;
@property(nonatomic) _Bool allowAnimatedUpdates; // @synthesize allowAnimatedUpdates=_allowAnimatedUpdates;
@property(retain, nonatomic) TVSMHomeModuleItemManager *itemManager; // @synthesize itemManager=_itemManager;
- (void)_updateLayoutElementWithCameraTransition:(unsigned long long)arg1;	// IMP=0x0000000000011268
- (id)tvsm_synchronizedDrawingFence;	// IMP=0x00000000000111a8
- (void)viewControllerDidRequestDismissal:(id)arg1 focusedIdentifier:(id)arg2 focusedContentView:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000010aa4
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00000000000108f8
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x0000000000010854
- (void)contentModuleViewControllerDidTriggerAction:(id)arg1;	// IMP=0x0000000000010118
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x0000000000010050
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000000fce8
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000000fc34
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000000fb7c
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x000000000000fa78
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;	// IMP=0x000000000000f940
- (id)preferredFocusEnvironments;	// IMP=0x000000000000f8c8
- (id)favoritesLayout;	// IMP=0x000000000000f0c8
- (void)updateCollectionViewAnimated:(_Bool)arg1;	// IMP=0x000000000000e7ac
- (void)_configureCell:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x000000000000e5e8
- (void)dealloc;	// IMP=0x000000000000e578
- (void)viewDidLayoutSubviews;	// IMP=0x000000000000e568
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000e4bc
- (void)viewDidLoad;	// IMP=0x000000000000d85c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

