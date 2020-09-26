//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "TVNPRoutingRoutesCollectionViewLayoutDelegate-Protocol.h"
#import "TVNPShareAudioMainViewControllerDelegate-Protocol.h"

@class NSDictionary, NSDiffableDataSourceSnapshot, NSMutableDictionary, NSObject, NSString, TVNPRoute, UICollectionViewDiffableDataSource, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol TVNPRoutingController, TVNPRoutingRoutesCollectionViewControllerDelegate;

@interface TVNPRoutingRoutesCollectionViewController : UICollectionViewController <TVNPRoutingRoutesCollectionViewLayoutDelegate, TVNPShareAudioMainViewControllerDelegate>
{
    _Bool _shareAudioFocused;	// 8 = 0x8
    _Bool _observingChanges;	// 9 = 0x9
    NSObject<TVNPRoutingController> *_routingController;	// 16 = 0x10
    TVNPRoute *_focusedRoute;	// 24 = 0x18
    NSDiffableDataSourceSnapshot *_currentSnapshot;	// 32 = 0x20
    id <TVNPRoutingRoutesCollectionViewControllerDelegate> _delegate;	// 40 = 0x28
    TVNPRoute *_routeForVolume;	// 48 = 0x30
    NSDictionary *_routesByUID;	// 56 = 0x38
    NSMutableDictionary *_volumeHUDAssertionsByUID;	// 64 = 0x40
    UICollectionViewDiffableDataSource *_routesDataSource;	// 72 = 0x48
    UILongPressGestureRecognizer *_longPressRecognizer;	// 80 = 0x50
    UITapGestureRecognizer *_menuRecognizer;	// 88 = 0x58
    UITapGestureRecognizer *_selectRecognizer;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000010001c714
@property(retain, nonatomic) UITapGestureRecognizer *selectRecognizer; // @synthesize selectRecognizer=_selectRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *routesDataSource; // @synthesize routesDataSource=_routesDataSource;
@property(retain, nonatomic) NSMutableDictionary *volumeHUDAssertionsByUID; // @synthesize volumeHUDAssertionsByUID=_volumeHUDAssertionsByUID;
@property(retain, nonatomic) NSDictionary *routesByUID; // @synthesize routesByUID=_routesByUID;
@property(retain, nonatomic) TVNPRoute *routeForVolume; // @synthesize routeForVolume=_routeForVolume;
@property(nonatomic) _Bool observingChanges; // @synthesize observingChanges=_observingChanges;
@property(nonatomic) __weak id <TVNPRoutingRoutesCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot; // @synthesize currentSnapshot=_currentSnapshot;
@property(nonatomic, getter=isShareAudioFocused) _Bool shareAudioFocused; // @synthesize shareAudioFocused=_shareAudioFocused;
@property(retain, nonatomic) TVNPRoute *focusedRoute; // @synthesize focusedRoute=_focusedRoute;
@property(readonly, nonatomic) NSObject<TVNPRoutingController> *routingController; // @synthesize routingController=_routingController;
- (void)_relinquishVolumeHUDAssertionForRouteWithUID:(id)arg1;	// IMP=0x000000010001c4dc
- (void)_acquireVolumeHUDAssertionForRouteWithUID:(id)arg1;	// IMP=0x000000010001c3ac
- (void)_calculateVisibleVolumeCells;	// IMP=0x000000010001c07c
- (void)_cleanupRouteForVolumeIfNeeded;	// IMP=0x000000010001bf6c
- (id)_gradientMask;	// IMP=0x000000010001bb3c
- (void)viewControllerDidRequestDismissal:(id)arg1 cancelled:(_Bool)arg2;	// IMP=0x000000010001bb24
- (void)shareAudioSelected;	// IMP=0x000000010001ba90
- (void)handleEndVolumeControl:(id)arg1;	// IMP=0x000000010001b850
- (void)longPressSelect:(id)arg1;	// IMP=0x000000010001b794
- (id)indexPathForVolumeSliderInCollectionView:(id)arg1 layout:(id)arg2;	// IMP=0x000000010001b6b8
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000010001b5a0
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000010001b488
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x000000010001b44c
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000010001b314
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000010001b1d4
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000010001ac74
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010001ab88
- (void)handleVolumeDown;	// IMP=0x000000010001a874
- (void)handleVolumeUp;	// IMP=0x000000010001a560
- (void)updateCollectionViewWithRoutes:(id)arg1;	// IMP=0x0000000100019c04
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000199c4
- (void)viewDidLoad;	// IMP=0x0000000100019004
- (void)dealloc;	// IMP=0x0000000100018fb4
- (id)initWithCollectionViewLayout:(id)arg1 routingController:(id)arg2;	// IMP=0x0000000100018ee4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

