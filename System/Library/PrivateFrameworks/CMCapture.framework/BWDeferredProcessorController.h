/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:42 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/BWStillImageProcessorController.h>

@class NSMutableArray, BWDeferredProcessorRequest, FigStateMachine;

@interface BWDeferredProcessorController : BWStillImageProcessorController {

	NSMutableArray* _processorRequests;
	BWDeferredProcessorRequest* _currentRequest;
	FigStateMachine* _stateMachine;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(unsigned long long)type;
-(void)_process;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 ;
-(void)cancelProcessing;
-(void)_updateStateIfNeeded;
-(void)_serviceNextRequest;
-(void)inputReadyForProcessing:(id)arg1 ;
@end

