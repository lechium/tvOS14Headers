/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface AMSMediaTokenServiceThrottler : NSObject {

	double _baseSleepInterval;
	double _maxSleepInterval;
	unsigned long long _attemptNumber;
	NSDate* _throttleDate;

}

@property (assign,nonatomic) unsigned long long attemptNumber;              //@synthesize attemptNumber=_attemptNumber - In the implementation block
@property (nonatomic,retain) NSDate * throttleDate;                         //@synthesize throttleDate=_throttleDate - In the implementation block
@property (assign,nonatomic) double baseSleepInterval;                      //@synthesize baseSleepInterval=_baseSleepInterval - In the implementation block
@property (assign,nonatomic) double maxSleepInterval;                       //@synthesize maxSleepInterval=_maxSleepInterval - In the implementation block
-(void)reset;
-(void)throttle;
-(BOOL)shouldThrottle;
-(id)initWithBaseSleepInterval:(double)arg1 maxSleepInterval:(double)arg2 ;
-(void)setBaseSleepInterval:(double)arg1 ;
-(void)setMaxSleepInterval:(double)arg1 ;
-(void)setThrottleDate:(NSDate *)arg1 ;
-(void)setAttemptNumber:(unsigned long long)arg1 ;
-(NSDate *)throttleDate;
-(double)_calculateThrottleInterval;
-(unsigned long long)attemptNumber;
-(double)baseSleepInterval;
-(double)maxSleepInterval;
@end

