/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:44 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <Vision/Vision-Structs.h>
@interface VNCanceller : NSObject {

	/*^block*/id _signallingBlock;
	os_unfair_lock_s _lock;
	BOOL _signalled;

}
-(id)init;
-(void)reset;
-(void)_releaseSignallingBlock;
-(BOOL)tryToPerformBlock:(/*^block*/id)arg1 usingSignallingBlock:(/*^block*/id)arg2 ;
-(void)signalCancellation;
-(BOOL)wasSignalled;
@end

