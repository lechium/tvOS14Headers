/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSJarvisTriggerModeMonitor : CSEventMonitor
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(long long)getTriggerMode;
-(void)setTriggerMode:(long long)arg1 ;
@end
