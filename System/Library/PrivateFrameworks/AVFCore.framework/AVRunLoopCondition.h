/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSCondition.h>

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {

	NSMutableArray* _runLoopStateList;

}
-(id)init;
-(void)dealloc;
-(void)signal;
-(void)wait;
-(BOOL)waitUntilDate:(id)arg1 ;
-(void)broadcast;
-(BOOL)waitUntilDate:(id)arg1 inMode:(id)arg2 ;
-(void)waitInMode:(id)arg1 ;
-(BOOL)_waitInMode:(id)arg1 untilDate:(id)arg2 ;
-(void)_signalRunLoopWithState:(id)arg1 ;
@end

