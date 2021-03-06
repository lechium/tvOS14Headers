/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKFetchRecordChangesOperationCallbacks <CKOperationCallbacks>
@required
-(void)handleChangeForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3;
-(void)handleOperationDidCompleteWithServerChangeToken:(id)arg1 clientChangeTokenData:(id)arg2 recordChangesStatus:(long long)arg3 metrics:(id)arg4 error:(id)arg5;
-(void)handleDeleteForRecordID:(id)arg1;
-(void)handleChangeSetCompletionWithServerChangeToken:(id)arg1 clientChangeTokenData:(id)arg2 recordChangesStatus:(long long)arg3 reply:(/*^block*/id)arg4;

@end

