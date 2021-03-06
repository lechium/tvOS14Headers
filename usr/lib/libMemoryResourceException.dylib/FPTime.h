/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libMemoryResourceException.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface FPTime : NSObject {

	unsigned long long _machAbsoluteTime;
	unsigned long long _machContinuousTime;
	double _wallTime;

}

@property (nonatomic,readonly) unsigned long long machAbsoluteTime;                    //@synthesize machAbsoluteTime=_machAbsoluteTime - In the implementation block
@property (nonatomic,readonly) unsigned long long machContinuousTime;                  //@synthesize machContinuousTime=_machContinuousTime - In the implementation block
@property (nonatomic,readonly) unsigned long long machAbsoluteTimeNsec; 
@property (nonatomic,readonly) unsigned long long machContinuousTimeNsec; 
@property (nonatomic,readonly) double wallTime;                                        //@synthesize wallTime=_wallTime - In the implementation block
@property (nonatomic,readonly) NSDate * date; 
+(id)now;
-(id)init;
-(NSDate *)date;
-(unsigned long long)machAbsoluteTime;
-(double)wallTime;
-(unsigned long long)machAbsoluteTimeNsec;
-(unsigned long long)machContinuousTimeNsec;
-(unsigned long long)machContinuousTime;
@end

