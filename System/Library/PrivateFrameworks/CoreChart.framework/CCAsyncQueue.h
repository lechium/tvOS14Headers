/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CCAsyncQueueDelegate;
@class CCVegaWorkerClient, NSMutableArray, NSObject;

@interface CCAsyncQueue : NSObject {

	CCVegaWorkerClient* _workerClient;
	unsigned long long _nextActionID;
	NSMutableArray* _queue;
	BOOL _isProcessing;
	NSObject*<CCAsyncQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<CCAsyncQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSObject*<CCAsyncQueueDelegate>)delegate;
-(void)setDelegate:(NSObject*<CCAsyncQueueDelegate>)arg1 ;
-(unsigned long long)enqueueOperation:(id)arg1 ;
-(void)startProcessOperations;
-(void)processOperations;
-(unsigned long long)enqueueOperationWithBlock:(/*^block*/id)arg1 ;
-(void)waitForPendingOperations;
-(id)initWithWorkerClient:(id)arg1 ;
-(void)waitForOperation:(unsigned long long)arg1 ;
-(void)keepAliveUntilCurrentOperationIsComplete;
@end

