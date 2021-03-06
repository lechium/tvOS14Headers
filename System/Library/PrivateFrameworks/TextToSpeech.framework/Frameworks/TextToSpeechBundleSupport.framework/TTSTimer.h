/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:45 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/Frameworks/TextToSpeechBundleSupport.framework/TextToSpeechBundleSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSMutableArray, NSObject, NSLock;

@interface TTSTimer : NSObject {

	NSMutableArray* _queue;
	NSObject*<OS_dispatch_source> _timer;
	NSLock* _timerLock;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _paused;

}
-(void)dealloc;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)_startTimer:(id)arg1 ;
-(void)pauseQueue;
-(void)_handleTimerFired;
-(void)_createTimer;
-(void)enqueueBlock:(/*^block*/id)arg1 withDelay:(double)arg2 withId:(long long)arg3 ;
-(void)continueQueue;
-(void)clearQueue;
@end

