/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSEventMonitor.h>

@interface CSGestureMonitor : CSEventMonitor {

	unsigned long long _wakeGestureTimestamp;
	unsigned long long _dismissalTimestamp;

}

@property (assign,nonatomic) unsigned long long wakeGestureTimestamp;              //@synthesize wakeGestureTimestamp=_wakeGestureTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long dismissalTimestamp;                //@synthesize dismissalTimestamp=_dismissalTimestamp - In the implementation block
+(id)sharedInstance;
-(BOOL)isTriggerHandheld;
-(unsigned long long)wakeGestureTimestamp;
-(void)setWakeGestureTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)dismissalTimestamp;
-(void)setDismissalTimestamp:(unsigned long long)arg1 ;
@end

