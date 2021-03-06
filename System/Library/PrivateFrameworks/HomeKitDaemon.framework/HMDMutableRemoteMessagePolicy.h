/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDRemoteMessagePolicy.h>

@interface HMDMutableRemoteMessagePolicy : HMDRemoteMessagePolicy

@property (assign) BOOL requiresSecureMessage; 
@property (assign) BOOL allowsAnonymousMessage; 
@property (assign) BOOL requiresAccountMessage; 
@property (assign) unsigned long long transportRestriction; 
@property (assign) unsigned long long roles; 
+(id)remoteMessagePolicyWithRequiresSecureMessage:(BOOL)arg1 allowsAnonymousMessage:(BOOL)arg2 requiresAccountMessage:(BOOL)arg3 transportRestriction:(unsigned long long)arg4 roles:(unsigned long long)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRoles:(unsigned long long)arg1 ;
-(void)setRequiresSecureMessage:(BOOL)arg1 ;
-(void)setRequiresAccountMessage:(BOOL)arg1 ;
-(void)setTransportRestriction:(unsigned long long)arg1 ;
-(void)setAllowsAnonymousMessage:(BOOL)arg1 ;
@end

