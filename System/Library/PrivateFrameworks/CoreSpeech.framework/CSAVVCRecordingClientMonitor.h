/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSAVVCRecordingClientMonitor : CSEventMonitor {

	unsigned long long _numOfAVVCRecordingClients;

}

@property (nonatomic,readonly) unsigned long long numOfAVVCRecordingClients;              //@synthesize numOfAVVCRecordingClients=_numOfAVVCRecordingClients - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(unsigned long long)numOfAVVCRecordingClients;
@end

