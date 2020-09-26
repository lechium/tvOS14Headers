//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MTSingleton.h"

@class ACAccount;

@interface MTAccountController : MTSingleton
{
    _Bool _hasFetchedInitialAccount;	// 8 = 0x8
    ACAccount *_accountOverride;	// 16 = 0x10
    ACAccount *__activeAccount;	// 24 = 0x18
}

+ (void)openAccountsPanel;	// IMP=0x0000000100091b78
+ (_Bool)iTunesAccountDidChangeForACAccountNotification:(id)arg1;	// IMP=0x0000000100091a70
- (void).cxx_destruct;	// IMP=0x0000000100091ed0
@property(retain) ACAccount *_activeAccount; // @synthesize _activeAccount=__activeAccount;
@property(retain, nonatomic) ACAccount *accountOverride; // @synthesize accountOverride=_accountOverride;
@property _Bool hasFetchedInitialAccount; // @synthesize hasFetchedInitialAccount=_hasFetchedInitialAccount;
- (void)promptAccountAuthenticationWithDebugReason:(id)arg1;	// IMP=0x0000000100091c04
- (void)_updateActiveAccount;	// IMP=0x0000000100091990
- (id)_activeAccountBlocking;	// IMP=0x0000000100091934
- (void)didChangeStoreAccount:(id)arg1;	// IMP=0x00000001000918e8
- (_Bool)activeAccountIsManagedAppleID;	// IMP=0x000000010009189c
- (_Bool)isUserLoggedIn;	// IMP=0x0000000100091804
- (id)activeFullName;	// IMP=0x00000001000917b0
- (id)activeEmail;	// IMP=0x000000010009175c
- (id)activeStorefront;	// IMP=0x0000000100091708
- (id)activeDsid;	// IMP=0x00000001000916a4
- (void)setActiveAccount:(id)arg1;	// IMP=0x000000010009164c
- (id)activeAccount;	// IMP=0x00000001000915f0
- (void)dealloc;	// IMP=0x0000000100091578
- (id)init;	// IMP=0x00000001000914d0

@end

