/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEODaemon;

@interface GEOServer : NSObject {

	GEODaemon* _daemon;

}

@property (assign,nonatomic,__weak) GEODaemon * daemon;              //@synthesize daemon=_daemon - In the implementation block
+(id)identifier;
+(BOOL)shouldStartImmediately;
+(Class)peerClass;
-(id)description;
-(void)setDaemon:(GEODaemon *)arg1 ;
-(GEODaemon *)daemon;
-(void)peerDidConnect:(id)arg1 ;
-(BOOL)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3 ;
-(void)peerDidDisconnect:(id)arg1 ;
@end

