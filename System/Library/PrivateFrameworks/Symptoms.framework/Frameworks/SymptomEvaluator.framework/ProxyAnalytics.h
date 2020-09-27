/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ProxyAnalyticsDelegate;
@class NSXPCConnection;

@interface ProxyAnalytics : NSObject {

	id<ProxyAnalyticsDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) id<ProxyAnalyticsDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<ProxyAnalyticsDelegate>)delegate;
-(void)setDelegate:(id<ProxyAnalyticsDelegate>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)performAppPeriodicTasks;
-(void)trainModelAndScore:(BOOL)arg1 lastScoreDate:(id)arg2 ;
-(void)performAppExperiencePeriodicTasks;
-(void)performPersistentStoreHealthCheck;
@end
