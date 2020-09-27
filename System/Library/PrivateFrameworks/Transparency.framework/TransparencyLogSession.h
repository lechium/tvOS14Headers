/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_workloop;
@class TransparencyLogSessionDelegate, NSURLSession, NSObject;

@interface TransparencyLogSession : NSObject {

	unsigned long long _fetchCount;
	TransparencyLogSessionDelegate* _delegate;
	NSURLSession* _backgroundSession;
	NSURLSession* _foregroundSession;
	NSObject*<OS_dispatch_workloop> _callbackWorkloop;
	NSObject*<OS_dispatch_workloop> _networkingWorkloop;

}

@property (retain) NSURLSession * backgroundSession;                                //@synthesize backgroundSession=_backgroundSession - In the implementation block
@property (retain) NSURLSession * foregroundSession;                                //@synthesize foregroundSession=_foregroundSession - In the implementation block
@property (retain) NSObject*<OS_dispatch_workloop> callbackWorkloop;                //@synthesize callbackWorkloop=_callbackWorkloop - In the implementation block
@property (retain) NSObject*<OS_dispatch_workloop> networkingWorkloop;              //@synthesize networkingWorkloop=_networkingWorkloop - In the implementation block
@property (retain) TransparencyLogSessionDelegate * delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long fetchCount;                                   //@synthesize fetchCount=_fetchCount - In the implementation block
+(id)createErrorFromURLResonse:(id)arg1 data:(id)arg2 allowEmptyData:(BOOL)arg3 error:(id)arg4 ;
+(void)dispatchToQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(TransparencyLogSessionDelegate *)delegate;
-(void)setDelegate:(TransparencyLogSessionDelegate *)arg1 ;
-(void)setBackgroundSession:(NSURLSession *)arg1 ;
-(NSObject*<OS_dispatch_workloop>)callbackWorkloop;
-(void)setCallbackWorkloop:(NSObject*<OS_dispatch_workloop>)arg1 ;
-(NSURLSession *)backgroundSession;
-(NSURLSession *)foregroundSession;
-(void)setForegroundSession:(NSURLSession *)arg1 ;
-(void)setFetchCount:(unsigned long long)arg1 ;
-(unsigned long long)fetchCount;
-(BOOL)fetch:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)download:(id)arg1 retry:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelDownloadId:(id)arg1 ;
-(void)setNetworkingWorkloop:(NSObject*<OS_dispatch_workloop>)arg1 ;
-(NSObject*<OS_dispatch_workloop>)networkingWorkloop;
-(id)createAuthenticatedBackgroundSession:(id)arg1 delegateQueue:(id)arg2 ;
-(id)createAuthenticatedForegroundSession;
-(id)initWithWorkloop:(id)arg1 sessionDelegate:(id)arg2 ;
@end
