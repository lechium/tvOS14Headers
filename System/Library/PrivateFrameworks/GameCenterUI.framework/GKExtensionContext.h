/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:20 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/GKExtensionProtocol.h>

@class GKGame, NSString;

@interface GKExtensionContext : NSExtensionContext <GKExtensionProtocol> {

	GKGame* _game;
	long long _sandboxToken;

}

@property (assign,nonatomic) long long sandboxToken;                //@synthesize sandboxToken=_sandboxToken - In the implementation block
@property (nonatomic,retain) GKGame * game;                         //@synthesize game=_game - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)sandboxToken;
-(void)setSandboxToken:(long long)arg1 ;
-(GKGame *)game;
-(void)setGame:(GKGame *)arg1 ;
-(void)setInitialState:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)tearDownExtensionWithReply:(/*^block*/id)arg1 ;
-(void)messageFromClient:(id)arg1 ;
-(void)hostApp:(id)arg1 grantingAccessExtensionSandbox:(id)arg2 replyWithEndpoint:(/*^block*/id)arg3 ;
@end

