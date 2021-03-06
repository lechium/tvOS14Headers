/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUConversationManagerDelegate <NSObject>
@optional
-(void)conversationsChangedForConversationManager:(id)arg1;
-(void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;
-(void)conversationManager:(id)arg1 localVideoToggledForConversation:(id)arg2;
-(void)conversationManager:(id)arg1 remoteMembersChangedForConversation:(id)arg2;
-(void)conversationManager:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2;
-(void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;
-(void)conversationManager:(id)arg1 addedActiveConversation:(id)arg2;
-(void)serverDisconnectedForConversationManager:(id)arg1;

@end

