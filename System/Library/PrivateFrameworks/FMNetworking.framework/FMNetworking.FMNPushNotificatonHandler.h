/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/FMNetworking.framework/FMNetworking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@interface FMNetworking.FMNPushNotificatonHandler : NSObject <APSConnectionDelegate> {

	 topic;
	 apsQueue;
	 pendingTopicTokenFutures;
	 topicAPSToken;
	 publicAPSToken;
	 _apsConnection;
	 $__lazy_storage_$_apsConnection;

}
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(id)init;
-(void)dealloc;
@end
