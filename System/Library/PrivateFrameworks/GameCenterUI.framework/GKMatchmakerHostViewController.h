/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GKExtensionRemoteViewController.h>
#import <libobjc.A.dylib/GKMatchmakerHostProtocol.h>
#import <libobjc.A.dylib/GKMatchmakerServiceProtocol.h>

@class GKMatchmakerViewController, GKGame, NSString;

@interface GKMatchmakerHostViewController : GKExtensionRemoteViewController <GKMatchmakerHostProtocol, GKMatchmakerServiceProtocol> {

	GKMatchmakerViewController* _delegate;

}

@property (assign,nonatomic,__weak) GKMatchmakerViewController * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GKGame * game; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)dismissAutomaticallyAfterExtensionCompletion;
+(id)matchmakerExtension;
-(GKMatchmakerViewController *)delegate;
-(void)setDelegate:(GKMatchmakerViewController *)arg1 ;
-(void)applicationWillEnterForeground;
-(void)setConnectingStateForPlayer:(id)arg1 ;
-(void)messageFromExtension:(id)arg1 ;
-(void)setMatchRequestInternal:(id)arg1 ;
-(id)extensionObjectProxy;
-(void)extensionIsCanceling;
-(void)setNearbyPlayer:(id)arg1 reachable:(BOOL)arg2 ;
-(void)shareMatchWithRequest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setHosted:(BOOL)arg1 ;
-(void)setMatchmakingMode:(long long)arg1 ;
-(void)setAcceptedInviteInternal:(id)arg1 ;
-(void)setExistingPlayers:(id)arg1 ;
-(void)setDefaultInvitationMessage:(id)arg1 ;
-(void)setAutomatchPlayerCount:(long long)arg1 ;
-(void)setPlayer:(id)arg1 responded:(long long)arg2 ;
-(void)setPlayer:(id)arg1 connected:(BOOL)arg2 ;
-(void)setPlayer:(id)arg1 sentData:(id)arg2 ;
-(void)setInvitesFailedWithError:(id)arg1 ;
-(void)setAutomatchFailedWithError:(id)arg1 ;
-(void)inviterCancelled;
-(void)setFailedWithError:(id)arg1 ;
@end

