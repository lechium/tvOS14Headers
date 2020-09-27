/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSScreenLockMonitor : CSEventMonitor {

	BOOL _isScreenLocked;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_stopMonitoring;
-(BOOL)isScreenLocked;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(BOOL)_queryIsScreenLocked;
-(void)_notifyObserver:(id)arg1 isScreenLocked:(BOOL)arg2 ;
-(void)screenLockStateChanged;
@end
