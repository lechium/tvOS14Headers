/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/_GCIPCRemoteIncomingConnection.h>

@interface _GCHapticClientConnection : _GCIPCRemoteIncomingConnection

@property (nonatomic,retain) id<CHHapticServerInterface> server; 
-(id<CHHapticServerInterface>)server;
-(void)setServer:(id<CHHapticServerInterface>)arg1 ;
-(id)initWithConnection:(id)arg1 fromProcess:(id)arg2 ;
@end
