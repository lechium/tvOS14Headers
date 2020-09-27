/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNSessionUpdateManager.h>

@class NSTimer;

@interface MNTracePlayerETAUpdater : MNSessionUpdateManager {

	NSTimer* _delayTimer;

}
-(void)dealloc;
-(void)_handleDelayTimerWithUpdateRow:(id)arg1 ;
-(void)playETAUpdate:(id)arg1 ;
-(void)startUpdateRequestsForRoutes:(id)arg1 andNavigationType:(int)arg2 ;
-(void)resumeUpdateRequests;
@end
