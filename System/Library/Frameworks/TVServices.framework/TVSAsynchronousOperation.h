/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface TVSAsynchronousOperation : NSOperation {

	int _state;

}
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(void)_finishExecutionIfPossible;
-(void)_executionDidBegin;
@end
