//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "TVHRootViewControllerDelegate-Protocol.h"
#import "UIWindowSceneDelegate-Protocol.h"

@class NSString, TVHDefaultRootViewController, TVHRootViewController, UIWindow, UIWindowScene;

@interface TVHMainSceneDelegate : UIResponder <TVHRootViewControllerDelegate, UIWindowSceneDelegate>
{
    UIWindow *_window;	// 8 = 0x8
    UIWindowScene *_scene;	// 16 = 0x10
    TVHDefaultRootViewController *_defaultRootViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000b64c0
@property(retain, nonatomic) TVHDefaultRootViewController *defaultRootViewController; // @synthesize defaultRootViewController=_defaultRootViewController;
@property(nonatomic) __weak UIWindowScene *scene; // @synthesize scene=_scene;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)_deactivateApplication;	// IMP=0x00000001000b63dc
- (id)_mediaLibrariesManager;	// IMP=0x00000001000b635c
- (void)_updateRootViewControllerWithURL:(id)arg1;	// IMP=0x00000001000b5fb0
- (void)rootViewControllerDidFinish:(id)arg1;	// IMP=0x00000001000b5fa4
- (void)scene:(id)arg1 openURLContexts:(id)arg2;	// IMP=0x00000001000b5d4c
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x00000001000b5bfc
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x00000001000b5ad0
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x00000001000b58d0
@property(readonly, nonatomic) TVHRootViewController *rootViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

