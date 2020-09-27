/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, TIAnalyticsServiceProvider;
@class NSObject, NSMutableDictionary;

@interface TIAnalyticsService : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _eventSpecs;
	id<TIAnalyticsServiceProvider> _provider;

}

@property (nonatomic,readonly) NSMutableDictionary * eventSpecs;                     //@synthesize eventSpecs=_eventSpecs - In the implementation block
@property (nonatomic,readonly) id<TIAnalyticsServiceProvider> provider;              //@synthesize provider=_provider - In the implementation block
+(id)sharedInstance;
+(void)setMockInstance:(id)arg1 ;
-(id)init;
-(id<TIAnalyticsServiceProvider>)provider;
-(id)initWithProvider:(id)arg1 ;
-(void)registerEventSpec:(id)arg1 ;
-(void)registerEventSpec:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)registerEventSpec:(id)arg1 error:(id*)arg2 ;
-(void)_registerEventSpec:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)dispatchEventWithName:(id)arg1 ;
-(void)dispatchEventWithName:(id)arg1 inputMode:(id)arg2 ;
-(void)dispatchEventWithName:(id)arg1 values:(id)arg2 ;
-(void)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 ;
-(void)dispatchEventWithName:(id)arg1 payload:(id)arg2 testingParameters:(id)arg3 allowSparsePayload:(BOOL)arg4 ;
-(void)dispatchEventWithName:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)dispatchEventWithName:(id)arg1 inputMode:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)dispatchEventWithName:(id)arg1 values:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)dispatchEventWithName:(id)arg1 payload:(id)arg2 testingParameters:(id)arg3 allowSparsePayload:(BOOL)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(BOOL)dispatchEventWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)dispatchEventWithName:(id)arg1 inputMode:(id)arg2 error:(id*)arg3 ;
-(BOOL)dispatchEventWithName:(id)arg1 values:(id)arg2 error:(id*)arg3 ;
-(BOOL)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 error:(id*)arg4 ;
-(BOOL)dispatchEventWithName:(id)arg1 payload:(id)arg2 testingParameters:(id)arg3 allowSparsePayload:(BOOL)arg4 error:(id*)arg5 ;
-(void)_dispatchEventWithName:(id)arg1 payload:(id)arg2 values:(id)arg3 inputMode:(id)arg4 testingParameters:(id)arg5 allowSparsePayload:(BOOL)arg6 withCompletionHandler:(/*^block*/id)arg7 ;
-(void)addSettings:(id)arg1 toPayload:(id)arg2 errors:(id)arg3 ;
-(id)settingsFromInputMode:(id)arg1 eventSpec:(id)arg2 errors:(id)arg3 ;
-(id)settingsFromPayload:(id)arg1 andValues:(id)arg2 eventSpec:(id)arg3 allowSparsePayload:(BOOL)arg4 errors:(id)arg5 ;
-(void)appendToErrors:(id)arg1 code:(long long)arg2 message:(id)arg3 ;
-(void)sendCoreAnalyticsEventWithName:(id)arg1 payload:(id)arg2 ;
-(void)queueCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)eventSpecs;
@end
