/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBKSyncResponseData, SBKSyncTransaction, NSEnumerator;

@interface SBKSyncResponseDataKeyEnumerator : NSObject {

	BOOL _resolvedConflictsNeedSyncToServer;
	SBKSyncResponseData* _responseData;
	SBKSyncTransaction* _transaction;
	/*^block*/id _completionBlock;
	NSEnumerator* _updatedKeysEnumerator;
	NSEnumerator* _conflictedKeysEnumerator;
	NSEnumerator* _deletedKeysEnumerator;

}

@property (retain) SBKSyncResponseData * responseData;                   //@synthesize responseData=_responseData - In the implementation block
@property (retain) SBKSyncTransaction * transaction;                     //@synthesize transaction=_transaction - In the implementation block
@property (copy) id completionBlock;                                     //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign) BOOL resolvedConflictsNeedSyncToServer;               //@synthesize resolvedConflictsNeedSyncToServer=_resolvedConflictsNeedSyncToServer - In the implementation block
@property (retain) NSEnumerator * updatedKeysEnumerator;                 //@synthesize updatedKeysEnumerator=_updatedKeysEnumerator - In the implementation block
@property (retain) NSEnumerator * conflictedKeysEnumerator;              //@synthesize conflictedKeysEnumerator=_conflictedKeysEnumerator - In the implementation block
@property (retain) NSEnumerator * deletedKeysEnumerator;                 //@synthesize deletedKeysEnumerator=_deletedKeysEnumerator - In the implementation block
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(SBKSyncTransaction *)transaction;
-(SBKSyncResponseData *)responseData;
-(void)setTransaction:(SBKSyncTransaction *)arg1 ;
-(void)setResponseData:(SBKSyncResponseData *)arg1 ;
-(id)initWithResponseData:(id)arg1 ;
-(void)enumerateKeysInResponseForTransaction:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_processNextKey;
-(void)_processUpdatedKey:(id)arg1 isConflict:(BOOL)arg2 isDirty:(BOOL*)arg3 ;
-(void)_processDeletedKey:(id)arg1 isDirty:(BOOL*)arg2 ;
-(BOOL)resolvedConflictsNeedSyncToServer;
-(void)setResolvedConflictsNeedSyncToServer:(BOOL)arg1 ;
-(NSEnumerator *)updatedKeysEnumerator;
-(void)setUpdatedKeysEnumerator:(NSEnumerator *)arg1 ;
-(NSEnumerator *)conflictedKeysEnumerator;
-(void)setConflictedKeysEnumerator:(NSEnumerator *)arg1 ;
-(NSEnumerator *)deletedKeysEnumerator;
-(void)setDeletedKeysEnumerator:(NSEnumerator *)arg1 ;
@end
