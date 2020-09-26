//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "TVPOneupViewCachingManagerDataSource-Protocol.h"
#import "TVPOneupViewDataSource-Protocol.h"
#import "TVPOneupViewDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSArray, NSString, PHAsset, PHAssetCollection, PHFetchResult, TVPOneupViewCachingManager;
@protocol TVPPhotoLibraryOneUpViewControllerDelegate;

@interface TVPPhotoLibraryOneUpViewController : UIViewController <TVPOneupViewDelegate, TVPOneupViewDataSource, PHPhotoLibraryChangeObserver, TVPOneupViewCachingManagerDataSource, UINavigationControllerDelegate>
{
    _Bool _startVideoPlaybackOnLoad;	// 8 = 0x8
    _Bool _videoAssetDownloading;	// 9 = 0x9
    int _videoAssetRequestID;	// 12 = 0xc
    PHFetchResult *_assetsFetchResult;	// 16 = 0x10
    PHAssetCollection *_assetCollection;	// 24 = 0x18
    TVPOneupViewCachingManager *_cachingManager;	// 32 = 0x20
    PHAsset *_currentMediaAsset;	// 40 = 0x28
    NSArray *_sortedMostRecentlyModifiedAssets;	// 48 = 0x30
    unsigned long long _selectedAssetIndex;	// 56 = 0x38
    id <TVPPhotoLibraryOneUpViewControllerDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100065f68
@property(nonatomic) int videoAssetRequestID; // @synthesize videoAssetRequestID=_videoAssetRequestID;
@property(nonatomic) __weak id <TVPPhotoLibraryOneUpViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isVideoAssetDownloading) _Bool videoAssetDownloading; // @synthesize videoAssetDownloading=_videoAssetDownloading;
@property(nonatomic) _Bool startVideoPlaybackOnLoad; // @synthesize startVideoPlaybackOnLoad=_startVideoPlaybackOnLoad;
@property(nonatomic) unsigned long long selectedAssetIndex; // @synthesize selectedAssetIndex=_selectedAssetIndex;
@property(copy, nonatomic) NSArray *sortedMostRecentlyModifiedAssets; // @synthesize sortedMostRecentlyModifiedAssets=_sortedMostRecentlyModifiedAssets;
@property(retain, nonatomic) PHAsset *currentMediaAsset; // @synthesize currentMediaAsset=_currentMediaAsset;
@property(retain, nonatomic) TVPOneupViewCachingManager *cachingManager; // @synthesize cachingManager=_cachingManager;
@property(retain, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(retain, nonatomic) PHFetchResult *assetsFetchResult; // @synthesize assetsFetchResult=_assetsFetchResult;
- (void)_updateVideoOverlayForItemView:(id)arg1;	// IMP=0x0000000100065d88
- (unsigned long long)_allowedModesFromModes:(id)arg1;	// IMP=0x0000000100065d0c
- (id)oneUpViewCachingManager:(id)arg1 assetAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100065cfc
- (void)oneupView:(id)arg1 willBeginViewTransitionForFocusedView:(id)arg2;	// IMP=0x0000000100065c3c
- (void)oneupView:(id)arg1 didPlayItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100065b64
- (void)oneupView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100065a8c
- (void)oneupView:(id)arg1 didFocusItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100065a08
- (id)oneupView:(id)arg1 supplementaryViewForItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100065964
- (id)oneupView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100065954
- (long long)numberOfItemsInOneupView:(id)arg1;	// IMP=0x00000001000658f8
- (void)itemDidFinishPlaying:(id)arg1;	// IMP=0x0000000100065870
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x00000001000657dc
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000001000656f0
- (id)assetAtIndex:(long long)arg1;	// IMP=0x000000010006565c
- (_Bool)performReloadOnLibraryChangeNotificationIfRequired:(id)arg1;	// IMP=0x0000000100065438
- (id)configureItemViewForOneupView:(id)arg1 AtIndex:(long long)arg2 showVideoBadgeInCaptionMode:(_Bool)arg3;	// IMP=0x0000000100064000
- (void)startVideoPlaybackForItem:(id)arg1;	// IMP=0x0000000100063ad4
@property(retain, nonatomic) PHAsset *focusedAsset;
- (void)dealloc;	// IMP=0x0000000100063a04
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x0000000100063988
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100063930
- (void)viewDidLoad;	// IMP=0x00000001000638bc
- (void)loadView;	// IMP=0x000000010006365c
- (id)init;	// IMP=0x00000001000635a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

