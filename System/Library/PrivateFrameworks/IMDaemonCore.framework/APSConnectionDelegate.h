/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol APSConnectionDelegate <NSObject>
@optional
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
-(void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2;
-(void)connectionDidReconnect:(id)arg1;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
-(void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
-(void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;

@required
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2;

@end
