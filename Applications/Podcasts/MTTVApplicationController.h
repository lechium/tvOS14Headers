//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVApplicationController.h>

#import "MTAppController-Protocol.h"
#import "TVApplicationControllerDelegate-Protocol.h"
#import "TVInterfaceCreating-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class MTTVListenNowViewController, MTTVPodcastPlaybackHostControllerViewController, MTTVPodcastsAndStationsViewController, NSString, UINavigationController, UITabBarController;
@protocol UITabBarControllerDelegate;

@interface MTTVApplicationController : TVApplicationController <TVApplicationControllerDelegate, TVInterfaceCreating, UINavigationControllerDelegate, UITabBarControllerDelegate, MTAppController>
{
    _Bool _tabBarLoaded;	// 8 = 0x8
    MTTVListenNowViewController *_listenNowViewController;	// 16 = 0x10
    UINavigationController *_podcastsNavigationController;	// 24 = 0x18
    MTTVPodcastsAndStationsViewController *_podcastsAndStationsViewController;	// 32 = 0x20
    MTTVPodcastPlaybackHostControllerViewController *_nowPlayingController;	// 40 = 0x28
    id <UITabBarControllerDelegate> _originalTabBarDelegate;	// 48 = 0x30
}

+ (id)alertControllerForError:(long long)arg1;	// IMP=0x0000000100130b84
- (void).cxx_destruct;	// IMP=0x0000000100130fbc
@property(nonatomic) __weak id <UITabBarControllerDelegate> originalTabBarDelegate; // @synthesize originalTabBarDelegate=_originalTabBarDelegate;
@property(retain, nonatomic) MTTVPodcastPlaybackHostControllerViewController *nowPlayingController; // @synthesize nowPlayingController=_nowPlayingController;
@property(retain, nonatomic) MTTVPodcastsAndStationsViewController *podcastsAndStationsViewController; // @synthesize podcastsAndStationsViewController=_podcastsAndStationsViewController;
@property(retain, nonatomic) UINavigationController *podcastsNavigationController; // @synthesize podcastsNavigationController=_podcastsNavigationController;
@property(retain, nonatomic) MTTVListenNowViewController *listenNowViewController; // @synthesize listenNowViewController=_listenNowViewController;
@property(nonatomic, getter=isTabBarLoaded) _Bool tabBarLoaded; // @synthesize tabBarLoaded=_tabBarLoaded;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;	// IMP=0x0000000100130a50
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;	// IMP=0x0000000100130970
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000100130964
- (void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100130898
- (void)appController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000100130784
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x0000000100130688
- (void)updateUnplayedBadgeCount;	// IMP=0x0000000100130684
- (void)presentPodcast:(id)arg1 episodeUuid:(id)arg2 episodeNotAvailable:(_Bool)arg3 podcastTab:(unsigned long long)arg4 startPlayback:(_Bool)arg5 animated:(_Bool)arg6;	// IMP=0x000000010013023c
- (void)presentPodcast:(id)arg1 episode:(id)arg2 podcastTab:(unsigned long long)arg3 startPlayback:(_Bool)arg4 animated:(_Bool)arg5;	// IMP=0x00000001001301a4
- (void)presentStation:(id)arg1 new:(_Bool)arg2;	// IMP=0x00000001001301a0
- (void)selectSearchTabAndFocusSearchField;	// IMP=0x00000001001300ec
- (void)selectFeaturedTabAndPopToRoot:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001300b8
- (void)selectFeaturedTab;	// IMP=0x00000001001300a0
- (void)selectMyPodcastsTabAndPopToRoot:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010013006c
- (void)selectMyPodcastsTab;	// IMP=0x0000000100130054
- (_Bool)isMyPodcastsTabSelected;	// IMP=0x0000000100130000
- (void)selectUnplayedTabAndPopToRoot:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010012ffcc
- (void)selectUnplayedTab;	// IMP=0x000000010012ffb4
- (_Bool)isUnplayedTabSelected;	// IMP=0x000000010012ff60
- (void)dismissNowPlayingAnimated:(_Bool)arg1;	// IMP=0x000000010012fec8
- (void)presentNowPlayingAnimated:(_Bool)arg1;	// IMP=0x000000010012fd00
- (void)showDownloadsControllerAnimated:(_Bool)arg1;	// IMP=0x000000010012fcfc
- (void)dismissSearchOverlayController;	// IMP=0x000000010012fcf8
- (void)showSearchControllerWithSearchText:(id)arg1;	// IMP=0x000000010012fce4
- (void)openStoreURL:(id)arg1;	// IMP=0x000000010012fb68
- (void)handlePodcastsUrlScheme:(id)arg1;	// IMP=0x000000010012fb54
- (void)handleiTMSUrlScheme:(id)arg1;	// IMP=0x000000010012fb40
- (void)_configureTabBarOnFirstLoad;	// IMP=0x000000010012f7b8
- (void)_playPauseButtonAction:(id)arg1;	// IMP=0x000000010012f720
- (void)_showNowPlaying;	// IMP=0x000000010012f60c
- (void)_hideNowPlaying;	// IMP=0x000000010012f504
- (_Bool)_isNowPlayingTabVisible;	// IMP=0x000000010012f354
- (_Bool)_isNowPlayingTabSelected;	// IMP=0x000000010012f300
- (id)_menuItemElements;	// IMP=0x000000010012f2a4
- (id)_tabIdentifierForIndex:(unsigned long long)arg1;	// IMP=0x000000010012f1d4
- (unsigned long long)_tabIndexForIdentifier:(id)arg1;	// IMP=0x000000010012f00c
- (id)_selectedTabIdentifier;	// IMP=0x000000010012efa8
- (id)_selectTabWithIdentifier:(id)arg1 popToRoot:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010012ede4
- (id)_selectTabWithIdentifier:(id)arg1;	// IMP=0x000000010012edcc
- (void)updateNowPlayingTabVisibility;	// IMP=0x000000010012ed88
@property(readonly, nonatomic) UINavigationController *rootNavController;
@property(readonly, nonatomic) UINavigationController *rootViewController;
@property(readonly, nonatomic) UITabBarController *tabBarController;
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;	// IMP=0x000000010012e8b4
- (id)initWithContext:(id)arg1 window:(id)arg2;	// IMP=0x000000010012e668

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

