/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSThread, NSMutableArray, CPLTransaction, NSError, NSString, CPLEngineWriteTransactionBlocker;

@interface CPLEngineStoreTransaction : NSObject {

	NSThread* _currentThread;
	BOOL _forWrite;
	NSMutableArray* _cleanupBlocks;
	CPLTransaction* _dirty;
	NSError* _error;
	NSString* _name;
	CPLEngineWriteTransactionBlocker* _blocker;

}

@property (nonatomic,retain) CPLEngineWriteTransactionBlocker * blocker;              //@synthesize blocker=_blocker - In the implementation block
@property (nonatomic,copy) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(id)description;
-(void)dealloc;
-(id)redactedDescription;
-(void)setName:(NSString *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)canWrite;
-(BOOL)canRead;
-(void)_transactionDidFinish;
-(void)_transactionWillBeginOnThread:(id)arg1 ;
-(void)_releaseDirty;
-(BOOL)do:(/*^block*/id)arg1 ;
-(id)initForWrite:(BOOL)arg1 identifier:(id)arg2 description:(id)arg3 ;
-(BOOL)_forWrite;
-(void)addCleanupBlock:(/*^block*/id)arg1 ;
-(CPLEngineWriteTransactionBlocker *)blocker;
-(void)setBlocker:(CPLEngineWriteTransactionBlocker *)arg1 ;
@end
