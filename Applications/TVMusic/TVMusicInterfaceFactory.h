//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TVInterfaceCreatingPrivate-Protocol.h"

@class NSMutableSet, NSString, TVMusicCloudViewController, TVMusicPlaybackHostController, UIFocusGuide, UITabBarController, UIView;

@interface TVMusicInterfaceFactory : NSObject <_TVInterfaceCreatingPrivate>
{
    TVMusicCloudViewController *_musicCloudViewController;	// 8 = 0x8
    TVMusicPlaybackHostController *_musicPlaybackHostController;	// 16 = 0x10
    UITabBarController *_tabBarController;	// 24 = 0x18
    UIView *_userMonogramView;	// 32 = 0x20
    NSMutableSet *_configuredTVMLPages;	// 40 = 0x28
    UIFocusGuide *_monogramBottomFocusGuide;	// 48 = 0x30
}

+ (id)sharedInterfaceFactory;	// IMP=0x00000001000300ac
+ (_Bool)isDataPrivateForElement:(id)arg1;	// IMP=0x00000001000a4454
+ (id)playlistImgWithElement:(id)arg1 existingView:(id)arg2;	// IMP=0x00000001000a3e3c
- (void).cxx_destruct;	// IMP=0x0000000100032800
@property(retain, nonatomic) UIFocusGuide *monogramBottomFocusGuide; // @synthesize monogramBottomFocusGuide=_monogramBottomFocusGuide;
@property(retain, nonatomic) NSMutableSet *configuredTVMLPages; // @synthesize configuredTVMLPages=_configuredTVMLPages;
@property(nonatomic) __weak UIView *userMonogramView; // @synthesize userMonogramView=_userMonogramView;
@property(nonatomic) __weak UITabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
- (id)_searchController;	// IMP=0x0000000100032594
- (id)_placeholderImageForResourceName:(id)arg1;	// IMP=0x00000001000322cc
- (id)_imageProxyForElement:(id)arg1;	// IMP=0x00000001000320b0
- (id)_styleSheetURLForTemplate:(id)arg1;	// IMP=0x0000000100031ec4
- (Class)collectionViewCellClassForElement:(id)arg1;	// IMP=0x0000000100031dd4
- (id)imageForResource:(id)arg1;	// IMP=0x0000000100031d28
- (id)viewForElement:(id)arg1 existingView:(id)arg2;	// IMP=0x00000001000318d0
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;	// IMP=0x00000001000313ec
- (void)_didUpdateFocus:(id)arg1;	// IMP=0x0000000100031288
- (void)configureViewElementsForPage:(id)arg1;	// IMP=0x0000000100030718
- (void)setup;	// IMP=0x0000000100030118

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

