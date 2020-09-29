/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:20 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GKNavigationController.h>
#import <libobjc.A.dylib/GKExtensionProtocol.h>
#import <libobjc.A.dylib/GKDaemonProxyDataUpdateDelegate.h>
#import <libobjc.A.dylib/GKDashboardServiceInterface.h>

@class GKGame, UIViewController, NSString;

@interface GKServiceViewController : GKNavigationController <GKExtensionProtocol, GKDaemonProxyDataUpdateDelegate, GKDashboardServiceInterface> {

	BOOL _alwaysShowDoneButton;
	int _hostPID;
	GKGame* _game;
	UIViewController* _privateViewController;
	double _statusBarHeight;

}

@property (assign,nonatomic) double statusBarHeight;                                //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (nonatomic,retain) UIViewController * privateViewController;              //@synthesize privateViewController=_privateViewController - In the implementation block
@property (nonatomic,retain) GKGame * game;                                         //@synthesize game=_game - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowDoneButton;                             //@synthesize alwaysShowDoneButton=_alwaysShowDoneButton - In the implementation block
@property (assign,nonatomic) int hostPID;                                           //@synthesize hostPID=_hostPID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)finish;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(double)statusBarHeight;
-(void)setStatusBarHeight:(double)arg1 ;
-(int)hostPID;
-(void)remoteViewControllerDidCancel;
-(GKGame *)game;
-(void)setGame:(GKGame *)arg1 ;
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 ;
-(void)setHostPID:(int)arg1 ;
-(void)setInitialState:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)requestDashboardLogoImageWithHandler:(/*^block*/id)arg1 ;
-(void)requestImagesForLeaderboardsInSet:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)remoteViewControllerIsCanceling;
-(void)remoteViewControllerIsFinishing;
-(void)messageFromClient:(id)arg1 ;
-(void)remoteViewControllerDidFinish;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)nudge;
-(void)donePressed:(id)arg1 ;
-(void)requestImagesForLeaderboardSetsWithHandler:(/*^block*/id)arg1 ;
-(void)dashboardDidChangeToLeaderboardIdentifier:(id)arg1 ;
-(void)dashboardDidChangeToLeaderboardTimeScope:(long long)arg1 ;
-(id)observedKeyPaths;
-(void)finishWithTurnBasedMatch:(id)arg1 ;
-(void)quitTurnBasedMatch:(id)arg1 ;
-(void)finishAndPlayChallenge:(id)arg1 ;
-(void)dashboardDidChangeToLeaderboardPlayerScope:(long long)arg1 ;
-(void)_startObservingChangesToProperties;
-(void)serviceViewControllerCreated:(id)arg1 ;
-(void)_stopObservingChangesToProperties;
-(void)cancelServiceViewController;
-(void)constructPrivateViewController;
-(BOOL)shouldAnimatePresentationForPrivateViewController:(id)arg1 ;
-(void)presentInitialViewController:(id)arg1 ;
-(void)setPrivateViewController:(UIViewController *)arg1 ;
-(BOOL)_useBackdropViewForWindowBackground;
-(void)performSelectorOnHostController:(SEL)arg1 withObject:(id)arg2 ;
-(void)performSelectorOnHostController:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(BOOL)alwaysShowDoneButton;
-(void)_addDoneButtonToViewController:(id)arg1 ;
-(void)dashboardDidChangeToViewState:(long long)arg1 ;
-(UIViewController *)privateViewController;
-(void)resetPrivateViewController;
-(void)performSelectorOnHostController:(SEL)arg1 ;
-(double)_statusBarHeightForCurrentInterfaceOrientation;
-(void)setAlwaysShowDoneButton:(BOOL)arg1 ;
@end

