/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:39 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NRFCompletionStatus;

@interface BWNRFProcessorCompletionStatus : NSObject {

	NRFCompletionStatus* _completionStatus;

}
-(id)description;
-(void)dealloc;
-(BOOL)waitForCompletion;
-(id)initWithCompletionStatus:(id)arg1 ;
-(BOOL)waitForCompletionWithDescriptionOut:(id*)arg1 ;
@end

