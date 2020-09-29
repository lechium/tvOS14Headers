/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:43 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol OS_dispatch_source;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject, NSMutableArray;

@interface BWIOSurfacePoller : NSObject {

	NSObject*<OS_dispatch_source> _pollingTimer;
	os_unfair_lock_s _trackedSurfacesLock;
	NSMutableArray* _trackedSurfaces;

}
+(id)defaultPoller;
+(void)trackSurface:(IOSurfaceRef)arg1 useCountIsZeroHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)trackSurface:(IOSurfaceRef)arg1 useCountIsZeroHandler:(/*^block*/id)arg2 ;
-(void)_startPolling;
-(void)_pollingTimerFired;
-(void)_stopPolling;
@end

