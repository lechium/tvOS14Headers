//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "APSConnectionDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "UIApplicationDelegatePrivate-Protocol.h"

@class APSConnection, NSString, UIWindow;

@interface HBAppDelegate : UIResponder <UIApplicationDelegatePrivate, APSConnectionDelegate, UIApplicationDelegate>
{
    APSConnection *_apsConnection;	// 8 = 0x8
}

+ (_Bool)isiCloudHomeScreenSyncEnabled;	// IMP=0x00000001000335e0
+ (id)sharedApplicationDelegate;	// IMP=0x00000001000330a4
- (void).cxx_destruct;	// IMP=0x0000000100034240
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;	// IMP=0x0000000100034044
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0000000100033f10
- (void)connectionDidReconnect:(id)arg1;	// IMP=0x0000000100033eb8
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;	// IMP=0x0000000100033df0
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;	// IMP=0x0000000100033d20
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;	// IMP=0x0000000100033c74
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000100033884
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x00000001000337d8
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x00000001000336e0
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0000000100033634
- (long long)overrideAssetLibraryCacheDeleteUrgency;	// IMP=0x00000001000335d8
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x00000001000335d4
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;	// IMP=0x000000010003354c
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000001000331bc
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0000000100033100
- (id)_findFirstViewOfClass:(Class)arg1 inViewHierarchy:(id)arg2 depth:(int)arg3;	// IMP=0x00000001000ab038
- (id)_findFirstViewOfClass:(Class)arg1 inViewHierarchy:(id)arg2;	// IMP=0x00000001000ab028
- (void)_runSwipeTest:(unsigned long long)arg1 of:(unsigned long long)arg2 testName:(id)arg3 axis:(unsigned long long)arg4 window:(id)arg5;	// IMP=0x00000001000aae24
- (void)_startLogTest:(id)arg1;	// IMP=0x00000001000aacec
- (id)_randomizeArray:(id)arg1;	// IMP=0x00000001000aab80
- (void)_appGridViewController:(id)arg1 randomMoveTestWithItems:(id)arg2 iterations:(unsigned long long)arg3 testName:(id)arg4;	// IMP=0x00000001000aa910
- (void)_runAppGridScrollTest:(id)arg1 withDelta:(int)arg2 iterations:(int)arg3 context:(id)arg4;	// IMP=0x00000001000aa748
- (void)_runTopShelfScrollTest:(id)arg1 withDelta:(int)arg2 iterations:(int)arg3 context:(id)arg4;	// IMP=0x00000001000aa578
- (_Bool)shouldCreateProbesAutomatically;	// IMP=0x00000001000aa570
- (_Bool)runTestName:(id)arg1 options:(id)arg2 context:(id)arg3;	// IMP=0x00000001000a992c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

