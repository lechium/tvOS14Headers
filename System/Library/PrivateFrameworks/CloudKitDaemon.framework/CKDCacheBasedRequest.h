/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKDOperation, CKDKeyValueDiskCache, CKDPublicIdentityLookupService;

@interface CKDCacheBasedRequest : NSObject {

	BOOL _isCancelled;
	CKDOperation* _operation;
	CKDKeyValueDiskCache* _cache;
	CKDPublicIdentityLookupService* _lookupService;
	unsigned long long _fetchBatchSize;

}

@property (assign,nonatomic) BOOL isCancelled;                                                   //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign,nonatomic,__weak) CKDOperation * operation;                                    //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic,__weak) CKDKeyValueDiskCache * cache;                                //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic,__weak) CKDPublicIdentityLookupService * lookupService;              //@synthesize lookupService=_lookupService - In the implementation block
@property (assign,nonatomic) unsigned long long fetchBatchSize;                                  //@synthesize fetchBatchSize=_fetchBatchSize - In the implementation block
-(void)cancel;
-(BOOL)isCancelled;
-(CKDOperation *)operation;
-(void)setOperation:(CKDOperation *)arg1 ;
-(CKDKeyValueDiskCache *)cache;
-(void)setFetchBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)fetchBatchSize;
-(void)finishWithError:(id)arg1 ;
-(id)initWithOperation:(id)arg1 ;
-(void)setCache:(CKDKeyValueDiskCache *)arg1 ;
-(void)setIsCancelled:(BOOL)arg1 ;
-(void)performRequest;
-(void)setLookupService:(CKDPublicIdentityLookupService *)arg1 ;
-(id)spawnURLRequests;
-(CKDPublicIdentityLookupService *)lookupService;
@end
