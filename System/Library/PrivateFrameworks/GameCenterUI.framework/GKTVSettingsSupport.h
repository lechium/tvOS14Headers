/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:20 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@interface GKTVSettingsSupport : NSObject

@property (readonly) BOOL shouldShowSandboxSeverSwitch; 
@property (readonly) BOOL isDevelopmentDevice; 
@property (assign,nonatomic) BOOL shouldUseSandboxServer; 
@property (assign,nonatomic) BOOL shouldAllowNearbyMultiplayer; 
@property (assign,getter=isLoggingEnabled,nonatomic) BOOL loggingEnabled; 
+(id)sharedSupport;
-(BOOL)isInternalBuild;
-(BOOL)isLoggingEnabled;
-(BOOL)shouldAllowNearbyMultiplayer;
-(void)setShouldAllowNearbyMultiplayer:(BOOL)arg1 ;
-(BOOL)isDevelopmentDevice;
-(void)setLoggingEnabled:(BOOL)arg1 ;
-(void)markLogsWithMessage:(id)arg1 ;
-(BOOL)isTestFlightInstalled;
-(BOOL)shouldShowSandboxSeverSwitch;
-(BOOL)shouldUseSandboxServer;
-(void)setShouldUseSandboxServer:(BOOL)arg1 ;
-(void)dumpLogs;
@end
