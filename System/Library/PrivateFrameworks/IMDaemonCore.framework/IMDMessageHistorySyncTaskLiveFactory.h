/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDMessageHistorySyncTaskFactory.h>

@class IMDCKSyncController, IMDAccountController, IMDReplayController, NSString;

@interface IMDMessageHistorySyncTaskLiveFactory : NSObject <IMDMessageHistorySyncTaskFactory> {

	IMDCKSyncController* _ckSyncController;
	IMDAccountController* _accountController;
	IMDReplayController* _replayController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)_initWithCKSyncController:(id)arg1 accountController:(id)arg2 replayController:(id)arg3 ;
-(id)_newFirstUnlockReplaySyncTask;
-(id)_newIDSTransactionLogSyncTask;
-(id)_newKChatSyncTask;
-(id)newSyncTaskForType:(unsigned long long)arg1 ;
@end

