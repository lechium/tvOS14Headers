//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MPAssetKeyDelegate-Protocol.h"
#import "PBSViewServicePresenter-Protocol.h"

@class NSArray, NSDictionary, NSMutableSet, NSString, TVPhotoCollection, TVPhotoSource, TVSSMarimbaView, TVSSSlideshowUtilities, UIActivityIndicatorView;

@interface TVSSMarimbaViewController : UIViewController <MPAssetKeyDelegate, PBSViewServicePresenter>
{
    NSDictionary *_assetKeysToAssetPaths;	// 8 = 0x8
    TVPhotoSource *_currentPhotoSource;	// 16 = 0x10
    TVPhotoCollection *_selectedPhotoCollection;	// 24 = 0x18
    TVSSMarimbaView *_marimbaView;	// 32 = 0x20
    UIActivityIndicatorView *_spinnerView;	// 40 = 0x28
    TVSSSlideshowUtilities *_screensaverUtilities;	// 48 = 0x30
    id _preferenceObserverToken;	// 56 = 0x38
    NSMutableSet *_activeImageProxies;	// 64 = 0x40
    NSArray *_cachedPhotoAssets;	// 72 = 0x48
    _Bool _didWarmUpAndStartMarimbaRenderer;	// 80 = 0x50
    _Bool _playbackHasBeenPausedWhileScreenSaverIsUp;	// 81 = 0x51
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100004bbc
+ (id)_exportedInterface;	// IMP=0x0000000100004abc
+ (void)initialize;	// IMP=0x0000000100003c84
- (void).cxx_destruct;	// IMP=0x0000000100006170
- (id)_photoSourceWithIdentifier:(id)arg1;	// IMP=0x0000000100005fa8
- (id)_preferences;	// IMP=0x0000000100005f94
- (id)_photoAssetsFromImageCache;	// IMP=0x0000000100005eb4
- (id)_photoAssetFromFilePath:(id)arg1;	// IMP=0x0000000100005e08
- (void)_fileAddedToImageCacheNotification:(id)arg1;	// IMP=0x0000000100005a7c
- (_Bool)_didScreenSaverPhotoCollectionChange;	// IMP=0x00000001000059d0
- (void)_endObservingThemeChanges;	// IMP=0x0000000100005954
- (void)_beginObservingThemeChanges;	// IMP=0x00000001000055a0
- (void)_startScreenSaverWithPhotoAssets:(id)arg1;	// IMP=0x0000000100005484
- (void)_stopMarimbaRenderer;	// IMP=0x00000001000053f4
- (void)_fetchAssetsAndBeginScreensaverPreview;	// IMP=0x0000000100004f78
- (void)_displayAssetsLoadingView;	// IMP=0x0000000100004e48
- (void)_startScreenSaverPreview;	// IMP=0x0000000100004e0c
- (void)_mediaPlaybackStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004bd8
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004a70
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0000000100004a50
- (void)_mediaRemotePlaybackApplicationStateDidChange:(id)arg1;	// IMP=0x000000010000492c
- (void)_usedAllPathsNotification:(id)arg1;	// IMP=0x00000001000048cc
- (void)_selectAction:(id)arg1;	// IMP=0x0000000100004860
- (void)_rightAction:(id)arg1;	// IMP=0x00000001000047f4
- (void)_leftAction:(id)arg1;	// IMP=0x0000000100004788
- (void)_playPauseAction:(id)arg1;	// IMP=0x0000000100004678
- (id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;	// IMP=0x0000000100004670
- (id)absolutePathForAssetKey:(id)arg1 andSize:(struct CGSize)arg2;	// IMP=0x0000000100004664
- (id)absolutePathForAssetKey:(id)arg1;	// IMP=0x00000001000045e4
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100004584
- (void)viewDidLoad;	// IMP=0x0000000100004108
- (void)loadView;	// IMP=0x0000000100004068
- (void)dealloc;	// IMP=0x0000000100003f9c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100003cd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

