/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <BaseBoard/BaseBoard-Structs.h>
@class BSZeroingWeakReference, NSObject, NSHashTable;

@interface BSPowerMonitor : NSObject {

	IONotificationPortRef _notificationPort;
	unsigned _notifier;
	BSZeroingWeakReference* _weakSelfWrapper;
	NSObject*<OS_dispatch_queue> _queue;
	os_unfair_lock_s _observersLock;
	NSHashTable* _lock_observers;
	unsigned _rootDomainConnect;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end

