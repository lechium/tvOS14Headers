/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVBlockScheduler.h>

@class NSArray, NSString;

@interface AVSerializedMostlySynchronousReentrantBlockScheduler : NSObject <AVBlockScheduler> {

	OpaqueFigSimpleMutexRef _ivarAccessLock;
	NSArray* _blocks;
	OpaqueFigReentrantMutexRef _blockSerializationLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)scheduleBlock:(/*^block*/id)arg1 ;
@end
